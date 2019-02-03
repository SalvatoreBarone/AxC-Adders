project (AxC_adders LANGUAGES CXX)
cmake_minimum_required (VERSION 3.1)

add_library(InexactAdders STATIC 
        core/ExactFullAdder.cpp
        core/generic_adder.cpp
        InAx1_adder.cpp 
        InAx2_adder.cpp 
        InAx3_adder.cpp
        AMA1_adder.cpp
        AMA2_adder.cpp
        AMA3_adder.cpp
        AMA4_adder.cpp
        AXA1_adder.cpp
        AXA2_adder.cpp
        AXA3_adder.cpp
)

set_target_properties(InexactAdders PROPERTIES PUBLIC_HEADER "${CMAKE_SOURCE_DIR}/include/inexact_adders.h")

target_include_directories(InexactAdders PUBLIC ${CMAKE_SOURCE_DIR}/include)

INSTALL(TARGETS InexactAdders
	ARCHIVE DESTINATION /usr/lib
	PUBLIC_HEADER DESTINATION /usr/include
)





