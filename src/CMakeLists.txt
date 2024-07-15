# Define a function for creating executable targets
file(GLOB_RECURSE SOURCES "${SRC_DIR}/application/*.cpp*")
function(create_target TARGET_NAME SOURCE_FILE)
    add_executable(
        ${TARGET_NAME}
        ${SOURCES}
        ${SOURCE_FILE}
    )

    target_link_libraries(
        ${TARGET_NAME}
        ${EXTERNAL_LIB_FILES}
    )
endfunction()

create_target(${APP_NAME} ${SRC_DIR}/main.cpp)
