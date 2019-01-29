project (InAx_adders LANGUAGES CXX)
cmake_minimum_required (VERSION 3.1)

add_library(InexactAdders STATIC 
        InAx1_adder.cpp 
        InAx2_adder.cpp 
        InAx3_adder.cpp
)

set_target_properties(InexactAdders PROPERTIES PUBLIC_HEADER "${CMAKE_SOURCE_DIR}/include/inexact_adders.h")

target_include_directories(InexactAdders PUBLIC ${CMAKE_SOURCE_DIR}/include)

INSTALL(TARGETS InexactAdders
	ARCHIVE DESTINATION /usr/lib
	PUBLIC_HEADER DESTINATION /usr/include
)





