#ifndef _ASSOCARR_H_
#define _ASSOCARR_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 27
// Size: 0x91
//IDA: br_associative_array* __cdecl BrAssociativeArrayAllocate()
br_associative_array* BrAssociativeArrayAllocate();

// Offset: 200
// Size: 0xcf
//IDA: br_error __usercall Set_Associative_Array_Value@<EAX>(br_associative_array *pArray@<EAX>, int index@<EDX>, br_value v@<EBX>)
br_error Set_Associative_Array_Value(br_associative_array *pArray, int index, br_value v);

// Offset: 434
// Size: 0x217
//IDA: br_error __usercall BrAssociativeArraySetEntry@<EAX>(br_associative_array *pArray@<EAX>, br_token t@<EDX>, br_value v@<EBX>)
br_error BrAssociativeArraySetEntry(br_associative_array *pArray, br_token t, br_value v);

// Offset: 999
// Size: 0x16b
//IDA: br_error __usercall BrAssociativeArrayRemoveEntry@<EAX>(br_associative_array *pArray@<EAX>, br_token t@<EDX>)
br_error BrAssociativeArrayRemoveEntry(br_associative_array *pArray, br_token t);

// Offset: 1386
// Size: 0xca
//IDA: br_error __usercall BrAssociativeArrayQuery@<EAX>(br_associative_array *pArray@<EAX>, br_token t@<EDX>, br_value *pValue@<EBX>)
br_error BrAssociativeArrayQuery(br_associative_array *pArray, br_token t, br_value *pValue);

#endif
