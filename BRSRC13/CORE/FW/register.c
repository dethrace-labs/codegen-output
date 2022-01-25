#include "register.h"


// Offset: 14
// Size: 0x60
//IDA: void* __usercall BrRegistryNew@<EAX>(br_registry *reg@<EAX>)
void* BrRegistryNew(br_registry *reg) {
    LOG_TRACE("(%p)", reg);
    NOT_IMPLEMENTED();
}

// Offset: 126
// Size: 0x7e
//IDA: void* __usercall BrRegistryClear@<EAX>(br_registry *reg@<EAX>)
void* BrRegistryClear(br_registry *reg) {
    br_registry_entry *e;
    LOG_TRACE("(%p)", reg);
    NOT_IMPLEMENTED();
}

// Offset: 266
// Size: 0x9f
//IDA: void* __usercall BrRegistryAdd@<EAX>(br_registry *reg@<EAX>, void *item@<EDX>)
void* BrRegistryAdd(br_registry *reg, void *item) {
    br_registry_entry *e;
    LOG_TRACE("(%p, %p)", reg, item);
    NOT_IMPLEMENTED();
}

// Offset: 443
// Size: 0x94
//IDA: int __usercall BrRegistryAddMany@<EAX>(br_registry *reg@<EAX>, void **items@<EDX>, int n@<EBX>)
int BrRegistryAddMany(br_registry *reg, void **items, int n) {
    int i;
    LOG_TRACE("(%p, %p, %d)", reg, items, n);
    NOT_IMPLEMENTED();
}

// Offset: 608
// Size: 0xc6
//IDA: void* __usercall BrRegistryRemove@<EAX>(br_registry *reg@<EAX>, void *item@<EDX>)
void* BrRegistryRemove(br_registry *reg, void *item) {
    br_registry_entry *e;
    void *r;
    LOG_TRACE("(%p, %p)", reg, item);
    NOT_IMPLEMENTED();
}

// Offset: 827
// Size: 0xab
//IDA: int __usercall BrRegistryRemoveMany@<EAX>(br_registry *reg@<EAX>, void **items@<EDX>, int n@<EBX>)
int BrRegistryRemoveMany(br_registry *reg, void **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %p, %d)", reg, items, n);
    NOT_IMPLEMENTED();
}

// Offset: 1013
// Size: 0xac
//IDA: void* __usercall BrRegistryFind@<EAX>(br_registry *reg@<EAX>, char *pattern@<EDX>)
void* BrRegistryFind(br_registry *reg, char *pattern) {
    br_registry_entry *e;
    LOG_TRACE("(%p, \"%s\")", reg, pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1204
// Size: 0x8c
//IDA: int __usercall BrRegistryFindMany@<EAX>(br_registry *reg@<EAX>, char *pattern@<EDX>, void **items@<EBX>, int max@<ECX>)
int BrRegistryFindMany(br_registry *reg, char *pattern, void **items, int max) {
    br_registry_entry *e;
    int n;
    LOG_TRACE("(%p, \"%s\", %p, %d)", reg, pattern, items, max);
    NOT_IMPLEMENTED();
}

// Offset: 1360
// Size: 0xa3
//IDA: int __usercall BrRegistryCount@<EAX>(br_registry *reg@<EAX>, char *pattern@<EDX>)
int BrRegistryCount(br_registry *reg, char *pattern) {
    br_registry_entry *e;
    int n;
    LOG_TRACE("(%p, \"%s\")", reg, pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1538
// Size: 0x118
//IDA: int __usercall BrRegistryEnum@<EAX>(br_registry *reg@<EAX>, char *pattern@<EDX>, br_enum_cbfn *callback@<EBX>, void *arg@<ECX>)
int BrRegistryEnum(br_registry *reg, char *pattern, br_enum_cbfn *callback, void *arg) {
    br_registry_entry *e;
    int r;
    LOG_TRACE("(%p, \"%s\", %p, %p)", reg, pattern, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1838
// Size: 0x31
//IDA: void* __usercall BrRegistryNewStatic@<EAX>(br_registry *reg@<EAX>, br_registry_entry *base@<EDX>, int limit@<EBX>)
void* BrRegistryNewStatic(br_registry *reg, br_registry_entry *base, int limit) {
    LOG_TRACE("(%p, %p, %d)", reg, base, limit);
    NOT_IMPLEMENTED();
}

// Offset: 1907
// Size: 0x31
//IDA: void* __usercall BrRegistryAddStatic@<EAX>(br_registry *reg@<EAX>, br_registry_entry *base@<EDX>, void *item@<EBX>)
void* BrRegistryAddStatic(br_registry *reg, br_registry_entry *base, void *item) {
    LOG_TRACE("(%p, %p, %p)", reg, base, item);
    NOT_IMPLEMENTED();
}

// Offset: 1979
// Size: 0x30
//IDA: void* __usercall BrRegistryRemoveStatic@<EAX>(br_registry *reg@<EAX>, void *item@<EDX>)
void* BrRegistryRemoveStatic(br_registry *reg, void *item) {
    LOG_TRACE("(%p, %p)", reg, item);
    NOT_IMPLEMENTED();
}

