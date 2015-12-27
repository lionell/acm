cmake_minimum_required(VERSION 3.1)
project(358)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${OUTPUT_DIRECTORY}")

set(SOURCE_FILES main.cpp)
add_executable(358 ${SOURCE_FILES})