project(test)

# Required cmake version
cmake_minimum_required(VERSION 3.5.1)
set(CMAKE_MODULE_PATH
  ${CMAKE_SOURCE_DIR}/cmake/modules
)

include(a)
include(test_module)
MESSAGE(STATUS "hello ${a}")
set(file_list 2.c 3.c 1.c)
MESSAGE(STATUS hello ${file_list})
MESSAGE(STATUS "hello ${file_list}")
set(file_list 4.c)
MESSAGE(STATUS hello ${file_list})
MESSAGE(STATUS "hello ${file_list}")
MESSAGE(STATUS "hello ${CMAKE_SOURCE_DIR}")
MESSAGE(STATUS "hello ${test_module}")
MESSAGE(STATUS "path:$ENV{PATH}")

IF (WIN32)
  MESSAGE(STATUS "win32 platform")
ELSEIF (UNIX)
  MESSAGE(STATUS "unix platform")
ELSEIF(APPLE)
  MESSAGE(STATUS "apple platform")
ENDIF (WIN32)


MESSAGE(STATUS "CMAKE_BINARY_DIR= ${CMAKE_BINARY_DIR}")
MESSAGE(STATUS "CMAKE_SOURCE_DIR= ${CMAKE_SOURCE_DIR}")
MESSAGE(STATUS "CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}")
