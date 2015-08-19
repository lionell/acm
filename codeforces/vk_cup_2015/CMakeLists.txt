cmake_minimum_required(VERSION 2.8.4)
project(VK_Cup_2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES test.cpp)
add_executable(VK_Cup_2015 ${SOURCE_FILES})