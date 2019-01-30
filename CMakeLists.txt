cmake_minimum_required(VERSION 3.1)
project(AxC-adders LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra -ggdb3 -O0 --coverage")

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/libs)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/libs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(BOOST_TEST_LOG_LEVEL message)

add_subdirectory(src)
add_subdirectory(test)

enable_testing ()
add_test (NAME InexactAddersTest COMMAND Test)
