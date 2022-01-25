#ifndef _ERROR_H_
#define _ERROR_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 15
// Size: 0x37
//IDA: br_error __cdecl BrLastErrorGet(void **valuep)
br_error BrLastErrorGet(void **valuep);

// Offset: 85
// Size: 0x2e
//IDA: void __cdecl BrLastErrorSet(br_error type, void *value)
void BrLastErrorSet(br_error type, void *value);

#endif
