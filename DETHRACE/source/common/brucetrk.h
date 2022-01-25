#ifndef _BRUCETRK_H_
#define _BRUCETRK_H_

#include "dr_types.h"
#include "br_types.h"

extern br_actor *gMr_blendy; // addr: 00025650
extern int gDefault_blend_pc; // addr: 00025654

// Offset: 0
// Size: 0xc9
//IDA: void __usercall AllocateActorMatrix(tTrack_spec *pTrack_spec@<EAX>, br_actor ****pDst@<EDX>)
void AllocateActorMatrix(tTrack_spec *pTrack_spec, br_actor ****pDst);

// Offset: 204
// Size: 0x172
//IDA: void __usercall DisposeActorMatrix(tTrack_spec *pTrack_spec@<EAX>, br_actor ****pVictim@<EDX>, int pRemove_act_mod@<EBX>)
void DisposeActorMatrix(tTrack_spec *pTrack_spec, br_actor ****pVictim, int pRemove_act_mod);

// Offset: 576
// Size: 0x83
//IDA: void __usercall DisposeColumns(tTrack_spec *pTrack_spec@<EAX>)
void DisposeColumns(tTrack_spec *pTrack_spec);

// Offset: 708
// Size: 0xec
//IDA: void __usercall XZToColumnXZ(tU8 *pColumn_x@<EAX>, tU8 *pColumn_z@<EDX>, br_scalar pX, br_scalar pZ, tTrack_spec *pTrack_spec)
void XZToColumnXZ(tU8 *pColumn_x, tU8 *pColumn_z, br_scalar pX, br_scalar pZ, tTrack_spec *pTrack_spec);

// Offset: 944
// Size: 0x2f6
//IDA: void __usercall StripBlendedFaces(br_actor *pActor@<EAX>, br_model *pModel@<EDX>)
void StripBlendedFaces(br_actor *pActor, br_model *pModel);

// Offset: 1704
// Size: 0x2e9
//IDA: br_uint_32 __cdecl FindNonCarsCB(br_actor *pActor, tTrack_spec *pTrack_spec)
br_uint_32 FindNonCarsCB(br_actor *pActor, tTrack_spec *pTrack_spec);

// Offset: 2452
// Size: 0x246
//IDA: br_uint_32 __cdecl ProcessModelsCB(br_actor *pActor, tTrack_spec *pTrack_spec)
br_uint_32 ProcessModelsCB(br_actor *pActor, tTrack_spec *pTrack_spec);

// Offset: 3036
// Size: 0x3d
//IDA: void __usercall ProcessModels(tTrack_spec *pTrack_spec@<EAX>)
void ProcessModels(tTrack_spec *pTrack_spec);

// Offset: 3100
// Size: 0x1b8
//IDA: void __usercall ExtractColumns(tTrack_spec *pTrack_spec@<EAX>)
void ExtractColumns(tTrack_spec *pTrack_spec);

// Offset: 3540
// Size: 0xc9
//IDA: void __usercall LollipopizeActor4(br_actor *pActor@<EAX>, br_matrix34 *pRef_to_world@<EDX>, br_actor *pCamera@<EBX>)
void LollipopizeActor4(br_actor *pActor, br_matrix34 *pRef_to_world, br_actor *pCamera);

// Offset: 3744
// Size: 0x41
//IDA: br_uint_32 __cdecl LollipopizeChildren(br_actor *pActor, void *pArg)
br_uint_32 LollipopizeChildren(br_actor *pActor, void *pArg);

// Offset: 3812
// Size: 0x426
//IDA: void __usercall DrawColumns(int pDraw_blends@<EAX>, tTrack_spec *pTrack_spec@<EDX>, int pMin_x@<EBX>, int pMax_x@<ECX>, int pMin_z, int pMax_z, br_matrix34 *pCamera_to_world)
void DrawColumns(int pDraw_blends, tTrack_spec *pTrack_spec, int pMin_x, int pMax_x, int pMin_z, int pMax_z, br_matrix34 *pCamera_to_world);

// Offset: 4876
// Size: 0x529
//IDA: void __usercall RenderTrack(br_actor *pWorld@<EAX>, tTrack_spec *pTrack_spec@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, int pRender_blends)
void RenderTrack(br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world, int pRender_blends);

// Offset: 6200
// Size: 0x2f
//IDA: br_scalar __cdecl GetYonFactor()
br_scalar GetYonFactor();

// Offset: 6248
// Size: 0x2c
//IDA: void __cdecl SetYonFactor(br_scalar pNew)
void SetYonFactor(br_scalar pNew);

#endif
