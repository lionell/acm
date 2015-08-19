cmake_minimum_required(VERSION 3.2)
project(warm_up)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES build_the_log.cpp)
add_executable(warm_up ${SOURCE_FILES})