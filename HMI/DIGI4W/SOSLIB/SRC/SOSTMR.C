#include "SOSTMR.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule11Start()
void sosModule11Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0xe0
//IDA: W32 __usercall sosTIMERInitSystem@<EAX>(W32 wTimerRate@<EAX>, W32 wDebugFlags@<EDX>)
W32 sosTIMERInitSystem(W32 wTimerRate, W32 wDebugFlags) {
    W32 wTempHandle;
    LOG_TRACE("(%d, %d)", wTimerRate, wDebugFlags);
    NOT_IMPLEMENTED();
}

// Offset: 245
// Size: 0x3a
//IDA: W32 __usercall sosTIMERUnInitSystem@<EAX>(W32 wTimerRate@<EAX>)
W32 sosTIMERUnInitSystem(W32 wTimerRate) {
    LOG_TRACE("(%d)", wTimerRate);
    NOT_IMPLEMENTED();
}

// Offset: 303
// Size: 0x1f4
//IDA: W32 __usercall sosTIMERRegisterEvent@<EAX>(W32 wRate@<EAX>, void (*pfnEvent)()@<EDX>, HANDLE *pHandle@<EBX>)
W32 sosTIMERRegisterEvent(W32 wRate, void (*pfnEvent)(), HANDLE *pHandle) {
    W32 wIndex;
    W32 wHandle;
    W32 wChangeFraction;
    W32 wTemp;
    LOG_TRACE("(%d, %p, %p)", wRate, pfnEvent, pHandle);
    NOT_IMPLEMENTED();
}

// Offset: 803
// Size: 0x16b
//IDA: W32 __usercall sosTIMERAlterEventRate@<EAX>(HANDLE hEvent@<EAX>, W32 wRate@<EDX>)
W32 sosTIMERAlterEventRate(HANDLE hEvent, W32 wRate) {
    W32 wIndex;
    LOG_TRACE("(%d, %d)", hEvent, wRate);
    NOT_IMPLEMENTED();
}

// Offset: 1166
// Size: 0x19e
//IDA: W32 __usercall sosTIMERRemoveEvent@<EAX>(HANDLE hEvent@<EAX>)
W32 sosTIMERRemoveEvent(HANDLE hEvent) {
    W32 wIndex;
    W32 wFastestRate;
    LOG_TRACE("(%d)", hEvent);
    NOT_IMPLEMENTED();
}

// Offset: 1580
// Size: 0x2a
//IDA: W32 __usercall sosTIMERGetEventRate@<EAX>(HANDLE hEvent@<EAX>)
W32 sosTIMERGetEventRate(HANDLE hEvent) {
    LOG_TRACE("(%d)", hEvent);
    NOT_IMPLEMENTED();
}

// Offset: 1622
// Size: 0x36
//IDA: W32 __usercall sosTIMERSetRate@<EAX>(W32 wRate@<EAX>)
W32 sosTIMERSetRate(W32 wRate) {
    LOG_TRACE("(%d)", wRate);
    NOT_IMPLEMENTED();
}

// Offset: 1676
// Size: 0xa3
//IDA: void __cdecl sosTIMERHandler()
void sosTIMERHandler() {
    W32 wIndex;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1839
// Size: 0x1a
//IDA: void __cdecl sosTIMEROldHandler()
void sosTIMEROldHandler() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1865
// Size: 0x15
//IDA: void __cdecl sosModule11End()
void sosModule11End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

