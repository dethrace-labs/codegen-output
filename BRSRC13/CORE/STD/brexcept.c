#include "brexcept.h"

br_exception_handler *_BrExceptionHandler;
void *exceptionValue;

// Offset: 18
// Size: 0x51
//IDA: br_exception_handler* __cdecl _BrExceptionBegin()
br_exception_handler* _BrExceptionBegin() {
    br_exception_handler *h;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 115
// Size: 0x55
//IDA: void __cdecl _BrExceptionEnd()
void _BrExceptionEnd() {
    br_exception_handler *old;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 218
// Size: 0x6b
//IDA: void __cdecl _BrExceptionThrow(br_int_32 type, void *value)
void _BrExceptionThrow(br_int_32 type, void *value) {
    br_exception_handler h;
    br_exception_handler *old;
    LOG_TRACE("(%d, %p)", type, value);
    NOT_IMPLEMENTED();
}

// Offset: 348
// Size: 0x40
//IDA: br_exception __cdecl _BrExceptionValueFetch(br_exception type, void **evp)
br_exception _BrExceptionValueFetch(br_exception type, void **evp) {
    LOG_TRACE("(%d, %p)", type, evp);
    NOT_IMPLEMENTED();
}

// Offset: 433
// Size: 0x29
//IDA: void* __cdecl _BrExceptionResource()
void* _BrExceptionResource() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

