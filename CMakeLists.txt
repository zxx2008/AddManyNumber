cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 11)

project(test3)

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/test
    )

add_executable(test3 test/test3.cpp binaryNumber.cpp binary.cpp manyNumber.cpp)



