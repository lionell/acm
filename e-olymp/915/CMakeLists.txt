cmake_minimum_required(VERSION 3.2)
project(915)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(915 ${SOURCE_FILES})