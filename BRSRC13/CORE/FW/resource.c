#include "resource.h"


// Offset: 10
// Size: 0xbc
//IDA: void* __usercall ResToUser@<EAX>(resource_header *r@<EAX>)
void* ResToUser(resource_header *r) {
    br_int_32 align;
    LOG_TRACE("(%p)", r);
    NOT_IMPLEMENTED();
}

// Offset: 208
// Size: 0x48
//IDA: resource_header* __usercall UserToRes@<EAX>(void *r@<EAX>)
resource_header* UserToRes(void *r) {
    br_uint_8 *p;
    LOG_TRACE("(%p)", r);
    NOT_IMPLEMENTED();
}

// Offset: 294
// Size: 0x1cb
//IDA: void* __cdecl BrResAllocate(void *vparent, br_size_t size, br_uint_8 res_class)
void* BrResAllocate(void *vparent, br_size_t size, br_uint_8 res_class) {
    resource_header *res;
    resource_header *parent;
    br_int_32 malign;
    br_int_32 calign;
    br_int_32 pad;
    br_int_32 actual_pad;
    LOG_TRACE("(%p, %d, %d)", vparent, size, res_class);
    NOT_IMPLEMENTED();
}

// Offset: 771
// Size: 0x16f
//IDA: void __usercall BrResInternalFree(resource_header *res@<EAX>, br_boolean callback@<EDX>)
void BrResInternalFree(resource_header *res, br_boolean callback) {
    int c;
    void *r;
    LOG_TRACE("(%p, %d)", res, callback);
    NOT_IMPLEMENTED();
}

// Offset: 1148
// Size: 0x4f
//IDA: void __cdecl BrResFree(void *vres)
void BrResFree(void *vres) {
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 1247
// Size: 0x4c
//IDA: void __cdecl BrResFreeNoCallback(void *vres)
void BrResFreeNoCallback(void *vres) {
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 1332
// Size: 0x103
//IDA: void* __cdecl BrResAdd(void *vparent, void *vres)
void* BrResAdd(void *vparent, void *vres) {
    resource_header *res;
    resource_header *parent;
    LOG_TRACE("(%p, %p)", vparent, vres);
    NOT_IMPLEMENTED();
}

// Offset: 1603
// Size: 0x8d
//IDA: void* __cdecl BrResRemove(void *vres)
void* BrResRemove(void *vres) {
    resource_header *res;
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 1755
// Size: 0x84
//IDA: br_uint_8 __cdecl BrResClass(void *vres)
br_uint_8 BrResClass(void *vres) {
    resource_header *res;
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 1900
// Size: 0x10a
//IDA: br_boolean __cdecl BrResIsChild(void *vparent, void *vchild)
br_boolean BrResIsChild(void *vparent, void *vchild) {
    resource_header *parent;
    resource_header *child;
    resource_header *cp;
    LOG_TRACE("(%p, %p)", vparent, vchild);
    NOT_IMPLEMENTED();
}

// Offset: 2176
// Size: 0xb1
//IDA: br_uint_32 __cdecl BrResSize(void *vres)
br_uint_32 BrResSize(void *vres) {
    resource_header *res;
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 2366
// Size: 0x50
//IDA: br_uint_32 __cdecl ResSizeTotal(void *vres, br_uint_32 *ptotal)
br_uint_32 ResSizeTotal(void *vres, br_uint_32 *ptotal) {
    LOG_TRACE("(%p, %p)", vres, ptotal);
    NOT_IMPLEMENTED();
}

// Offset: 2461
// Size: 0x3e
//IDA: br_uint_32 __cdecl BrResSizeTotal(void *vres)
br_uint_32 BrResSizeTotal(void *vres) {
    br_uint_32 total;
    LOG_TRACE("(%p)", vres);
    NOT_IMPLEMENTED();
}

// Offset: 2538
// Size: 0xe2
//IDA: br_uint_32 __cdecl BrResChildEnum(void *vres, br_resenum_cbfn *callback, void *arg)
br_uint_32 BrResChildEnum(void *vres, br_resenum_cbfn *callback, void *arg) {
    resource_header *res;
    resource_header *rp;
    br_uint_32 r;
    LOG_TRACE("(%p, %p, %p)", vres, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 2775
// Size: 0x5b
//IDA: br_uint_32 __cdecl BrResCheck(void *vres, int no_tag)
br_uint_32 BrResCheck(void *vres, int no_tag) {
    resource_header *res;
    LOG_TRACE("(%p, %d)", vres, no_tag);
    NOT_IMPLEMENTED();
}

// Offset: 2878
// Size: 0x7f
//IDA: char* __cdecl BrResStrDup(void *vparent, char *str)
char* BrResStrDup(void *vparent, char *str) {
    int l;
    char *nstr;
    LOG_TRACE("(%p, \"%s\")", vparent, str);
    NOT_IMPLEMENTED();
}

// Offset: 3026
// Size: 0x139
//IDA: void __usercall InternalResourceDump(resource_header *res@<EAX>, br_putline_cbfn *putline@<EDX>, void *arg@<EBX>, int level@<ECX>)
void InternalResourceDump(resource_header *res, br_putline_cbfn *putline, void *arg, int level) {
    int i;
    char *cp;
    resource_header *child;
    br_resource_class *rclass;
    LOG_TRACE("(%p, %p, %p, %d)", res, putline, arg, level);
    NOT_IMPLEMENTED();
}

// Offset: 3349
// Size: 0x39
//IDA: void __cdecl BrResDump(void *vres, br_putline_cbfn *putline, void *arg)
void BrResDump(void *vres, br_putline_cbfn *putline, void *arg) {
    resource_header *res;
    LOG_TRACE("(%p, %p, %p)", vres, putline, arg);
    NOT_IMPLEMENTED();
}

// Offset: 3427
// Size: 0x50
//IDA: char* __cdecl BrResClassIdentifier(br_uint_8 res_class)
char* BrResClassIdentifier(br_uint_8 res_class) {
    br_resource_class *rclass;
    LOG_TRACE("(%d)", res_class);
    NOT_IMPLEMENTED();
}

