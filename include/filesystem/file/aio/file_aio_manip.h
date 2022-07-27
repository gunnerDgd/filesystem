#pragma once
#include <filesystem/interface/file/file.h>
#include <filesystem/interface/io_request.h>

void
    synapse_filesystem_file_aio_read_from
        (synapse_filesystem_file_aio, synapse_filesystem_io_request);

void
    synapse_filesystem_file_aio_write_to
        (synapse_filesystem_file_aio, synapse_filesystem_io_request);