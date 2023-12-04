cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 11)

project(test)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(test test.cpp CLA_16.cpp binary.cpp)



