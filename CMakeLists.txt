cmake_minimum_required(VERSION 3.26)
project(CosmosEngine VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_SUPPRESS_REGENERATION true)

find_package(OpenGL REQUIRED)

add_subdirectory(Vendor)
add_subdirectory(Cosmos)

if (CMAKE_GENERATOR MATCHES "Visual Studio")
endif()