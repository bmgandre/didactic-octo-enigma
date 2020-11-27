cmake_minimum_required(VERSION 3.1)
cmake_policy(SET CMP0054 NEW)

project(hackerrank)

set(CMAKE_BUILD_TYPE Debug)

set(USE_CONAN_BOOST FALSE CACHE BOOL "Download Boost from Conan Repo")
set(USE_CONAN_JSONCPP FALSE CACHE BOOL "Download JsonCpp from Conan Repo")
set(USE_CONAN_GTEST FALSE CACHE BOOL "Download GTest from Conan Repo")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(${CMAKE_SOURCE_DIR}/cmake/compiler_check.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/list_folders.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/project_add_all_folders.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/conan_custom_setup.cmake)
include(${CMAKE_SOURCE_DIR}/cmake/hackerrank_challenge.cmake)

compiler_check()

enable_testing()

check_build_dependencies()

include(CTest)

add_subdirectory(src)
