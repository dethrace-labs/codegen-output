#ifndef _HOOK_H_
#define _HOOK_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 18
// Size: 0xa8
//IDA: br_error __cdecl HostInterruptHook(host_interrupt_hook *h, br_uint_8 vector, br_uint_32 off, br_uint_16 sel)
br_error HostInterruptHook(host_interrupt_hook *h, br_uint_8 vector, br_uint_32 off, br_uint_16 sel);

// Offset: 206
// Size: 0x7c
//IDA: br_error __cdecl HostInterruptUnhook(host_interrupt_hook *h)
br_error HostInterruptUnhook(host_interrupt_hook *h);

// Offset: 348
// Size: 0xa8
//IDA: br_error __cdecl HostExceptionHook(host_exception_hook *h, br_uint_8 exception, br_uint_32 off, br_uint_16 sel)
br_error HostExceptionHook(host_exception_hook *h, br_uint_8 exception, br_uint_32 off, br_uint_16 sel);

// Offset: 536
// Size: 0x7c
//IDA: br_error __cdecl HostExceptionUnhook(host_exception_hook *h)
br_error HostExceptionUnhook(host_exception_hook *h);

#endif
