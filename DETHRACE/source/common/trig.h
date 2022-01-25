#ifndef _TRIG_H_
#define _TRIG_H_

#include "dr_types.h"
#include "br_types.h"

extern float gFloat_sine_table[91]; // addr: 0001A9F4
extern br_fixed_ls gFixed_sine_table[91]; // addr: 0001AB60
extern br_matrix23 mat23tmp1; // addr: 0003FD30
extern br_matrix23 mat23tmp2; // addr: 0003FD48
extern br_matrix34 mattmp1__trig; // addr: 0003FD60 // suffix added to avoid duplicate symbol
extern br_matrix34 mattmp2__trig; // addr: 0003FD90 // suffix added to avoid duplicate symbol

// Offset: 0
// Size: 0xc6
//IDA: float __usercall FastFloatSin@<ST0>(int pAngle_in_degrees@<EAX>)
float FastFloatSin(int pAngle_in_degrees);

// Offset: 200
// Size: 0xc6
//IDA: float __usercall FastFloatCos@<ST0>(int pAngle_in_degrees@<EAX>)
float FastFloatCos(int pAngle_in_degrees);

// Offset: 400
// Size: 0x41
//IDA: float __usercall FastFloatTan@<ST0>(int pAngle_in_degrees@<EAX>)
float FastFloatTan(int pAngle_in_degrees);

// Offset: 468
// Size: 0x33
//IDA: br_scalar __usercall FastScalarSin@<ST0>(int pAngle_in_degrees@<EAX>)
br_scalar FastScalarSin(int pAngle_in_degrees);

// Offset: 520
// Size: 0x33
//IDA: br_scalar __usercall FastScalarCos@<ST0>(int pAngle_in_degrees@<EAX>)
br_scalar FastScalarCos(int pAngle_in_degrees);

// Offset: 572
// Size: 0x41
//IDA: br_scalar __usercall FastScalarTan@<ST0>(int pAngle_in_degrees@<EAX>)
br_scalar FastScalarTan(int pAngle_in_degrees);

// Offset: 640
// Size: 0x4d
//IDA: br_scalar __usercall FastScalarSinAngle@<ST0>(br_angle pBR_angle@<EAX>)
br_scalar FastScalarSinAngle(br_angle pBR_angle);

// Offset: 720
// Size: 0x4d
//IDA: br_scalar __usercall FastScalarCosAngle@<ST0>(br_angle pBR_angle@<EAX>)
br_scalar FastScalarCosAngle(br_angle pBR_angle);

// Offset: 800
// Size: 0x5b
//IDA: br_scalar __usercall FastScalarTanAngle@<ST0>(br_angle pBR_angle@<EAX>)
br_scalar FastScalarTanAngle(br_angle pBR_angle);

// Offset: 892
// Size: 0xc9
//IDA: float __cdecl FastFloatArcSin(float pValue)
float FastFloatArcSin(float pValue);

// Offset: 1096
// Size: 0x40
//IDA: float __cdecl FastFloatArcCos(float pValue)
float FastFloatArcCos(float pValue);

// Offset: 1160
// Size: 0x3a
//IDA: br_scalar __cdecl FastScalarArcSin(br_scalar pValue)
br_scalar FastScalarArcSin(br_scalar pValue);

// Offset: 1220
// Size: 0x40
//IDA: br_scalar __cdecl FastScalarArcCos(br_scalar pValue)
br_scalar FastScalarArcCos(br_scalar pValue);

// Offset: 1284
// Size: 0x184
//IDA: float __cdecl FastFloatArcTan2(float pY, float pX)
float FastFloatArcTan2(float pY, float pX);

// Offset: 1672
// Size: 0x43
//IDA: br_scalar __cdecl FastScalarArcTan2(br_scalar pY, br_scalar pX)
br_scalar FastScalarArcTan2(br_scalar pY, br_scalar pX);

// Offset: 1740
// Size: 0x215
//IDA: br_angle __cdecl FastFloatArcTan2Angle(float pY, float pX)
br_angle FastFloatArcTan2Angle(float pY, float pX);

// Offset: 2276
// Size: 0x41
//IDA: br_angle __cdecl FastScalarArcTan2Angle(br_scalar pY, br_scalar pX)
br_angle FastScalarArcTan2Angle(br_scalar pY, br_scalar pX);

// Offset: 2344
// Size: 0xb7
//IDA: void __usercall DRMatrix34RotateX(br_matrix34 *mat@<EAX>, br_angle rx@<EDX>)
void DRMatrix34RotateX(br_matrix34 *mat, br_angle rx);

// Offset: 2528
// Size: 0xb7
//IDA: void __usercall DRMatrix34RotateY(br_matrix34 *mat@<EAX>, br_angle ry@<EDX>)
void DRMatrix34RotateY(br_matrix34 *mat, br_angle ry);

// Offset: 2712
// Size: 0xb7
//IDA: void __usercall DRMatrix34RotateZ(br_matrix34 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix34RotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 2896
// Size: 0x149
//IDA: void __usercall DRMatrix34Rotate(br_matrix34 *mat@<EAX>, br_angle r@<EDX>, br_vector3 *a@<EBX>)
void DRMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a);

// Offset: 3228
// Size: 0x60
//IDA: void __usercall DRMatrix34PreRotateX(br_matrix34 *mat@<EAX>, br_angle rx@<EDX>)
void DRMatrix34PreRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 3324
// Size: 0x60
//IDA: void __usercall DRMatrix34PostRotateX(br_matrix34 *mat@<EAX>, br_angle rx@<EDX>)
void DRMatrix34PostRotateX(br_matrix34 *mat, br_angle rx);

// Offset: 3420
// Size: 0x60
//IDA: void __usercall DRMatrix34PreRotateY(br_matrix34 *mat@<EAX>, br_angle ry@<EDX>)
void DRMatrix34PreRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 3516
// Size: 0x60
//IDA: void __usercall DRMatrix34PostRotateY(br_matrix34 *mat@<EAX>, br_angle ry@<EDX>)
void DRMatrix34PostRotateY(br_matrix34 *mat, br_angle ry);

// Offset: 3612
// Size: 0x60
//IDA: void __usercall DRMatrix34PreRotateZ(br_matrix34 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix34PreRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 3708
// Size: 0x60
//IDA: void __usercall DRMatrix34PostRotateZ(br_matrix34 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix34PostRotateZ(br_matrix34 *mat, br_angle rz);

// Offset: 3804
// Size: 0x64
//IDA: void __usercall DRMatrix34PreRotate(br_matrix34 *mat@<EAX>, br_angle r@<EDX>, br_vector3 *axis@<EBX>)
void DRMatrix34PreRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 3904
// Size: 0x64
//IDA: void __usercall DRMatrix34PostRotate(br_matrix34 *mat@<EAX>, br_angle r@<EDX>, br_vector3 *axis@<EBX>)
void DRMatrix34PostRotate(br_matrix34 *mat, br_angle r, br_vector3 *axis);

// Offset: 4004
// Size: 0x7b
//IDA: void __usercall DRMatrix23Rotate(br_matrix23 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix23Rotate(br_matrix23 *mat, br_angle rz);

// Offset: 4128
// Size: 0x60
//IDA: void __usercall DRMatrix23PreRotate(br_matrix23 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix23PreRotate(br_matrix23 *mat, br_angle rz);

// Offset: 4224
// Size: 0x60
//IDA: void __usercall DRMatrix23PostRotate(br_matrix23 *mat@<EAX>, br_angle rz@<EDX>)
void DRMatrix23PostRotate(br_matrix23 *mat, br_angle rz);

#endif
