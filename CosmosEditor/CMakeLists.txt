set(EDITOR_SRC
    src/Editor.cpp
)

set(EDITOR_HRD
    include/Editor/Editor.h
)

add_library(
    CosmosEditor 
    ${EDITOR_SRC}
    ${EDITOR_HRD}

)

target_include_directories(CosmosEditor PRIVATE include/Editor/)