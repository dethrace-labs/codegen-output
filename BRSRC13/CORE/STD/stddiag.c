#include "stddiag.h"

br_diaghandler BrStdioDiagHandler;
br_diaghandler *_BrDefaultDiagHandler;

// Offset: 15
// Size: 0x4e
//IDA: void __cdecl BrStdioWarning(char *message)
void BrStdioWarning(char *message) {
    LOG_TRACE("(\"%s\")", message);
    NOT_IMPLEMENTED();
}

// Offset: 108
// Size: 0x5d
//IDA: void __cdecl BrStdioFailure(char *message)
void BrStdioFailure(char *message) {
    LOG_TRACE("(\"%s\")", message);
    NOT_IMPLEMENTED();
}

