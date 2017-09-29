project(test)

# Required cmake version
cmake_minimum_required(VERSION 3.5.1)
include(a)
MESSAGE(STATUS "hello ${a}")
set(file_list 2.c 3.c 1.c)
MESSAGE(STATUS "hello ${file_list}")
MESSAGE(STATUS "hello ${CMAKE_SOURCE_DIR}")
IF (expression LESS 3)
  MESSAGE(STATUS "entern if")
ELSEIF (expression LESS 5)
  MESSAGE(STATUS "entern elseif")
ELSE (expression)
  MESSAGE(STATUS "entern else")
ENDIF (expression) # 一定要有ENDIF与IF对应
