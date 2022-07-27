#pragma once
#include <filesystem/io_request/details/fs_ioreq_type.h>

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

void
    __synapse_filesystem_io_request_wait
        (__synapse_filesystem_io_request*);

bool
    __synapse_filesystem_io_request_wait_until
        (__synapse_filesystem_io_request*, uint32_t);