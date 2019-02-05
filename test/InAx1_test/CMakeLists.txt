find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}/src
                     ${TEST_SOURCE_DIR}/src/core
                     ${Boost_INCLUDE_DIRS}
                     )
add_definitions (-DBOOST_TEST_DYN_LINK)
add_executable (InAx1_test InAx1_test.cpp)
target_link_libraries (InAx1_test InexactAdders ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} )

add_test (NAME InAx1_test COMMAND InAx1_test)