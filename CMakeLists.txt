cmake_minimum_required (VERSION 2.8)
project (DemoProject)

#version number
set (DemoProject_VERSION_MAJOR 1)
set (DemoProject_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (src)
include_directories(src)

# testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# build test
add_executable(runTests tests/Math.t.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
target_link_libraries (runTests src)

# build app
add_executable (DemoProject app/DemoProject.m.cpp)
target_link_libraries (DemoProject src)

# install apps
install (TARGETS DemoProject DESTINATION bin)
install (TARGETS runTests DESTINATION bin)