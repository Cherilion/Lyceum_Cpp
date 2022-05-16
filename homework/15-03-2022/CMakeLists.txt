cmake_minimum_required(VERSION 3.21)
project(15_03_2022)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)
add_executable(15_03_2022 main.cpp)

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/phrase.txt"
        "${CMAKE_CURRENT_BINARY_DIR}/replace.txt")



