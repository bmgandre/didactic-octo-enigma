get_filename_component(ProjectTest ${CMAKE_CURRENT_LIST_DIR} NAME)
file (GLOB ${ProjectTest}_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file (GLOB ${ProjectTest}_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
add_executable(${ProjectTest} ${${ProjectTest}_SOURCES} ${${ProjectTest}_HEADERS})

string(REPLACE "_test" "" ProjectId ${ProjectTest})
#MESSAGE(STATUS "ProjectId:" ${ProjectId})

get_filename_component(ProjectTestSrc ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)
#MESSAGE(STATUS "ProjectTestSrc:" ${ProjectTestSrc})

set(ProjectSrc "${ProjectTestSrc}/${ProjectId}")
string(REPLACE "test/" "src/" ProjectSrc ${ProjectSrc})
include_directories(${ProjectSrc} "${CMAKE_SOURCE_DIR}/src/hackerrank_gtest")
#MESSAGE(STATUS "ProjectSrc:" ${ProjectSrc})

if (USE_CONAN_LIBS)
	target_link_libraries(${ProjectTest} ${ProjectId} hackerrank_gtest ${CONAN_LIBS})
else()
#   GTest
	find_package(GTest REQUIRED)
	include_directories(${GTEST_INCLUDE_DIRS})

	target_link_libraries(${ProjectTest} ${ProjectId} hackerrank_gtest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
endif (USE_CONAN_LIBS)

set_property(TARGET ${ProjectTest} PROPERTY CXX_STANDARD 14)
set_property(TARGET ${ProjectTest} PROPERTY CXX_STANDARD_REQUIRED ON)

file(RELATIVE_PATH ProjectFolder "${PROJECT_SOURCE_DIR}" "${CMAKE_CURRENT_LIST_DIR}")
get_filename_component(ProjectFolder "${ProjectFolder}" PATH)
set_target_properties(${ProjectTest} PROPERTIES FOLDER "${ProjectFolder}")

add_test(${ProjectTest} ${ProjectTest})
