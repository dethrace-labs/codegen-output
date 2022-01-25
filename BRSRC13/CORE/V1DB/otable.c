#include "otable.h"


// Offset: 23
// Size: 0xd8
//IDA: br_order_table* __cdecl BrZsOrderTableAllocate(br_uint_16 size, br_uint_32 flags, br_uint_16 type)
br_order_table* BrZsOrderTableAllocate(br_uint_16 size, br_uint_32 flags, br_uint_16 type) {
    br_order_table *order_table;
    LOG_TRACE("(%d, %d, %d)", size, flags, type);
    NOT_IMPLEMENTED();
}

// Offset: 258
// Size: 0x46
//IDA: void __cdecl BrZsOrderTableFree(br_order_table *order_table)
void BrZsOrderTableFree(br_order_table *order_table) {
    LOG_TRACE("(%p)", order_table);
    NOT_IMPLEMENTED();
}

// Offset: 351
// Size: 0x4c
//IDA: br_order_table* __cdecl BrZsActorOrderTableSet(br_actor *actor, br_order_table *order_table)
br_order_table* BrZsActorOrderTableSet(br_actor *actor, br_order_table *order_table) {
    LOG_TRACE("(%p, %p)", actor, order_table);
    NOT_IMPLEMENTED();
}

// Offset: 450
// Size: 0x46
//IDA: br_order_table* __cdecl BrZsActorOrderTableGet(br_actor *actor)
br_order_table* BrZsActorOrderTableGet(br_actor *actor) {
    LOG_TRACE("(%p)", actor);
    NOT_IMPLEMENTED();
}

// Offset: 540
// Size: 0x62
//IDA: br_order_table* __cdecl BrZsOrderTableClear(br_order_table *order_table)
br_order_table* BrZsOrderTableClear(br_order_table *order_table) {
    LOG_TRACE("(%p)", order_table);
    NOT_IMPLEMENTED();
}

// Offset: 668
// Size: 0xa8
//IDA: void __cdecl BrZsOrderTablePrimitiveInsert(br_order_table *order_table, br_primitive *primitive, br_uint_16 bucket)
void BrZsOrderTablePrimitiveInsert(br_order_table *order_table, br_primitive *primitive, br_uint_16 bucket) {
    LOG_TRACE("(%p, %p, %d)", order_table, primitive, bucket);
    NOT_IMPLEMENTED();
}

// Offset: 862
// Size: 0x27a
//IDA: br_uint_16 __cdecl BrZsPrimitiveBucketSelect(br_scalar *z, br_uint_16 type, br_scalar min_z, br_scalar max_z, br_uint_16 size, br_uint_16 sort_type)
br_uint_16 BrZsPrimitiveBucketSelect(br_scalar *z, br_uint_16 type, br_scalar min_z, br_scalar max_z, br_uint_16 size, br_uint_16 sort_type) {
    br_uint_16 bucket;
    br_scalar zprim;
    br_scalar range;
    br_scalar scale;
    LOG_TRACE("(%p, %d, %f, %f, %d, %d)", z, type, min_z, max_z, size, sort_type);
    NOT_IMPLEMENTED();
}

// Offset: 1524
// Size: 0x38
//IDA: void __cdecl BrZsOrderTablePrimaryEnable(br_order_table *order_table)
void BrZsOrderTablePrimaryEnable(br_order_table *order_table) {
    LOG_TRACE("(%p)", order_table);
    NOT_IMPLEMENTED();
}

// Offset: 1609
// Size: 0x28
//IDA: void __cdecl BrZsOrderTablePrimaryDisable()
void BrZsOrderTablePrimaryDisable() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1670
// Size: 0xec
//IDA: void __usercall InsertOrderTableList(br_order_table *order_table@<EAX>)
void InsertOrderTableList(br_order_table *order_table) {
    br_order_table *previous_table;
    br_order_table *current_table;
    LOG_TRACE("(%p)", order_table);
    NOT_IMPLEMENTED();
}

// Offset: 1926
// Size: 0x113
//IDA: void __usercall SetOrderTableBounds(br_bounds *bounds@<EAX>, br_order_table *order_table@<EDX>)
void SetOrderTableBounds(br_bounds *bounds, br_order_table *order_table) {
    br_uint_32 i;
    br_scalar range;
    br_scalar element;
    br_scalar min_z;
    br_scalar max_z;
    br_vector3 *min;
    br_vector3 *max;
    LOG_TRACE("(%p, %p)", bounds, order_table);
    NOT_IMPLEMENTED();
}

// Offset: 2220
// Size: 0xaf
//IDA: void __usercall SetOrderTableRange(br_order_table *order_table@<EAX>)
void SetOrderTableRange(br_order_table *order_table) {
    br_scalar range;
    LOG_TRACE("(%p)", order_table);
    NOT_IMPLEMENTED();
}

// Offset: 2416
// Size: 0x6f
//IDA: void __cdecl RenderOrderTableList()
void RenderOrderTableList() {
    br_order_table *order_table;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2551
// Size: 0x229
//IDA: void __cdecl RenderPrimaryOrderTable()
void RenderPrimaryOrderTable() {
    br_uint_16 m;
    br_uint_16 size;
    br_scalar bucket_size;
    br_scalar min_z;
    br_scalar max_z;
    br_primitive *prim;
    br_primitive **bucket;
    br_order_table *order_table;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

