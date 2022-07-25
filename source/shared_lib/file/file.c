#include <filesystem/export/file/file.h>

#include <filesystem/file/file_init.h>
#include <filesystem/file/file_manip.h>

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_open
            (const char* pFileName)
{
    return
        synapse_filesystem_file_initialize_with_open
            (pFileName);
}

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_open_wchar
            (const wchar_t* pFileName)
{
    return
        synapse_filesystem_file_initialize_with_open_wchar
            (pFileName);
}

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_create
            (const char* pFileName)
{
    return
        synapse_filesystem_file_initialize_with_create
            (pFileName);
}

synapse_filesystem_dll
    synapse_file
        synapse_initialize_file_with_create_wchar
            (const wchar_t* pFileName)
{
    return
        synapse_filesystem_file_initialize_with_create_wchar
            (pFileName);
}

synapse_filesystem_dll
    void
        synapse_cleanup_file
            (synapse_file pFile)
{
    synapse_filesystem_file_cleanup
        (pFile);
}

synapse_filesystem_dll
    size_t
        synapse_read_from_file
            (synapse_file pFile, void* pIoMemory, size_t pIoSize)
{
    return
        synapse_filesystem_file_read_from
            (pFile, pIoMemory, pIoSize);
}

synapse_filesystem_dll
    size_t
        synapse_write_to_file
            (synapse_file pFile, void* pIoMemory, size_t pIoSize)
{
    return
        synapse_filesystesm_file_write_to
            (pFile, pIoMemory, pIoSize);
}

synapse_filesystem_dll
    size_t
        synapse_assign_file_cursor
            (synapse_file pFile, size_t pCursor)
{
    return
        synapse_filesystem_file_assign_cursor
            (pFile, pCursor);
}

synapse_filesystem_dll
    size_t
        synapse_retrieve_file_cursor
            (synapse_file pFile)
{
    return
        synapse_filesystem_file_retrieve_cursor
            (pFile);
}
