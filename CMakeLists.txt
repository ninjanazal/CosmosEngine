cmake_minimum_required(VERSION 3.26)
project(CosmosEngine VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_subdirectory(CosmosCore)
add_subdirectory(CosmosEditor)


add_executable(${PROJECT_NAME} CosmosCore/Boot.cpp)


target_link_libraries(${PROJECT_NAME} CosmosCore)
target_include_directories(${PROJECT_NAME} PRIVATE CosmosCore/include/)


link_directories("${CMAKE_BINARY_DIR}/build")
target_link_libraries(${PROJECT_NAME} CosmosEditor)
target_include_directories(${PROJECT_NAME} PRIVATE CosmosEditor/include/)


if (CMAKE_GENERATOR MATCHES "Visual Studio")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CosmosEngine)
endif()

