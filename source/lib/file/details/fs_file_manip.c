#include <filesystem/file/details/fs_file_manip.h>
#include <Windows.h>

size_t
    __synapse_filesystem_file_read_from
        (__synapse_filesystem_file* pFile, 
         void*                      pIoMemory, 
         size_t                     pIoSize)
{
    DWORD
        sz_rdfrom = 0;
    BOOL
        res_rdfrom
            = ReadFile
                    (pFile->hnd_file, pIoMemory, pIoSize,
                        &sz_rdfrom, 0);
    
    return
        sz_rdfrom;
}

size_t
    __synapse_filesystem_file_write_to
        (__synapse_filesystem_file* pFile, 
         void*                      pIoMemory, 
         size_t                     pIoSize)
{
    DWORD
        sz_writeto = 0;
    BOOL
        res_writeto
            = WriteFile
                    (pFile->hnd_file, pIoMemory, pIoSize,
                        &sz_writeto, 0);
    
    return
        sz_writeto;
}

size_t
    __synapse_filesystem_file_assign_cursor
        (__synapse_filesystem_file* pFile, size_t pCursor)
{
    LARGE_INTEGER
        ptr_cursor
            = { .QuadPart = pCursor },
        ptr_prev_cursor;

    BOOL
        res_assign
            = SetFilePointerEx
                    (pFile->hnd_file, ptr_cursor,
                        &ptr_prev_cursor, FILE_BEGIN);
    
    return
        ptr_prev_cursor.QuadPart;
}

size_t
    __synapse_filesystem_file_retrieve_cursor
        (__synapse_filesystem_file* pFile)
{
    LARGE_INTEGER
        ptr_cursor
            = { .QuadPart = 0 },
        ptr_prev_cursor;

    BOOL
        res_assign
            = SetFilePointerEx
                    (pFile->hnd_file, ptr_cursor,
                        &ptr_prev_cursor, FILE_CURRENT);
}