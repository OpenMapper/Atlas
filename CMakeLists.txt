CMAKE_MINIMUM_REQUIRED(VERSION 3.4)

#################################################################
# Atlas - OpenMapper C++ visual SLAM engine
#################################################################

# Setting up names and project settings
SET(ATLAS_TARGET "Atlas")

IF(NOT PROJECT_NAME)
	PROJECT("Atlas")
ENDIF(NOT PROJECT_NAME)

SET(ATLAS_BUILD_TESTS TRUE CACHE BOOL "Define TRUE to build Atlas unit tests")

#################################################################
# File Globbing
#################################################################

# these instructions search the directory tree when cmake is invoked
FILE(GLOB_RECURSE ATLAS_SOURCES  "${CMAKE_CURRENT_LIST_DIR}/src/*.cc" 
                                 "${CMAKE_CURRENT_LIST_DIR}/include/Atlas/*.h")

ADD_LIBRARY(${ATLAS_TARGET} STATIC ${ATLAS_SOURCES})

SOURCE_GROUP("Atlas" FILES ${ATLAS_SOURCES})

TARGET_COMPILE_OPTIONS(${ATLAS_TARGET} PUBLIC -std=c++14 -w)


TARGET_INCLUDE_DIRECTORIES(${ATLAS_TARGET} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include
                                                  /usr/local/include/eigen3/ )

# define executable directory
SET_TARGET_PROPERTIES(${ATLAS_TARGET} PROPERTIES 
  DEBUG_POSTFIX "_d"
  RUNTIME_OUTPUT_DIRECTORY ../bin/
  RUNTIME_OUTPUT_DIRECTORY_DEBUG ../bin/
  RUNTIME_OUTPUT_DIRECTORY_RELEASE ../bin/
  RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO ../bin/
  LIBRARY_OUTPUT_DIRECTORY ../lib/
  LIBRARY_OUTPUT_DIRECTORY_DEBUG ../lib/
  LIBRARY_OUTPUT_DIRECTORY_RELEASE ../lib/
  LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ../lib/
  ARCHIVE_OUTPUT_DIRECTORY ../lib/
  ARCHIVE_OUTPUT_DIRECTORY_DEBUG ../lib/
  ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO ../lib/
  ARCHIVE_OUTPUT_DIRECTORY_RELEASE ../lib/)

IF(ATLAS_BUILD_TESTS)
  INCLUDE("${CMAKE_CURRENT_LIST_DIR}/test/CMakeLists.txt")
ENDIF(ATLAS_BUILD_TESTS)
