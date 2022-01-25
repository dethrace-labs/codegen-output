#include "stdmem.h"

br_allocator BrStdlibAllocator;
br_allocator *_BrDefaultAllocator;

// Offset: 17
// Size: 0x50
//IDA: void* __cdecl BrStdlibAllocate(br_size_t size, br_uint_8 type)
void* BrStdlibAllocate(br_size_t size, br_uint_8 type) {
    void *m;
    LOG_TRACE("(%d, %d)", size, type);
    NOT_IMPLEMENTED();
}

// Offset: 110
// Size: 0x26
//IDA: void __cdecl BrStdlibFree(void *mem)
void BrStdlibFree(void *mem) {
    LOG_TRACE("(%p)", mem);
    NOT_IMPLEMENTED();
}

// Offset: 164
// Size: 0x28
//IDA: br_size_t __cdecl BrStdlibInquire(br_uint_8 type)
br_size_t BrStdlibInquire(br_uint_8 type) {
    LOG_TRACE("(%d)", type);
    NOT_IMPLEMENTED();
}

// Offset: 218
// Size: 0x28
//IDA: br_uint_32 __cdecl BrStdlibAlign(br_uint_8 type)
br_uint_32 BrStdlibAlign(br_uint_8 type) {
    LOG_TRACE("(%d)", type);
    NOT_IMPLEMENTED();
}

