#ifndef _VECTOR_H_
#define _VECTOR_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 14
// Size: 0x6c
//IDA: void __cdecl BrVector2Copy(br_vector2 *v1, br_vector2 *v2)
void BrVector2Copy(br_vector2 *v1, br_vector2 *v2);

// Offset: 135
// Size: 0x4b
//IDA: void __cdecl BrVector2Set(br_vector2 *v1, br_scalar s1, br_scalar s2)
void BrVector2Set(br_vector2 *v1, br_scalar s1, br_scalar s2);

// Offset: 226
// Size: 0x4b
//IDA: void __cdecl BrVector2SetInt(br_vector2 *v1, int i1, int i2)
void BrVector2SetInt(br_vector2 *v1, int i1, int i2);

// Offset: 319
// Size: 0x4b
//IDA: void __cdecl BrVector2SetFloat(br_vector2 *v1, float f1, float f2)
void BrVector2SetFloat(br_vector2 *v1, float f1, float f2);

// Offset: 410
// Size: 0x70
//IDA: void __cdecl BrVector2Negate(br_vector2 *v1, br_vector2 *v2)
void BrVector2Negate(br_vector2 *v1, br_vector2 *v2);

// Offset: 535
// Size: 0x93
//IDA: void __cdecl BrVector2Add(br_vector2 *v1, br_vector2 *v2, br_vector2 *v3)
void BrVector2Add(br_vector2 *v1, br_vector2 *v2, br_vector2 *v3);

// Offset: 702
// Size: 0x71
//IDA: void __cdecl BrVector2Accumulate(br_vector2 *v1, br_vector2 *v2)
void BrVector2Accumulate(br_vector2 *v1, br_vector2 *v2);

// Offset: 828
// Size: 0x93
//IDA: void __cdecl BrVector2Sub(br_vector2 *v1, br_vector2 *v2, br_vector2 *v3)
void BrVector2Sub(br_vector2 *v1, br_vector2 *v2, br_vector2 *v3);

// Offset: 990
// Size: 0x72
//IDA: void __cdecl BrVector2Scale(br_vector2 *v1, br_vector2 *v2, br_scalar s)
void BrVector2Scale(br_vector2 *v1, br_vector2 *v2, br_scalar s);

// Offset: 1122
// Size: 0x78
//IDA: void __cdecl BrVector2InvScale(br_vector2 *v1, br_vector2 *v2, br_scalar s)
void BrVector2InvScale(br_vector2 *v1, br_vector2 *v2, br_scalar s);

// Offset: 1255
// Size: 0x85
//IDA: br_scalar __cdecl BrVector2Dot(br_vector2 *v1, br_vector2 *v2)
br_scalar BrVector2Dot(br_vector2 *v1, br_vector2 *v2);

// Offset: 1404
// Size: 0x6b
//IDA: br_scalar __cdecl BrVector2Length(br_vector2 *v1)
br_scalar BrVector2Length(br_vector2 *v1);

// Offset: 1534
// Size: 0x60
//IDA: br_scalar __cdecl BrVector2LengthSquared(br_vector2 *v1)
br_scalar BrVector2LengthSquared(br_vector2 *v1);

// Offset: 1644
// Size: 0x7e
//IDA: void __cdecl BrVector3Copy(br_vector3 *v1, br_vector3 *v2)
void BrVector3Copy(br_vector3 *v1, br_vector3 *v2);

// Offset: 1783
// Size: 0x57
//IDA: void __cdecl BrVector3Set(br_vector3 *v1, br_scalar s1, br_scalar s2, br_scalar s3)
void BrVector3Set(br_vector3 *v1, br_scalar s1, br_scalar s2, br_scalar s3);

// Offset: 1886
// Size: 0x57
//IDA: void __cdecl BrVector3SetInt(br_vector3 *v1, int i1, int i2, int i3)
void BrVector3SetInt(br_vector3 *v1, int i1, int i2, int i3);

// Offset: 1991
// Size: 0x57
//IDA: void __cdecl BrVector3SetFloat(br_vector3 *v1, float f1, float f2, float f3)
void BrVector3SetFloat(br_vector3 *v1, float f1, float f2, float f3);

// Offset: 2094
// Size: 0x84
//IDA: void __cdecl BrVector3Negate(br_vector3 *v1, br_vector3 *v2)
void BrVector3Negate(br_vector3 *v1, br_vector3 *v2);

// Offset: 2239
// Size: 0xae
//IDA: void __cdecl BrVector3Add(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3)
void BrVector3Add(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3);

// Offset: 2433
// Size: 0x86
//IDA: void __cdecl BrVector3Accumulate(br_vector3 *v1, br_vector3 *v2)
void BrVector3Accumulate(br_vector3 *v1, br_vector3 *v2);

// Offset: 2580
// Size: 0xae
//IDA: void __cdecl BrVector3Sub(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3)
void BrVector3Sub(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3);

// Offset: 2769
// Size: 0x87
//IDA: void __cdecl BrVector3Scale(br_vector3 *v1, br_vector3 *v2, br_scalar s)
void BrVector3Scale(br_vector3 *v1, br_vector3 *v2, br_scalar s);

// Offset: 2922
// Size: 0x87
//IDA: void __cdecl BrVector3InvScale(br_vector3 *v1, br_vector3 *v2, br_scalar s)
void BrVector3InvScale(br_vector3 *v1, br_vector3 *v2, br_scalar s);

// Offset: 3070
// Size: 0x93
//IDA: br_scalar __cdecl BrVector3Dot(br_vector3 *v1, br_vector3 *v2)
br_scalar BrVector3Dot(br_vector3 *v1, br_vector3 *v2);

// Offset: 3232
// Size: 0x118
//IDA: void __cdecl BrVector3Cross(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3)
void BrVector3Cross(br_vector3 *v1, br_vector3 *v2, br_vector3 *v3);

// Offset: 3528
// Size: 0x76
//IDA: br_scalar __cdecl BrVector3Length(br_vector3 *v1)
br_scalar BrVector3Length(br_vector3 *v1);

// Offset: 3669
// Size: 0x6b
//IDA: br_scalar __cdecl BrVector3LengthSquared(br_vector3 *v1)
br_scalar BrVector3LengthSquared(br_vector3 *v1);

// Offset: 3795
// Size: 0xe2
//IDA: void __cdecl BrVector3Normalise(br_vector3 *v1, br_vector3 *v2)
void BrVector3Normalise(br_vector3 *v1, br_vector3 *v2);

// Offset: 4042
// Size: 0xbf
//IDA: void __cdecl BrVector3NormaliseLP(br_vector3 *v1, br_vector3 *v2)
void BrVector3NormaliseLP(br_vector3 *v1, br_vector3 *v2);

// Offset: 4246
// Size: 0xa1
//IDA: br_scalar __cdecl BrVector4Dot(br_vector4 *v1, br_vector4 *v2)
br_scalar BrVector4Dot(br_vector4 *v1, br_vector4 *v2);

// Offset: 4421
// Size: 0x8a
//IDA: void __cdecl BrVector4Copy(br_vector4 *v1, br_vector4 *v2)
void BrVector4Copy(br_vector4 *v1, br_vector4 *v2);

// Offset: 4573
// Size: 0x82
//IDA: br_scalar __usercall BrFVector2Dot@<ST0>(br_fvector2 *v1@<EAX>, br_vector2 *v2@<EDX>)
br_scalar BrFVector2Dot(br_fvector2 *v1, br_vector2 *v2);

// Offset: 4718
// Size: 0x86
//IDA: void __usercall BrFVector3Copy(br_fvector3 *v1@<EAX>, br_vector3 *v2@<EDX>)
void BrFVector3Copy(br_fvector3 *v1, br_vector3 *v2);

// Offset: 4868
// Size: 0x91
//IDA: void __usercall BrVector3ScaleF(br_vector3 *v1@<EAX>, br_fvector3 *v2@<EDX>, br_scalar s)
void BrVector3ScaleF(br_vector3 *v1, br_fvector3 *v2, br_scalar s);

// Offset: 5027
// Size: 0x90
//IDA: br_scalar __usercall BrFVector3Dot@<ST0>(br_fvector3 *v1@<EAX>, br_vector3 *v2@<EDX>)
br_scalar BrFVector3Dot(br_fvector3 *v1, br_vector3 *v2);

// Offset: 5191
// Size: 0xea
//IDA: void __usercall BrFVector3Normalise(br_fvector3 *v1@<EAX>, br_vector3 *v2@<EDX>)
void BrFVector3Normalise(br_fvector3 *v1, br_vector3 *v2);

// Offset: 5447
// Size: 0xbe
//IDA: void __usercall BrFVector3NormaliseLP(br_fvector3 *v1@<EAX>, br_vector3 *v2@<EDX>)
void BrFVector3NormaliseLP(br_fvector3 *v1, br_vector3 *v2);

// Offset: 5656
// Size: 0xbe
//IDA: void __cdecl BrVector2Normalise(br_vector2 *v1, br_vector2 *v2)
void BrVector2Normalise(br_vector2 *v1, br_vector2 *v2);

#endif
