#pragma once
#include <filesystem/interface/file/file.h>

#include <stdint.h>
#include <stddef.h>

size_t
    synapse_filesystem_file_read_from
        (synapse_filesystem_file, void*, size_t);

size_t
    synapse_filesystesm_file_write_to
        (synapse_filesystem_file, void*, size_t);

size_t
    synapse_filesystem_file_assign_cursor
        (synapse_filesystem_file, size_t);

size_t
    synapse_filesystem_file_retrieve_cursor
        (synapse_filesystem_file);