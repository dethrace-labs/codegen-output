#ifndef _SCRATCH_H_
#define _SCRATCH_H_

#include "dr_types.h"
#include "br_types.h"

extern char scratchString[512]; // addr: 0001CCC0

// Offset: 18
// Size: 0x99
//IDA: void* __cdecl BrScratchAllocate(br_size_t size)
void* BrScratchAllocate(br_size_t size);

// Offset: 185
// Size: 0x48
//IDA: void __cdecl BrScratchFree(void *scratch)
void BrScratchFree(void *scratch);

// Offset: 272
// Size: 0x60
//IDA: void __cdecl BrScratchFlush()
void BrScratchFlush();

// Offset: 385
// Size: 0x29
//IDA: br_size_t __cdecl BrScratchInquire()
br_size_t BrScratchInquire();

// Offset: 442
// Size: 0x28
//IDA: char* __cdecl BrScratchString()
char* BrScratchString();

// Offset: 502
// Size: 0x28
//IDA: br_size_t __cdecl BrScratchStringSize()
br_size_t BrScratchStringSize();

#endif
