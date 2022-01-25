#include "SOSINIT.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule6Start()
void sosModule6Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x4c9
//IDA: W32 __usercall sosDIGIInitDriver@<EAX>(PSOSDIGIDRIVER pDriver@<EAX>, HANDLE *pHandle@<EDX>)
W32 sosDIGIInitDriver(PSOSDIGIDRIVER pDriver, HANDLE *pHandle) {
    HANDLE hDriver;
    W32 wIndex;
    W32 wError;
    LOG_TRACE("(%d, %p)", pDriver, pHandle);
    NOT_IMPLEMENTED();
}

// Offset: 1246
// Size: 0x1dd
//IDA: W32 __usercall sosDIGIUnInitDriver@<EAX>(HANDLE hDriver@<EAX>, BOOL wFreeDMA@<EDX>, BOOL wFreeDriver@<EBX>)
W32 sosDIGIUnInitDriver(HANDLE hDriver, BOOL wFreeDMA, BOOL wFreeDriver) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d, %d, %d)", hDriver, wFreeDMA, wFreeDriver);
    NOT_IMPLEMENTED();
}

// Offset: 1723
// Size: 0xf5
//IDA: PSTR __usercall sosDIGIAllocDMABuffer@<EAX>(W32 wSize@<EAX>, DWORD *pPhysical@<EDX>, W32 *pRealSeg@<EBX>, LPSTR *pFarPtr@<ECX>)
PSTR sosDIGIAllocDMABuffer(W32 wSize, DWORD *pPhysical, W32 *pRealSeg, LPSTR *pFarPtr) {
    W32 wSelector;
    LOG_TRACE("(%d, %p, %p, %p)", wSize, pPhysical, pRealSeg, pFarPtr);
    NOT_IMPLEMENTED();
}

// Offset: 1968
// Size: 0x11f
//IDA: W32 __usercall sosAllocVDSPage@<EAX>(LPSTR *lpBufferPtr@<EAX>, W32 *wRealSeg@<EDX>, DWORD *dwPhysAddress@<EBX>)
W32 sosAllocVDSPage(LPSTR *lpBufferPtr, W32 *wRealSeg, DWORD *dwPhysAddress) {
    W32 wDosSeg;
    W32 wDosSegNormal;
    W32 wTempSelector;
    _SOS_VDS_STRUCT *lpVDS;
    LONG dwPhysAddrTemp;
    W32 wError;
    W32 wLinear;
    LOG_TRACE("(%p, %p, %p)", lpBufferPtr, wRealSeg, dwPhysAddress);
    NOT_IMPLEMENTED();
}

// Offset: 2255
// Size: 0x74
//IDA: void __usercall sosFreeVDSPage(W32 wSelector@<EAX>, W32 wRealSeg@<EDX>, LONG dwPhysAddress@<EBX>)
void sosFreeVDSPage(W32 wSelector, W32 wRealSeg, LONG dwPhysAddress) {
    _SOS_VDS_STRUCT *lpVDS;
    W32 wTempSelector;
    W32 wDosSeg;
    LOG_TRACE("(%d, %d, %d)", wSelector, wRealSeg, dwPhysAddress);
    NOT_IMPLEMENTED();
}

// Offset: 2371
// Size: 0x23
//IDA: void __cdecl sosDIGIMixFunction0()
void sosDIGIMixFunction0() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2406
// Size: 0x23
//IDA: void __cdecl sosDIGIMixFunction1()
void sosDIGIMixFunction1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2441
// Size: 0x23
//IDA: void __cdecl sosDIGIMixFunction2()
void sosDIGIMixFunction2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2476
// Size: 0x23
//IDA: void __cdecl sosDIGIMixFunction3()
void sosDIGIMixFunction3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2511
// Size: 0x23
//IDA: void __cdecl sosDIGIMixFunction4()
void sosDIGIMixFunction4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2546
// Size: 0x15
//IDA: void __cdecl sosModule6End()
void sosModule6End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

