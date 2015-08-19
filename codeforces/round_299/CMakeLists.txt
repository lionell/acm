cmake_minimum_required(VERSION 3.1)
project(round_299)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES tavas_and_karafs.cpp)
add_executable(round_299 ${SOURCE_FILES})