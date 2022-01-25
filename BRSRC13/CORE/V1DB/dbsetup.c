#include "dbsetup.h"

 // Suffix added to avoid duplicate symbol
br_resource_class resourceClasses__dbsetup[14];
br_v1db_state v1db;

// Offset: 12
// Size: 0x159
//IDA: br_error __cdecl BrV1dbBegin()
br_error BrV1dbBegin() {
    int i;
    char *devstr;
    br_size_t s;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 367
// Size: 0x67
//IDA: br_error __cdecl BrV1dbEnd()
br_error BrV1dbEnd() {
    br_device *dev;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 482
// Size: 0x59
//IDA: br_uint_32 __cdecl updateTable(br_pixelmap *item, void *arg)
br_uint_32 updateTable(br_pixelmap *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 581
// Size: 0x59
//IDA: br_uint_32 __cdecl updateMap(br_pixelmap *item, void *arg)
br_uint_32 updateMap(br_pixelmap *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 685
// Size: 0x59
//IDA: br_uint_32 __cdecl updateMaterial(br_material *item, void *arg)
br_uint_32 updateMaterial(br_material *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 786
// Size: 0x59
//IDA: br_uint_32 __cdecl updateModel(br_model *item, void *arg)
br_uint_32 updateModel(br_model *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 886
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearTable(br_pixelmap *item, void *arg)
br_uint_32 clearTable(br_pixelmap *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 974
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearMap(br_pixelmap *item, void *arg)
br_uint_32 clearMap(br_pixelmap *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1067
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearMaterial(br_material *item, void *arg)
br_uint_32 clearMaterial(br_material *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1157
// Size: 0x4f
//IDA: br_uint_32 __cdecl clearModel(br_model *item, void *arg)
br_uint_32 clearModel(br_model *item, void *arg) {
    LOG_TRACE("(%p, %p)", item, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1256
// Size: 0x1ce
//IDA: br_error __cdecl BrV1dbRendererBegin(br_device_pixelmap *destination, br_renderer *renderer)
br_error BrV1dbRendererBegin(br_device_pixelmap *destination, br_renderer *renderer) {
    br_renderer_facility *renderer_facility;
    br_error r;
    br_token_value tv[2];
    LOG_TRACE("(%p, %p)", destination, renderer);
    NOT_IMPLEMENTED();
}

// Offset: 1738
// Size: 0x29
//IDA: br_renderer* __cdecl BrV1dbRendererQuery()
br_renderer* BrV1dbRendererQuery() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1797
// Size: 0xde
//IDA: br_error __cdecl BrV1dbRendererEnd()
br_error BrV1dbRendererEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2029
// Size: 0x5e
//IDA: void __cdecl BrZbBegin(br_uint_8 colour_type, br_uint_8 depth_type)
void BrZbBegin(br_uint_8 colour_type, br_uint_8 depth_type) {
    LOG_TRACE("(%d, %d)", colour_type, depth_type);
    NOT_IMPLEMENTED();
}

// Offset: 2133
// Size: 0x8d
//IDA: void __cdecl BrZsBegin(br_uint_8 colour_type, void *primitive, br_uint_32 size)
void BrZsBegin(br_uint_8 colour_type, void *primitive, br_uint_32 size) {
    LOG_TRACE("(%d, %p, %d)", colour_type, primitive, size);
    NOT_IMPLEMENTED();
}

// Offset: 2282
// Size: 0x41
//IDA: void __cdecl BrZbEnd()
void BrZbEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2355
// Size: 0x41
//IDA: void __cdecl BrZsEnd()
void BrZsEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2445
// Size: 0x28
//IDA: void __cdecl BrV1dbBeginWrapper_Float()
void BrV1dbBeginWrapper_Float() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2502
// Size: 0x28
//IDA: void __cdecl BrV1dbEndWrapper()
void BrV1dbEndWrapper() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

