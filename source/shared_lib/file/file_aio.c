#include <filesystem/export/file/file_aio.h>

#include <filesystem/file/aio/file_aio_init.h>
#include <filesystem/file/aio/file_aio_manip.h>

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_open
            (const char* pFileName)
{
    return
        synapse_filesystem_file_aio_initialize_with_open
            (pFileName);
}

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_open_wchar
            (const wchar_t* pFileName)
{
    return
        synapse_filesystem_file_aio_initialize_with_open_wchar
            (pFileName);
}

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_create
            (const char* pFileName)
{
    return
        synapse_filesystem_file_aio_initialize_with_create
            (pFileName);
}

synapse_filesystem_dll
    synapse_file_aio
        synapse_initialize_file_aio_with_create_wchar
            (const wchar_t* pFileName)
{
    return
        synapse_filesystem_file_aio_initialize_with_create_wchar
            (pFileName);
}

synapse_filesystem_dll
    void
        synapse_cleanup_file_aio
            (synapse_file_aio pAioFile)
{
    synapse_filesystem_file_aio_cleanup
        (pAioFile);
}

synapse_filesystem_dll
    void
        synapse_read_from_file_aio
            (synapse_file_aio pAioFile, synapse_filesystem_io_request pIoRequest)
{
    synapse_filesystem_file_aio_read_from
        (pAioFile, pIoRequest);
}

synapse_filesystem_dll
    void
        synapse_write_to_file_aio
            (synapse_file_aio pAioFile, synapse_filesystem_io_request pIoRequest)
{
    synapse_filesystem_file_aio_write_to
        (pAioFile, pIoRequest);
}