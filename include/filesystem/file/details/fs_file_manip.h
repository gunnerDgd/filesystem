#pragma once
#include <filesystem/file/details/fs_file_type.h>

size_t
    __synapse_filesystem_file_read_from
        (__synapse_filesystem_file*, void*, size_t);

size_t
    __synapse_filesystem_file_write_to
        (__synapse_filesystem_file*, void*, size_t);

size_t
    __synapse_filesystem_file_assign_cursor
        (__synapse_filesystem_file*, size_t);

size_t
    __synapse_filesystem_file_retrieve_cursor
        (__synapse_filesystem_file*);