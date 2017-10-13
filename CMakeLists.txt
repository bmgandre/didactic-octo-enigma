cmake_minimum_required(VERSION 3.1)
cmake_policy(SET CMP0054 NEW)

project(hackerrank)

set(CMAKE_BUILD_TYPE Debug)

set(USE_CONAN_LIBS FALSE CACHE BOOL "Download Conan libraries")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(${CMAKE_SOURCE_DIR}/scripts/cmake/compiler_check.cmake)
include(${CMAKE_SOURCE_DIR}/scripts/cmake/list_folders.cmake)
include(${CMAKE_SOURCE_DIR}/scripts/cmake/conan_custom_setup.cmake)
include(${CMAKE_SOURCE_DIR}/scripts/cmake/hackerrank_setup_project.cmake)
include(${CMAKE_SOURCE_DIR}/scripts/cmake/hackerrank_setup_test_project.cmake)

compiler_check()

if (USE_CONAN_LIBS)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_custom_setup()
endif (USE_CONAN_LIBS)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)
