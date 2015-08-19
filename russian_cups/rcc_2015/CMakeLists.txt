cmake_minimum_required(VERSION 3.1)
project(RCC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES decrypting.cpp)
add_executable(RCC ${SOURCE_FILES})