#ifndef _OTABLE_H_
#define _OTABLE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 23
// Size: 0xd8
//IDA: br_order_table* __cdecl BrZsOrderTableAllocate(br_uint_16 size, br_uint_32 flags, br_uint_16 type)
br_order_table* BrZsOrderTableAllocate(br_uint_16 size, br_uint_32 flags, br_uint_16 type);

// Offset: 258
// Size: 0x46
//IDA: void __cdecl BrZsOrderTableFree(br_order_table *order_table)
void BrZsOrderTableFree(br_order_table *order_table);

// Offset: 351
// Size: 0x4c
//IDA: br_order_table* __cdecl BrZsActorOrderTableSet(br_actor *actor, br_order_table *order_table)
br_order_table* BrZsActorOrderTableSet(br_actor *actor, br_order_table *order_table);

// Offset: 450
// Size: 0x46
//IDA: br_order_table* __cdecl BrZsActorOrderTableGet(br_actor *actor)
br_order_table* BrZsActorOrderTableGet(br_actor *actor);

// Offset: 540
// Size: 0x62
//IDA: br_order_table* __cdecl BrZsOrderTableClear(br_order_table *order_table)
br_order_table* BrZsOrderTableClear(br_order_table *order_table);

// Offset: 668
// Size: 0xa8
//IDA: void __cdecl BrZsOrderTablePrimitiveInsert(br_order_table *order_table, br_primitive *primitive, br_uint_16 bucket)
void BrZsOrderTablePrimitiveInsert(br_order_table *order_table, br_primitive *primitive, br_uint_16 bucket);

// Offset: 862
// Size: 0x27a
//IDA: br_uint_16 __cdecl BrZsPrimitiveBucketSelect(br_scalar *z, br_uint_16 type, br_scalar min_z, br_scalar max_z, br_uint_16 size, br_uint_16 sort_type)
br_uint_16 BrZsPrimitiveBucketSelect(br_scalar *z, br_uint_16 type, br_scalar min_z, br_scalar max_z, br_uint_16 size, br_uint_16 sort_type);

// Offset: 1524
// Size: 0x38
//IDA: void __cdecl BrZsOrderTablePrimaryEnable(br_order_table *order_table)
void BrZsOrderTablePrimaryEnable(br_order_table *order_table);

// Offset: 1609
// Size: 0x28
//IDA: void __cdecl BrZsOrderTablePrimaryDisable()
void BrZsOrderTablePrimaryDisable();

// Offset: 1670
// Size: 0xec
//IDA: void __usercall InsertOrderTableList(br_order_table *order_table@<EAX>)
void InsertOrderTableList(br_order_table *order_table);

// Offset: 1926
// Size: 0x113
//IDA: void __usercall SetOrderTableBounds(br_bounds *bounds@<EAX>, br_order_table *order_table@<EDX>)
void SetOrderTableBounds(br_bounds *bounds, br_order_table *order_table);

// Offset: 2220
// Size: 0xaf
//IDA: void __usercall SetOrderTableRange(br_order_table *order_table@<EAX>)
void SetOrderTableRange(br_order_table *order_table);

// Offset: 2416
// Size: 0x6f
//IDA: void __cdecl RenderOrderTableList()
void RenderOrderTableList();

// Offset: 2551
// Size: 0x229
//IDA: void __cdecl RenderPrimaryOrderTable()
void RenderPrimaryOrderTable();

#endif
