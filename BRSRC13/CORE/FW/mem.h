#ifndef _MEM_H_
#define _MEM_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 14
// Size: 0x99
//IDA: void* __cdecl BrMemAllocate(br_size_t size, br_uint_8 type)
void* BrMemAllocate(br_size_t size, br_uint_8 type);

// Offset: 177
// Size: 0x6a
//IDA: void __cdecl BrMemFree(void *block)
void BrMemFree(void *block);

// Offset: 296
// Size: 0x83
//IDA: br_size_t __cdecl BrMemInquire(br_uint_8 type)
br_size_t BrMemInquire(br_uint_8 type);

// Offset: 438
// Size: 0x74
//IDA: br_int_32 __cdecl BrMemAlign(br_uint_8 type)
br_int_32 BrMemAlign(br_uint_8 type);

// Offset: 566
// Size: 0xa1
//IDA: void* __cdecl BrMemCalloc(int nelems, br_size_t size, br_uint_8 type)
void* BrMemCalloc(int nelems, br_size_t size, br_uint_8 type);

// Offset: 739
// Size: 0x78
//IDA: char* __cdecl BrMemStrDup(char *str)
char* BrMemStrDup(char *str);

#endif
