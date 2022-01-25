#ifndef _LOGWRITE_H_
#define _LOGWRITE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 11
// Size: 0x37
//IDA: int __cdecl BrLogWrite(void *buffer, br_size_t s, br_size_t n)
int BrLogWrite(void *buffer, br_size_t s, br_size_t n);

#endif
