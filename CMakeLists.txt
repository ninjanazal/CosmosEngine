cmake_minimum_required(VERSION 3.26)
project(CosmosEngine VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Cosmos)
add_subdirectory(Editor)

add_executable(${PROJECT_NAME} Cosmos/Boot.cpp)

target_link_libraries(${PROJECT_NAME} Cosmos)
target_link_libraries(${PROJECT_NAME} Editor)


if (CMAKE_GENERATOR MATCHES "Visual Studio")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CosmosEngine)
endif()