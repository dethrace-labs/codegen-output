#include "prepmatl.h"


// Offset: 17
// Size: 0xbb5
//IDA: void __cdecl BrMaterialUpdate(br_material *mat, br_uint_16 flags)
void BrMaterialUpdate(br_material *mat, br_uint_16 flags) {
    br_token_value tva[32];
    br_token_value *tvp;
    br_token t;
    br_int_32 c;
    LOG_TRACE("(%p, %d)", mat, flags);
    NOT_IMPLEMENTED();
}

// Offset: 3030
// Size: 0x58
//IDA: void __usercall BrMaterialClear(br_material *mat@<EAX>)
void BrMaterialClear(br_material *mat) {
    LOG_TRACE("(%p)", mat);
    NOT_IMPLEMENTED();
}

