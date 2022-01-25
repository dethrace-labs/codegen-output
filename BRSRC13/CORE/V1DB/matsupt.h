#ifndef _MATSUPT_H_
#define _MATSUPT_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 19
// Size: 0x8a
//IDA: br_material* __cdecl BrMaterialAllocate(char *name)
br_material* BrMaterialAllocate(char *name);

// Offset: 172
// Size: 0x46
//IDA: void __cdecl BrMaterialFree(br_material *m)
void BrMaterialFree(br_material *m);

#endif
