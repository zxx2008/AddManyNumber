cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

## Use -std=c++17 as default.
set(CMAKE_CXX_STANDARD 17)
## Disable C++ extensions
set(CMAKE_CXX_EXTENSIONS OFF)
## Require full C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(main
       	LANGUAGES CXX)

find_package(helib REQUIRED)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(main main.cpp)

target_link_libraries(main helib)