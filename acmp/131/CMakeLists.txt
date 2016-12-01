cmake_minimum_required(VERSION 3.3)
project(131)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(131 ${SOURCE_FILES})