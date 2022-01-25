#include "mem.h"


// Offset: 14
// Size: 0x99
//IDA: void* __cdecl BrMemAllocate(br_size_t size, br_uint_8 type)
void* BrMemAllocate(br_size_t size, br_uint_8 type) {
    void *b;
    LOG_TRACE("(%d, %d)", size, type);
    NOT_IMPLEMENTED();
}

// Offset: 177
// Size: 0x6a
//IDA: void __cdecl BrMemFree(void *block)
void BrMemFree(void *block) {
    LOG_TRACE("(%p)", block);
    NOT_IMPLEMENTED();
}

// Offset: 296
// Size: 0x83
//IDA: br_size_t __cdecl BrMemInquire(br_uint_8 type)
br_size_t BrMemInquire(br_uint_8 type) {
    br_size_t i;
    LOG_TRACE("(%d)", type);
    NOT_IMPLEMENTED();
}

// Offset: 438
// Size: 0x74
//IDA: br_int_32 __cdecl BrMemAlign(br_uint_8 type)
br_int_32 BrMemAlign(br_uint_8 type) {
    br_int_32 i;
    LOG_TRACE("(%d)", type);
    NOT_IMPLEMENTED();
}

// Offset: 566
// Size: 0xa1
//IDA: void* __cdecl BrMemCalloc(int nelems, br_size_t size, br_uint_8 type)
void* BrMemCalloc(int nelems, br_size_t size, br_uint_8 type) {
    void *b;
    LOG_TRACE("(%d, %d, %d)", nelems, size, type);
    NOT_IMPLEMENTED();
}

// Offset: 739
// Size: 0x78
//IDA: char* __cdecl BrMemStrDup(char *str)
char* BrMemStrDup(char *str) {
    int l;
    char *nstr;
    LOG_TRACE("(\"%s\")", str);
    NOT_IMPLEMENTED();
}

