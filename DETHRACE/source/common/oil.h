#ifndef _OIL_H_
#define _OIL_H_

#include "dr_types.h"
#include "br_types.h"

extern char *gOil_pixie_names[1]; // addr: 00016FCC
extern int gNext_oil_pixie; // addr: 00016FD0
extern br_scalar gZ_buffer_diff; // addr: 00016FD4
extern br_scalar gMin_z_diff; // addr: 00016FD8
extern br_pixelmap *gOil_pixies[1]; // addr: 00039C20
extern tOil_spill_info gOily_spills[15]; // addr: 00039C24

// Offset: 0
// Size: 0x32b
//IDA: void __cdecl InitOilSpills()
void InitOilSpills();

// Offset: 812
// Size: 0x65
//IDA: void __cdecl ResetOilSpills()
void ResetOilSpills();

// Offset: 916
// Size: 0x14f
//IDA: void __usercall QueueOilSpill(tCar_spec *pCar@<EAX>)
void QueueOilSpill(tCar_spec *pCar);

// Offset: 1252
// Size: 0x3c7
//IDA: int __usercall OKToSpillOil@<EAX>(tOil_spill_info *pOil@<EAX>)
int OKToSpillOil(tOil_spill_info *pOil);

// Offset: 2220
// Size: 0x7c
//IDA: void __usercall Vector3Interpolate(br_vector3 *pDst@<EAX>, br_vector3 *pFrom@<EDX>, br_vector3 *pTo@<EBX>, br_scalar pP)
void Vector3Interpolate(br_vector3 *pDst, br_vector3 *pFrom, br_vector3 *pTo, br_scalar pP);

// Offset: 2344
// Size: 0xfc
//IDA: void __usercall EnsureGroundDetailVisible(br_vector3 *pNew_pos@<EAX>, br_vector3 *pGround_normal@<EDX>, br_vector3 *pOld_pos@<EBX>)
void EnsureGroundDetailVisible(br_vector3 *pNew_pos, br_vector3 *pGround_normal, br_vector3 *pOld_pos);

// Offset: 2596
// Size: 0x40
//IDA: void __usercall MungeOilsHeightAboveGround(tOil_spill_info *pOil@<EAX>)
void MungeOilsHeightAboveGround(tOil_spill_info *pOil);

// Offset: 2660
// Size: 0x35
//IDA: void __usercall MungeIndexedOilsHeightAboveGround(int pIndex@<EAX>)
void MungeIndexedOilsHeightAboveGround(int pIndex);

// Offset: 2716
// Size: 0xc1
//IDA: void __usercall SetInitialOilStuff(tOil_spill_info *pOil@<EAX>, br_model *pModel@<EDX>)
void SetInitialOilStuff(tOil_spill_info *pOil, br_model *pModel);

// Offset: 2912
// Size: 0x531
//IDA: void __usercall ProcessOilSpills(tU32 pFrame_period@<EAX>)
void ProcessOilSpills(tU32 pFrame_period);

// Offset: 4244
// Size: 0x2c
//IDA: int __cdecl GetOilSpillCount()
int GetOilSpillCount();

// Offset: 4288
// Size: 0x5d
//IDA: void __usercall GetOilSpillDetails(int pIndex@<EAX>, br_actor **pActor@<EDX>, br_scalar *pSize@<EBX>)
void GetOilSpillDetails(int pIndex, br_actor **pActor, br_scalar *pSize);

// Offset: 4384
// Size: 0x111
//IDA: int __usercall PointInSpill@<EAX>(br_vector3 *pV@<EAX>, int pSpill@<EDX>)
int PointInSpill(br_vector3 *pV, int pSpill);

// Offset: 4660
// Size: 0x255
//IDA: void __usercall GetOilFrictionFactors(tCar_spec *pCar@<EAX>, br_scalar *pFl_factor@<EDX>, br_scalar *pFr_factor@<EBX>, br_scalar *pRl_factor@<ECX>, br_scalar *pRr_factor)
void GetOilFrictionFactors(tCar_spec *pCar, br_scalar *pFl_factor, br_scalar *pFr_factor, br_scalar *pRl_factor, br_scalar *pRr_factor);

// Offset: 5260
// Size: 0xd3
//IDA: void __usercall AdjustOilSpill(int pIndex@<EAX>, br_matrix34 *pMat@<EDX>, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap)
void AdjustOilSpill(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap);

// Offset: 5472
// Size: 0x152
//IDA: void __usercall ReceivedOilSpill(tNet_contents *pContents@<EAX>)
void ReceivedOilSpill(tNet_contents *pContents);

#endif
