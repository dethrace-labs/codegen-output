#include "SOSCNTL.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule3Start()
void sosModule3Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x42
//IDA: W32 __usercall sosDIGIGetDMAPosition@<EAX>(HANDLE hDriver@<EAX>)
W32 sosDIGIGetDMAPosition(HANDLE hDriver) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d)", hDriver);
    NOT_IMPLEMENTED();
}

// Offset: 87
// Size: 0x39
//IDA: W32 __usercall sosDIGISetMasterVolume@<EAX>(HANDLE hDriver@<EAX>, W32 wVolume@<EDX>)
W32 sosDIGISetMasterVolume(HANDLE hDriver, W32 wVolume) {
    W32 wOldVolume;
    LOG_TRACE("(%d, %d)", hDriver, wVolume);
    NOT_IMPLEMENTED();
}

// Offset: 144
// Size: 0x88
//IDA: W32 __usercall sosDIGISetSampleVolume@<EAX>(HANDLE hDriver@<EAX>, W32 hSample@<EDX>, W32 wVolume@<EBX>)
W32 sosDIGISetSampleVolume(HANDLE hDriver, W32 hSample, W32 wVolume) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    W32 wOldVolume;
    LOG_TRACE("(%d, %d, %d)", hDriver, hSample, wVolume);
    NOT_IMPLEMENTED();
}

// Offset: 280
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetSampleVolume@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetSampleVolume(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 398
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetBytesProcessed@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetBytesProcessed(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 516
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetLoopCount@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetLoopCount(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 634
// Size: 0x86
//IDA: W32 __usercall sosDIGISetPanLocation@<EAX>(HANDLE hDriver@<EAX>, W32 hSample@<EDX>, W32 wPos@<EBX>)
W32 sosDIGISetPanLocation(HANDLE hDriver, W32 hSample, W32 wPos) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    W32 wOldPan;
    LOG_TRACE("(%d, %d, %d)", hDriver, hSample, wPos);
    NOT_IMPLEMENTED();
}

// Offset: 768
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetPanLocation@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetPanLocation(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 886
// Size: 0x86
//IDA: W32 __usercall sosDIGISetSampleRate@<EAX>(HANDLE hDriver@<EAX>, W32 hSample@<EDX>, W32 wRate@<EBX>)
W32 sosDIGISetSampleRate(HANDLE hDriver, W32 hSample, W32 wRate) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    W32 wOldRate;
    LOG_TRACE("(%d, %d, %d)", hDriver, hSample, wRate);
    NOT_IMPLEMENTED();
}

// Offset: 1020
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetSampleRate@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetSampleRate(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 1138
// Size: 0x76
//IDA: W32 __usercall sosDIGIGetPanSpeed@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetPanSpeed(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 1256
// Size: 0x64
//IDA: W32 __usercall sosDIGIGetSampleID@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
W32 sosDIGIGetSampleID(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 1356
// Size: 0x8d
//IDA: W32 __usercall sosDIGIGetSampleHandle@<EAX>(HANDLE hDriver@<EAX>, W32 wID@<EDX>)
W32 sosDIGIGetSampleHandle(HANDLE hDriver, W32 wID) {
    PSOSDIGIDRIVER pDriver;
    W32 wIndex;
    LOG_TRACE("(%d, %d)", hDriver, wID);
    NOT_IMPLEMENTED();
}

// Offset: 1497
// Size: 0x42
//IDA: W32 __usercall sosDIGISamplesPlaying@<EAX>(HANDLE hDriver@<EAX>)
W32 sosDIGISamplesPlaying(HANDLE hDriver) {
    PSOSDIGIDRIVER pDriver;
    LOG_TRACE("(%d)", hDriver);
    NOT_IMPLEMENTED();
}

// Offset: 1563
// Size: 0x7a
//IDA: BOOL __usercall sosDIGISampleDone@<EAX>(HANDLE hDriver@<EAX>, HANDLE hSample@<EDX>)
BOOL sosDIGISampleDone(HANDLE hDriver, HANDLE hSample) {
    PSOSDIGIDRIVER pDriver;
    PSOSSAMPLE pSample;
    LOG_TRACE("(%d, %d)", hDriver, hSample);
    NOT_IMPLEMENTED();
}

// Offset: 1685
// Size: 0x15
//IDA: void __cdecl sosModule3End()
void sosModule3End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

