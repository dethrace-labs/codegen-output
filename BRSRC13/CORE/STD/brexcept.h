#ifndef _BREXCEPT_H_
#define _BREXCEPT_H_

#include "dr_types.h"
#include "br_types.h"

extern br_exception_handler *_BrExceptionHandler; // addr: 000221E0
extern void *exceptionValue; // addr: 00048D20

// Offset: 18
// Size: 0x51
//IDA: br_exception_handler* __cdecl _BrExceptionBegin()
br_exception_handler* _BrExceptionBegin();

// Offset: 115
// Size: 0x55
//IDA: void __cdecl _BrExceptionEnd()
void _BrExceptionEnd();

// Offset: 218
// Size: 0x6b
//IDA: void __cdecl _BrExceptionThrow(br_int_32 type, void *value)
void _BrExceptionThrow(br_int_32 type, void *value);

// Offset: 348
// Size: 0x40
//IDA: br_exception __cdecl _BrExceptionValueFetch(br_exception type, void **evp)
br_exception _BrExceptionValueFetch(br_exception type, void **evp);

// Offset: 433
// Size: 0x29
//IDA: void* __cdecl _BrExceptionResource()
void* _BrExceptionResource();

#endif
