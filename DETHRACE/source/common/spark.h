#ifndef _SPARK_H_
#define _SPARK_H_

#include "dr_types.h"
#include "br_types.h"

extern int gNext_spark; // addr: 0001A8A4
extern int gSpark_flags; // addr: 0001A8A8
extern int gNext_shrapnel; // addr: 0001A8AC
extern int gShrapnel_flags; // addr: 0001A8B0
extern br_model *gShrapnel_model[2]; // addr: 0001A8B4
extern int gSmoke_flags; // addr: 0001A8BC
extern int gSmoke_num; // addr: 0001A8C0
extern int gOffset; // addr: 0001A8C4
extern int gColumn_flags; // addr: 0001A8C8
extern int gNext_column; // addr: 0001A8CC
extern br_pixelmap *gBlack_smoke_shade_table; // addr: 0001A8D0
extern br_pixelmap *gDark_smoke_shade_table; // addr: 0001A8D4
extern br_pixelmap *gGrey_smoke_shade_table; // addr: 0001A8D8
extern int gSmoke_on; // addr: 0001A8DC
extern int gNum_splash_types; // addr: 0001A8E0
extern int gIt_type; // addr: 0001A8E4
extern br_pixelmap *gIt_shade_table; // addr: 0001A8E8
extern br_pixelmap **gDust_table; // addr: 0001A8EC
extern br_pixelmap *gFlame_map[20]; // addr: 0003DAC0
extern tBRender_smoke *gBR_smoke_pointers[30]; // addr: 0003DB10
extern tSplash gSplash[32]; // addr: 0003DB88
extern br_material *gSplash_material[20]; // addr: 0003DF08
extern tBRender_smoke gBR_smoke_structs[30]; // addr: 0003DF58
extern tSmoke_column gSmoke_column[25]; // addr: 0003E2A0
extern br_matrix4 gCameraToScreen; // addr: 0003ED90
extern tSpark gSparks[32]; // addr: 0003EDD0
extern br_pixelmap *gShade_list[16]; // addr: 0003F5D0
extern int gN_BR_smoke_structs; // addr: 0003F610
extern tSmoke gSmoke[25]; // addr: 0003F614
extern tU32 gSplash_flags; // addr: 0003FA60
extern tU32 gNext_splash; // addr: 0003FA64
extern br_model *gLollipop_model; // addr: 0003FA68
extern int gNum_dust_tables; // addr: 0003FA6C
extern br_model *gSplash_model; // addr: 0003FA70
extern int gDust_rotate; // addr: 0003FA74
extern br_camera *gSpark_cam; // addr: 0003FA78
extern br_material *gBlack_material; // addr: 0003FA7C
extern tShrapnel gShrapnel[15]; // addr: 0003FA80

// Offset: 0
// Size: 0x77
//IDA: void __cdecl DrawDot(br_scalar z, tU8 *scr_ptr, tU16 *depth_ptr, tU8 *shade_ptr)
void DrawDot(br_scalar z, tU8 *scr_ptr, tU16 *depth_ptr, tU8 *shade_ptr);

// Offset: 120
// Size: 0xea
//IDA: void __usercall SetWorldToScreen(br_pixelmap *pScreen@<EAX>)
void SetWorldToScreen(br_pixelmap *pScreen);

// Offset: 356
// Size: 0xab
//IDA: void __usercall DrawLine3DThroughBRender(br_vector3 *pStart@<EAX>, br_vector3 *pEnd@<EDX>)
void DrawLine3DThroughBRender(br_vector3 *pStart, br_vector3 *pEnd);

// Offset: 528
// Size: 0x1ea
//IDA: int __usercall DrawLine3D@<EAX>(br_vector3 *start@<EAX>, br_vector3 *end@<EDX>, br_pixelmap *pScreen@<EBX>, br_pixelmap *pDepth_buffer@<ECX>, br_pixelmap *shade_table)
int DrawLine3D(br_vector3 *start, br_vector3 *end, br_pixelmap *pScreen, br_pixelmap *pDepth_buffer, br_pixelmap *shade_table);

// Offset: 1020
// Size: 0x8ad
//IDA: int __usercall DrawLine2D@<EAX>(br_vector3 *o@<EAX>, br_vector3 *p@<EDX>, br_pixelmap *pScreen@<EBX>, br_pixelmap *pDepth_buffer@<ECX>, br_scalar brightness, br_pixelmap *shade_table)
int DrawLine2D(br_vector3 *o, br_vector3 *p, br_pixelmap *pScreen, br_pixelmap *pDepth_buffer, br_scalar brightness, br_pixelmap *shade_table);

// Offset: 3244
// Size: 0xd1
//IDA: void __usercall SetLineModelCols(tU8 pCol@<EAX>)
void SetLineModelCols(tU8 pCol);

// Offset: 3456
// Size: 0x279
//IDA: void __usercall ReplaySparks(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, tU32 pTime@<ECX>)
void ReplaySparks(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera, tU32 pTime);

// Offset: 4092
// Size: 0x8fb
//IDA: void __usercall RenderSparks(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, tU32 pTime)
void RenderSparks(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, tU32 pTime);

// Offset: 6392
// Size: 0x135
//IDA: void __usercall CreateSingleSpark(tCar_spec *pCar@<EAX>, br_vector3 *pPos@<EDX>, br_vector3 *pVel@<EBX>)
void CreateSingleSpark(tCar_spec *pCar, br_vector3 *pPos, br_vector3 *pVel);

// Offset: 6704
// Size: 0x622
//IDA: void __usercall CreateSparks(br_vector3 *pos@<EAX>, br_vector3 *v@<EDX>, br_vector3 *pForce@<EBX>, br_scalar sparkiness, tCar_spec *pCar)
void CreateSparks(br_vector3 *pos, br_vector3 *v, br_vector3 *pForce, br_scalar sparkiness, tCar_spec *pCar);

// Offset: 8276
// Size: 0x3f1
//IDA: void __usercall CreateSparkShower(br_vector3 *pos@<EAX>, br_vector3 *v@<EDX>, br_vector3 *pForce@<EBX>, tCar_spec *pCar1@<ECX>, tCar_spec *pCar2)
void CreateSparkShower(br_vector3 *pos, br_vector3 *v, br_vector3 *pForce, tCar_spec *pCar1, tCar_spec *pCar2);

// Offset: 9288
// Size: 0x131
//IDA: void __usercall AdjustSpark(int pSpark_num@<EAX>, br_vector3 *pos@<EDX>, br_vector3 *length@<EBX>)
void AdjustSpark(int pSpark_num, br_vector3 *pos, br_vector3 *length);

// Offset: 9596
// Size: 0xce
//IDA: void __usercall AdjustShrapnel(int pShrapnel_num@<EAX>, br_vector3 *pos@<EDX>, tU16 pAge@<EBX>, br_material *pMaterial@<ECX>)
void AdjustShrapnel(int pShrapnel_num, br_vector3 *pos, tU16 pAge, br_material *pMaterial);

// Offset: 9804
// Size: 0x2c
//IDA: void __cdecl ResetSparks()
void ResetSparks();

// Offset: 9848
// Size: 0x72
//IDA: void __cdecl ResetShrapnel()
void ResetShrapnel();

// Offset: 9964
// Size: 0x356
//IDA: void __usercall CreateShrapnelShower(br_vector3 *pos@<EAX>, br_vector3 *v@<EDX>, br_vector3 *pNormal@<EBX>, br_scalar pForce, tCar_spec *c1, tCar_spec *c2)
void CreateShrapnelShower(br_vector3 *pos, br_vector3 *v, br_vector3 *pNormal, br_scalar pForce, tCar_spec *c1, tCar_spec *c2);

// Offset: 10820
// Size: 0x39
//IDA: br_scalar __cdecl random()
br_scalar random();

// Offset: 10880
// Size: 0x20b
//IDA: void __cdecl InitShrapnel()
void InitShrapnel();

// Offset: 11404
// Size: 0x6f
//IDA: void __cdecl LoadInShrapnel()
void LoadInShrapnel();

// Offset: 11516
// Size: 0x49
//IDA: void __usercall KillShrapnel(int i@<EAX>)
void KillShrapnel(int i);

// Offset: 11592
// Size: 0xb3
//IDA: void __cdecl DisposeShrapnel()
void DisposeShrapnel();

// Offset: 11772
// Size: 0xf9
//IDA: void __usercall ReplayShrapnel(tU32 pTime@<EAX>)
void ReplayShrapnel(tU32 pTime);

// Offset: 12024
// Size: 0x3be
//IDA: void __usercall MungeShrapnel(tU32 pTime@<EAX>)
void MungeShrapnel(tU32 pTime);

// Offset: 12984
// Size: 0x127
//IDA: void __usercall DrMatrix34Rotate(br_matrix34 *mat@<EAX>, br_angle r@<EDX>, br_vector3 *a@<EBX>)
void DrMatrix34Rotate(br_matrix34 *mat, br_angle r, br_vector3 *a);

// Offset: 13280
// Size: 0xf5
//IDA: void __usercall SmokeLine(int l@<EAX>, int x@<EDX>, br_scalar zbuff, int r_squared, tU8 *scr_ptr, tU16 *depth_ptr, tU8 *shade_ptr, br_scalar r_multiplier, br_scalar z_multiplier, br_scalar shade_offset)
void SmokeLine(int l, int x, br_scalar zbuff, int r_squared, tU8 *scr_ptr, tU16 *depth_ptr, tU8 *shade_ptr, br_scalar r_multiplier, br_scalar z_multiplier, br_scalar shade_offset);

// Offset: 13528
// Size: 0x956
//IDA: void __usercall SmokeCircle(br_vector3 *o@<EAX>, br_scalar r, br_scalar extra_z, br_scalar strength, br_scalar pAspect, br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_pixelmap *pShade_table)
void SmokeCircle(br_vector3 *o, br_scalar r, br_scalar extra_z, br_scalar strength, br_scalar pAspect, br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_pixelmap *pShade_table);

// Offset: 15920
// Size: 0x70
//IDA: int __cdecl CmpSmokeZ(void *p1, void *p2)
int CmpSmokeZ(void *p1, void *p2);

// Offset: 16032
// Size: 0x1fa
//IDA: void __cdecl RenderRecordedSmokeCircles()
void RenderRecordedSmokeCircles();

// Offset: 16540
// Size: 0x10a
//IDA: void __usercall RecordSmokeCircle(br_vector3 *pCent@<EAX>, br_scalar pR, br_scalar pStrength, br_pixelmap *pShade, br_scalar pAspect)
void RecordSmokeCircle(br_vector3 *pCent, br_scalar pR, br_scalar pStrength, br_pixelmap *pShade, br_scalar pAspect);

// Offset: 16808
// Size: 0x1fa
//IDA: void __usercall SmokeCircle3D(br_vector3 *o@<EAX>, br_scalar r, br_scalar strength, br_scalar pAspect, br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_pixelmap *pShade_table, br_actor *pCam)
void SmokeCircle3D(br_vector3 *o, br_scalar r, br_scalar strength, br_scalar pAspect, br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_pixelmap *pShade_table, br_actor *pCam);

// Offset: 17316
// Size: 0x13f
//IDA: void __usercall ReplaySmoke(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>)
void ReplaySmoke(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera);

// Offset: 17636
// Size: 0x3a7
//IDA: void __usercall GenerateContinuousSmoke(tCar_spec *pCar@<EAX>, int wheel@<EDX>, tU32 pTime@<EBX>)
void GenerateContinuousSmoke(tCar_spec *pCar, int wheel, tU32 pTime);

// Offset: 18572
// Size: 0x5b
//IDA: void __cdecl DustRotate()
void DustRotate();

// Offset: 18664
// Size: 0x715
//IDA: void __usercall RenderSmoke(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, tU32 pTime)
void RenderSmoke(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, tU32 pTime);

// Offset: 20480
// Size: 0x2a0
//IDA: void __usercall CreatePuffOfSmoke(br_vector3 *pos@<EAX>, br_vector3 *v@<EDX>, br_scalar strength, br_scalar pDecay_factor, int pType, tCar_spec *pC)
void CreatePuffOfSmoke(br_vector3 *pos, br_vector3 *v, br_scalar strength, br_scalar pDecay_factor, int pType, tCar_spec *pC);

// Offset: 21152
// Size: 0x2c
//IDA: void __cdecl ResetSmoke()
void ResetSmoke();

// Offset: 21196
// Size: 0x8f
//IDA: void __usercall AdjustSmoke(int pIndex@<EAX>, tU8 pType@<EDX>, br_vector3 *pPos@<EBX>, br_scalar pRadius, br_scalar pStrength)
void AdjustSmoke(int pIndex, tU8 pType, br_vector3 *pPos, br_scalar pRadius, br_scalar pStrength);

// Offset: 21340
// Size: 0x22
//IDA: void __cdecl ActorError()
void ActorError();

// Offset: 21376
// Size: 0xfe
//IDA: void __usercall AdjustSmokeColumn(int pIndex@<EAX>, tCar_spec *pCar@<EDX>, int pVertex@<EBX>, int pColour@<ECX>)
void AdjustSmokeColumn(int pIndex, tCar_spec *pCar, int pVertex, int pColour);

// Offset: 21632
// Size: 0x370
//IDA: void __usercall CreateSmokeColumn(tCar_spec *pCar@<EAX>, int pColour@<EDX>, int pVertex_index@<EBX>, tU32 pLifetime@<ECX>)
void CreateSmokeColumn(tCar_spec *pCar, int pColour, int pVertex_index, tU32 pLifetime);

// Offset: 22512
// Size: 0x135
//IDA: void __cdecl GenerateSmokeShades()
void GenerateSmokeShades();

// Offset: 22824
// Size: 0x60
//IDA: void __cdecl GenerateItFoxShadeTable()
void GenerateItFoxShadeTable();

// Offset: 22920
// Size: 0x99
//IDA: void __usercall AdjustFlame(int pIndex@<EAX>, int pFrame_count@<EDX>, br_scalar pScale_x, br_scalar pScale_y, br_scalar pOffset_x, br_scalar pOffset_z)
void AdjustFlame(int pIndex, int pFrame_count, br_scalar pScale_x, br_scalar pScale_y, br_scalar pOffset_x, br_scalar pOffset_z);

// Offset: 23076
// Size: 0x175
//IDA: void __usercall ReplayFlame(tSmoke_column *col@<EAX>, br_actor *actor@<EDX>)
void ReplayFlame(tSmoke_column *col, br_actor *actor);

// Offset: 23452
// Size: 0x3a7
//IDA: void __usercall FlameAnimate(int c@<EAX>, br_vector3 *pPos@<EDX>, tU32 pTime@<EBX>)
void FlameAnimate(int c, br_vector3 *pPos, tU32 pTime);

// Offset: 24388
// Size: 0x219
//IDA: void __usercall DoSmokeColumn(int i@<EAX>, tU32 pTime@<EDX>, br_vector3 *pRet_car_pos@<EBX>)
void DoSmokeColumn(int i, tU32 pTime, br_vector3 *pRet_car_pos);

// Offset: 24928
// Size: 0x84
//IDA: void __usercall ReplaySmokeColumn(tU32 pTime@<EAX>)
void ReplaySmokeColumn(tU32 pTime);

// Offset: 25060
// Size: 0x485
//IDA: void __usercall MungeSmokeColumn(tU32 pTime@<EAX>)
void MungeSmokeColumn(tU32 pTime);

// Offset: 26220
// Size: 0x130
//IDA: void __cdecl DisposeFlame()
void DisposeFlame();

// Offset: 26524
// Size: 0x348
//IDA: void __cdecl InitFlame()
void InitFlame();

// Offset: 27364
// Size: 0x4ad
//IDA: void __usercall InitSplash(FILE *pF@<EAX>)
void InitSplash(FILE *pF);

// Offset: 28564
// Size: 0x101
//IDA: void __cdecl DisposeSplash()
void DisposeSplash();

// Offset: 28824
// Size: 0x132
//IDA: void __usercall DrawTheGlow(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>)
void DrawTheGlow(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera);

// Offset: 29132
// Size: 0x3b0
//IDA: void __usercall PipeInstantUnSmudge(tCar_spec *pCar@<EAX>)
void PipeInstantUnSmudge(tCar_spec *pCar);

// Offset: 30076
// Size: 0x724
//IDA: void __usercall SmudgeCar(tCar_spec *pCar@<EAX>, int fire_point@<EDX>)
void SmudgeCar(tCar_spec *pCar, int fire_point);

// Offset: 31904
// Size: 0x69
//IDA: void __cdecl ResetSmokeColumns()
void ResetSmokeColumns();

// Offset: 32012
// Size: 0x2d
//IDA: void __usercall SetSmokeOn(int pSmoke_on@<EAX>)
void SetSmokeOn(int pSmoke_on);

// Offset: 32060
// Size: 0x2f
//IDA: void __usercall ReallySetSmokeOn(int pSmoke_on@<EAX>)
void ReallySetSmokeOn(int pSmoke_on);

// Offset: 32108
// Size: 0x35
//IDA: void __usercall SetSmoke(int pSmoke_on@<EAX>)
void SetSmoke(int pSmoke_on);

// Offset: 32164
// Size: 0x2d
//IDA: int __cdecl GetSmokeOn()
int GetSmokeOn();

// Offset: 32212
// Size: 0x6b
//IDA: void __usercall StopCarSmoking(tCar_spec *pCar@<EAX>)
void StopCarSmoking(tCar_spec *pCar);

// Offset: 32320
// Size: 0x5b
//IDA: void __usercall StopCarSmokingInstantly(tCar_spec *pCar@<EAX>)
void StopCarSmokingInstantly(tCar_spec *pCar);

// Offset: 32412
// Size: 0xf5
//IDA: void __usercall ConditionalSmokeColumn(tCar_spec *pCar@<EAX>, int pDamage_index@<EDX>, int pColour@<EBX>)
void ConditionalSmokeColumn(tCar_spec *pCar, int pDamage_index, int pColour);

// Offset: 32660
// Size: 0x429
//IDA: void __usercall SingleSplash(tCar_spec *pCar@<EAX>, br_vector3 *sp@<EDX>, br_vector3 *normal@<EBX>, tU32 pTime@<ECX>)
void SingleSplash(tCar_spec *pCar, br_vector3 *sp, br_vector3 *normal, tU32 pTime);

// Offset: 33728
// Size: 0xc86
//IDA: void __usercall CreateSplash(tCar_spec *pCar@<EAX>, tU32 pTime@<EDX>)
void CreateSplash(tCar_spec *pCar, tU32 pTime);

// Offset: 36936
// Size: 0x3d1
//IDA: void __usercall MungeSplash(tU32 pTime@<EAX>)
void MungeSplash(tU32 pTime);

// Offset: 37916
// Size: 0x8f
//IDA: void __cdecl RenderSplashes()
void RenderSplashes();

// Offset: 38060
// Size: 0xcf
//IDA: void __usercall GetSmokeShadeTables(FILE *f@<EAX>)
void GetSmokeShadeTables(FILE *f);

// Offset: 38268
// Size: 0x75
//IDA: void __cdecl FreeSmokeShadeTables()
void FreeSmokeShadeTables();

// Offset: 38388
// Size: 0x50
//IDA: void __usercall LoadInKevStuff(FILE *pF@<EAX>)
void LoadInKevStuff(FILE *pF);

// Offset: 38468
// Size: 0x31
//IDA: void __cdecl DisposeKevStuff()
void DisposeKevStuff();

// Offset: 38520
// Size: 0x103
//IDA: void __usercall DisposeKevStuffCar(tCar_spec *pCar@<EAX>)
void DisposeKevStuffCar(tCar_spec *pCar);

// Offset: 38780
// Size: 0x33d
//IDA: void __cdecl DoTrueColModelThing(br_actor *actor, br_model *pModel, br_material *material, void *render_data, br_uint_8 style, int on_screen)
void DoTrueColModelThing(br_actor *actor, br_model *pModel, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 39612
// Size: 0x358
//IDA: void __cdecl DoModelThing(br_actor *actor, br_model *pModel, br_material *material, void *render_data, br_uint_8 style, int on_screen)
void DoModelThing(br_actor *actor, br_model *pModel, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 40468
// Size: 0xcc
//IDA: void __usercall SetModelShade(br_actor *pActor@<EAX>, br_pixelmap *pShade@<EDX>)
void SetModelShade(br_actor *pActor, br_pixelmap *pShade);

// Offset: 40672
// Size: 0x19e
//IDA: void __usercall MakeCarIt(tCar_spec *pCar@<EAX>)
void MakeCarIt(tCar_spec *pCar);

// Offset: 41088
// Size: 0x445
//IDA: void __usercall StopCarBeingIt(tCar_spec *pCar@<EAX>)
void StopCarBeingIt(tCar_spec *pCar);

#endif
