#ifndef _HOSTCFG_H_
#define _HOSTCFG_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 18
// Size: 0x28
//IDA: char* __cdecl HostDefaultDevice()
char* HostDefaultDevice();

// Offset: 79
// Size: 0x28
//IDA: br_boolean __cdecl HostIniSectionExists(char *ini_file, char *section_name)
br_boolean HostIniSectionExists(char *ini_file, char *section_name);

// Offset: 132
// Size: 0x36
//IDA: br_error __cdecl HostIniQuery(char *ini_file, char *section_name, char *entry, char *Buffer, int max, br_uint_16 *size)
br_error HostIniQuery(char *ini_file, char *section_name, char *entry, char *Buffer, int max, br_uint_16 *size);

// Offset: 204
// Size: 0x36
//IDA: br_error __cdecl HostRegistryQuery(void *hKey, char *Path, char *entry, char *Buffer, br_uint_16 max, br_uint_16 *size)
br_error HostRegistryQuery(void *hKey, char *Path, char *entry, char *Buffer, br_uint_16 max, br_uint_16 *size);

#endif
