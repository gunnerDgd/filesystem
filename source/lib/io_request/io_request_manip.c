#include <filesystem/io_request/io_request_manip.h>
#include <filesystem/io_request/details/fs_ioreq_manip.h>

void
    synapse_filesystem_io_request_wait
        (synapse_filesystem_io_request pIoReq)
{
    __synapse_filesystem_io_request_wait
        (synapse_filesystem_opaque_reference
            (pIoReq));
}

bool
    synapse_filesystem_io_request_wait_until
        (synapse_filesystem_io_request pIoReq, uint32_t pWaitTime)
{
    return
        __synapse_filesystem_io_request_wait_until
            (synapse_filesystem_opaque_reference
                (pIoReq), pWaitTime);
}