#include <filesystem/file/details/fs_file_type.h>

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_open
        (const char*);

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_open_wchar
        (const wchar_t*);

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_create
        (const char*);

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_create_wchar
        (const wchar_t*);