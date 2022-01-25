#include "bswap.h"


// Offset: 9
// Size: 0x51
//IDA: br_uint_32 __cdecl BrSwap32(br_uint_32 l)
br_uint_32 BrSwap32(br_uint_32 l) {
    struct {		// size: 0x4
        unsigned long l;		// @0x0
        unsigned char c[4];		// @0x0
    } u;
    LOG_TRACE("(%d)", l);
    NOT_IMPLEMENTED();
}

// Offset: 99
// Size: 0x40
//IDA: br_uint_16 __cdecl BrSwap16(br_uint_16 s)
br_uint_16 BrSwap16(br_uint_16 s) {
    struct {		// size: 0x2
        unsigned short s;		// @0x0
        unsigned char c[2];		// @0x0
    } u;
    LOG_TRACE("(%d)", s);
    NOT_IMPLEMENTED();
}

// Offset: 175
// Size: 0x5c
//IDA: br_float __cdecl BrSwapFloat(br_float f)
br_float BrSwapFloat(br_float f) {
    struct {		// size: 0x4
        br_float f;		// @0x0
        unsigned char c[4];		// @0x0
    } u;
    LOG_TRACE("(%f)", f);
    NOT_IMPLEMENTED();
}

// Offset: 279
// Size: 0x30d
//IDA: void* __cdecl BrSwapBlock(void *block, int count, int size)
void* BrSwapBlock(void *block, int count, int size) {
    br_uint_8 *cp;
    int i;
    int k;
    LOG_TRACE("(%p, %d, %d)", block, count, size);
    NOT_IMPLEMENTED();
}

