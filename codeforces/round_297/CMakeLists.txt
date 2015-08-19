cmake_minimum_required(VERSION 3.1)
project(round_297)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES arthur_and_walls.cpp)
add_executable(round_297 ${SOURCE_FILES})