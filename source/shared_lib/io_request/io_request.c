#include <filesystem/export/io_request/io_request.h>

#include <filesystem/io_request/io_request_init.h>
#include <filesystem/io_request/io_request_manip.h>

synapse_filesystem_dll
    synapse_filesystem_io_request
        synapse_initialize_filesystem_io_request
            (void*  pIoMemory, 
             size_t pIoSize, 
             size_t pIoOffset,
             void (*pIoCompletionRoutine)(size_t, synapse_filesystem_io_request))
{
    return
        synapse_filesystem_io_request_initialize
            (pIoMemory, pIoSize, pIoOffset, pIoCompletionRoutine);
}

synapse_filesystem_dll
    synapse_filesystem_io_request
        synapse_initialize_filesystem_io_request_from_existing
            (synapse_filesystem_io_request pIoRequest,
             void*  pIoMemory, 
             size_t pIoSize, 
             size_t pIoOffset,
             void (*pIoCompletionRoutine)(size_t, synapse_filesystem_io_request))
{
    return
        synapse_filesystem_io_request_initialize_from_existing
            (pIoRequest, pIoMemory, pIoSize,
                pIoOffset, pIoCompletionRoutine);
}

synapse_filesystem_dll
    void
        synapse_cleanup_filesystem_io_request
            (synapse_filesystem_io_request pIoRequest)
{
    synapse_filesystem_io_request_cleanup
        (pIoRequest);
}

synapse_filesystem_dll
    void
        synapse_wait_filesystsem_io_request
            (synapse_filesystem_io_request pIoRequest)
{
    synapse_filesystem_io_request_wait
        (pIoRequest);
}

synapse_filesystem_dll
    bool
        synapse_wait_filesystsem_io_request_until
            (synapse_filesystem_io_request pIoRequest, uint32_t pWaitTime)
{
    return
        synapse_filesystem_io_request_wait_until
            (pIoRequest, pWaitTime);
}