#pragma once
#include <Windows.h>
#include <filesystem/interface/io_request.h>

typedef struct
    __synapse_filesystem_io_request
{
    OVERLAPPED
        hnd_ioreq;
    void*
        ptr_ioreq_memory;
    size_t
        ptr_ioreq_size  ;
    void
        (*ptr_ioreq_completion_routine)
            (size_t, synapse_filesystem_io_request, void*);
    void*
         ptr_ioreq_param;
} __synapse_filesystem_io_request;

