#pragma once
#include <filesystem/defines/export/export.h>

#include <filesystem/export/interface/file/file.h>
#include <filesystem/export/interface/io_request.h>

#include <stdint.h>
#include <stddef.h>

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_open
            (const char*);

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_open_wchar
            (const wchar_t*);

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_create
            (const char*);

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_create_wchar
            (const wchar_t*);

synapse_filesystem_dll
    void
        synapse_cleanup_file_aio
            (synapse_file_aio);

synapse_filesystem_dll
    void
        synapse_read_from_file_aio
            (synapse_file_aio, synapse_filesystem_io_request);

synapse_filesystem_dll
    void
        synapse_write_to_file_aio
            (synapse_file_aio, synapse_filesystem_io_request);