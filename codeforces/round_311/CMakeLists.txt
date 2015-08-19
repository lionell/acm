cmake_minimum_required(VERSION 3.2)
project(round_311)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES second.cpp)
add_executable(round_311 ${SOURCE_FILES})