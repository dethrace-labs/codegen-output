#ifndef _OBJECTC_H_
#define _OBJECTC_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 21
// Size: 0x4a
//IDA: void* __cdecl BrObjectListAllocate(void *res)
void* BrObjectListAllocate(void *res);

// Offset: 127
// Size: 0x88
//IDA: br_error __cdecl _M_br_object_container_addFront(br_object_container *self, br_object *ph)
br_error _M_br_object_container_addFront(br_object_container *self, br_object *ph);

// Offset: 293
// Size: 0xa0
//IDA: br_error __cdecl _M_br_object_container_remove(br_object_container *self, br_object *h)
br_error _M_br_object_container_remove(br_object_container *self, br_object *h);

// Offset: 488
// Size: 0x87
//IDA: br_error __cdecl _M_br_object_container_removeFront(br_object_container *self, br_object **ph)
br_error _M_br_object_container_removeFront(br_object_container *self, br_object **ph);

// Offset: 651
// Size: 0x12c
//IDA: br_error __cdecl _M_br_object_container_find(br_object_container *self, br_object **ph, br_token type, char *pattern, br_token_value *tv)
br_error _M_br_object_container_find(br_object_container *self, br_object **ph, br_token type, char *pattern, br_token_value *tv);

// Offset: 983
// Size: 0x151
//IDA: br_error __cdecl _M_br_object_container_findMany(br_object_container *self, br_object **objects, br_int_32 max_objects, br_int_32 *num_objects, br_token type, char *pattern, br_token_value *tv)
br_error _M_br_object_container_findMany(br_object_container *self, br_object **objects, br_int_32 max_objects, br_int_32 *num_objects, br_token type, char *pattern, br_token_value *tv);

// Offset: 1349
// Size: 0x12d
//IDA: br_error __cdecl _M_br_object_container_count(br_object_container *self, br_uint_32 *pcount, br_token type, char *pattern, br_token_value *tv)
br_error _M_br_object_container_count(br_object_container *self, br_uint_32 *pcount, br_token type, char *pattern, br_token_value *tv);

// Offset: 1690
// Size: 0xc2
//IDA: void* __cdecl _M_br_object_container_tokensMatchBegin(br_object_container *self, br_token t, br_token_value *tv)
void* _M_br_object_container_tokensMatchBegin(br_object_container *self, br_token t, br_token_value *tv);

// Offset: 1919
// Size: 0xd6
//IDA: br_boolean __cdecl _M_br_object_container_tokensMatch(br_object_container *self, br_object *h, void *arg)
br_boolean _M_br_object_container_tokensMatch(br_object_container *self, br_object *h, void *arg);

// Offset: 2171
// Size: 0x30
//IDA: void __cdecl _M_br_object_container_tokensMatchEnd(br_object_container *self, void *arg)
void _M_br_object_container_tokensMatchEnd(br_object_container *self, void *arg);

// Offset: 2241
// Size: 0x10e
//IDA: br_error __cdecl BrObjectContainerFree(br_object_container *self, br_token type, char *pattern, br_token_value *tv)
br_error BrObjectContainerFree(br_object_container *self, br_token type, char *pattern, br_token_value *tv);

#endif
