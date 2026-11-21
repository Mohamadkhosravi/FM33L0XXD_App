cmake_minimum_required(VERSION 3.22)

# ------------------------------------------------------------------
# Toolchain comes from CMakePresets.json (cmake/arm-none-eabi-gcc.cmake).
# Never set CMAKE_C_COMPILER here: it is locked after project().
# ------------------------------------------------------------------
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
set(CMAKE_C_FLAGS_RELEASE "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O0 -g")
set(CMAKE_ASM_FLAGS_RELEASE "")

# ==================================================================
# گزینه‌ها و مسیرهای قابل تنظیم
# ==================================================================
# درایور FL و system_*.c را فقط وقتی مال FM33L0XXD مطمئن شدید روشن کنید:
# cmake --preset fm33l0xxd-debug-local -DFM33_USE_FL=ON
option(FM33_USE_FL "Compile the FL driver from FL_DIR" OFF)
option(FM33_USE_DEVICE_SYSTEM "Compile system_*.c from the device package" OFF)

set(FM33_CHIP_MACRO "FM33L0XXD" CACHE STRING "Device macro used by the FM33 headers")
set(FL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Drivers/FM33L0XXD_FL_Driver" CACHE PATH "FL driver root for FM33L0XXD")

set(LINKER_SCRIPT "${CMAKE_CURRENT_SOURCE_DIR}/linker/FM33L04XD_flash.ld"
    CACHE FILEPATH "Linker script")
set(STARTUP_FILE "${CMAKE_CURRENT_SOURCE_DIR}/Startup/startup_fm33l0xxd.c"
    CACHE FILEPATH "Startup file (.c or .s)")

set(DRV_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/Drivers")
set(CMSIS_CORE_INC "${DRV_ROOT}/CMSIS/Include")
set(DEV_INC "${DRV_ROOT}/CMSIS/Device/FM/FM33xx/Include")
set(DEV_SRC "${DRV_ROOT}/CMSIS/Device/FM/FM33xx/Source")

set(CPU_FLAGS -mcpu=cortex-m0plus -mthumb -mfloat-abi=soft)

# ==================================================================
# بررسی هدرهای CMSIS
# ==================================================================
if(EXISTS "${DEV_INC}/core_cm0plus.h")
    set(CORE_HDR_DIR "${DEV_INC}")
elseif(EXISTS "${CMSIS_CORE_INC}/core_cm0plus.h")
    set(CORE_HDR_DIR "${CMSIS_CORE_INC}")
else()
    message(FATAL_ERROR "core_cm0plus.h not found in ${DEV_INC} or ${CMSIS_CORE_INC}")
endif()

file(GLOB_RECURSE CMSIS_GCC_H CONFIGURE_DEPENDS "${DRV_ROOT}/*cmsis_gcc.h")

if(NOT CMSIS_GCC_H)
    message(FATAL_ERROR "cmsis_gcc.h not found under ${DRV_ROOT}. It is required by core_cm0plus.h")
endif()

list(GET CMSIS_GCC_H 0 _cmsis_gcc_first)
get_filename_component(CMSIS_GCC_DIR "${_cmsis_gcc_first}" DIRECTORY)

# ==================================================================
# Linker script / startup
# ==================================================================
foreach(_f "${LINKER_SCRIPT}" "${STARTUP_FILE}")
    if(NOT EXISTS "${_f}")
        message(FATAL_ERROR "Required file not found: ${_f}")
    endif()
endforeach()

if(STARTUP_FILE MATCHES "\\.[sS]$")
    set_source_files_properties(${STARTUP_FILE} PROPERTIES
        LANGUAGE ASM
        COMPILE_FLAGS "-x assembler-with-cpp"
    )
endif()

# ==================================================================
# تشخیص خودکار نسخه CAN از ProjectConfig.hpp
# ==================================================================
# مقدار پیش‌فرض باید الگوی غیرممکن باشد، چون REGEX خالی همه‌ی فایل‌ها را حذف می‌کند.
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
else()
    message(WARNING "ProjectConfig.hpp not found. No CAN files will be excluded.")
endif()

# ==================================================================
# سورس‌ها
# ==================================================================
file(GLOB_RECURSE APP_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.c
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.cpp
)
list(FILTER APP_SOURCES EXCLUDE REGEX "${CAN_EXCLUDE_DIR}")

if(NOT APP_SOURCES)
    message(FATAL_ERROR "No application sources found under App/.")
endif()

# main.c یا main.cpp هر کدام باشد قبول است
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/App/User/Src/main.c" AND
    NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/App/User/Src/main.cpp")
    message(FATAL_ERROR "App/User/Src/main.c (or main.cpp) is missing.")
endif()

set(FL_SOURCES "")
set(FL_HEADERS "")

if(FM33_USE_FL)
    if(NOT EXISTS "${FL_DIR}/Src" OR NOT EXISTS "${FL_DIR}/Inc")
        message(FATAL_ERROR "FM33_USE_FL is ON but ${FL_DIR} has no Src/Inc folders")
    endif()

    file(GLOB_RECURSE FL_SOURCES CONFIGURE_DEPENDS "${FL_DIR}/Src/*.c")
    file(GLOB_RECURSE FL_HEADERS CONFIGURE_DEPENDS "${FL_DIR}/Inc/*.h")
endif()

set(SYS_SOURCES "")

if(FM33_USE_DEVICE_SYSTEM)
    file(GLOB SYS_SOURCES CONFIGURE_DEPENDS "${DEV_SRC}/*.c")

    if(NOT SYS_SOURCES)
        message(FATAL_ERROR "FM33_USE_DEVICE_SYSTEM is ON but no system_*.c in ${DEV_SRC}")
    endif()
else()
    # وقتی SystemInit رسمی را نداریم، نسخه‌ی خالی را استفاده می‌کنیم
    set(SYS_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Startup/system_stub.c")
endif()

set(ALL_SOURCES ${APP_SOURCES} ${FL_SOURCES} ${SYS_SOURCES} ${STARTUP_FILE})
list(REMOVE_DUPLICATES ALL_SOURCES)

# ==================================================================
# مسیرهای include: از محل واقعی هدرها ساخته می‌شوند
# ==================================================================
file(GLOB_RECURSE ALL_HEADERS CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/App/*.hpp
    ${DRV_ROOT}/CMSIS/Device/FM/FM33xx/Include/*.h
    ${DRV_ROOT}/CMSIS/Include/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Drivers/FM33L0xxD_FL_Driver/Inc/*.h
    ${FL_HEADERS}
)
list(FILTER ALL_HEADERS EXCLUDE REGEX "${CAN_EXCLUDE_DIR}")

set(INCLUDE_DIRS "")

foreach(_hdr ${ALL_HEADERS})
    get_filename_component(_dir "${_hdr}" DIRECTORY)
    list(APPEND INCLUDE_DIRS "${_dir}")
endforeach()

list(APPEND INCLUDE_DIRS
    "${CMAKE_CURRENT_SOURCE_DIR}/App/User/Inc"
    "${CORE_HDR_DIR}"
    "${CMSIS_GCC_DIR}"
)
list(REMOVE_DUPLICATES INCLUDE_DIRS)

# ==================================================================
# Target
# ==================================================================
# نام target با نام پروژه یکی است تا tasks.json و launch.json کار کنند
set(TARGET_STANDALONE ${PROJECT_NAME})

add_executable(${TARGET_STANDALONE} ${ALL_SOURCES})
set_target_properties(${TARGET_STANDALONE} PROPERTIES SUFFIX ".elf")

target_include_directories(${TARGET_STANDALONE} PRIVATE ${INCLUDE_DIRS})

target_compile_definitions(${TARGET_STANDALONE} PRIVATE
    ${FM33_CHIP_MACRO}
    $<$<CONFIG:Debug>:DEBUG>
)

target_compile_options(${TARGET_STANDALONE} PRIVATE
    ${CPU_FLAGS}
    -ffunction-sections -fdata-sections -fno-common
    -Wall -Wextra -Wshadow -Wdouble-promotion
    $<$<COMPILE_LANGUAGE:CXX>:-fno-exceptions>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-rtti>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-threadsafe-statics>
    $<$<COMPILE_LANGUAGE:CXX>:-fno-use-cxa-atexit>
)

target_link_options(${TARGET_STANDALONE} PRIVATE
    ${CPU_FLAGS}
    -T${LINKER_SCRIPT}
    --specs=nano.specs
    --specs=nosys.specs
    -Wl,--gc-sections
    -Wl,--print-memory-usage
    -Wl,-Map=$<TARGET_FILE_DIR:${TARGET_STANDALONE}>/${TARGET_STANDALONE}.map
    -static
)

set_target_properties(${TARGET_STANDALONE} PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})

# ==================================================================
# Post-build: hex / bin / size
# ==================================================================
add_custom_command(TARGET ${TARGET_STANDALONE} POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${TARGET_STANDALONE}>
    $<TARGET_FILE_DIR:${TARGET_STANDALONE}>/${TARGET_STANDALONE}.hex
    COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${TARGET_STANDALONE}>
    $<TARGET_FILE_DIR:${TARGET_STANDALONE}>/${TARGET_STANDALONE}.bin
    COMMAND ${CMAKE_SIZE} --format=berkeley $<TARGET_FILE:${TARGET_STANDALONE}>
    COMMENT "Generating .hex / .bin and reporting size"
    VERBATIM
)

message(STATUS "App sources    : ${APP_SOURCES}")
message(STATUS "Include dirs   : ${INCLUDE_DIRS}")