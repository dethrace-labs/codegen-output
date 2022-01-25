#include "matsupt.h"


// Offset: 19
// Size: 0x8a
//IDA: br_material* __cdecl BrMaterialAllocate(char *name)
br_material* BrMaterialAllocate(char *name) {
    br_material *m;
    LOG_TRACE("(\"%s\")", name);
    NOT_IMPLEMENTED();
}

// Offset: 172
// Size: 0x46
//IDA: void __cdecl BrMaterialFree(br_material *m)
void BrMaterialFree(br_material *m) {
    LOG_TRACE("(%p)", m);
    NOT_IMPLEMENTED();
}

