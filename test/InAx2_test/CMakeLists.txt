set (target_name "InAx2_test")

add_executable (${target_name} ${target_name}.cpp)
target_link_libraries (${target_name} InexactAdders ${Boost_FILESYSTEM_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} )

add_test (NAME ${target_name} COMMAND ${target_name})