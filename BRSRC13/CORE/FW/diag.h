#ifndef _DIAG_H_
#define _DIAG_H_

#include "dr_types.h"
#include "br_types.h"

extern char _diag_scratch[128]; // addr: 00044C40

// Offset: 10
// Size: 0x76
//IDA: void __cdecl BrFailure(char *s, ...)
void BrFailure(char *s, ...);

// Offset: 138
// Size: 0x76
//IDA: void __cdecl BrWarning(char *s, ...)
void BrWarning(char *s, ...);

// Offset: 264
// Size: 0x84
//IDA: void __cdecl BrFatal(char *name, int line, char *s, ...)
void BrFatal(char *name, int line, char *s, ...);

// Offset: 406
// Size: 0x5f
//IDA: void __cdecl _BrAssert(char *condition, char *file, unsigned int line)
void _BrAssert(char *condition, char *file, unsigned int line);

// Offset: 512
// Size: 0x5f
//IDA: void __cdecl _BrUAssert(char *condition, char *file, unsigned int line)
void _BrUAssert(char *condition, char *file, unsigned int line);

#endif
