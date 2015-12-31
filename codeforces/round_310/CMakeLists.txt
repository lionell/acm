cmake_minimum_required(VERSION 3.2)
project(round)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES third.cpp)
add_executable(round ${SOURCE_FILES})