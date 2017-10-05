get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)
file (GLOB ${ProjectId}_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file (GLOB ${ProjectId}_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
add_library(${ProjectId} ${${ProjectId}_SOURCES} ${${ProjectId}_HEADERS})

if (USE_CONAN_LIBS)
        target_link_libraries(${ProjectId} ${CONAN_LIBS})
else()
#   GTest
        find_package(GTest REQUIRED)
        include_directories(${GTEST_INCLUDE_DIRS})

        target_link_libraries(${ProjectId} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
endif (USE_CONAN_LIBS)

set_property(TARGET ${ProjectId} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${ProjectId} PROPERTY CXX_STANDARD_REQUIRED ON)

file(RELATIVE_PATH ProjectFolder "${PROJECT_SOURCE_DIR}" "${CMAKE_CURRENT_LIST_DIR}")
get_filename_component(ProjectFolder "${ProjectFolder}" PATH)
set_target_properties(${ProjectId} PROPERTIES FOLDER "${ProjectFolder}")
