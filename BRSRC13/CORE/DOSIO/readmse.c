#include "readmse.h"

unsigned char mouseHandler[245];
br_boolean mouseActive;
host_real_memory mouseMemory;
 // Suffix added to avoid duplicate symbol
host_regs regs__readmse;

// Offset: 14
// Size: 0x166
//IDA: br_error __cdecl DOSMouseBegin()
br_error DOSMouseBegin() {
    host_info hi;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 384
// Size: 0x5c
//IDA: void __cdecl DOSMouseEnd()
void DOSMouseEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 489
// Size: 0xd9
//IDA: br_error __cdecl DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons)
br_error DOSMouseRead(br_int_32 *mouse_x, br_int_32 *mouse_y, br_uint_32 *mouse_buttons) {
    br_int_16 mx;
    br_int_16 my;
    static br_int_16 ox;
    static br_int_16 oy;
    LOG_TRACE("(%p, %p, %p)", mouse_x, mouse_y, mouse_buttons);
    NOT_IMPLEMENTED();
}

