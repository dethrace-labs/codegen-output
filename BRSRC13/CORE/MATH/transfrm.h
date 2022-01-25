#ifndef _TRANSFRM_H_
#define _TRANSFRM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_uint_8 _CombineTransforms[7][7]; // addr: 0001AF58

// Offset: 22
// Size: 0x340
//IDA: void __cdecl BrTransformToMatrix34(br_matrix34 *mat, br_transform *xform)
void BrTransformToMatrix34(br_matrix34 *mat, br_transform *xform);

// Offset: 877
// Size: 0x7f
//IDA: void __cdecl BrMatrix34PreTransform(br_matrix34 *mat, br_transform *xform)
void BrMatrix34PreTransform(br_matrix34 *mat, br_transform *xform);

// Offset: 1028
// Size: 0x85
//IDA: void __cdecl BrMatrix34PostTransform(br_matrix34 *mat, br_transform *xform)
void BrMatrix34PostTransform(br_matrix34 *mat, br_transform *xform);

// Offset: 1183
// Size: 0x85
//IDA: void __cdecl BrMatrix4PreTransform(br_matrix4 *mat, br_transform *xform)
void BrMatrix4PreTransform(br_matrix4 *mat, br_transform *xform);

// Offset: 1338
// Size: 0x230
//IDA: void __cdecl BrMatrix34ToTransform(br_transform *xform, br_matrix34 *mat)
void BrMatrix34ToTransform(br_transform *xform, br_matrix34 *mat);

// Offset: 1921
// Size: 0xd6
//IDA: void __cdecl BrTransformToTransform(br_transform *dest, br_transform *src)
void BrTransformToTransform(br_transform *dest, br_transform *src);

#endif
