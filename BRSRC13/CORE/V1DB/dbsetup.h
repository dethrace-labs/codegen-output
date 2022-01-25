#ifndef _DBSETUP_H_
#define _DBSETUP_H_

#include "dr_types.h"
#include "br_types.h"

extern br_resource_class resourceClasses__dbsetup[14]; // addr: 0001C644 // suffix added to avoid duplicate symbol
extern br_v1db_state v1db; // addr: 000456B0

// Offset: 12
// Size: 0x159
//IDA: br_error __cdecl BrV1dbBegin()
br_error BrV1dbBegin();

// Offset: 367
// Size: 0x67
//IDA: br_error __cdecl BrV1dbEnd()
br_error BrV1dbEnd();

// Offset: 482
// Size: 0x59
//IDA: br_uint_32 __cdecl updateTable(br_pixelmap *item, void *arg)
br_uint_32 updateTable(br_pixelmap *item, void *arg);

// Offset: 581
// Size: 0x59
//IDA: br_uint_32 __cdecl updateMap(br_pixelmap *item, void *arg)
br_uint_32 updateMap(br_pixelmap *item, void *arg);

// Offset: 685
// Size: 0x59
//IDA: br_uint_32 __cdecl updateMaterial(br_material *item, void *arg)
br_uint_32 updateMaterial(br_material *item, void *arg);

// Offset: 786
// Size: 0x59
//IDA: br_uint_32 __cdecl updateModel(br_model *item, void *arg)
br_uint_32 updateModel(br_model *item, void *arg);

// Offset: 886
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearTable(br_pixelmap *item, void *arg)
br_uint_32 clearTable(br_pixelmap *item, void *arg);

// Offset: 974
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearMap(br_pixelmap *item, void *arg)
br_uint_32 clearMap(br_pixelmap *item, void *arg);

// Offset: 1067
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearMaterial(br_material *item, void *arg)
br_uint_32 clearMaterial(br_material *item, void *arg);

// Offset: 1157
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearModel(br_model *item, void *arg)
br_uint_32 clearModel(br_model *item, void *arg);

// Offset: 1256
// Size: 0x1ce
//IDA: br_error __cdecl BrV1dbRendererBegin(br_device_pixelmap *destination, br_renderer *renderer)
br_error BrV1dbRendererBegin(br_device_pixelmap *destination, br_renderer *renderer);

// Offset: 1738
// Size: 0x29
//IDA: br_renderer* __cdecl BrV1dbRendererQuery()
br_renderer* BrV1dbRendererQuery();

// Offset: 1797
// Size: 0xde
//IDA: br_error __cdecl BrV1dbRendererEnd()
br_error BrV1dbRendererEnd();

// Offset: 2029
// Size: 0x5e
//IDA: void __cdecl BrZbBegin(br_uint_8 colour_type, br_uint_8 depth_type)
void BrZbBegin(br_uint_8 colour_type, br_uint_8 depth_type);

// Offset: 2133
// Size: 0x8d
//IDA: void __cdecl BrZsBegin(br_uint_8 colour_type, void *primitive, br_uint_32 size)
void BrZsBegin(br_uint_8 colour_type, void *primitive, br_uint_32 size);

// Offset: 2282
// Size: 0x41
//IDA: void __cdecl BrZbEnd()
void BrZbEnd();

// Offset: 2355
// Size: 0x41
//IDA: void __cdecl BrZsEnd()
void BrZsEnd();

// Offset: 2445
// Size: 0x28
//IDA: void __cdecl BrV1dbBeginWrapper_Float()
void BrV1dbBeginWrapper_Float();

// Offset: 2502
// Size: 0x28
//IDA: void __cdecl BrV1dbEndWrapper()
void BrV1dbEndWrapper();

#endif
