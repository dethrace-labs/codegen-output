#include "transfrm.h"

br_uint_8 _CombineTransforms[7][7];

// Offset: 22
// Size: 0x340
//IDA: void __cdecl BrTransformToMatrix34(br_matrix34 *mat, br_transform *xform)
void BrTransformToMatrix34(br_matrix34 *mat, br_transform *xform) {
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    br_vector3 __block2__vx;
    br_vector3 __block2__vy;
    br_vector3 __block2__vz;
    LOG_TRACE("(%p, %p)", mat, xform);
    NOT_IMPLEMENTED();
}

// Offset: 877
// Size: 0x7f
//IDA: void __cdecl BrMatrix34PreTransform(br_matrix34 *mat, br_transform *xform)
void BrMatrix34PreTransform(br_matrix34 *mat, br_transform *xform) {
    br_matrix34 tmp;
    LOG_TRACE("(%p, %p)", mat, xform);
    NOT_IMPLEMENTED();
}

// Offset: 1028
// Size: 0x85
//IDA: void __cdecl BrMatrix34PostTransform(br_matrix34 *mat, br_transform *xform)
void BrMatrix34PostTransform(br_matrix34 *mat, br_transform *xform) {
    br_matrix34 tmp;
    LOG_TRACE("(%p, %p)", mat, xform);
    NOT_IMPLEMENTED();
}

// Offset: 1183
// Size: 0x85
//IDA: void __cdecl BrMatrix4PreTransform(br_matrix4 *mat, br_transform *xform)
void BrMatrix4PreTransform(br_matrix4 *mat, br_transform *xform) {
    br_matrix34 tmp;
    LOG_TRACE("(%p, %p)", mat, xform);
    NOT_IMPLEMENTED();
}

// Offset: 1338
// Size: 0x230
//IDA: void __cdecl BrMatrix34ToTransform(br_transform *xform, br_matrix34 *mat)
void BrMatrix34ToTransform(br_transform *xform, br_matrix34 *mat) {
    LOG_TRACE("(%p, %p)", xform, mat);
    NOT_IMPLEMENTED();
}

// Offset: 1921
// Size: 0xd6
//IDA: void __cdecl BrTransformToTransform(br_transform *dest, br_transform *src)
void BrTransformToTransform(br_transform *dest, br_transform *src) {
    br_matrix34 temp;
    LOG_TRACE("(%p, %p)", dest, src);
    NOT_IMPLEMENTED();
}

