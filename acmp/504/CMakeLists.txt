cmake_minimum_required(VERSION 3.3)
project(504)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(504 ${SOURCE_FILES})