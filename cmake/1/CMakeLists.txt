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
MESSAGE(STATUS "hello ${file_list}")
MESSAGE(STATUS "hello ${CMAKE_SOURCE_DIR}")
MESSAGE(STATUS "hello ${test_module}")

IF (WIN32)
  MESSAGE(STATUS "win32 platform")
ELSEIF (UNIX)
  MESSAGE(STATUS "unix platform")
ELSEIF(APPLE)
  MESSAGE(STATUS "apple platform")
ENDIF (WIN32)
