cmake_minimum_required(VERSION 3.3)
project(539)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(539 ${SOURCE_FILES})