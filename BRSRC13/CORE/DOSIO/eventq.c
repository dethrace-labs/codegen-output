#include "eventq.h"

int _DOSEventQEnabled;
host_real_memory _DOSEventMemory;

// Offset: 14
// Size: 0xc8
//IDA: br_error __cdecl DOSEventBegin()
br_error DOSEventBegin() {
    host_info hi;
    int s;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 226
// Size: 0x3f
//IDA: void __cdecl DOSEventEnd()
void DOSEventEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 302
// Size: 0x197
//IDA: br_boolean __cdecl DOSEventWait(dosio_event *event, br_boolean block)
br_boolean DOSEventWait(dosio_event *event, br_boolean block) {
    int t;
    LOG_TRACE("(%p, %d)", event, block);
    NOT_IMPLEMENTED();
}

