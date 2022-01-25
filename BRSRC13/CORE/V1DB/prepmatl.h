#ifndef _PREPMATL_H_
#define _PREPMATL_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 17
// Size: 0xbb5
//IDA: void __cdecl BrMaterialUpdate(br_material *mat, br_uint_16 flags)
void BrMaterialUpdate(br_material *mat, br_uint_16 flags);

// Offset: 3030
// Size: 0x58
//IDA: void __usercall BrMaterialClear(br_material *mat@<EAX>)
void BrMaterialClear(br_material *mat);

#endif
