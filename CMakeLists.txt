cmake_minimum_required(VERSION 3.13)
project(ANDREEV_DZ_VAR2)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(ANDREEV_DZ_VAR2 main.cpp sources.cpp encryption.cpp decryption.cpp header.h)