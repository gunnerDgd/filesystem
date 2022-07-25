#include <filesystem/file/aio/file_aio_init.h>
#include <filesystem/file/details/aio/fs_file_aio_init.h>
#include <filesystem/file/details/fs_file_init.h>

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_open
        (const char* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file_aio, hnd_aio,
            __synapse_filesystem_file_aio_initialize_with_open
                (pFileName));
    
    return hnd_aio;
}

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_open_wchar
        (const wchar_t* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file_aio, hnd_aio,
            __synapse_filesystem_file_aio_initialize_with_open_wchar
                (pFileName));
    
    return
        hnd_aio;
}

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_create
        (const char* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file_aio, hnd_aio,
            __synapse_filesystem_file_aio_initialize_with_create
                (pFileName));
    
    return hnd_aio;
}

synapse_filesystem_file_aio
    synapse_filesystem_file_aio_initialize_with_create_wchar
        (const wchar_t* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file_aio, hnd_aio,
            __synapse_filesystem_file_aio_initialize_with_create_wchar
                (pFileName));
    
    return hnd_aio;
}

void
    synapse_filesystem_file_aio_cleanup
        (synapse_filesystem_file_aio pAioFile)
{
    __synapse_filesystem_file_cleanup
        (synapse_filesystem_opaque_reference
            (pAioFile));
}