#include "pixelmap.h"


// Offset: 19
// Size: 0x41
//IDA: br_pixelmap* __cdecl BrPixelmapAllocate(br_uint_8 type, br_int_32 w, br_int_32 h, void *pixels, int flags)
br_pixelmap* BrPixelmapAllocate(br_uint_8 type, br_int_32 w, br_int_32 h, void *pixels, int flags) {
    LOG_TRACE("(%d, %d, %d, %p, %d)", type, w, h, pixels, flags);
    NOT_IMPLEMENTED();
}

