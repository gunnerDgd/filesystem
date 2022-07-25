#include <filesystem/file/file_manip.h>
#include <filesystem/file/details/fs_file_manip.h>

size_t
    synapse_filesystem_file_read_from
        (synapse_filesystem_file pFile, 
         void*                   pIoMemory, 
         size_t                  pIoSize)
{
    return
        __synapse_filesystem_file_read_from
            (synapse_filesystem_opaque_reference
                (pFile), pIoMemory, pIoSize);
}

size_t
    synapse_filesystesm_file_write_to
        (synapse_filesystem_file pFile, 
         void*                   pIoMemory, 
         size_t                  pIoSize)
{
    return
        __synapse_filesystem_file_write_to
            (synapse_filesystem_opaque_reference
                (pFile), pIoMemory, pIoSize);
}

size_t
    synapse_filesystem_file_assign_cursor
        (synapse_filesystem_file pFile, size_t pOffset)
{
    return
        __synapse_filesystem_file_assign_cursor
            (synapse_filesystem_opaque_reference
                (pFile), pOffset);
}

size_t
    synapse_filesystem_file_retrieve_cursor
        (synapse_filesystem_file pFile)
{
    return
        __synapse_filesystem_file_retrieve_cursor
            (synapse_filesystem_opaque_reference
                (pFile));
}