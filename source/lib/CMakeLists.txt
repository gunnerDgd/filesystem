cmake_minimum_required(VERSION 3.0)

project(
    synapse-filesystem-lib
    VERSION 0.1.0
    LANGUAGES C
)

file(
    GLOB_RECURSE
    src_synapse_filesystem_lib
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_library(
    synapse_filesystem_lib
    STATIC
    ${src_synapse_filesystem_lib}
)

target_include_directories(
    synapse_filesystem_lib
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)