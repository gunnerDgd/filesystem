#pragma once
#include <filesystem/io_request/details/fs_ioreq_type.h>

__synapse_filesystem_io_request*
    __synapse_filesystem_io_request_initialize
        (void*, size_t, size_t,
            void(*)(size_t, synapse_filesystem_io_request, void*),
                void*);

__synapse_filesystem_io_request*
    __synapse_filesystem_io_request_initialize_from_existing
        (__synapse_filesystem_io_request*, 
            void*, size_t, size_t,
                void(*)(size_t, synapse_filesystem_io_request, void*),
                    void*);

void
    __synapse_filesystem_io_request_cleanup
        (__synapse_filesystem_io_request*);