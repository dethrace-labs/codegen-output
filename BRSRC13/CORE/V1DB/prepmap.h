#ifndef _PREPMAP_H_
#define _PREPMAP_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 12
// Size: 0x4d
//IDA: void __cdecl BrMapUpdate(br_pixelmap *map, br_uint_16 flags)
void BrMapUpdate(br_pixelmap *map, br_uint_16 flags);

// Offset: 104
// Size: 0xb7
//IDA: void __usercall BrBufferUpdate(br_pixelmap *pm@<EAX>, br_token use@<EDX>, br_uint_16 flags@<EBX>)
void BrBufferUpdate(br_pixelmap *pm, br_token use, br_uint_16 flags);

// Offset: 301
// Size: 0x4c
//IDA: void __usercall BrBufferClear(br_pixelmap *pm@<EAX>)
void BrBufferClear(br_pixelmap *pm);

#endif
