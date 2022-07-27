#pragma once
#include <filesystem/interface/file/file.h>

#include <stdlib.h>
#include <stdint.h>

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_open
        (const char*);

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_open_wchar
        (const wchar_t*);

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_create
        (const char*);

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_create_wchar
        (const wchar_t*);

void
    synapse_filesystem_file_cleanup
        (synapse_filesystem_file);