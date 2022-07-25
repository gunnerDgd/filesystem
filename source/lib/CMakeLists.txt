cmake_minimum_required(VERSION 3.0)

project(
    synapse-filesystem-lib
    0.1.0
    LANGUAGES C
)

file(
    src_synapse_filesystem_lib
    GLOB_RECURSE
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_library(
    syapse_filesystem_lib
    STATIC
    ${src_synapse_filesystem_lib}
)

target_include_directories(
    synapse_filesyste_lib
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)