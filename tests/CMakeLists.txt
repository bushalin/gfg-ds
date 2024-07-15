# Set up directory variables
# set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
# set(TEST_DIR ${CMAKE_SOURCE_DIR}/test)

# Find all .cpp files in src/application
file(GLOB_RECURSE APPLICATION_SOURCES "${SRC_DIR}/application/*.cpp")

set(UNIT_TEST ${APP_NAME}_test)

# Add GoogleTest
include(GoogleTest)

# Define a function for creating test targets
function(create_test TARGET_NAME SOURCE_FILE)
    add_executable(
        ${TARGET_NAME}
        ${SOURCE_FILE}
        ${APPLICATION_SOURCES} # Include application sources
    )

    target_include_directories(${TARGET_NAME} PRIVATE ${SRC_DIR}/application)
    target_link_libraries(${TARGET_NAME} gtest gtest_main)

    gtest_discover_tests(${TARGET_NAME})
endfunction()

# Create the test target
create_test(${UNIT_TEST} ${TEST_DIR}/tests.cpp)
add_test(
    NAME ${UNIT_TEST}
    COMMAND ${UNIT_TEST}
)
add_custom_command(
     TARGET ${UNIT_TEST}
     COMMENT "Run tests"
     POST_BUILD 
     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
     COMMAND ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> -R "^${UNIT_TEST}$" --output-on-failures
)
