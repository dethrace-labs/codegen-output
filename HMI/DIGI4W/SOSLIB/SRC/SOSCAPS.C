#include "SOSCAPS.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule2Start()
void sosModule2Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x86
//IDA: W32 __usercall sosDIGIGetDeviceCaps@<EAX>(HANDLE hDriver@<EAX>, PSOSCAPABILITIES pCaps@<EDX>)
W32 sosDIGIGetDeviceCaps(HANDLE hDriver, PSOSCAPABILITIES pCaps) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d, %d)", hDriver, pCaps);
    NOT_IMPLEMENTED();
}

// Offset: 155
// Size: 0x15
//IDA: void __cdecl sosModule2End()
void sosModule2End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

