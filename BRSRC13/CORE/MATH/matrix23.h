#ifndef _MATRIX23_H_
#define _MATRIX23_H_

#include "dr_types.h"
#include "br_types.h"

extern br_matrix23 mattmp1__matrix23; // addr: 00045BB8 // suffix added to avoid duplicate symbol
extern br_matrix23 mattmp2__matrix23; // addr: 00045BD0 // suffix added to avoid duplicate symbol

// Offset: 15
// Size: 0x9c
//IDA: void __cdecl BrMatrix23Copy(br_matrix23 *A, br_matrix23 *B)
void BrMatrix23Copy(br_matrix23 *A, br_matrix23 *B);

// Offset: 185
// Size: 0x13c
//IDA: void __cdecl BrMatrix23Mul(br_matrix23 *A, br_matrix23 *B, br_matrix23 *C)
void BrMatrix23Mul(br_matrix23 *A, br_matrix23 *B, br_matrix23 *C);

// Offset: 520
// Size: 0x75
//IDA: void __cdecl BrMatrix23Identity(br_matrix23 *mat)
void BrMatrix23Identity(br_matrix23 *mat);

// Offset: 654
// Size: 0xb3
//IDA: void __cdecl BrMatrix23Rotate(br_matrix23 *mat, br_angle rz)
void BrMatrix23Rotate(br_matrix23 *mat, br_angle rz);

// Offset: 853
// Size: 0x73
//IDA: void __cdecl BrMatrix23Translate(br_matrix23 *mat, br_scalar dx, br_scalar dy)
void BrMatrix23Translate(br_matrix23 *mat, br_scalar dx, br_scalar dy);

// Offset: 984
// Size: 0x73
//IDA: void __cdecl BrMatrix23Scale(br_matrix23 *mat, br_scalar sx, br_scalar sy)
void BrMatrix23Scale(br_matrix23 *mat, br_scalar sx, br_scalar sy);

// Offset: 1116
// Size: 0x77
//IDA: void __cdecl BrMatrix23ShearX(br_matrix23 *mat, br_scalar sy)
void BrMatrix23ShearX(br_matrix23 *mat, br_scalar sy);

// Offset: 1252
// Size: 0x77
//IDA: void __cdecl BrMatrix23ShearY(br_matrix23 *mat, br_scalar sx)
void BrMatrix23ShearY(br_matrix23 *mat, br_scalar sx);

// Offset: 1389
// Size: 0x1d5
//IDA: br_scalar __cdecl BrMatrix23Inverse(br_matrix23 *B, br_matrix23 *A)
br_scalar BrMatrix23Inverse(br_matrix23 *B, br_matrix23 *A);

// Offset: 1878
// Size: 0xee
//IDA: void __cdecl BrMatrix23LPInverse(br_matrix23 *B, br_matrix23 *A)
void BrMatrix23LPInverse(br_matrix23 *B, br_matrix23 *A);

// Offset: 2138
// Size: 0xf6
//IDA: void __cdecl BrMatrix23LPNormalise(br_matrix23 *A, br_matrix23 *B)
void BrMatrix23LPNormalise(br_matrix23 *A, br_matrix23 *B);

// Offset: 2401
// Size: 0xe8
//IDA: void __cdecl BrMatrix23ApplyP(br_vector2 *A, br_vector2 *B, br_matrix23 *C)
void BrMatrix23ApplyP(br_vector2 *A, br_vector2 *B, br_matrix23 *C);

// Offset: 2650
// Size: 0xd8
//IDA: void __cdecl BrMatrix23ApplyV(br_vector2 *A, br_vector2 *B, br_matrix23 *C)
void BrMatrix23ApplyV(br_vector2 *A, br_vector2 *B, br_matrix23 *C);

// Offset: 2884
// Size: 0xd8
//IDA: void __cdecl BrMatrix23TApplyP(br_vector2 *A, br_vector2 *B, br_matrix23 *C)
void BrMatrix23TApplyP(br_vector2 *A, br_vector2 *B, br_matrix23 *C);

// Offset: 3118
// Size: 0xd8
//IDA: void __cdecl BrMatrix23TApplyV(br_vector2 *A, br_vector2 *B, br_matrix23 *C)
void BrMatrix23TApplyV(br_vector2 *A, br_vector2 *B, br_matrix23 *C);

// Offset: 3348
// Size: 0x84
//IDA: void __cdecl BrMatrix23Pre(br_matrix23 *mat, br_matrix23 *A)
void BrMatrix23Pre(br_matrix23 *mat, br_matrix23 *A);

// Offset: 3495
// Size: 0x84
//IDA: void __cdecl BrMatrix23Post(br_matrix23 *mat, br_matrix23 *A)
void BrMatrix23Post(br_matrix23 *mat, br_matrix23 *A);

// Offset: 3647
// Size: 0x7c
//IDA: void __cdecl BrMatrix23PreRotate(br_matrix23 *mat, br_angle rz)
void BrMatrix23PreRotate(br_matrix23 *mat, br_angle rz);

// Offset: 3792
// Size: 0x7c
//IDA: void __cdecl BrMatrix23PostRotate(br_matrix23 *mat, br_angle rz)
void BrMatrix23PostRotate(br_matrix23 *mat, br_angle rz);

// Offset: 3939
// Size: 0x87
//IDA: void __cdecl BrMatrix23PreTranslate(br_matrix23 *mat, br_scalar x, br_scalar y)
void BrMatrix23PreTranslate(br_matrix23 *mat, br_scalar x, br_scalar y);

// Offset: 4098
// Size: 0x55
//IDA: void __cdecl BrMatrix23PostTranslate(br_matrix23 *A, br_scalar x, br_scalar y)
void BrMatrix23PostTranslate(br_matrix23 *A, br_scalar x, br_scalar y);

// Offset: 4202
// Size: 0x87
//IDA: void __cdecl BrMatrix23PreScale(br_matrix23 *mat, br_scalar sx, br_scalar sy)
void BrMatrix23PreScale(br_matrix23 *mat, br_scalar sx, br_scalar sy);

// Offset: 4357
// Size: 0x87
//IDA: void __cdecl BrMatrix23PostScale(br_matrix23 *mat, br_scalar sx, br_scalar sy)
void BrMatrix23PostScale(br_matrix23 *mat, br_scalar sx, br_scalar sy);

// Offset: 4512
// Size: 0x7e
//IDA: void __cdecl BrMatrix23PreShearX(br_matrix23 *mat, br_scalar sy)
void BrMatrix23PreShearX(br_matrix23 *mat, br_scalar sy);

// Offset: 4659
// Size: 0x7e
//IDA: void __cdecl BrMatrix23PostShearX(br_matrix23 *mat, br_scalar sy)
void BrMatrix23PostShearX(br_matrix23 *mat, br_scalar sy);

// Offset: 4805
// Size: 0x7e
//IDA: void __cdecl BrMatrix23PreShearY(br_matrix23 *mat, br_scalar sx)
void BrMatrix23PreShearY(br_matrix23 *mat, br_scalar sx);

// Offset: 4952
// Size: 0x7e
//IDA: void __cdecl BrMatrix23PostShearY(br_matrix23 *mat, br_scalar sx)
void BrMatrix23PostShearY(br_matrix23 *mat, br_scalar sx);

#endif
