cmake_minimum_required(VERSION 3.2)
project(round_312)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES forth.cpp)
add_executable(round_312 ${SOURCE_FILES})