#include "matrix34.h"

 // Suffix added to avoid duplicate symbol
br_matrix34 mattmp1__matrix34;
 // Suffix added to avoid duplicate symbol
br_matrix34 mattmp2__matrix34;

// Offset: 15
// Size: 0xe4
//IDA: void __cdecl BrMatrix34Copy(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34Copy(br_matrix34 *A, br_matrix34 *B) {
    LOG_TRACE("(%p, %p)", A, B);
    NOT_IMPLEMENTED();
}

// Offset: 257
// Size: 0x2aa
//IDA: void __cdecl BrMatrix34Mul(br_matrix34 *A, br_matrix34 *B, br_matrix34 *C)
void BrMatrix34Mul(br_matrix34 *A, br_matrix34 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 958
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Identity(br_matrix34 *mat)
void BrMatrix34Identity(br_matrix34 *mat) {
    LOG_TRACE("(%p)", mat);
    NOT_IMPLEMENTED();
}

// Offset: 1153
// Size: 0xef
//IDA: void __cdecl BrMatrix34RotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34RotateX(br_matrix34 *mat, br_angle rx) {
    br_scalar s;
    br_scalar c;
    LOG_TRACE("(%p, %d)", mat, rx);
    NOT_IMPLEMENTED();
}

// Offset: 1410
// Size: 0xef
//IDA: void __cdecl BrMatrix34RotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34RotateY(br_matrix34 *mat, br_angle ry) {
    br_scalar s;
    br_scalar c;
    LOG_TRACE("(%p, %d)", mat, ry);
    NOT_IMPLEMENTED();
}

// Offset: 1667
// Size: 0xf2
//IDA: void __cdecl BrMatrix34RotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34RotateZ(br_matrix34 *mat, br_angle rz) {
    br_scalar s;
    br_scalar c;
    LOG_TRACE("(%p, %d)", mat, rz);
    NOT_IMPLEMENTED();
}

// Offset: 1926
// Size: 0x1a2
//IDA: void __cdecl BrMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a)
void BrMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a) {
    br_scalar t;
    br_scalar s;
    br_scalar c;
    br_scalar txy;
    br_scalar txz;
    br_scalar tyz;
    br_scalar sx;
    br_scalar sy;
    br_scalar sz;
    LOG_TRACE("(%p, %d, %p)", mat, r, a);
    NOT_IMPLEMENTED();
}

// Offset: 2364
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Translate(br_matrix34 *mat, br_scalar dx, br_scalar dy, br_scalar dz)
void BrMatrix34Translate(br_matrix34 *mat, br_scalar dx, br_scalar dy, br_scalar dz) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, dx, dy, dz);
    NOT_IMPLEMENTED();
}

// Offset: 2557
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Scale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34Scale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, sx, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 2751
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34ShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 2946
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34ShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sz);
    NOT_IMPLEMENTED();
}

// Offset: 3141
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34ShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sy);
    NOT_IMPLEMENTED();
}

// Offset: 3337
// Size: 0x3f0
//IDA: br_scalar __cdecl BrMatrix34Inverse(br_matrix34 *B, br_matrix34 *A)
br_scalar BrMatrix34Inverse(br_matrix34 *B, br_matrix34 *A) {
    float idet;
    float det;
    float pos;
    float neg;
    float temp;
    float AF[4][3];
    float BF[4][3];
    int i;
    LOG_TRACE("(%p, %p)", B, A);
    NOT_IMPLEMENTED();
}

// Offset: 4365
// Size: 0x176
//IDA: void __cdecl BrMatrix34LPInverse(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34LPInverse(br_matrix34 *A, br_matrix34 *B) {
    LOG_TRACE("(%p, %p)", A, B);
    NOT_IMPLEMENTED();
}

// Offset: 4761
// Size: 0x249
//IDA: void __cdecl BrMatrix34LPNormalise(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34LPNormalise(br_matrix34 *A, br_matrix34 *B) {
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %p)", A, B);
    NOT_IMPLEMENTED();
}

// Offset: 5368
// Size: 0x162
//IDA: void __cdecl BrMatrix34RollingBall(br_matrix34 *mat, int dx, int dy, int radius)
void BrMatrix34RollingBall(br_matrix34 *mat, int dx, int dy, int radius) {
    br_scalar nx;
    br_scalar ny;
    br_scalar ca;
    br_scalar sa;
    br_scalar dr;
    br_scalar h;
    LOG_TRACE("(%p, %d, %d, %d)", mat, dx, dy, radius);
    NOT_IMPLEMENTED();
}

// Offset: 5741
// Size: 0x16f
//IDA: br_matrix34* __cdecl BrBoundsToMatrix34(br_matrix34 *mat, br_bounds *bounds)
br_matrix34* BrBoundsToMatrix34(br_matrix34 *mat, br_bounds *bounds) {
    int i;
    br_vector3 tr;
    br_vector3 sc;
    LOG_TRACE("(%p, %p)", mat, bounds);
    NOT_IMPLEMENTED();
}

// Offset: 6124
// Size: 0xea
//IDA: void __cdecl BrMatrix34Copy4(br_matrix34 *A, br_matrix4 *B)
void BrMatrix34Copy4(br_matrix34 *A, br_matrix4 *B) {
    LOG_TRACE("(%p, %p)", A, B);
    NOT_IMPLEMENTED();
}

// Offset: 6377
// Size: 0x12a
//IDA: void __usercall BrMatrix34TApplyFV(br_vector3 *A@<EAX>, br_fvector3 *B@<EDX>, br_matrix34 *C@<EBX>)
void BrMatrix34TApplyFV(br_vector3 *A, br_fvector3 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 6691
// Size: 0x14b
//IDA: void __cdecl BrMatrix34Apply(br_vector3 *A, br_vector4 *B, br_matrix34 *C)
void BrMatrix34Apply(br_vector3 *A, br_vector4 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 7039
// Size: 0x17b
//IDA: void __cdecl BrMatrix34ApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34ApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 7435
// Size: 0x163
//IDA: void __cdecl BrMatrix34ApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34ApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 7807
// Size: 0x198
//IDA: void __cdecl BrMatrix34TApply(br_vector4 *A, br_vector4 *B, br_matrix34 *C)
void BrMatrix34TApply(br_vector4 *A, br_vector4 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 8233
// Size: 0x163
//IDA: void __cdecl BrMatrix34TApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34TApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 8606
// Size: 0x163
//IDA: void __cdecl BrMatrix34TApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34TApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C) {
    LOG_TRACE("(%p, %p, %p)", A, B, C);
    NOT_IMPLEMENTED();
}

// Offset: 8975
// Size: 0x84
//IDA: void __cdecl BrMatrix34Pre(br_matrix34 *mat, br_matrix34 *A)
void BrMatrix34Pre(br_matrix34 *mat, br_matrix34 *A) {
    LOG_TRACE("(%p, %p)", mat, A);
    NOT_IMPLEMENTED();
}

// Offset: 9122
// Size: 0x84
//IDA: void __cdecl BrMatrix34Post(br_matrix34 *mat, br_matrix34 *A)
void BrMatrix34Post(br_matrix34 *mat, br_matrix34 *A) {
    LOG_TRACE("(%p, %p)", mat, A);
    NOT_IMPLEMENTED();
}

// Offset: 9275
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34PreRotateX(br_matrix34 *mat, br_angle rx) {
    LOG_TRACE("(%p, %d)", mat, rx);
    NOT_IMPLEMENTED();
}

// Offset: 9421
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34PostRotateX(br_matrix34 *mat, br_angle rx) {
    LOG_TRACE("(%p, %d)", mat, rx);
    NOT_IMPLEMENTED();
}

// Offset: 9566
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34PreRotateY(br_matrix34 *mat, br_angle ry) {
    LOG_TRACE("(%p, %d)", mat, ry);
    NOT_IMPLEMENTED();
}

// Offset: 9712
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34PostRotateY(br_matrix34 *mat, br_angle ry) {
    LOG_TRACE("(%p, %d)", mat, ry);
    NOT_IMPLEMENTED();
}

// Offset: 9857
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz) {
    LOG_TRACE("(%p, %d)", mat, rz);
    NOT_IMPLEMENTED();
}

// Offset: 10003
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz) {
    LOG_TRACE("(%p, %d)", mat, rz);
    NOT_IMPLEMENTED();
}

// Offset: 10147
// Size: 0x80
//IDA: void __cdecl BrMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis)
void BrMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis) {
    LOG_TRACE("(%p, %d, %p)", mat, r, axis);
    NOT_IMPLEMENTED();
}

// Offset: 10296
// Size: 0x80
//IDA: void __cdecl BrMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis)
void BrMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis) {
    LOG_TRACE("(%p, %d, %p)", mat, r, axis);
    NOT_IMPLEMENTED();
}

// Offset: 10447
// Size: 0x90
//IDA: void __cdecl BrMatrix34PreTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z)
void BrMatrix34PreTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, x, y, z);
    NOT_IMPLEMENTED();
}

// Offset: 10615
// Size: 0x90
//IDA: void __cdecl BrMatrix34PostTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z)
void BrMatrix34PostTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, x, y, z);
    NOT_IMPLEMENTED();
}

// Offset: 10778
// Size: 0x90
//IDA: void __cdecl BrMatrix34PreScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34PreScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, sx, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 10942
// Size: 0x90
//IDA: void __cdecl BrMatrix34PostScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34PostScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f, %f)", mat, sx, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 11106
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34PreShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 11262
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34PostShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sy, sz);
    NOT_IMPLEMENTED();
}

// Offset: 11417
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34PreShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sz);
    NOT_IMPLEMENTED();
}

// Offset: 11573
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34PostShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sz);
    NOT_IMPLEMENTED();
}

// Offset: 11728
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34PreShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sy);
    NOT_IMPLEMENTED();
}

// Offset: 11884
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34PostShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy) {
    LOG_TRACE("(%p, %f, %f)", mat, sx, sy);
    NOT_IMPLEMENTED();
}

