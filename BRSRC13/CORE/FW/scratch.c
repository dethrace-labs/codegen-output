#include "scratch.h"

char scratchString[512];

// Offset: 18
// Size: 0x99
//IDA: void* __cdecl BrScratchAllocate(br_size_t size)
void* BrScratchAllocate(br_size_t size) {
    LOG_TRACE("(%d)", size);
    NOT_IMPLEMENTED();
}

// Offset: 185
// Size: 0x48
//IDA: void __cdecl BrScratchFree(void *scratch)
void BrScratchFree(void *scratch) {
    LOG_TRACE("(%p)", scratch);
    NOT_IMPLEMENTED();
}

// Offset: 272
// Size: 0x60
//IDA: void __cdecl BrScratchFlush()
void BrScratchFlush() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 385
// Size: 0x29
//IDA: br_size_t __cdecl BrScratchInquire()
br_size_t BrScratchInquire() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 442
// Size: 0x28
//IDA: char* __cdecl BrScratchString()
char* BrScratchString() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 502
// Size: 0x28
//IDA: br_size_t __cdecl BrScratchStringSize()
br_size_t BrScratchStringSize() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

