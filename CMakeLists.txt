cmake_minimum_required (VERSION 2.6)
project (liblinsum)

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

# The version number
set (liblinsum_VERSION_MAJOR 1)
set (liblinsum_VERSION_MINOR 0)

file(GLOB SOURCES "src/*.cc" "src/universe/*.cc" "src/sets/*.cc" "src/functions/*.cc")

add_executable (liblinsum ${SOURCES})