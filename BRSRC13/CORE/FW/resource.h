#ifndef _RESOURCE_H_
#define _RESOURCE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 10
// Size: 0xbc
//IDA: void* __usercall ResToUser@<EAX>(resource_header *r@<EAX>)
void* ResToUser(resource_header *r);

// Offset: 208
// Size: 0x48
//IDA: resource_header* __usercall UserToRes@<EAX>(void *r@<EAX>)
resource_header* UserToRes(void *r);

// Offset: 294
// Size: 0x1cb
//IDA: void* __cdecl BrResAllocate(void *vparent, br_size_t size, br_uint_8 res_class)
void* BrResAllocate(void *vparent, br_size_t size, br_uint_8 res_class);

// Offset: 771
// Size: 0x16f
//IDA: void __usercall BrResInternalFree(resource_header *res@<EAX>, br_boolean callback@<EDX>)
void BrResInternalFree(resource_header *res, br_boolean callback);

// Offset: 1148
// Size: 0x4f
//IDA: void __cdecl BrResFree(void *vres)
void BrResFree(void *vres);

// Offset: 1247
// Size: 0x4c
//IDA: void __cdecl BrResFreeNoCallback(void *vres)
void BrResFreeNoCallback(void *vres);

// Offset: 1332
// Size: 0x103
//IDA: void* __cdecl BrResAdd(void *vparent, void *vres)
void* BrResAdd(void *vparent, void *vres);

// Offset: 1603
// Size: 0x8d
//IDA: void* __cdecl BrResRemove(void *vres)
void* BrResRemove(void *vres);

// Offset: 1755
// Size: 0x84
//IDA: br_uint_8 __cdecl BrResClass(void *vres)
br_uint_8 BrResClass(void *vres);

// Offset: 1900
// Size: 0x10a
//IDA: br_boolean __cdecl BrResIsChild(void *vparent, void *vchild)
br_boolean BrResIsChild(void *vparent, void *vchild);

// Offset: 2176
// Size: 0xb1
//IDA: br_uint_32 __cdecl BrResSize(void *vres)
br_uint_32 BrResSize(void *vres);

// Offset: 2366
// Size: 0x50
//IDA: br_uint_32 __cdecl ResSizeTotal(void *vres, br_uint_32 *ptotal)
br_uint_32 ResSizeTotal(void *vres, br_uint_32 *ptotal);

// Offset: 2461
// Size: 0x3e
//IDA: br_uint_32 __cdecl BrResSizeTotal(void *vres)
br_uint_32 BrResSizeTotal(void *vres);

// Offset: 2538
// Size: 0xe2
//IDA: br_uint_32 __cdecl BrResChildEnum(void *vres, br_resenum_cbfn *callback, void *arg)
br_uint_32 BrResChildEnum(void *vres, br_resenum_cbfn *callback, void *arg);

// Offset: 2775
// Size: 0x5b
//IDA: br_uint_32 __cdecl BrResCheck(void *vres, int no_tag)
br_uint_32 BrResCheck(void *vres, int no_tag);

// Offset: 2878
// Size: 0x7f
//IDA: char* __cdecl BrResStrDup(void *vparent, char *str)
char* BrResStrDup(void *vparent, char *str);

// Offset: 3026
// Size: 0x139
//IDA: void __usercall InternalResourceDump(resource_header *res@<EAX>, br_putline_cbfn *putline@<EDX>, void *arg@<EBX>, int level@<ECX>)
void InternalResourceDump(resource_header *res, br_putline_cbfn *putline, void *arg, int level);

// Offset: 3349
// Size: 0x39
//IDA: void __cdecl BrResDump(void *vres, br_putline_cbfn *putline, void *arg)
void BrResDump(void *vres, br_putline_cbfn *putline, void *arg);

// Offset: 3427
// Size: 0x50
//IDA: char* __cdecl BrResClassIdentifier(br_uint_8 res_class)
char* BrResClassIdentifier(br_uint_8 res_class);

#endif
