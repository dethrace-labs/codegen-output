#ifndef _HSTSETUP_H_
#define _HSTSETUP_H_

#include "dr_types.h"
#include "br_types.h"

extern char *namePointers_BRHOST1[50]; // addr: 00022610
extern br_uint_16 nameOrdinals_BRHOST1[50]; // addr: 000226D8
extern void *functionPointers_BRHOST1[50]; // addr: 0002273C
extern br_image Image_BRHOST1; // addr: 00022804
extern host_info hostInfo; // addr: 00022844

// Offset: 10
// Size: 0x31
//IDA: void __cdecl HostBegin()
void HostBegin();

// Offset: 67
// Size: 0x31
//IDA: void __cdecl HostEnd()
void HostEnd();

// Offset: 125
// Size: 0x7d
//IDA: br_error __cdecl HostInfo(host_info *buffer, br_size_t buffersize)
br_error HostInfo(host_info *buffer, br_size_t buffersize);

#endif
