#include "himage.h"


// Offset: 14
// Size: 0x28
//IDA: void* __cdecl HostImageLoad(char *name)
void* HostImageLoad(char *name) {
    LOG_TRACE("(\"%s\")", name);
    NOT_IMPLEMENTED();
}

// Offset: 70
// Size: 0x1e
//IDA: void __cdecl HostImageUnload(void *image)
void HostImageUnload(void *image) {
    LOG_TRACE("(%p)", image);
    NOT_IMPLEMENTED();
}

// Offset: 120
// Size: 0x28
//IDA: void* __cdecl HostImageLookupName(void *img, char *name, br_uint_32 hint)
void* HostImageLookupName(void *img, char *name, br_uint_32 hint) {
    LOG_TRACE("(%p, \"%s\", %d)", img, name, hint);
    NOT_IMPLEMENTED();
}

// Offset: 183
// Size: 0x28
//IDA: void* __cdecl HostImageLookupOrdinal(void *img, br_uint_32 ordinal)
void* HostImageLookupOrdinal(void *img, br_uint_32 ordinal) {
    LOG_TRACE("(%p, %d)", img, ordinal);
    NOT_IMPLEMENTED();
}

