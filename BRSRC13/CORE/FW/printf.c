#include "printf.h"


// Offset: 10
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSprintf(char *buf, char *fmt, ...)
br_int_32 BrSprintf(char *buf, char *fmt, ...) {
    int n;
    va_list args;
    LOG_TRACE("(\"%s\", \"%s\")", buf, fmt);
    NOT_IMPLEMENTED();
}

// Offset: 96
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSprintfN(char *buf, br_size_t buf_size, char *fmt, ...)
br_int_32 BrSprintfN(char *buf, br_size_t buf_size, char *fmt, ...) {
    int n;
    va_list args;
    LOG_TRACE("(\"%s\", %d, \"%s\")", buf, buf_size, fmt);
    NOT_IMPLEMENTED();
}

// Offset: 183
// Size: 0x61
//IDA: int __cdecl BrLogPrintf(char *fmt, ...)
int BrLogPrintf(char *fmt, ...) {
    int n;
    va_list args;
    LOG_TRACE("(\"%s\")", fmt);
    NOT_IMPLEMENTED();
}

// Offset: 289
// Size: 0x4b
//IDA: br_int_32 __cdecl BrSScanf(char *str, char *fmt, ...)
br_int_32 BrSScanf(char *str, char *fmt, ...) {
    int n;
    va_list args;
    LOG_TRACE("(\"%s\", \"%s\")", str, fmt);
    NOT_IMPLEMENTED();
}

