#pragma once
#include <filesystem/defines/export/export.h>
#include <filesystem/export/interface/io_request.h>

#include <stdint.h>
#include <stddef.h>

#include <stdbool.h>

synapse_filesystem_dll
    synapse_filesystem_io_request
        synapse_initialize_filesystem_io_request
            (void*, size_t, size_t,
                void(*)(size_t, synapse_filesystem_io_request, void*),
                    void*);

synapse_filesystem_dll
    synapse_filesystem_io_request
        synapse_initialize_filesystem_io_request_from_existing
            (synapse_filesystem_io_request,
                void*, size_t, size_t,
                    void(*)(size_t, synapse_filesystem_io_request, void*),
                        void*);

synapse_filesystem_dll
    void
        synapse_cleanup_filesystem_io_request
            (synapse_filesystem_io_request);

synapse_filesystem_dll
    void
        synapse_wait_filesystsem_io_request
            (synapse_filesystem_io_request);

synapse_filesystem_dll
    bool
        synapse_wait_filesystsem_io_request_until
            (synapse_filesystem_io_request, uint32_t);