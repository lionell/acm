cmake_minimum_required(VERSION 3.2)
project(902)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(902 ${SOURCE_FILES})