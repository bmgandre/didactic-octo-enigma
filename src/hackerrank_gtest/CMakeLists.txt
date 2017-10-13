hackerrank_setup_project()

if (USE_CONAN_LIBS)
    target_link_libraries(${ProjectId} ${CONAN_LIBS})
else()
#   GTest
    find_package(GTest REQUIRED)
    include_directories(${GTEST_INCLUDE_DIRS})

    target_link_libraries(${ProjectId} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
endif (USE_CONAN_LIBS)
