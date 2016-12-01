cmake_minimum_required(VERSION 3.3)
project(169)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES precalc.cpp)
add_executable(169 ${SOURCE_FILES})