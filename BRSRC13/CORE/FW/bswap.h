#ifndef _BSWAP_H_
#define _BSWAP_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 9
// Size: 0x51
//IDA: br_uint_32 __cdecl BrSwap32(br_uint_32 l)
br_uint_32 BrSwap32(br_uint_32 l);

// Offset: 99
// Size: 0x40
//IDA: br_uint_16 __cdecl BrSwap16(br_uint_16 s)
br_uint_16 BrSwap16(br_uint_16 s);

// Offset: 175
// Size: 0x5c
//IDA: br_float __cdecl BrSwapFloat(br_float f)
br_float BrSwapFloat(br_float f);

// Offset: 279
// Size: 0x30d
//IDA: void* __cdecl BrSwapBlock(void *block, int count, int size)
void* BrSwapBlock(void *block, int count, int size);

#endif
