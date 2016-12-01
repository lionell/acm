cmake_minimum_required(VERSION 3.2)
project(903)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(903 ${SOURCE_FILES})