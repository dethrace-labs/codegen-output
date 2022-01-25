#ifndef _RESREG_H_
#define _RESREG_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 14
// Size: 0xb0
//IDA: br_resource_class* __cdecl BrResClassAdd(br_resource_class *rclass)
br_resource_class* BrResClassAdd(br_resource_class *rclass);

// Offset: 207
// Size: 0x9e
//IDA: br_resource_class* __cdecl BrResClassRemove(br_resource_class *rclass)
br_resource_class* BrResClassRemove(br_resource_class *rclass);

// Offset: 380
// Size: 0x31
//IDA: br_resource_class* __cdecl BrResClassFind(char *pattern)
br_resource_class* BrResClassFind(char *pattern);

// Offset: 448
// Size: 0x37
//IDA: br_resclass_find_cbfn* __cdecl BrResClassFindHook(br_resclass_find_cbfn *hook)
br_resclass_find_cbfn* BrResClassFindHook(br_resclass_find_cbfn *hook);

// Offset: 521
// Size: 0x53
//IDA: br_uint_32 __cdecl BrResClassAddMany(br_resource_class **items, int n)
br_uint_32 BrResClassAddMany(br_resource_class **items, int n);

// Offset: 625
// Size: 0x64
//IDA: br_uint_32 __cdecl BrResClassRemoveMany(br_resource_class **items, int n)
br_uint_32 BrResClassRemoveMany(br_resource_class **items, int n);

// Offset: 744
// Size: 0x37
//IDA: br_uint_32 __cdecl BrResClassFindMany(char *pattern, br_resource_class **items, int max)
br_uint_32 BrResClassFindMany(char *pattern, br_resource_class **items, int max);

// Offset: 815
// Size: 0x31
//IDA: br_uint_32 __cdecl BrResClassCount(char *pattern)
br_uint_32 BrResClassCount(char *pattern);

// Offset: 879
// Size: 0x37
//IDA: br_uint_32 __cdecl BrResClassEnum(char *pattern, br_resclass_enum_cbfn *callback, void *arg)
br_uint_32 BrResClassEnum(char *pattern, br_resclass_enum_cbfn *callback, void *arg);

#endif
