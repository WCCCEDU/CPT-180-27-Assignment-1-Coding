cmake_minimum_required(VERSION 3.3)
project(ACME__Stock_Transaction)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ACME__Stock_Transaction ${SOURCE_FILES})