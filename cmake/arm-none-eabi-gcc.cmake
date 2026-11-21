set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

# Compiler checks run in a separate try_compile project that does NOT receive
# -D variables, so the toolchain path must be written here.
# Change this line if the toolchain is installed somewhere else.
set(ARM_TOOLCHAIN_ROOT "C:/Program Files/Arm/GNU Toolchain mingw-w64-x86_64-arm-none-eabi")
set(ARM_BIN "${ARM_TOOLCHAIN_ROOT}/bin")

if(NOT EXISTS "${ARM_BIN}/arm-none-eabi-gcc.exe")
    message(FATAL_ERROR "arm-none-eabi-gcc.exe not found in: ${ARM_BIN}")
endif()

set(CMAKE_C_COMPILER   "${ARM_BIN}/arm-none-eabi-gcc.exe")
set(CMAKE_CXX_COMPILER "${ARM_BIN}/arm-none-eabi-g++.exe")
set(CMAKE_ASM_COMPILER "${ARM_BIN}/arm-none-eabi-gcc.exe")
set(CMAKE_OBJCOPY "${ARM_BIN}/arm-none-eabi-objcopy.exe" CACHE FILEPATH "objcopy" FORCE)
set(CMAKE_SIZE    "${ARM_BIN}/arm-none-eabi-size.exe"    CACHE FILEPATH "size"    FORCE)

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
