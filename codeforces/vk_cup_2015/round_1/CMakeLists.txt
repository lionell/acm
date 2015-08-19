cmake_minimum_required(VERSION 3.1)
project(round_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES photo_as_memory.cpp)
add_executable(round_1 ${SOURCE_FILES})