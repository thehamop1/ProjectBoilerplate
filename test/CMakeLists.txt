#you can make functions in your build system
macro(package_add_test TESTNAME SRCS LIB)
    add_executable(${TESTNAME} ${SRCS})
    target_link_libraries(${TESTNAME} gtest gmock gtest_main ${LIB})
    target_include_directories(${TESTNAME} PRIVATE ${CMAKE_SOURCE_DIR}/googletest)
    gtest_discover_tests(${TESTNAME}
        WORKING_DIRECTORY ${PROJECT_DIR}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
    )
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
endmacro()

#Here im linking our library defined in src/ and the google test framework
#You can add more tests with this line
package_add_test(BlockingQueue BlockingQueue.cpp LIBRARY_NAME)