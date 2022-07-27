#pragma once
#include <filesystem/interface/io_request.h>

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void
    synapse_filesystem_io_request_wait
        (synapse_filesystem_io_request);

bool
    synapse_filesystem_io_request_wait_until
        (synapse_filesystem_io_request, uint32_t);