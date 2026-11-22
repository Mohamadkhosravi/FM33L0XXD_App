cmake_minimum_required(VERSION 3.22)

# Toolchain comes from CMakePresets.json (cmake/arm-none-eabi-gcc.cmake).
project(FM33L0XXD_App LANGUAGES C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

set(CMAKE_C_FLAGS_DEBUG "-O0 -g3 -ggdb")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3 -ggdb")
set(CMAKE_ASM_FLAGS_DEBUG "-g3 -ggdb")
set(CMAKE_C_FLAGS_RELEASE "-Os")
set(CMAKE_CXX_FLAGS_RELEASE "-Os")
set(CMAKE_ASM_FLAGS_RELEASE "")

set(CPU_FLAGS -mcpu=cortex-m0plus -mthumb -mfloat-abi=soft)
set(FM33_CHIP_MACRO FM33L0XXD)

# ==================================================================
# Paths (same layout as the working project: full SDK)
# ==================================================================
set(DRV_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/Drivers")
set(FL_DIR "${DRV_ROOT}/FM33L0xxD_FL_Driver")
set(DEV_ROOT "${DRV_ROOT}/CMSIS/Include/Device/FM/FM33xx")
set(DEV_INC "${DEV_ROOT}/Include")
set(GCC_TPL "${DEV_ROOT}/Source/Templates/GCC")

set(LINKER_SCRIPT "${GCC_TPL}/linker/fm33l04xd_flash.ld")
set(STARTUP_FILE "${GCC_TPL}/startup_fm33l0xxd.s")

foreach(_p IN ITEMS "${LINKER_SCRIPT}" "${STARTUP_FILE}" "${FL_DIR}/Inc" "${FL_DIR}/Src" "${DEV_INC}")
    if(NOT EXISTS "${_p}")
        message(FATAL_ERROR "Required file/folder not found: ${_p}")
    endif()
endforeach()

# ==================================================================
# SDK system file (contains the real SystemInit)
# ==================================================================
file(GLOB_RECURSE SYSTEM_SRC CONFIGURE_DEPENDS "${DEV_ROOT}/*system_fm33l0xxd.c")

if(NOT SYSTEM_SRC)
    message(FATAL_ERROR "system_fm33l0xxd.c not found under ${DEV_ROOT}")
endif()

list(GET SYSTEM_SRC 0 _system_first)
get_filename_component(SYSTEM_DIR "${_system_first}" DIRECTORY)

# ==================================================================
# CMSIS core headers
# ==================================================================
file(GLOB_RECURSE _core_hdr CONFIGURE_DEPENDS "${DRV_ROOT}/*core_cm0plus.h")

if(NOT _core_hdr)
    message(FATAL_ERROR "core_cm0plus.h not found under ${DRV_ROOT}")
endif()

list(GET _core_hdr 0 _core_first)
get_filename_component(CORE_HDR_DIR "${_core_first}" DIRECTORY)

file(GLOB_RECURSE _cgcc_hdr CONFIGURE_DEPENDS "${DRV_ROOT}/*cmsis_gcc.h")

if(NOT _cgcc_hdr)
    message(FATAL_ERROR "cmsis_gcc.h not found under ${DRV_ROOT}")
endif()

list(GET _cgcc_hdr 0 _cgcc_first)
get_filename_component(CMSIS_GCC_DIR "${_cgcc_first}" DIRECTORY)

# ==================================================================
# Startup (GNU assembler syntax)
# ==================================================================
set_source_files_properties(${STARTUP_FILE} PROPERTIES
    LANGUAGE ASM
    COMPILE_FLAGS "-x assembler-with-cpp"
)

# ==================================================================
# CAN protocol auto-detect (only if ProjectConfig.hpp exists)
# ==================================================================
set(CAN_EXCLUDE_DIR "__NO_CAN_EXCLUDE__")
set(CONFIG_FILE "${CMAKE_CURRENT_SOURCE_DIR}/App/User/Inc/ProjectConfig.hpp")

if(EXISTS "${CONFIG_FILE}")
    file(READ "${CONFIG_FILE}" CONFIG_CONTENT)

    if(CONFIG_CONTENT MATCHES "#define[ \t]+CAN_PROTOCOL_VERSION[ \t]+CAN_HIGH_SPEED")
        message(STATUS "Auto-Detected Configuration: CAN HIGH SPEED")
        set(CAN_EXCLUDE_DIR "App/CANDatabase/CANMessages_LOW_SPEED")
    else()
        message(STATUS "Auto-Detected Configuration: CAN LOW SPEED")
        set(CAN_EXCLUDE_DIR "App/CANDatabase/CANMessages_HIGH_SPEED")
    endif()
endif()

# ==================================================================
# Sources
# ==================================================================
file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.c
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.cpp
)
list(FILTER APP_SOURCES EXCLUDE REGEX "${CAN_EXCLUDE_DIR}")

if(NOT APP_SOURCES)
    message(FATAL_ERROR "No application sources found under App/.")
endif()

file(GLOB_RECURSE FL_SOURCES CONFIGURE_DEPENDS "${FL_DIR}/Src/*.c")

set(ALL_SOURCES
    ${APP_SOURCES}
    ${FL_SOURCES}
    ${SYSTEM_SRC}
    ${STARTUP_FILE}
)
list(REMOVE_DUPLICATES ALL_SOURCES)

# ==================================================================
# Include directories
# ==================================================================
file(GLOB_RECURSE APP_HEADERS CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.hpp
)
list(FILTER APP_HEADERS EXCLUDE REGEX "${CAN_EXCLUDE_DIR}")

set(INCLUDE_DIRS "")

foreach(_h ${APP_HEADERS})
    get_filename_component(_d "${_h}" DIRECTORY)
    list(APPEND INCLUDE_DIRS "${_d}")
endforeach()

list(APPEND INCLUDE_DIRS
    "${CMAKE_CURRENT_SOURCE_DIR}/App/User/Inc"
    "${FL_DIR}/Inc"
    "${DEV_INC}"
    "${SYSTEM_DIR}"
    "${CORE_HDR_DIR}"
    "${CMSIS_GCC_DIR}"
)
list(REMOVE_DUPLICATES INCLUDE_DIRS)

# ==================================================================
# Target (name matches tasks.json and launch.json)
# ==================================================================
set(TARGET_NAME ${PROJECT_NAME})

add_executable(${TARGET_NAME} ${ALL_SOURCES})
set_target_properties(${TARGET_NAME} PROPERTIES SUFFIX ".elf")

target_include_directories(${TARGET_NAME} PRIVATE ${INCLUDE_DIRS})

target_compile_definitions(${TARGET_NAME} PRIVATE
    ${FM33_CHIP_MACRO}
    $<$<CONFIG:Debug>:DEBUG>
)

target_compile_options(${TARGET_NAME} PRIVATE
    ${CPU_FLAGS}
    -ffunction-sections -fdata-sections -fno-common
    -Wall -Wextra -Wshadow -Wdouble-promotion
    $<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-threadsafe-statics>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-use-cxa-atexit>
)

target_link_options(${TARGET_NAME} PRIVATE
    ${CPU_FLAGS}
    -T${LINKER_SCRIPT}
    --specs=nano.specs
    --specs=nosys.specs
    -Wl,--gc-sections
    -Wl,--print-memory-usage
    -Wl,-Map=$<TARGET_FILE_DIR:${TARGET_NAME}>/${TARGET_NAME}.map
    -static
)

set_target_properties(${TARGET_NAME} PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})

add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${TARGET_NAME}>
    $<TARGET_FILE_DIR:${TARGET_NAME}>/${TARGET_NAME}.hex
    COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${TARGET_NAME}>
    $<TARGET_FILE_DIR:${TARGET_NAME}>/${TARGET_NAME}.bin
    COMMAND ${CMAKE_SIZE} --format=berkeley $<TARGET_FILE:${TARGET_NAME}>
    COMMENT "Generating .hex / .bin and reporting size"
    VERBATIM
)

message(STATUS "System source : ${SYSTEM_SRC}")
message(STATUS "Linker        : ${LINKER_SCRIPT}")