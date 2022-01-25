#ifndef _ANGLES_H_
#define _ANGLES_H_

#include "dr_types.h"
#include "br_types.h"

extern order_info OrderAxes[32]; // addr: 0001AF8C

// Offset: 18
// Size: 0x3e6
//IDA: br_matrix34* __cdecl BrEulerToMatrix34(br_matrix34 *mat, br_euler *euler)
br_matrix34* BrEulerToMatrix34(br_matrix34 *mat, br_euler *euler);

// Offset: 1034
// Size: 0x4bd
//IDA: br_euler* __cdecl BrMatrix34ToEuler(br_euler *euler, br_matrix34 *mat)
br_euler* BrMatrix34ToEuler(br_euler *euler, br_matrix34 *mat);

// Offset: 2264
// Size: 0x66
//IDA: br_matrix4* __cdecl BrEulerToMatrix4(br_matrix4 *mat, br_euler *euler)
br_matrix4* BrEulerToMatrix4(br_matrix4 *mat, br_euler *euler);

// Offset: 2383
// Size: 0x63
//IDA: br_euler* __cdecl BrMatrix4ToEuler(br_euler *dest, br_matrix4 *mat)
br_euler* BrMatrix4ToEuler(br_euler *dest, br_matrix4 *mat);

// Offset: 2496
// Size: 0x322
//IDA: br_quat* __cdecl BrEulerToQuat(br_quat *q, br_euler *euler)
br_quat* BrEulerToQuat(br_quat *q, br_euler *euler);

// Offset: 3312
// Size: 0x44
//IDA: br_euler* __cdecl BrQuatToEuler(br_euler *euler, br_quat *q)
br_euler* BrQuatToEuler(br_euler *euler, br_quat *q);

#endif
