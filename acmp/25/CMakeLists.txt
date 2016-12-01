cmake_minimum_required(VERSION 3.3)
project(25)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES more_or_less.cpp)
add_executable(25 ${SOURCE_FILES})