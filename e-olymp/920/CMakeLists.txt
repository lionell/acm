cmake_minimum_required(VERSION 3.2)
project(920)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(920 ${SOURCE_FILES})