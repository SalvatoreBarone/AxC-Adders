find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}/src
                     ${TEST_SOURCE_DIR}/src/core
                     ${Boost_INCLUDE_DIRS}
                     )
add_definitions (-DBOOST_TEST_DYN_LINK)

add_subdirectory(InAx1_test)
add_subdirectory(InAx2_test)
add_subdirectory(InAx3_test)
add_subdirectory(AXA1_test)
add_subdirectory(AXA2_test)
add_subdirectory(AXA3_test)
#add_subdirectory(AMA1_test)
#add_subdirectory(AMA2_test)
#add_subdirectory(AMA3_test)
#add_subdirectory(AMA4_test)
