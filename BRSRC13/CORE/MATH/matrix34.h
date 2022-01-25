#ifndef _MATRIX34_H_
#define _MATRIX34_H_

#include "dr_types.h"
#include "br_types.h"

extern br_matrix34 mattmp1__matrix34; // addr: 00044CC0 // suffix added to avoid duplicate symbol
extern br_matrix34 mattmp2__matrix34; // addr: 00044CF0 // suffix added to avoid duplicate symbol

// Offset: 15
// Size: 0xe4
//IDA: void __cdecl BrMatrix34Copy(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34Copy(br_matrix34 *A, br_matrix34 *B);

// Offset: 257
// Size: 0x2aa
//IDA: void __cdecl BrMatrix34Mul(br_matrix34 *A, br_matrix34 *B, br_matrix34 *C)
void BrMatrix34Mul(br_matrix34 *A, br_matrix34 *B, br_matrix34 *C);

// Offset: 958
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Identity(br_matrix34 *mat)
void BrMatrix34Identity(br_matrix34 *mat);

// Offset: 1153
// Size: 0xef
//IDA: void __cdecl BrMatrix34RotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34RotateX(br_matrix34 *mat, br_angle rx);

// Offset: 1410
// Size: 0xef
//IDA: void __cdecl BrMatrix34RotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34RotateY(br_matrix34 *mat, br_angle ry);

// Offset: 1667
// Size: 0xf2
//IDA: void __cdecl BrMatrix34RotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34RotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 1926
// Size: 0x1a2
//IDA: void __cdecl BrMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a)
void BrMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a);

// Offset: 2364
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Translate(br_matrix34 *mat, br_scalar dx, br_scalar dy, br_scalar dz)
void BrMatrix34Translate(br_matrix34 *mat, br_scalar dx, br_scalar dy, br_scalar dz);

// Offset: 2557
// Size: 0xb1
//IDA: void __cdecl BrMatrix34Scale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34Scale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz);

// Offset: 2751
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34ShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz);

// Offset: 2946
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34ShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz);

// Offset: 3141
// Size: 0xb2
//IDA: void __cdecl BrMatrix34ShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34ShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy);

// Offset: 3337
// Size: 0x3f0
//IDA: br_scalar __cdecl BrMatrix34Inverse(br_matrix34 *B, br_matrix34 *A)
br_scalar BrMatrix34Inverse(br_matrix34 *B, br_matrix34 *A);

// Offset: 4365
// Size: 0x176
//IDA: void __cdecl BrMatrix34LPInverse(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34LPInverse(br_matrix34 *A, br_matrix34 *B);

// Offset: 4761
// Size: 0x249
//IDA: void __cdecl BrMatrix34LPNormalise(br_matrix34 *A, br_matrix34 *B)
void BrMatrix34LPNormalise(br_matrix34 *A, br_matrix34 *B);

// Offset: 5368
// Size: 0x162
//IDA: void __cdecl BrMatrix34RollingBall(br_matrix34 *mat, int dx, int dy, int radius)
void BrMatrix34RollingBall(br_matrix34 *mat, int dx, int dy, int radius);

// Offset: 5741
// Size: 0x16f
//IDA: br_matrix34* __cdecl BrBoundsToMatrix34(br_matrix34 *mat, br_bounds *bounds)
br_matrix34* BrBoundsToMatrix34(br_matrix34 *mat, br_bounds *bounds);

// Offset: 6124
// Size: 0xea
//IDA: void __cdecl BrMatrix34Copy4(br_matrix34 *A, br_matrix4 *B)
void BrMatrix34Copy4(br_matrix34 *A, br_matrix4 *B);

// Offset: 6377
// Size: 0x12a
//IDA: void __usercall BrMatrix34TApplyFV(br_vector3 *A@<EAX>, br_fvector3 *B@<EDX>, br_matrix34 *C@<EBX>)
void BrMatrix34TApplyFV(br_vector3 *A, br_fvector3 *B, br_matrix34 *C);

// Offset: 6691
// Size: 0x14b
//IDA: void __cdecl BrMatrix34Apply(br_vector3 *A, br_vector4 *B, br_matrix34 *C)
void BrMatrix34Apply(br_vector3 *A, br_vector4 *B, br_matrix34 *C);

// Offset: 7039
// Size: 0x17b
//IDA: void __cdecl BrMatrix34ApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34ApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C);

// Offset: 7435
// Size: 0x163
//IDA: void __cdecl BrMatrix34ApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34ApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C);

// Offset: 7807
// Size: 0x198
//IDA: void __cdecl BrMatrix34TApply(br_vector4 *A, br_vector4 *B, br_matrix34 *C)
void BrMatrix34TApply(br_vector4 *A, br_vector4 *B, br_matrix34 *C);

// Offset: 8233
// Size: 0x163
//IDA: void __cdecl BrMatrix34TApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34TApplyP(br_vector3 *A, br_vector3 *B, br_matrix34 *C);

// Offset: 8606
// Size: 0x163
//IDA: void __cdecl BrMatrix34TApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C)
void BrMatrix34TApplyV(br_vector3 *A, br_vector3 *B, br_matrix34 *C);

// Offset: 8975
// Size: 0x84
//IDA: void __cdecl BrMatrix34Pre(br_matrix34 *mat, br_matrix34 *A)
void BrMatrix34Pre(br_matrix34 *mat, br_matrix34 *A);

// Offset: 9122
// Size: 0x84
//IDA: void __cdecl BrMatrix34Post(br_matrix34 *mat, br_matrix34 *A)
void BrMatrix34Post(br_matrix34 *mat, br_matrix34 *A);

// Offset: 9275
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34PreRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 9421
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateX(br_matrix34 *mat, br_angle rx)
void BrMatrix34PostRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 9566
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34PreRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 9712
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateY(br_matrix34 *mat, br_angle ry)
void BrMatrix34PostRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 9857
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 10003
// Size: 0x7c
//IDA: void __cdecl BrMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz)
void BrMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 10147
// Size: 0x80
//IDA: void __cdecl BrMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis)
void BrMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 10296
// Size: 0x80
//IDA: void __cdecl BrMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis)
void BrMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 10447
// Size: 0x90
//IDA: void __cdecl BrMatrix34PreTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z)
void BrMatrix34PreTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z);

// Offset: 10615
// Size: 0x90
//IDA: void __cdecl BrMatrix34PostTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z)
void BrMatrix34PostTranslate(br_matrix34 *mat, br_scalar x, br_scalar y, br_scalar z);

// Offset: 10778
// Size: 0x90
//IDA: void __cdecl BrMatrix34PreScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34PreScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz);

// Offset: 10942
// Size: 0x90
//IDA: void __cdecl BrMatrix34PostScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix34PostScale(br_matrix34 *mat, br_scalar sx, br_scalar sy, br_scalar sz);

// Offset: 11106
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34PreShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz);

// Offset: 11262
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz)
void BrMatrix34PostShearX(br_matrix34 *mat, br_scalar sy, br_scalar sz);

// Offset: 11417
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34PreShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz);

// Offset: 11573
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz)
void BrMatrix34PostShearY(br_matrix34 *mat, br_scalar sx, br_scalar sz);

// Offset: 11728
// Size: 0x87
//IDA: void __cdecl BrMatrix34PreShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34PreShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy);

// Offset: 11884
// Size: 0x87
//IDA: void __cdecl BrMatrix34PostShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy)
void BrMatrix34PostShearZ(br_matrix34 *mat, br_scalar sx, br_scalar sy);

#endif
