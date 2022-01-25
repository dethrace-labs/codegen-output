#ifndef _SKIDMARK_H_
#define _SKIDMARK_H_

#include "dr_types.h"
#include "br_types.h"

extern char *gBoring_material_names[2]; // addr: 0001A818
extern char *gMaterial_names[2]; // addr: 0001A820
extern tSkid gSkids[100]; // addr: 0003CF70

// Offset: 0
// Size: 0x258
//IDA: void __usercall StretchMark(tSkid *pMark@<EAX>, br_vector3 *pFrom@<EDX>, br_vector3 *pTo@<EBX>, br_scalar pTexture_start)
void StretchMark(tSkid *pMark, br_vector3 *pFrom, br_vector3 *pTo, br_scalar pTexture_start);

// Offset: 600
// Size: 0x51
//IDA: br_material* __usercall MaterialFromIndex@<EAX>(int pIndex@<EAX>)
br_material* MaterialFromIndex(int pIndex);

// Offset: 684
// Size: 0x74
//IDA: void __usercall AdjustSkid(int pSkid_num@<EAX>, br_matrix34 *pMatrix@<EDX>, int pMaterial_index@<EBX>)
void AdjustSkid(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index);

// Offset: 800
// Size: 0xb6
//IDA: int __usercall FarFromLine2D@<EAX>(br_vector3 *pPt@<EAX>, br_vector3 *pL1@<EDX>, br_vector3 *pL2@<EBX>)
int FarFromLine2D(br_vector3 *pPt, br_vector3 *pL1, br_vector3 *pL2);

// Offset: 984
// Size: 0x89
//IDA: int __usercall Reflex2D@<EAX>(br_vector3 *pPt@<EAX>, br_vector3 *pL1@<EDX>, br_vector3 *pL2@<EBX>)
int Reflex2D(br_vector3 *pPt, br_vector3 *pL1, br_vector3 *pL2);

// Offset: 1124
// Size: 0x375
//IDA: void __cdecl InitSkids()
void InitSkids();

// Offset: 2012
// Size: 0x33
//IDA: void __usercall HideSkid(int pSkid_num@<EAX>)
void HideSkid(int pSkid_num);

// Offset: 2064
// Size: 0x43
//IDA: void __cdecl HideSkids()
void HideSkids();

// Offset: 2132
// Size: 0x88
//IDA: br_scalar __usercall SkidLen@<ST0>(int pSkid@<EAX>)
br_scalar SkidLen(int pSkid);

// Offset: 2268
// Size: 0x3b5
//IDA: void __usercall SkidSection(tCar_spec *pCar@<EAX>, int pWheel_num@<EDX>, br_vector3 *pPos@<EBX>, int pMaterial_index@<ECX>)
void SkidSection(tCar_spec *pCar, int pWheel_num, br_vector3 *pPos, int pMaterial_index);

// Offset: 3220
// Size: 0x497
//IDA: void __usercall SkidMark(tCar_spec *pCar@<EAX>, int pWheel_num@<EDX>)
void SkidMark(tCar_spec *pCar, int pWheel_num);

// Offset: 4396
// Size: 0x82
//IDA: void __usercall InitCarSkidStuff(tCar_spec *pCar@<EAX>)
void InitCarSkidStuff(tCar_spec *pCar);

// Offset: 4528
// Size: 0x79
//IDA: void __cdecl SkidsPerFrame()
void SkidsPerFrame();

// Offset: 4652
// Size: 0x4c
//IDA: void __cdecl RemoveMaterialsFromSkidmarks()
void RemoveMaterialsFromSkidmarks();

#endif
