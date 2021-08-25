cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)

project(Lab1)

file(GLOB_RECURSE LAB1_HEADERS "${CMAKE_CURRENT_LIST_DIR}/include/*.h")
file(GLOB_RECURSE LAB1_SOURCE "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

add_executable(simulator ${LAB1_SOURCE} ${LAB1_HEADERS})