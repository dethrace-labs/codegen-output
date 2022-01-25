#ifndef _HIMAGE_H_
#define _HIMAGE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 14
// Size: 0x28
//IDA: void* __cdecl HostImageLoad(char *name)
void* HostImageLoad(char *name);

// Offset: 70
// Size: 0x1e
//IDA: void __cdecl HostImageUnload(void *image)
void HostImageUnload(void *image);

// Offset: 120
// Size: 0x28
//IDA: void* __cdecl HostImageLookupName(void *img, char *name, br_uint_32 hint)
void* HostImageLookupName(void *img, char *name, br_uint_32 hint);

// Offset: 183
// Size: 0x28
//IDA: void* __cdecl HostImageLookupOrdinal(void *img, br_uint_32 ordinal)
void* HostImageLookupOrdinal(void *img, br_uint_32 ordinal);

#endif
