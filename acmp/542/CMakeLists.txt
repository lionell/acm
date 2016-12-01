cmake_minimum_required(VERSION 3.3)
project(542)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(542 ${SOURCE_FILES})