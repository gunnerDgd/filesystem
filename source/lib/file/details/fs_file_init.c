#include <filesystem/file/details/fs_file_init.h>

#include <synapse/memory/memory.h>
#include <Windows.h>

__synapse_filesystem_file*
    __synapse_filesystem_file_initialize_with_open
        (const char* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));

    ptr_file->hnd_file
        = CreateFileA
                (pFilePath, GENERIC_ALL, 0, 0, OPEN_EXISTING, 0, 0);
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_initialize_with_open_wchar
        (const wchar_t* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));
        
    ptr_file->hnd_file
        = CreateFileW
                (pFilePath, GENERIC_ALL, 0, 0, OPEN_EXISTING, 0, 0);
    
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_initialize_with_create
        (const char* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));

    ptr_file->hnd_file
        = CreateFileA
                (pFilePath, GENERIC_ALL, 0, 0, CREATE_NEW, 0, 0);
    return
        ptr_file;
}

__synapse_filesystem_file*
    __synapse_filesystem_file_initialize_with_create_wchar
        (const wchar_t* pFilePath)
{
    __synapse_filesystem_file*
        ptr_file
            = synapse_system_allocate
                    (sizeof(__synapse_filesystem_file));
        
    ptr_file->hnd_file
        = CreateFileW
                (pFilePath, GENERIC_ALL, 0, 0, CREATE_NEW, 0, 0);
    
    return
        ptr_file;
}

void
    __synapse_filesystem_file_cleanup
        (__synapse_filesystem_file* pFile)
{
    CloseHandle
        (pFile->hnd_file);
    synapse_system_deallocate
        (pFile);
}