cmake_minimum_required(VERSION 3.1)
project(Qualification_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES averaging_appeals.cpp)
add_executable(Qualification_2 ${SOURCE_FILES})