cmake_minimum_required(VERSION 3.1)
project(round_296)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES error_correct_system.cpp)
add_executable(round_296 ${SOURCE_FILES})