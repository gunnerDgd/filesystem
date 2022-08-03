#include <filesystem/io_request/io_request_init.h>
#include <filesystem/io_request/details/fs_ioreq_init.h>

synapse_filesystem_io_request
    synapse_filesystem_io_request_initialize
        (void*  pIoMemory, 
         size_t pIoSize, 
         size_t pIoOffset,
         void (*pIoCompletionRoutine)(size_t, synapse_filesystem_io_request, void*),
         void  *pIoCompletionRoutineParam)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_io_request, hnd_ioreq,
            __synapse_filesystem_io_request_initialize
                (pIoMemory, pIoSize, pIoOffset,
                    pIoCompletionRoutine, pIoCompletionRoutineParam));
    
    return
        hnd_ioreq;
}

synapse_filesystem_io_request
    synapse_filesystem_io_request_initialize_from_existing
        (synapse_filesystem_io_request pIoReq,
         void*                         pIoMemory, 
         size_t                        pIoSize, 
         size_t                        pIoOffset,
         void(*pIoCompletionRoutine)(size_t, synapse_filesystem_io_request, void*),
         void *pIoCompletionRoutineParam)
{
    __synapse_filesystem_io_request_initialize_from_existing
        (synapse_filesystem_opaque_reference(pIoReq), 
            pIoMemory, pIoSize, pIoOffset,
                pIoCompletionRoutine, pIoCompletionRoutineParam);
    
    return
        pIoReq;
}

void
    synapse_filesystem_io_request_cleanup
        (synapse_filesystem_io_request pIoReq)
{
    __synapse_filesystem_io_request_cleanup
        (synapse_filesystem_opaque_reference
            (pIoReq));
}