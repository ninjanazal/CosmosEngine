set(COSMOS_SRC
    src/Application.cpp
)

set(COSMOS_HRD
    include/Core/Application.h
)

add_library(
    CosmosCore
    ${COSMOS_SRC} ${COSMOS_HRD}
)

target_include_directories(CosmosCore PRIVATE include/Core/)
target_include_directories(CosmosCore INTERFACE ${PROJECT_SOURCE_DIR}/CosmosCore/include/)


target_include_directories(CosmosCore PUBLIC
    ${OPENGL_INCLUDE_DIRS}
    ${PROJECT_SOURCE_DIR}/Vendor/glfw/include/
)


if (CMAKE_GENERATOR MATCHES "Visual Studio")
    source_group("Header Files\\Core" FILES ${COSMOS_HRD})
endif()