#include <filesystem/file/details/aio/fs_file_aio_manip.h>

void 
    __synapse_filesystem_file_aio_completion_routine
        (uint32_t pErrorCode, 
         uint32_t pCompletionSize, 
         __synapse_filesystem_io_request* pIoRequest)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_io_request, hnd_ioreq,
            pIoRequest);
    
    pIoRequest->ptr_ioreq_completion_routine
        (pCompletionSize, hnd_ioreq);
}

void
    __synapse_filesystem_file_aio_read_from
        (__synapse_filesystem_file*       pFile, 
         __synapse_filesystem_io_request* pIoRequest)
{
    BOOL
        res_rdfrom
            = ReadFileEx
                (pFile->hnd_file, pIoRequest->ptr_ioreq_memory, 
                    pIoRequest->ptr_ioreq_size, pIoRequest, 
                        &__synapse_filesystem_file_aio_completion_routine);
}

void
    __synapse_filesystem_file_aio_write_to
        (__synapse_filesystem_file*       pFile, 
         __synapse_filesystem_io_request* pIoRequest)
{
    BOOL
        res_rdfrom
            = WriteFileEx
                (pFile->hnd_file, pIoRequest->ptr_ioreq_memory, 
                    pIoRequest->ptr_ioreq_size, pIoRequest, 
                        &__synapse_filesystem_file_aio_completion_routine);
}