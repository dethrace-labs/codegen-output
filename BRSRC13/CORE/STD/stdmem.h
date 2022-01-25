#ifndef _STDMEM_H_
#define _STDMEM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_allocator BrStdlibAllocator; // addr: 0002222C
extern br_allocator *_BrDefaultAllocator; // addr: 00022240

// Offset: 17
// Size: 0x50
//IDA: void* __cdecl BrStdlibAllocate(br_size_t size, br_uint_8 type)
void* BrStdlibAllocate(br_size_t size, br_uint_8 type);

// Offset: 110
// Size: 0x26
//IDA: void __cdecl BrStdlibFree(void *mem)
void BrStdlibFree(void *mem);

// Offset: 164
// Size: 0x28
//IDA: br_size_t __cdecl BrStdlibInquire(br_uint_8 type)
br_size_t BrStdlibInquire(br_uint_8 type);

// Offset: 218
// Size: 0x28
//IDA: br_uint_32 __cdecl BrStdlibAlign(br_uint_8 type)
br_uint_32 BrStdlibAlign(br_uint_8 type);

#endif
