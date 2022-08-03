#pragma once
#include <filesystem/interface/io_request.h>

synapse_filesystem_io_request
    synapse_filesystem_io_request_initialize
        (void*, size_t, size_t,
            void(*)(size_t, synapse_filesystem_io_request, void*),
                void*);

synapse_filesystem_io_request
    synapse_filesystem_io_request_initialize_from_existing
        (synapse_filesystem_io_request,
            void*, size_t, size_t,
                void(*)(size_t, synapse_filesystem_io_request, void*),
                    void*);

void
    synapse_filesystem_io_request_cleanup
        (synapse_filesystem_io_request); 