cmake_minimum_required(VERSION 3.21)
project(22_03_2022)

set(CMAKE_CXX_STANDARD 20)

add_executable(22_03_2022 main.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/output.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
