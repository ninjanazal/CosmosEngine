set(EDITOR_SRC
    src/Editor.cpp
)

set(EDITOR_HRD
    include/Editor/Editor.h
)

add_library(
    CosmosEditor 
    ${EDITOR_SRC} ${EDITOR_HRD}
)

target_include_directories(CosmosEditor PRIVATE include/Editor/)
target_include_directories(CosmosEditor INTERFACE ${PROJECT_SOURCE_DIR}/CosmosEditor/include/)


if (CMAKE_GENERATOR MATCHES "Visual Studio")
    source_group("Header Files\\Editor" FILES ${EDITOR_HRD})
endif()