cmake_minimum_required(VERSION 3.3)
project(round_317)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES third.cpp)
add_executable(round_317 ${SOURCE_FILES})