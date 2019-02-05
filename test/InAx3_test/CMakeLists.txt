set (target_name "InAx3_test")

find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}/src
                     ${TEST_SOURCE_DIR}/src/core
                     ${Boost_INCLUDE_DIRS}
                     )
add_definitions (-DBOOST_TEST_DYN_LINK)
add_executable (${target_name} ${target_name}.cpp)
target_link_libraries (${target_name} InexactAdders ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} )

add_test (NAME ${target_name} COMMAND ${target_name})