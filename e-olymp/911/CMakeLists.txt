cmake_minimum_required(VERSION 3.2)
project(911)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(911 ${SOURCE_FILES})