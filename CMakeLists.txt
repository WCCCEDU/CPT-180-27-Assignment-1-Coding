cmake_minimum_required(VERSION 3.3)
project(first_coding_assignment)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(first_coding_assignment ${SOURCE_FILES})