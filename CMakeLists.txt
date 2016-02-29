cmake_minimum_required (VERSION 3.4)
project (ntp)

option(BUILD_UT "Build the unit tests" ON)
file(GLOB_RECURSE CPPSRC src/*.cpp)
file(GLOB_RECURSE UTSRC ut/*.cpp)

include_directories(include)
add_library(${CMAKE_PROJECT_NAME} ${CPPSRC})

if (BUILD_UT)
	add_executable(${CMAKE_PROJECT_NAME}_ut ${UTSRC})
	target_link_libraries(${CMAKE_PROJECT_NAME}_ut ntp)
	ExternalProject_Add(gmock ${CMAKE_CURRENT_LIST_DIR}/../googletest/CMakeLists.txt)
endif (BUILD_UT)
