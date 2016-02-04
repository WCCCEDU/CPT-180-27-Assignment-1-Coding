cmake_minimum_required(VERSION 3.3)
project(Stock_Project)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Stock_Project ${SOURCE_FILES})