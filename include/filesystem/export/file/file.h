#pragma once
#include <filesystem/defines/export/export.h>
#include <filesystem/export/interface/file/file.h>

#include <stdint.h>
#include <stddef.h>

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_open
            (const char*);

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_open_wchar
            (const wchar_t*);

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_create
            (const char*);

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_create_wchar
            (const wchar_t*);

synapse_filesystem_dll
    void
        synapse_cleanup_file
            (synapse_file);

synapse_filesystem_dll
    size_t
        synapse_read_from_file
            (synapse_file, void*, size_t);

synapse_filesystem_dll
    size_t
        synapse_write_to_file
            (synapse_file, void*, size_t);

synapse_filesystem_dll
    size_t
        synapse_assign_file_cursor
            (synapse_file, size_t);

synapse_filesystem_dll
    size_t
        synapse_retrieve_file_cursor
            (synapse_file);
