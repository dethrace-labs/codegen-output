#include "angles.h"

order_info OrderAxes[32];

// Offset: 18
// Size: 0x3e6
//IDA: br_matrix34* __cdecl BrEulerToMatrix34(br_matrix34 *mat, br_euler *euler)
br_matrix34* BrEulerToMatrix34(br_matrix34 *mat, br_euler *euler) {
    br_uint_8 o;
    br_angle ti;
    br_angle tj;
    br_angle th;
    br_scalar ci;
    br_scalar cj;
    br_scalar ch;
    br_scalar si;
    br_scalar sj;
    br_scalar sh;
    br_scalar cc;
    br_scalar cs;
    br_scalar sc;
    br_scalar ss;
    int a0;
    int a1;
    int a2;
    LOG_TRACE("(%p, %p)", mat, euler);
    NOT_IMPLEMENTED();
}

// Offset: 1034
// Size: 0x4bd
//IDA: br_euler* __cdecl BrMatrix34ToEuler(br_euler *euler, br_matrix34 *mat)
br_euler* BrMatrix34ToEuler(br_euler *euler, br_matrix34 *mat) {
    br_uint_8 o;
    int a0;
    int a1;
    int a2;
    br_scalar __block0__sy;
    br_scalar __block1__cy;
    br_angle __block2__t;
    LOG_TRACE("(%p, %p)", euler, mat);
    NOT_IMPLEMENTED();
}

// Offset: 2264
// Size: 0x66
//IDA: br_matrix4* __cdecl BrEulerToMatrix4(br_matrix4 *mat, br_euler *euler)
br_matrix4* BrEulerToMatrix4(br_matrix4 *mat, br_euler *euler) {
    br_matrix34 tmp;
    LOG_TRACE("(%p, %p)", mat, euler);
    NOT_IMPLEMENTED();
}

// Offset: 2383
// Size: 0x63
//IDA: br_euler* __cdecl BrMatrix4ToEuler(br_euler *dest, br_matrix4 *mat)
br_euler* BrMatrix4ToEuler(br_euler *dest, br_matrix4 *mat) {
    br_matrix34 tmp;
    LOG_TRACE("(%p, %p)", dest, mat);
    NOT_IMPLEMENTED();
}

// Offset: 2496
// Size: 0x322
//IDA: br_quat* __cdecl BrEulerToQuat(br_quat *q, br_euler *euler)
br_quat* BrEulerToQuat(br_quat *q, br_euler *euler) {
    br_uint_8 o;
    br_angle ti;
    br_angle tj;
    br_angle th;
    br_scalar ci;
    br_scalar cj;
    br_scalar ch;
    br_scalar si;
    br_scalar sj;
    br_scalar sh;
    br_scalar cc;
    br_scalar cs;
    br_scalar sc;
    br_scalar ss;
    int a0;
    int a1;
    int a2;
    LOG_TRACE("(%p, %p)", q, euler);
    NOT_IMPLEMENTED();
}

// Offset: 3312
// Size: 0x44
//IDA: br_euler* __cdecl BrQuatToEuler(br_euler *euler, br_quat *q)
br_euler* BrQuatToEuler(br_euler *euler, br_quat *q) {
    br_matrix34 mat;
    LOG_TRACE("(%p, %p)", euler, q);
    NOT_IMPLEMENTED();
}

