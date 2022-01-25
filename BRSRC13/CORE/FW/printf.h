#ifndef _PRINTF_H_
#define _PRINTF_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 10
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSprintf(char *buf, char *fmt, ...)
br_int_32 BrSprintf(char *buf, char *fmt, ...);

// Offset: 96
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSprintfN(char *buf, br_size_t buf_size, char *fmt, ...)
br_int_32 BrSprintfN(char *buf, br_size_t buf_size, char *fmt, ...);

// Offset: 183
// Size: 0x61
//IDA: int __cdecl BrLogPrintf(char *fmt, ...)
int BrLogPrintf(char *fmt, ...);

// Offset: 289
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSScanf(char *str, char *fmt, ...)
br_int_32 BrSScanf(char *str, char *fmt, ...);

#endif
