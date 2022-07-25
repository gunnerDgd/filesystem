cmake_minimum_required(VERSION 3.0)

project(
    synapse-filesystem-dll
    0.1.0
    LANGUAGES C
)

file(
    src_synapse_filesystem_dll
    GLOB_RECURSE
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

add_library(
    syapse_filesystem_dll
    STATIC
    ${src_synapse_filesystem_lib}
)

add_compile_options(
    syapse_filesystem_dll
    PUBLIC
    /Dsynapse_filesystem_export_mode
)

target_include_directories(
    synapse_filesyste_dll
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)

target_link_libraries(
    synapse_filesystem_dll
    synapse_filesystem_lib
    synapse_memory_dll
)