cmake_minimum_required(VERSION 3.13)
project(QueueTest)

set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(QueueTest
               main.cpp
               IQueue.hpp
               CircularQueue.hpp 
               CircularQueue.cpp
               test.hpp
               test.cpp
               )