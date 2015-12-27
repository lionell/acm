cmake_minimum_required(VERSION 3.2)
project(first_tour)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES bacterias.cpp)
add_executable(first_tour ${SOURCE_FILES})