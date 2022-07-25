#pragma once

#ifdef synapse_filesystem_export_mode
#define synapse_filesystem_dll _declspec(dllexport)
#else
#define synapse_filesystem_dll _declspec(dllimport)
#endif