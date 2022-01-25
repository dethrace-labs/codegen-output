#include "SOSSTART.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule9Start()
void sosModule9Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x183
//IDA: W32 __usercall sosDIGIStartSample@<EAX>(HANDLE hDriver@<EAX>, PSOSSAMPLE pSample@<EDX>)
W32 sosDIGIStartSample(HANDLE hDriver, PSOSSAMPLE pSample) {
    W32 wIndex;
    PSOSSAMPLE pNode;
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d, %d)", hDriver, pSample);
    NOT_IMPLEMENTED();
}

// Offset: 408
// Size: 0x72
//IDA: W32 __usercall sosDIGIStopSample@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIStopSample(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 522
// Size: 0x71
//IDA: W32 __usercall sosDIGIStopAllSamples@<EAX>(HANDLE hDriver@<EAX>)
W32 sosDIGIStopAllSamples(HANDLE hDriver) {
    PSOSDIGIDRIVER pDriver;
    W32 wIndex;
    LOG_TRACE("(%d)", hDriver);
    NOT_IMPLEMENTED();
}

// Offset: 635
// Size: 0x15
//IDA: void __cdecl sosModule9End()
void sosModule9End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

