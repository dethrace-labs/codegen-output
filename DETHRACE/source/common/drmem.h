#ifndef _DRMEM_H_
#define _DRMEM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_allocator gAllocator; // addr: 0000E928
extern int gNon_fatal_allocation_errors; // addr: 0000E93C
extern char *gMem_names[247]; // addr: 0000E940
extern br_resource_class gStainless_classes[118]; // addr: 00029C70

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl SetNonFatalAllocationErrors()
void SetNonFatalAllocationErrors();

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl ResetNonFatalAllocationErrors()
void ResetNonFatalAllocationErrors();

// Offset: 88
// Size: 0x44
//IDA: int __cdecl AllocationErrorsAreFatal()
int AllocationErrorsAreFatal();

// Offset: 156
// Size: 0x22
//IDA: void __cdecl MAMSInitMem()
void MAMSInitMem();

// Offset: 192
// Size: 0x26
//IDA: void __usercall PrintMemoryDump(int pFlags@<EAX>, char *pTitle@<EDX>)
void PrintMemoryDump(int pFlags, char *pTitle);

// Offset: 232
// Size: 0xa9
//IDA: void* __cdecl DRStdlibAllocate(br_size_t size, br_uint_8 type)
void* DRStdlibAllocate(br_size_t size, br_uint_8 type);

// Offset: 404
// Size: 0x26
//IDA: void __cdecl DRStdlibFree(void *mem)
void DRStdlibFree(void *mem);

// Offset: 444
// Size: 0x28
//IDA: br_size_t __cdecl DRStdlibInquire(br_uint_8 type)
br_size_t DRStdlibInquire(br_uint_8 type);

// Offset: 484
// Size: 0x28
//IDA: br_uint_32 __cdecl Claim4ByteAlignment(br_uint_8 type)
br_uint_32 Claim4ByteAlignment(br_uint_8 type);

// Offset: 524
// Size: 0x30
//IDA: void __cdecl InstallDRMemCalls()
void InstallDRMemCalls();

// Offset: 572
// Size: 0x3b
//IDA: void __usercall MAMSUnlock(void **pPtr@<EAX>)
void MAMSUnlock(void **pPtr);

// Offset: 632
// Size: 0x25
//IDA: void __usercall MAMSLock(void **pPtr@<EAX>)
void MAMSLock(void **pPtr);

// Offset: 672
// Size: 0x7c
//IDA: void __cdecl CreateStainlessClasses()
void CreateStainlessClasses();

// Offset: 796
// Size: 0x22
//IDA: void __cdecl CheckMemory()
void CheckMemory();

#endif
