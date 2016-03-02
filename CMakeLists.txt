cmake_minimum_required (VERSION 3.4)
project (ntp)
include(ExternalProject)

option(BUILD_UT "Build the unit tests" ON)
file(GLOB_RECURSE CPPSRC src/*.cpp)
file(GLOB_RECURSE UTSRC ut/*.cpp)

include_directories(include)
add_library(${CMAKE_PROJECT_NAME} ${CPPSRC})

if (BUILD_UT)
	include(CMakeLists_external.txt)

	add_executable(${CMAKE_PROJECT_NAME}_ut ${UTSRC})
	find_library(googletest ../googltest)
	target_link_libraries(${CMAKE_PROJECT_NAME}_ut ntp pthread)
endif (BUILD_UT)
