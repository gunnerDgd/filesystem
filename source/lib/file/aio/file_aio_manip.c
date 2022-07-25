#include <filesystem/file/aio/file_aio_manip.h>
#include <filesystem/file/details/aio/fs_file_aio_manip.h>

void
    synapse_filesystem_file_aio_read_from
        (synapse_filesystem_file_aio   pAioFile, 
         synapse_filesystem_io_request pAioRequest)
{
    __synapse_filesystem_file_aio_read_from
        (synapse_filesystem_opaque_reference
            (pAioFile),
         synapse_filesystem_opaque_reference
            (pAioRequest));
}

void
    synapse_filesystem_file_aio_write_to
        (synapse_filesystem_file_aio   pAioFile, 
         synapse_filesystem_io_request pAioRequest)
{
    __synapse_filesystem_file_aio_write_to
        (synapse_filesystem_opaque_reference
            (pAioFile),
         synapse_filesystem_opaque_reference
            (pAioRequest));
}