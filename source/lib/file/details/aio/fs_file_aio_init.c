#include <filesystem/file/details/aio/fs_file_aio_init.h>

#include <synapse/memory/memory.h>
#include <Windows.h>

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_open
        (const char* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));

    ptr_file->hnd_file
        = CreateFileA
                (pFilePath, GENERIC_ALL, 0, 0, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_open_wchar
        (const wchar_t* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));
        
    ptr_file->hnd_file
        = CreateFileW
                (pFilePath, GENERIC_ALL, 0, 0, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);
    
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_create
        (const char* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));

    ptr_file->hnd_file
        = CreateFileA
                (pFilePath, GENERIC_ALL, 0, 0, CREATE_NEW, FILE_FLAG_OVERLAPPED, 0);
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_aio_initialize_with_create_wchar
        (const wchar_t* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));
        
    ptr_file->hnd_file
        = CreateFileW
                (pFilePath, GENERIC_ALL, 0, 0, CREATE_NEW, FILE_FLAG_OVERLAPPED, 0);
    
    return
        ptr_file;
}