cmake_minimum_required(VERSION 3.0)

project(
    synapse-filesystem-dll
    VERSION 0.1.0
    LANGUAGES C
)

file(
    GLOB_RECURSE
    src_synapse_filesystem_dll
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

file(
    GLOB_RECURSE
    src_synapse_filesystem_lib
    CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/../lib/*.c
)

add_library(
    synapse_filesystem_dll
    SHARED
    ${src_synapse_filesystem_dll}
    ${src_synapse_filesystem_lib}
)

target_include_directories(
    synapse_filesystem_dll
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)

if("${CMAKE_C_COMPILER_ID}" STREQUAL "MSVC")
    set_target_properties(
        synapse_filesystem_dll
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/lib/build
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )

    target_compile_options(
        synapse_filesystem_dll 
        PRIVATE 
        /Dsynapse_filesystem_export_mode
    )
elseif ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
    set_target_properties(
        synapse_filesystem_dll
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
    )

    target_compile_options(
        synapse_filesystem_dll 
        PRIVATE 
        -Dsynapse_filesystem_export_mode
    )
endif()

target_link_libraries(
    synapse_filesystem_dll
    synapse_memory_dll
)