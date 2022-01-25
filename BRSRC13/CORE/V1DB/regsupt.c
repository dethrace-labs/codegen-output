#include "regsupt.h"


// Offset: 11
// Size: 0x94
//IDA: br_model* __cdecl BrModelAdd(br_model *model)
br_model* BrModelAdd(br_model *model) {
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 173
// Size: 0x55
//IDA: br_model* __cdecl BrModelRemove(br_model *model)
br_model* BrModelRemove(br_model *model) {
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 270
// Size: 0x31
//IDA: br_model* __cdecl BrModelFind(char *pattern)
br_model* BrModelFind(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 335
// Size: 0x53
//IDA: br_model_find_cbfn* __cdecl BrModelFindHook(br_model_find_cbfn *hook)
br_model_find_cbfn* BrModelFindHook(br_model_find_cbfn *hook) {
    br_model_find_cbfn *old;
    LOG_TRACE("(%p)", hook);
    NOT_IMPLEMENTED();
}

// Offset: 433
// Size: 0x9e
//IDA: br_uint_32 __cdecl BrModelAddMany(br_model **items, int n)
br_uint_32 BrModelAddMany(br_model **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 609
// Size: 0x9e
//IDA: br_uint_32 __cdecl BrModelRemoveMany(br_model **items, int n)
br_uint_32 BrModelRemoveMany(br_model **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 783
// Size: 0x37
//IDA: br_uint_32 __cdecl BrModelFindMany(char *pattern, br_model **items, int max)
br_uint_32 BrModelFindMany(char *pattern, br_model **items, int max) {
    LOG_TRACE("(\"%s\", %p, %d)", pattern, items, max);
    NOT_IMPLEMENTED();
}

// Offset: 851
// Size: 0x31
//IDA: br_uint_32 __cdecl BrModelCount(char *pattern)
br_uint_32 BrModelCount(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 912
// Size: 0x37
//IDA: br_uint_32 __cdecl BrModelEnum(char *pattern, br_model_enum_cbfn *callback, void *arg)
br_uint_32 BrModelEnum(char *pattern, br_model_enum_cbfn *callback, void *arg) {
    LOG_TRACE("(\"%s\", %p, %p)", pattern, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 981
// Size: 0xb9
//IDA: br_material* __cdecl BrMaterialAdd(br_material *material)
br_material* BrMaterialAdd(br_material *material) {
    LOG_TRACE("(%p)", material);
    NOT_IMPLEMENTED();
}

// Offset: 1183
// Size: 0x58
//IDA: br_material* __cdecl BrMaterialRemove(br_material *material)
br_material* BrMaterialRemove(br_material *material) {
    LOG_TRACE("(%p)", material);
    NOT_IMPLEMENTED();
}

// Offset: 1286
// Size: 0x31
//IDA: br_material* __cdecl BrMaterialFind(char *pattern)
br_material* BrMaterialFind(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1354
// Size: 0x37
//IDA: br_material_find_cbfn* __cdecl BrMaterialFindHook(br_material_find_cbfn *hook)
br_material_find_cbfn* BrMaterialFindHook(br_material_find_cbfn *hook) {
    br_material_find_cbfn *old;
    LOG_TRACE("(%p)", hook);
    NOT_IMPLEMENTED();
}

// Offset: 1427
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrMaterialAddMany(br_material **items, int n)
br_uint_32 BrMaterialAddMany(br_material **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 1612
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrMaterialRemoveMany(br_material **items, int n)
br_uint_32 BrMaterialRemoveMany(br_material **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 1795
// Size: 0x37
//IDA: br_uint_32 __cdecl BrMaterialFindMany(char *pattern, br_material **items, int max)
br_uint_32 BrMaterialFindMany(char *pattern, br_material **items, int max) {
    LOG_TRACE("(\"%s\", %p, %d)", pattern, items, max);
    NOT_IMPLEMENTED();
}

// Offset: 1866
// Size: 0x31
//IDA: br_uint_32 __cdecl BrMaterialCount(char *pattern)
br_uint_32 BrMaterialCount(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1930
// Size: 0x37
//IDA: br_uint_32 __cdecl BrMaterialEnum(char *pattern, br_material_enum_cbfn *callback, void *arg)
br_uint_32 BrMaterialEnum(char *pattern, br_material_enum_cbfn *callback, void *arg) {
    LOG_TRACE("(\"%s\", %p, %p)", pattern, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1994
// Size: 0x65
//IDA: br_pixelmap* __cdecl BrMapAdd(br_pixelmap *pixelmap)
br_pixelmap* BrMapAdd(br_pixelmap *pixelmap) {
    LOG_TRACE("(%p)", pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 2107
// Size: 0x58
//IDA: br_pixelmap* __cdecl BrMapRemove(br_pixelmap *pixelmap)
br_pixelmap* BrMapRemove(br_pixelmap *pixelmap) {
    LOG_TRACE("(%p)", pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 2205
// Size: 0x31
//IDA: br_pixelmap* __cdecl BrMapFind(char *pattern)
br_pixelmap* BrMapFind(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 2268
// Size: 0x56
//IDA: br_map_find_cbfn* __cdecl BrMapFindHook(br_map_find_cbfn *hook)
br_map_find_cbfn* BrMapFindHook(br_map_find_cbfn *hook) {
    br_map_find_cbfn *old;
    LOG_TRACE("(%p)", hook);
    NOT_IMPLEMENTED();
}

// Offset: 2367
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrMapAddMany(br_pixelmap **items, int n)
br_uint_32 BrMapAddMany(br_pixelmap **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 2547
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrMapRemoveMany(br_pixelmap **items, int n)
br_uint_32 BrMapRemoveMany(br_pixelmap **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 2725
// Size: 0x37
//IDA: br_uint_32 __cdecl BrMapFindMany(char *pattern, br_pixelmap **items, int max)
br_uint_32 BrMapFindMany(char *pattern, br_pixelmap **items, int max) {
    LOG_TRACE("(\"%s\", %p, %d)", pattern, items, max);
    NOT_IMPLEMENTED();
}

// Offset: 2791
// Size: 0x31
//IDA: br_uint_32 __cdecl BrMapCount(char *pattern)
br_uint_32 BrMapCount(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 2850
// Size: 0x37
//IDA: br_uint_32 __cdecl BrMapEnum(char *pattern, br_map_enum_cbfn *callback, void *arg)
br_uint_32 BrMapEnum(char *pattern, br_map_enum_cbfn *callback, void *arg) {
    LOG_TRACE("(\"%s\", %p, %p)", pattern, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 2916
// Size: 0x65
//IDA: br_pixelmap* __cdecl BrTableAdd(br_pixelmap *pixelmap)
br_pixelmap* BrTableAdd(br_pixelmap *pixelmap) {
    LOG_TRACE("(%p)", pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 3031
// Size: 0x58
//IDA: br_pixelmap* __cdecl BrTableRemove(br_pixelmap *pixelmap)
br_pixelmap* BrTableRemove(br_pixelmap *pixelmap) {
    LOG_TRACE("(%p)", pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 3131
// Size: 0x31
//IDA: br_pixelmap* __cdecl BrTableFind(char *pattern)
br_pixelmap* BrTableFind(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 3196
// Size: 0x56
//IDA: br_table_find_cbfn* __cdecl BrTableFindHook(br_table_find_cbfn *hook)
br_table_find_cbfn* BrTableFindHook(br_table_find_cbfn *hook) {
    br_table_find_cbfn *old;
    LOG_TRACE("(%p)", hook);
    NOT_IMPLEMENTED();
}

// Offset: 3297
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrTableAddMany(br_pixelmap **items, int n)
br_uint_32 BrTableAddMany(br_pixelmap **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 3479
// Size: 0xa4
//IDA: br_uint_32 __cdecl BrTableRemoveMany(br_pixelmap **items, int n)
br_uint_32 BrTableRemoveMany(br_pixelmap **items, int n) {
    int i;
    int r;
    LOG_TRACE("(%p, %d)", items, n);
    NOT_IMPLEMENTED();
}

// Offset: 3659
// Size: 0x37
//IDA: br_uint_32 __cdecl BrTableFindMany(char *pattern, br_pixelmap **items, int max)
br_uint_32 BrTableFindMany(char *pattern, br_pixelmap **items, int max) {
    LOG_TRACE("(\"%s\", %p, %d)", pattern, items, max);
    NOT_IMPLEMENTED();
}

// Offset: 3727
// Size: 0x31
//IDA: br_uint_32 __cdecl BrTableCount(char *pattern)
br_uint_32 BrTableCount(char *pattern) {
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 3788
// Size: 0x37
//IDA: br_uint_32 __cdecl BrTableEnum(char *pattern, br_table_enum_cbfn *callback, void *arg)
br_uint_32 BrTableEnum(char *pattern, br_table_enum_cbfn *callback, void *arg) {
    LOG_TRACE("(\"%s\", %p, %p)", pattern, callback, arg);
    NOT_IMPLEMENTED();
}

