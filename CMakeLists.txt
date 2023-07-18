cmake_minimum_required(VERSION 3.26)
project(CosmosEngine VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenGL REQUIRED)

add_subdirectory(Vendor)

add_subdirectory(CosmosCore)
add_subdirectory(CosmosEditor)

add_executable(${PROJECT_NAME} CosmosCore/Boot.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC
    OpenGL::GL ${OPENGL_LIBRARIES} glfw
    CosmosCore CosmosEditor
)

if (CMAKE_GENERATOR MATCHES "Visual Studio")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT CosmosEngine)
endif()

