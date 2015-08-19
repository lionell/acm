cmake_minimum_required(VERSION 3.2)
project(round_313)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES third_v2.cpp)
add_executable(round_313 ${SOURCE_FILES})