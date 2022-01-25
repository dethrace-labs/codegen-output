#ifndef _MATRIX4_H_
#define _MATRIX4_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 14
// Size: 0x114
//IDA: void __cdecl BrMatrix4Copy(br_matrix4 *A, br_matrix4 *B)
void BrMatrix4Copy(br_matrix4 *A, br_matrix4 *B);

// Offset: 303
// Size: 0x429
//IDA: void __cdecl BrMatrix4Mul(br_matrix4 *A, br_matrix4 *B, br_matrix4 *C)
void BrMatrix4Mul(br_matrix4 *A, br_matrix4 *B, br_matrix4 *C);

// Offset: 1386
// Size: 0xd9
//IDA: void __cdecl BrMatrix4Identity(br_matrix4 *mat)
void BrMatrix4Identity(br_matrix4 *mat);

// Offset: 1618
// Size: 0xd6
//IDA: void __cdecl BrMatrix4Scale(br_matrix4 *mat, br_scalar sx, br_scalar sy, br_scalar sz)
void BrMatrix4Scale(br_matrix4 *mat, br_scalar sx, br_scalar sy, br_scalar sz);

// Offset: 1849
// Size: 0x133
//IDA: br_scalar __cdecl BrMatrix4Inverse(br_matrix4 *A, br_matrix4 *B)
br_scalar BrMatrix4Inverse(br_matrix4 *A, br_matrix4 *B);

// Offset: 2169
// Size: 0x6d
//IDA: br_scalar __cdecl Determinant3(br_scalar a1, br_scalar a2, br_scalar a3, br_scalar b1, br_scalar b2, br_scalar b3, br_scalar c1, br_scalar c2, br_scalar c3)
br_scalar Determinant3(br_scalar a1, br_scalar a2, br_scalar a3, br_scalar b1, br_scalar b2, br_scalar b3, br_scalar c1, br_scalar c2, br_scalar c3);

// Offset: 2299
// Size: 0x25b
//IDA: br_scalar __cdecl BrMatrix4Determinant(br_matrix4 *mat)
br_scalar BrMatrix4Determinant(br_matrix4 *mat);

// Offset: 2919
// Size: 0x6ba
//IDA: void __cdecl BrMatrix4Adjoint(br_matrix4 *A, br_matrix4 *B)
void BrMatrix4Adjoint(br_matrix4 *A, br_matrix4 *B);

// Offset: 4662
// Size: 0x156
//IDA: void __cdecl BrMatrix4Perspective(br_matrix4 *mat, br_angle field_of_view, br_scalar aspect, br_scalar hither, br_scalar yon)
void BrMatrix4Perspective(br_matrix4 *mat, br_angle field_of_view, br_scalar aspect, br_scalar hither, br_scalar yon);

// Offset: 5019
// Size: 0x186
//IDA: void __cdecl BrMatrix4Apply(br_vector4 *A, br_vector4 *B, br_matrix4 *C)
void BrMatrix4Apply(br_vector4 *A, br_vector4 *B, br_matrix4 *C);

// Offset: 5425
// Size: 0x16e
//IDA: void __cdecl BrMatrix4ApplyP(br_vector4 *A, br_vector3 *B, br_matrix4 *C)
void BrMatrix4ApplyP(br_vector4 *A, br_vector3 *B, br_matrix4 *C);

// Offset: 5807
// Size: 0x14e
//IDA: void __cdecl BrMatrix4ApplyV(br_vector4 *A, br_vector3 *B, br_matrix4 *C)
void BrMatrix4ApplyV(br_vector4 *A, br_vector3 *B, br_matrix4 *C);

// Offset: 6157
// Size: 0x186
//IDA: void __cdecl BrMatrix4TApply(br_vector4 *A, br_vector4 *B, br_matrix4 *C)
void BrMatrix4TApply(br_vector4 *A, br_vector4 *B, br_matrix4 *C);

// Offset: 6564
// Size: 0x16e
//IDA: void __cdecl BrMatrix4TApplyP(br_vector4 *A, br_vector3 *B, br_matrix4 *C)
void BrMatrix4TApplyP(br_vector4 *A, br_vector3 *B, br_matrix4 *C);

// Offset: 6947
// Size: 0x14e
//IDA: void __cdecl BrMatrix4TApplyV(br_vector4 *A, br_vector3 *B, br_matrix4 *C)
void BrMatrix4TApplyV(br_vector4 *A, br_vector3 *B, br_matrix4 *C);

// Offset: 7297
// Size: 0x112
//IDA: void __cdecl BrMatrix4Copy34(br_matrix4 *A, br_matrix34 *B)
void BrMatrix4Copy34(br_matrix4 *A, br_matrix34 *B);

// Offset: 7586
// Size: 0x372
//IDA: void __cdecl BrMatrix4Mul34(br_matrix4 *A, br_matrix34 *B, br_matrix4 *C)
void BrMatrix4Mul34(br_matrix4 *A, br_matrix34 *B, br_matrix4 *C);

// Offset: 8483
// Size: 0x7d
//IDA: void __cdecl BrMatrix4Pre34(br_matrix4 *A, br_matrix34 *B)
void BrMatrix4Pre34(br_matrix4 *A, br_matrix34 *B);

// Offset: 8624
// Size: 0xda
//IDA: void __cdecl BrMatrix4ShearZ(br_matrix4 *mat, br_scalar sx, br_scalar sy)
void BrMatrix4ShearZ(br_matrix4 *mat, br_scalar sx, br_scalar sy);

#endif
