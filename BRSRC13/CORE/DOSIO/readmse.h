#ifndef _READMSE_H_
#define _READMSE_H_

#include "dr_types.h"
#include "br_types.h"

extern unsigned char mouseHandler[245]; // addr: 0001CB78
extern br_boolean mouseActive; // addr: 0001CC6D
extern host_real_memory mouseMemory; // addr: 00045C88
extern host_regs regs__readmse; // addr: 00045C94 // suffix added to avoid duplicate symbol

// Offset: 14
// Size: 0x166
//IDA: br_error __cdecl DOSMouseBegin()
br_error DOSMouseBegin();

// Offset: 384
// Size: 0x5c
//IDA: void __cdecl DOSMouseEnd()
void DOSMouseEnd();

// Offset: 489
// Size: 0xd9
//IDA: br_error __cdecl DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons)
br_error DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons);

#endif
