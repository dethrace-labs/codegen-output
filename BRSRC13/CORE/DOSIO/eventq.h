#ifndef _EVENTQ_H_
#define _EVENTQ_H_

#include "dr_types.h"
#include "br_types.h"

extern int _DOSEventQEnabled; // addr: 00022880
extern host_real_memory _DOSEventMemory; // addr: 00049154

// Offset: 14
// Size: 0xc8
//IDA: br_error __cdecl DOSEventBegin()
br_error DOSEventBegin();

// Offset: 226
// Size: 0x3f
//IDA: void __cdecl DOSEventEnd()
void DOSEventEnd();

// Offset: 302
// Size: 0x197
//IDA: br_boolean __cdecl DOSEventWait(dosio_event *event, br_boolean block)
br_boolean DOSEventWait(dosio_event *event, br_boolean block);

#endif
