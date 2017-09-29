project(test)

# Required cmake version
cmake_minimum_required(VERSION 3.5.1)
include(a)
MESSAGE(STATUS "hello ${a}")
set(file_list 2.c 3.c 1.c)
MESSAGE(STATUS "hello ${file_list}")
MESSAGE(STATUS "hello ${CMAKE_SOURCE_DIR}")
