#include "SOSALLOC.C"


// Offset: 0
// Size: 0x15
//IDA: void __cdecl sosModule1Start()
void sosModule1Start() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21
// Size: 0x66
//IDA: PSTR __usercall sosAlloc@<EAX>(W32 wSize@<EAX>)
PSTR sosAlloc(W32 wSize) {
    PSTR pBuffer;
    LOG_TRACE("(%d)", wSize);
    NOT_IMPLEMENTED();
}

// Offset: 123
// Size: 0x48
//IDA: void __usercall sosFree(PSTR pMem@<EAX>, W32 wSize@<EDX>)
void sosFree(PSTR pMem, W32 wSize) {
    LOG_TRACE("(%d, %d)", pMem, wSize);
    NOT_IMPLEMENTED();
}

// Offset: 195
// Size: 0x20
//IDA: void __usercall sosSetMemAllocFunction(PSTR (*pFunction)(DWORD)@<EAX>)
void sosSetMemAllocFunction(PSTR (*pFunction)(DWORD)) {
    LOG_TRACE("(%p)", pFunction);
    NOT_IMPLEMENTED();
}

// Offset: 227
// Size: 0x20
//IDA: void __usercall sosSetMemFreeFunction(void (*pFunction)(PSTR, W32)@<EAX>)
void sosSetMemFreeFunction(void (*pFunction)(PSTR, W32)) {
    LOG_TRACE("(%p)", pFunction);
    NOT_IMPLEMENTED();
}

// Offset: 259
// Size: 0x15
//IDA: void __cdecl sosModule1End()
void sosModule1End() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

