cmake_minimum_required(VERSION 3.2)
project(round_302)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES sea_and_islands.cpp)
add_executable(round_302 ${SOURCE_FILES})