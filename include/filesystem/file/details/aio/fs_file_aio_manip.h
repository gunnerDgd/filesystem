#include <filesystem/file/details/fs_file_type.h>
#include <filesystem/io_request/details/fs_ioreq_type.h>

void 
    __synapse_filesystem_file_aio_completion_routine
        (uint32_t, uint32_t, __synapse_filesystem_io_request*);

void
    __synapse_filesystem_file_aio_read_from
        (__synapse_filesystem_file*, __synapse_filesystem_io_request*);

void
    __synapse_filesystem_file_aio_write_to
        (__synapse_filesystem_file*, __synapse_filesystem_io_request*);