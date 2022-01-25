#include "error.h"


// Offset: 15
// Size: 0x37
//IDA: br_error __cdecl BrLastErrorGet(void **valuep)
br_error BrLastErrorGet(void **valuep) {
    LOG_TRACE("(%p)", valuep);
    NOT_IMPLEMENTED();
}

// Offset: 85
// Size: 0x2e
//IDA: void __cdecl BrLastErrorSet(br_error type, void *value)
void BrLastErrorSet(br_error type, void *value) {
    LOG_TRACE("(%d, %p)", type, value);
    NOT_IMPLEMENTED();
}

