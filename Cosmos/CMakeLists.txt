PROJECT(CosmosViewer)
set(RUNTIME_SRC
    Runtime/Boot.cpp
)

add_executable(${PROJECT_NAME}
    ${RUNTIME_SRC}
)


target_link_libraries(
    ${PROJECT_NAME} PUBLIC
    OpenGL::GL ${OPENGL_LIBRARIES}
    glew
    glfw
)

if (CMAKE_GENERATOR MATCHES "Visual Studio")
    set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})

    source_group("Source Files\\Runtime" FILES ${RUNTIME_SRC})
endif()

