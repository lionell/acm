cmake_minimum_required(VERSION 3.3)
project(round_323)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(round_323 ${SOURCE_FILES})