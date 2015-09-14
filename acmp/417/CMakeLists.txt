cmake_minimum_required(VERSION 3.1)
project(417)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(417 ${SOURCE_FILES})