#ifndef _FWSETUP_H_
#define _FWSETUP_H_

#include "dr_types.h"
#include "br_types.h"

extern br_resource_class resourceClasses__fwsetup[25]; // addr: 0001BC9C // suffix added to avoid duplicate symbol
extern char *namePointers_BRCORE1[185]; // addr: 0001BE90
extern br_uint_16 nameOrdinals_BRCORE1[185]; // addr: 0001C174
extern void *functionPointers_BRCORE1[185]; // addr: 0001C2E6
extern br_image Image_BRCORE1; // addr: 0001C5CA
extern br_framework_state fw; // addr: 00045240

// Offset: 10
// Size: 0x144
//IDA: br_error __cdecl BrFwBegin()
br_error BrFwBegin();

// Offset: 342
// Size: 0x6b
//IDA: br_error __cdecl BrFwEnd()
br_error BrFwEnd();

// Offset: 466
// Size: 0x49
//IDA: br_diaghandler* __cdecl BrDiagHandlerSet(br_diaghandler *newdh)
br_diaghandler* BrDiagHandlerSet(br_diaghandler *newdh);

// Offset: 555
// Size: 0x49
//IDA: br_filesystem* __cdecl BrFilesystemSet(br_filesystem *newfs)
br_filesystem* BrFilesystemSet(br_filesystem *newfs);

// Offset: 643
// Size: 0x49
//IDA: br_allocator* __cdecl BrAllocatorSet(br_allocator *newal)
br_allocator* BrAllocatorSet(br_allocator *newal);

#endif
