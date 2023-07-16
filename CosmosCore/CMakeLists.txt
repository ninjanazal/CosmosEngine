set(COSMOS_SRC
    src/Application.cpp
)

set(COSMOS_HRD
    include/Core/Application.h
)

add_library(
    CosmosCore STATIC
    ${COSMOS_SRC} ${COSMOS_HRD}
)

target_include_directories(CosmosCore PRIVATE include/Core/)
