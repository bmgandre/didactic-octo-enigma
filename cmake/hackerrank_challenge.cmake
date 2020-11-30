macro(hackerrank_setup_project)
	get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)

	file(GLOB ${ProjectId}_SOURCES ${ARGV})
	add_library(${ProjectId} ${${ProjectId}_SOURCES})

	set_property(TARGET ${ProjectId} PROPERTY CXX_STANDARD 14)
	set_property(TARGET ${ProjectId} PROPERTY CXX_STANDARD_REQUIRED ON)

	file(RELATIVE_PATH ProjectFolder "${PROJECT_SOURCE_DIR}" "${CMAKE_CURRENT_LIST_DIR}")
	get_filename_component(ProjectFolder "${ProjectFolder}" PATH)
	
	set_target_properties(${ProjectId} PROPERTIES FOLDER "${ProjectFolder}")
	
	if (USE_CONAN_LIBS)
		target_link_libraries(${ProjectId} ${CONAN_LIBS})
	else()
		include_directories(${Boost_INCLUDE_DIRS} ${JsonCpp_INCLUDE_DIRS})
		target_link_libraries(${ProjectId} ${Boost_LIBRARIES} ${JsonCpp_LIBRARIES})
	endif (USE_CONAN_LIBS)
endmacro()

macro(hackerrank_challenge_solution)
	hackerrank_setup_project(${ARGV})
endmacro()

macro(hackerrank_challenge_test)
	include(GoogleTest)

	get_filename_component(ProjectId ${CMAKE_CURRENT_LIST_DIR} NAME)

	get_filename_component(ProjectTest ${CMAKE_CURRENT_LIST_DIR} NAME)
	set(ProjectTest ${ProjectTest}_test)

	file(GLOB ${ProjectTest}_SOURCES ${ARGV})
	add_executable(${ProjectTest} ${${ProjectTest}_SOURCES})

	set(TestBaseProject hackerrank_gtest)
	set(TestBaseSrc "${CMAKE_SOURCE_DIR}/src/${TestBaseProject}")
	include_directories(${ProjectSrc} ${TestBaseSrc})

	if (USE_CONAN_LIBS)
		target_link_libraries(${ProjectTest} ${ProjectId} ${TestBaseProject} ${CONAN_LIBS})
	else()
		include_directories(${GTEST_INCLUDE_DIRS})
		target_link_libraries(${ProjectTest} ${ProjectId} ${TestBaseProject} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} pthread)
	endif (USE_CONAN_LIBS)

	set_property(TARGET ${ProjectTest} PROPERTY CXX_STANDARD 14)
	set_property(TARGET ${ProjectTest} PROPERTY CXX_STANDARD_REQUIRED ON)

	add_test(${ProjectTest} ${ProjectTest})
	gtest_discover_tests(${ProjectTest})

	file(GLOB GTEST_BINARIES "${PROJECT_BINARY_DIR}/bin/gtest*")
	file(COPY ${GTEST_BINARIES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

	file(GLOB GMOCK_BINARIES "${PROJECT_BINARY_DIR}/bin/gmock*")
	file(COPY ${GMOCK_BINARIES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endmacro()
