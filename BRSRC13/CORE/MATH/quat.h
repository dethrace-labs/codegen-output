#ifndef _QUAT_H_
#define _QUAT_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 10
// Size: 0x1b1
//IDA: br_quat* __cdecl BrQuatMul(br_quat *q, br_quat *l, br_quat *r)
br_quat* BrQuatMul(br_quat *q, br_quat *l, br_quat *r);

// Offset: 459
// Size: 0xd3
//IDA: br_quat* __cdecl BrQuatNormalise(br_quat *q, br_quat *qq)
br_quat* BrQuatNormalise(br_quat *q, br_quat *qq);

// Offset: 683
// Size: 0x93
//IDA: br_quat* __cdecl BrQuatInvert(br_quat *q, br_quat *qq)
br_quat* BrQuatInvert(br_quat *q, br_quat *qq);

// Offset: 842
// Size: 0x264
//IDA: br_quat* __cdecl BrQuatSlerp(br_quat *q, br_quat *l, br_quat *r, br_scalar a, br_int_16 spins)
br_quat* BrQuatSlerp(br_quat *q, br_quat *l, br_quat *r, br_scalar a, br_int_16 spins);

// Offset: 1471
// Size: 0x18f
//IDA: br_matrix34* __cdecl BrQuatToMatrix34(br_matrix34 *mat, br_quat *q)
br_matrix34* BrQuatToMatrix34(br_matrix34 *mat, br_quat *q);

// Offset: 1887
// Size: 0x24d
//IDA: br_quat* __cdecl BrMatrix34ToQuat(br_quat *q, br_matrix34 *mat)
br_quat* BrMatrix34ToQuat(br_quat *q, br_matrix34 *mat);

// Offset: 2492
// Size: 0x85
//IDA: br_matrix4* __cdecl BrQuatToMatrix4(br_matrix4 *mat, br_quat *q)
br_matrix4* BrQuatToMatrix4(br_matrix4 *mat, br_quat *q);

// Offset: 2641
// Size: 0x82
//IDA: br_quat* __cdecl BrMatrix4ToQuat(br_quat *q, br_matrix4 *mat)
br_quat* BrMatrix4ToQuat(br_quat *q, br_matrix4 *mat);

#endif
