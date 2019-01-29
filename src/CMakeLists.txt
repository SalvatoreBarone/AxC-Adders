project (InAx_adders LANGUAGES CXX)
cmake_minimum_required (VERSION 3.1)

add_library(InexactAdders STATIC 
        InAx1_adder.cpp 
        InAx2_adder.cpp 
        InAx3_adder.cpp
)

target_include_directories(InexactAdders PRIVATE ${CMAKE_SOURCE_DIR}/include)







