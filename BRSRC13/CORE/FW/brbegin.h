#ifndef _BRBEGIN_H_
#define _BRBEGIN_H_

#include "dr_types.h"
#include "br_types.h"

extern br_boolean active; // addr: 000225F8

// Offset: 8
// Size: 0x58
//IDA: br_error __cdecl BrBegin()
br_error BrBegin();

// Offset: 102
// Size: 0x7e
//IDA: br_error __cdecl BrEnd()
br_error BrEnd();

#endif
