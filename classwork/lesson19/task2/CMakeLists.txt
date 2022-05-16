cmake_minimum_required(VERSION 3.21)
project(task2)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(task2 src/main.cpp src/MatrixTools.cpp src/MatrixTools.cpp include/MatrixTools.h)
