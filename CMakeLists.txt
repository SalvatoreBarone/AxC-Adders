cmake_minimum_required(VERSION 3.1)
project(InAx-adders LANGUAGES CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -ggdb3 -O0")

add_subdirectory(src)

