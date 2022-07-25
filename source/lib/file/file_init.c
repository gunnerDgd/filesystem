#include <filesystem/file/file_init.h>
#include <filesystem/file/details/fs_file_init.h>

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_open
        (const char* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file, hnd_file,
            __synapse_filesystem_file_initialize_with_open
                (pFileName));

    return
        hnd_file;
}

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_open_wchar
        (const wchar_t* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file, hnd_file,
            __synapse_filesystem_file_initialize_with_open_wchar
                (pFileName));
    
    return
        hnd_file;
}

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_create
        (const char* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file, hnd_file,
            __synapse_filesystem_file_initialize_with_create
                (pFileName));

    return
        hnd_file;
}

synapse_filesystem_file
    synapse_filesystem_file_initialize_with_create_wchar
        (const wchar_t* pFileName)
{
    synapse_filesystem_opaque_init
        (synapse_filesystem_file, hnd_file,
            __synapse_filesystem_file_initialize_with_create_wchar
                (pFileName));
    
    return
        hnd_file;
}

void
    synapse_filesystem_file_cleanup
        (synapse_filesystem_file pFile)
{
    __synapse_filesystem_file_cleanup
        (synapse_filesystem_opaque_reference
            (pFile));
}