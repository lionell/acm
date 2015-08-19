cmake_minimum_required(VERSION 3.2)
project(shad_round_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES j.cpp)
add_executable(shad_round_1 ${SOURCE_FILES})