cmake_minimum_required(VERSION 3.2)
project(looksery_cup_2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES haar.cpp)
add_executable(looksery_cup_2015 ${SOURCE_FILES})