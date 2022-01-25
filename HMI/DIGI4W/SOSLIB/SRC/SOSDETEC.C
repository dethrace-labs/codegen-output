#include "SOSDETEC.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule4Start()
void sosModule4Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x14d
//IDA: W32 __usercall sosDIGIDetectInit@<EAX>(PSTR pDriverPath@<EAX>)
W32 sosDIGIDetectInit(PSTR pDriverPath) {
    LONG dwFileSize;
    W32 wFileHeaderSize;
    LOG_TRACE("(%d)", pDriverPath);
    NOT_IMPLEMENTED();
}

// Offset: 354
// Size: 0x88
//IDA: W32 __cdecl sosDIGIDetectUnInit()
W32 sosDIGIDetectUnInit() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 490
// Size: 0x27e
//IDA: W32 __usercall sosDIGIDetectFindHardware@<EAX>(W32 wID@<EAX>, PSOSDIGIDRIVER pDriver@<EDX>)
W32 sosDIGIDetectFindHardware(W32 wID, PSOSDIGIDRIVER pDriver) {
    W32 wLoaded;
    W32 wPort;
    DWORD dwFileIndex;
    W32 wBytesRead;
    W32 wSize;
    W32 wEnvStringIndex;
    PSTR pEnvString;
    LOG_TRACE("(%d, %d)", wID, pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 1128
// Size: 0x17a
//IDA: W32 __usercall sosDIGIDetectGetCaps@<EAX>(W32 wID@<EAX>, PSOSDIGIDRIVER pDriver@<EDX>)
W32 sosDIGIDetectGetCaps(W32 wID, PSOSDIGIDRIVER pDriver) {
    W32 wSize;
    BOOL wLoaded;
    DWORD dwFileIndex;
    W32 wBytesRead;
    LOG_TRACE("(%d, %d)", wID, pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 1506
// Size: 0x244
//IDA: W32 __usercall sosDIGIDetectFindFirst@<EAX>(PSOSDIGIDRIVER pDriver@<EAX>)
W32 sosDIGIDetectFindFirst(PSOSDIGIDRIVER pDriver) {
    W32 wSize;
    W32 wLoaded;
    W32 wPort;
    DWORD dwFileIndex;
    W32 wBytesRead;
    W32 wEnvStringIndex;
    PSTR pEnvString;
    LOG_TRACE("(%d)", pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 2086
// Size: 0x218
//IDA: W32 __usercall sosDIGIDetectFindNext@<EAX>(PSOSDIGIDRIVER pDriver@<EAX>)
W32 sosDIGIDetectFindNext(PSOSDIGIDRIVER pDriver) {
    W32 wSize;
    W32 wLoaded;
    W32 wPort;
    DWORD dwFileIndex;
    W32 wBytesRead;
    W32 wEnvStringIndex;
    PSTR pEnvString;
    LOG_TRACE("(%d)", pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 2622
// Size: 0x186
//IDA: W32 __usercall sosDIGIDetectGetSettings@<EAX>(PSOSDIGIDRIVER pDriver@<EAX>)
W32 sosDIGIDetectGetSettings(PSOSDIGIDRIVER pDriver) {
    W32 wIndex;
    LOG_TRACE("(%d)", pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 3012
// Size: 0xbe
//IDA: W32 __usercall sosDIGIDetectVerifySettings@<EAX>(PSOSDIGIDRIVER pDriver@<EAX>)
W32 sosDIGIDetectVerifySettings(PSOSDIGIDRIVER pDriver) {
    W32 wPort;
    W32 wIRQ;
    W32 wDMA;
    W32 wSize;
    W32 wBytesRead;
    W32 wError;
    LOG_TRACE("(%d)", pDriver);
    NOT_IMPLEMENTED();
}

// Offset: 3202
// Size: 0x15
//IDA: void __cdecl sosModule4End()
void sosModule4End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

