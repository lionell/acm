cmake_minimum_required(VERSION 3.5)
project(complex_2016)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES stairs/stairs.cpp)
add_executable(complex_2016 ${SOURCE_FILES})