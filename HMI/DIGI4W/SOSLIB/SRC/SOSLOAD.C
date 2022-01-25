#include "SOSLOAD.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule7Start()
void sosModule7Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x1e7
//IDA: W32 __usercall sosDIGILoadDriver@<EAX>(W32 wID@<EAX>, HANDLE hDriver@<EDX>, LPSTR *pDriverCS@<EBX>, LPSTR *pDriverDS@<ECX>, PSTR pMemHandle, PSTR pSize, W32 *pLinear)
W32 sosDIGILoadDriver(W32 wID, HANDLE hDriver, LPSTR *pDriverCS, LPSTR *pDriverDS, PSTR pMemHandle, PSTR pSize, W32 *pLinear) {
    HANDLE hFile;
    W32 wIndex;
    W32 wLoaded;
    W32 wBytesRead;
    LOG_TRACE("(%d, %d, %p, %p, %d, %d, %p)", wID, hDriver, pDriverCS, pDriverDS, pMemHandle, pSize, pLinear);
    NOT_IMPLEMENTED();
}

// Offset: 508
// Size: 0xc6
//IDA: W32 __usercall sosDIGIUnLoadDriver@<EAX>(HANDLE hDriver@<EAX>)
W32 sosDIGIUnLoadDriver(HANDLE hDriver) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d)", hDriver);
    NOT_IMPLEMENTED();
}

// Offset: 706
// Size: 0x15
//IDA: void __cdecl sosModule7End()
void sosModule7End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

