cmake_minimum_required(VERSION 3.2)
project(round_301)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES bad_luck_island.cpp)
add_executable(round_301 ${SOURCE_FILES})