#pragma once
#include <filesystem/interface/file/file.h>

#include <stdint.h>
#include <stddef.h>

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_open
        (const char*);

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_open_wchar
        (const wchar_t*);

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_create
        (const char*);

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_create_wchar
        (const wchar_t*);

void
    synapse_filesystem_file_aio_cleanup
        (synapse_filesystem_file_aio);