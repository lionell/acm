cmake_minimum_required(VERSION 3.6)
project(round_377)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(round_377 ${SOURCE_FILES})