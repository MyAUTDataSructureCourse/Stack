cmake_minimum_required(VERSION 3.6)
project(Stack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LLStack.h)
add_executable(Stack ${SOURCE_FILES})