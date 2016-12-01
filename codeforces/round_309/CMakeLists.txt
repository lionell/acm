cmake_minimum_required(VERSION 3.2)
project(round_309)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES kyoya_and_colored_balls.cpp)
add_executable(round_309 ${SOURCE_FILES})