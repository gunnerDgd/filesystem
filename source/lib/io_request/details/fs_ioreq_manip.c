#include <filesystem/io_request/details/fs_ioreq_manip.h>

void
    __synapse_filesystem_io_request_wait
        (__synapse_filesystem_io_request* pIoReq)
{
    WaitForSingleObject
        (pIoReq->hnd_ioreq.hEvent, INFINITE);
}

bool
    __synapse_filesystem_io_request_wait_until
        (__synapse_filesystem_io_request* pIoReq, uint32_t pWaitTime)
{
    return
        (WaitForSingleObject
            (pIoReq->hnd_ioreq.hEvent, pWaitTime) == WAIT_OBJECT_0)
                ? true : false;
}