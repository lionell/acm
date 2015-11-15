cmake_minimum_required(VERSION 3.1)
project(beta_round_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES spreadsheets.cpp)
add_executable(beta_round_1 ${SOURCE_FILES})