cmake_minimum_required (VERSION 2.8)
project (CMakeHelloWorld)

#version number
set (CMakeHelloWorld_VERSION_MAJOR 1)
set (CMakeHelloWorld_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (src)
include_directories(src)

# testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests tests/HelloWorld.t.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

#indicate the entry point for the executable
add_executable (CMakeHelloWorld app/HelloWorld.m.cpp)

# Indicate which libraries to include during the link process.
target_link_libraries (CMakeHelloWorld src)

install (TARGETS CMakeHelloWorld DESTINATION bin)
