#ifndef _STDDIAG_H_
#define _STDDIAG_H_

#include "dr_types.h"
#include "br_types.h"

extern br_diaghandler BrStdioDiagHandler; // addr: 000221E4
extern br_diaghandler *_BrDefaultDiagHandler; // addr: 000221F0

// Offset: 15
// Size: 0x4e
//IDA: void __cdecl BrStdioWarning(char *message)
void BrStdioWarning(char *message);

// Offset: 108
// Size: 0x5d
//IDA: void __cdecl BrStdioFailure(char *message)
void BrStdioFailure(char *message);

#endif
