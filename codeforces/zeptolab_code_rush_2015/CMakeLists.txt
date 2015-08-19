cmake_minimum_required(VERSION 3.1)
project(zeptolab_code_rush_2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES om_nom_and_candies.cpp)
add_executable(zeptolab_code_rush_2015 ${SOURCE_FILES})