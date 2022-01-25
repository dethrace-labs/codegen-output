#include "diag.h"

char _diag_scratch[128];

// Offset: 10
// Size: 0x76
//IDA: void __cdecl BrFailure(char *s, ...)
void BrFailure(char *s, ...) {
    va_list args;
    static char failure_header[10];
    LOG_TRACE("(\"%s\")", s);
    NOT_IMPLEMENTED();
}

// Offset: 138
// Size: 0x76
//IDA: void __cdecl BrWarning(char *s, ...)
void BrWarning(char *s, ...) {
    va_list args;
    static char warning_header[10];
    LOG_TRACE("(\"%s\")", s);
    NOT_IMPLEMENTED();
}

// Offset: 264
// Size: 0x84
//IDA: void __cdecl BrFatal(char *name, int line, char *s, ...)
void BrFatal(char *name, int line, char *s, ...) {
    va_list args;
    int n;
    LOG_TRACE("(\"%s\", %d, \"%s\")", name, line, s);
    NOT_IMPLEMENTED();
}

// Offset: 406
// Size: 0x5f
//IDA: void __cdecl _BrAssert(char *condition, char *file, unsigned int line)
void _BrAssert(char *condition, char *file, unsigned int line) {
    LOG_TRACE("(\"%s\", \"%s\", %d)", condition, file, line);
    NOT_IMPLEMENTED();
}

// Offset: 512
// Size: 0x5f
//IDA: void __cdecl _BrUAssert(char *condition, char *file, unsigned int line)
void _BrUAssert(char *condition, char *file, unsigned int line) {
    LOG_TRACE("(\"%s\", \"%s\", %d)", condition, file, line);
    NOT_IMPLEMENTED();
}

