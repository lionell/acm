cmake_minimum_required(VERSION 3.1)
project(round_300)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES weird_chess.cpp)
add_executable(round_300 ${SOURCE_FILES})