cmake_minimum_required(VERSION 3.6)
project(round_371)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES queries.cpp)
add_executable(round_371 ${SOURCE_FILES})