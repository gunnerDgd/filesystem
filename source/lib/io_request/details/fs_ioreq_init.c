#include <filesystem/io_request/details/fs_ioreq_init.h>
#include <synapse/memory/memory.h>

__synapse_filesystem_io_request*
    __synapse_filesystem_io_request_initialize
        (void*  pIoMemory, 
         size_t pIoSize, 
         size_t pIoOffset,
         void (*pIoCompletionRoutine)(synapse_filesystem_io_request))
{
    __synapse_filesystem_io_request*
        ptr_ioreq
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_io_request));
    
    ptr_ioreq->hnd_ioreq.hEvent
        = CreateEvent(NULL, FALSE, FALSE, NULL);
    ptr_ioreq->hnd_ioreq.Offset
        = pIoOffset & 0xFFFFFFFF;
    ptr_ioreq->hnd_ioreq.OffsetHigh
        = pIoOffset >> 32;
    
    ptr_ioreq->ptr_ioreq_memory
        = pIoMemory;
    ptr_ioreq->ptr_ioreq_size
        = pIoSize;
    ptr_ioreq->ptr_ioreq_completion_routine
        = pIoCompletionRoutine;
    
    return
        ptr_ioreq;
}

__synapse_filesystem_io_request*
    __synapse_filesystem_io_request_initialize_from_existing
        (__synapse_filesystem_io_request* pIoReq,
         void*                            pIoMemory, 
         size_t                           pIoSize, 
         size_t                           pIoOffset,
         void(*pIoCompletionRoutine)(synapse_filesystem_io_request))
{
    pIoReq->hnd_ioreq.Offset
        = pIoOffset & 0xFFFFFFFF;
    pIoReq->hnd_ioreq.OffsetHigh
        = pIoOffset >> 32;
    
    pIoReq->ptr_ioreq_completion_routine
        = pIoCompletionRoutine;
    pIoReq->ptr_ioreq_memory
        = pIoMemory;
    pIoReq->ptr_ioreq_size
        = pIoSize;
    
    return
        pIoReq;
}

void
    __synapse_filesystem_io_request_cleanup
        (__synapse_filesystem_io_request* pIoReq)
{
    CloseHandle
        (pIoReq->hnd_ioreq.hEvent);
    synapse_system_deallocate
        (pIoReq);
}