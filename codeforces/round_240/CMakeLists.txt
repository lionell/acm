cmake_minimum_required(VERSION 2.8.4)
project(round_240)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES mashmokh_and_lights.cpp)
add_executable(round_240 ${SOURCE_FILES})