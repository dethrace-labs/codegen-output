#ifndef _PEDESTRN_H_
#define _PEDESTRN_H_

#include "dr_types.h"
#include "br_types.h"

extern int gDetect_peds; // addr: 00018238
extern int gReally_stupid_ped_bug_enable; // addr: 0001823C
extern int gPed_sound_disable; // addr: 00018240
extern int gVesuvians_last_time; // addr: 00018244
extern int gSend_peds; // addr: 00018248
extern tU32 gLast_ped_message_send; // addr: 0001824C
extern tPedestrian_instruction *gInitial_instruction; // addr: 00018250
extern char *gRate_commands[3]; // addr: 00018254
extern char *gCollide_commands[1]; // addr: 00018260
extern char *gInstruc_commands[10]; // addr: 00018264
extern float gMin_ped_gib_speeds[4]; // addr: 0001828C
extern float gPed_gib_distrib[4]; // addr: 0001829C
extern float gPed_gib_speeds[4]; // addr: 000182AC
extern int gPed_size_counts[4]; // addr: 000182BC
extern char *gPed_gib_names[4][5]; // addr: 000182CC
extern char *gPed_geb_names[4][5]; // addr: 0001831C
extern int gPed_gib_maxes[4][5]; // addr: 0001836C
extern br_scalar gExploding_ped_scale[3]; // addr: 000183BC
extern br_vector3 gZero_v__pedestrn; // addr: 000183C8 // suffix added to avoid duplicate symbol
extern int gPed_instruc_count; // addr: 000183D4
extern int gPed_count; // addr: 000183D8
extern br_actor *gPath_actor; // addr: 000183DC
extern br_actor *gCurrent_ped_path_actor; // addr: 000183E0
extern int gPedestrians_on; // addr: 000183E4
extern int gVesuvian_corpses; // addr: 000183E8
extern br_material *gPed_material; // addr: 000183EC
extern int gPed_gib_counts[4][5]; // addr: 0003ACE0
extern tPedestrian_instruction gPed_instrucs[100]; // addr: 0003AD30
extern tPed_gib gPed_gibs[30]; // addr: 0003B500
extern tPed_gib_materials gPed_gib_materials[4]; // addr: 0003B9B0
extern tProximity_ray gProximity_rays[20]; // addr: 0003BA10
extern int gPed_colliding; // addr: 0003BB00
extern float gZombie_factor; // addr: 0003BB04
extern int gRespawn_variance; // addr: 0003BB08
extern br_scalar gPed_scale_factor; // addr: 0003BB0C
extern int gTotal_peds; // addr: 0003BB10
extern int gPedestrian_harvest; // addr: 0003BB14
extern br_vector3 gPed_pos_camera; // addr: 0003BB18
extern int gMin_respawn_time; // addr: 0003BB24
extern br_material *gPath_mat_calc; // addr: 0003BB28
extern float gPedestrian_speed_factor; // addr: 0003BB2C
extern int gExploding_pedestrians; // addr: 0003BB30
extern int gBlind_pedestrians; // addr: 0003BB34
extern br_material *gPath_mat_normal; // addr: 0003BB38
extern br_material *gInit_pos_mat_calc; // addr: 0003BB3C
extern int gPed_other; // addr: 0003BB40
extern int gAttracted_pedestrians; // addr: 0003BB44
extern int gPed_ref_num; // addr: 0003BB48
extern br_scalar gMax_distance_squared; // addr: 0003BB4C
extern br_model *gPed_model; // addr: 0003BB50
extern float gDanger_level; // addr: 0003BB54
extern br_vector3 gDanger_direction; // addr: 0003BB58
extern int gInit_ped_instruc; // addr: 0003BB64
extern int gCurrent_lollipop_index; // addr: 0003BB68
extern int gVesuvians_this_time; // addr: 0003BB6C
extern int gNumber_of_ped_gibs; // addr: 0003BB70
extern tPedestrian_data *gFlag_waving_bastard; // addr: 0003BB74
extern int gNumber_of_pedestrians; // addr: 0003BB78
extern br_pixelmap *gProx_ray_shade_table; // addr: 0003BB7C
extern tPedestrian_data *gPedestrian_array; // addr: 0003BB80
extern tU32 gLast_ped_splat_time; // addr: 0003BB84
extern int gCurrent_ped_multiplier; // addr: 0003BB88

// Offset: 0
// Size: 0x98
//IDA: void __usercall PedModelUpdate(br_model *pModel@<EAX>, br_scalar x0, br_scalar y0, br_scalar x1, br_scalar y1, br_scalar x2, br_scalar y2, br_scalar x3, br_scalar y3)
void PedModelUpdate(br_model *pModel, br_scalar x0, br_scalar y0, br_scalar x1, br_scalar y1, br_scalar x2, br_scalar y2, br_scalar x3, br_scalar y3);

// Offset: 152
// Size: 0x62
//IDA: int __usercall ActorIsPedestrian@<EAX>(br_actor *pActor@<EAX>)
int ActorIsPedestrian(br_actor *pActor);

// Offset: 252
// Size: 0x4f
//IDA: br_scalar __usercall PedHeightFromActor@<ST0>(br_actor *pActor@<EAX>)
br_scalar PedHeightFromActor(br_actor *pActor);

// Offset: 332
// Size: 0x34
//IDA: int __usercall GetPedestrianValue@<EAX>(br_actor *pActor@<EAX>)
int GetPedestrianValue(br_actor *pActor);

// Offset: 384
// Size: 0x58
//IDA: int __usercall PedestrianActorIsPerson@<EAX>(br_actor *pActor@<EAX>)
int PedestrianActorIsPerson(br_actor *pActor);

// Offset: 472
// Size: 0x57
//IDA: br_actor* __usercall GetPedestrianActor@<EAX>(int pIndex@<EAX>)
br_actor* GetPedestrianActor(int pIndex);

// Offset: 560
// Size: 0x61
//IDA: br_pixelmap* __usercall GetPedestrianTexture@<EAX>(br_actor *pActor@<EAX>, int *pFlipped@<EDX>)
br_pixelmap* GetPedestrianTexture(br_actor *pActor, int *pFlipped);

// Offset: 660
// Size: 0x99
//IDA: void __cdecl TogglePedestrians()
void TogglePedestrians();

// Offset: 816
// Size: 0x396
//IDA: void __cdecl InitPedGibs()
void InitPedGibs();

// Offset: 1736
// Size: 0xf0
//IDA: void __usercall SetPedMaterialForRender(br_actor *pActor@<EAX>)
void SetPedMaterialForRender(br_actor *pActor);

// Offset: 1976
// Size: 0x9e
//IDA: void __cdecl PedCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, void *pRender_data, br_uint_8 pStyle, int pOn_screen)
void PedCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, void *pRender_data, br_uint_8 pStyle, int pOn_screen);

// Offset: 2136
// Size: 0x204
//IDA: void __cdecl InitPeds()
void InitPeds();

// Offset: 2652
// Size: 0x113
//IDA: void __usercall MungeModelSize(br_actor *pActor@<EAX>, br_scalar pScaling_factor)
void MungeModelSize(br_actor *pActor, br_scalar pScaling_factor);

// Offset: 2928
// Size: 0x5bc
//IDA: int __usercall BurstPedestrian@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pSplattitudinalitude, int pAllow_explosion)
int BurstPedestrian(tPedestrian_data *pPedestrian, float pSplattitudinalitude, int pAllow_explosion);

// Offset: 4396
// Size: 0x89
//IDA: void __cdecl ResetAllPedGibs()
void ResetAllPedGibs();

// Offset: 4536
// Size: 0xc8
//IDA: void __usercall AdjustPedGib(int pIndex@<EAX>, int pSize@<EDX>, int pGib_index@<EBX>, int pPed_index@<ECX>, br_matrix34 *pTrans)
void AdjustPedGib(int pIndex, int pSize, int pGib_index, int pPed_index, br_matrix34 *pTrans);

// Offset: 4736
// Size: 0x32a
//IDA: void __usercall MungePedGibs(tU32 pFrame_period@<EAX>)
void MungePedGibs(tU32 pFrame_period);

// Offset: 5548
// Size: 0x10b
//IDA: void __usercall KillPedestrian(tPedestrian_data *pPedestrian@<EAX>)
void KillPedestrian(tPedestrian_data *pPedestrian);

// Offset: 5816
// Size: 0x12e
//IDA: void __usercall CalcPedWidthNHeight(tPedestrian_data *pPedestrian@<EAX>, br_pixelmap *pPixelmap@<EDX>, br_scalar *pHeight@<EBX>, br_scalar *pWidth@<ECX>)
void CalcPedWidthNHeight(tPedestrian_data *pPedestrian, br_pixelmap *pPixelmap, br_scalar *pHeight, br_scalar *pWidth);

// Offset: 6120
// Size: 0x796
//IDA: int __usercall PedestrianNextInstruction@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level, int pPosition_explicitly, int pMove_pc)
int PedestrianNextInstruction(tPedestrian_data *pPedestrian, float pDanger_level, int pPosition_explicitly, int pMove_pc);

// Offset: 8064
// Size: 0x1d0
//IDA: void __usercall MungePedestrianSequence(tPedestrian_data *pPedestrian@<EAX>, int pAction_changed@<EDX>)
void MungePedestrianSequence(tPedestrian_data *pPedestrian, int pAction_changed);

// Offset: 8528
// Size: 0xa6
//IDA: void __usercall DetachPedFromCar(tPedestrian_data *pPedestrian@<EAX>)
void DetachPedFromCar(tPedestrian_data *pPedestrian);

// Offset: 8696
// Size: 0x75
//IDA: void __usercall SetPedPos(tPedestrian_data *pPedestrian@<EAX>)
void SetPedPos(tPedestrian_data *pPedestrian);

// Offset: 8816
// Size: 0x3b
//IDA: void __usercall DetachPedActorFromCar(br_actor *pActor@<EAX>)
void DetachPedActorFromCar(br_actor *pActor);

// Offset: 8876
// Size: 0x525
//IDA: void __usercall MungePedestrianFrames(tPedestrian_data *pPedestrian@<EAX>)
void MungePedestrianFrames(tPedestrian_data *pPedestrian);

// Offset: 10196
// Size: 0x508
//IDA: void __usercall MungePedModel(tPedestrian_data *pPedestrian@<EAX>)
void MungePedModel(tPedestrian_data *pPedestrian);

// Offset: 11484
// Size: 0x198
//IDA: void __usercall ChangeActionTo(tPedestrian_data *pPedestrian@<EAX>, int pAction_index@<EDX>, int pRedo_frames_etc@<EBX>)
void ChangeActionTo(tPedestrian_data *pPedestrian, int pAction_index, int pRedo_frames_etc);

// Offset: 11892
// Size: 0x24d
//IDA: int __usercall MungePedestrianAction@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level)
int MungePedestrianAction(tPedestrian_data *pPedestrian, float pDanger_level);

// Offset: 12484
// Size: 0x69
//IDA: void __cdecl MakeFlagWavingBastardWaveHisFlagWhichIsTheProbablyTheLastThingHeWillEverDo()
void MakeFlagWavingBastardWaveHisFlagWhichIsTheProbablyTheLastThingHeWillEverDo();

// Offset: 12592
// Size: 0x91e
//IDA: void __usercall MungePedestrianPath(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level, br_vector3 *pDanger_direction)
void MungePedestrianPath(tPedestrian_data *pPedestrian, float pDanger_level, br_vector3 *pDanger_direction);

// Offset: 14928
// Size: 0x2fc
//IDA: float __usercall CalcPedestrianDangerLevel@<ST0>(tPedestrian_data *pPedestrian@<EAX>, br_vector3 *pDanger_direction@<EDX>)
float CalcPedestrianDangerLevel(tPedestrian_data *pPedestrian, br_vector3 *pDanger_direction);

// Offset: 15692
// Size: 0x3cc
//IDA: tPed_hit_position __usercall MoveToEdgeOfCar@<EAX>(tPedestrian_data *pPedestrian@<EAX>, tCollision_info *pCar@<EDX>, br_actor *pCar_actor@<EBX>, br_scalar pPed_x, br_scalar pPed_z, br_scalar pCar_bounds_min_x, br_scalar pCar_bounds_max_x, br_scalar pCar_bounds_min_z, br_scalar pCar_bounds_max_z, br_vector3 *pMin_ped_bounds_car, br_vector3 *pMax_ped_bounds_car)
tPed_hit_position MoveToEdgeOfCar(tPedestrian_data *pPedestrian, tCollision_info *pCar, br_actor *pCar_actor, br_scalar pPed_x, br_scalar pPed_z, br_scalar pCar_bounds_min_x, br_scalar pCar_bounds_max_x, br_scalar pCar_bounds_min_z, br_scalar pCar_bounds_max_z, br_vector3 *pMin_ped_bounds_car, br_vector3 *pMax_ped_bounds_car);

// Offset: 16664
// Size: 0x65
//IDA: void __cdecl CheckLastPed()
void CheckLastPed();

// Offset: 16768
// Size: 0x13f
//IDA: int __usercall BloodyWheels@<EAX>(tCar_spec *pCar@<EAX>, br_vector3 *pPed_car@<EDX>, br_scalar pSize, br_vector3 *pPed_glob)
int BloodyWheels(tCar_spec *pCar, br_vector3 *pPed_car, br_scalar pSize, br_vector3 *pPed_glob);

// Offset: 17088
// Size: 0x8e
//IDA: int __usercall FancyATossOffMate@<EAX>(tPedestrian_data *pPedestrian@<EAX>, tCollision_info *pCar@<EDX>, float pImpact_speed)
int FancyATossOffMate(tPedestrian_data *pPedestrian, tCollision_info *pCar, float pImpact_speed);

// Offset: 17232
// Size: 0x16ee
//IDA: void __usercall CheckPedestrianDeathScenario(tPedestrian_data *pPedestrian@<EAX>)
void CheckPedestrianDeathScenario(tPedestrian_data *pPedestrian);

// Offset: 23104
// Size: 0x301
//IDA: void __usercall SendPedestrian(tPedestrian_data *pPedestrian@<EAX>, int pIndex@<EDX>)
void SendPedestrian(tPedestrian_data *pPedestrian, int pIndex);

// Offset: 23876
// Size: 0x48a
//IDA: void __usercall DoPedestrian(tPedestrian_data *pPedestrian@<EAX>, int pIndex@<EDX>)
void DoPedestrian(tPedestrian_data *pPedestrian, int pIndex);

// Offset: 25040
// Size: 0x2ff
//IDA: void __usercall AdjustPedestrian(int pIndex@<EAX>, int pAction_index@<EDX>, int pFrame_index@<EBX>, int pHit_points@<ECX>, int pDone_initial, tU16 pParent, br_actor *pParent_actor, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset, br_vector3 *pTrans)
void AdjustPedestrian(int pIndex, int pAction_index, int pFrame_index, int pHit_points, int pDone_initial, tU16 pParent, br_actor *pParent_actor, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset, br_vector3 *pTrans);

// Offset: 25808
// Size: 0xc2
//IDA: void __usercall SquirtPathVertex(br_vertex *pFirst_vertex@<EAX>, br_vector3 *pPoint@<EDX>)
void SquirtPathVertex(br_vertex *pFirst_vertex, br_vector3 *pPoint);

// Offset: 26004
// Size: 0x5c
//IDA: void __cdecl ResetAllPedestrians()
void ResetAllPedestrians();

// Offset: 26096
// Size: 0x1dc
//IDA: void __usercall GroundPedestrian(tPedestrian_data *pPedestrian@<EAX>)
void GroundPedestrian(tPedestrian_data *pPedestrian);

// Offset: 26572
// Size: 0x1e3
//IDA: void __usercall RevivePedestrian(tPedestrian_data *pPedestrian@<EAX>, int pAnimate@<EDX>)
void RevivePedestrian(tPedestrian_data *pPedestrian, int pAnimate);

// Offset: 27056
// Size: 0x436
//IDA: void __usercall MungePedestrians(tU32 pFrame_period@<EAX>)
void MungePedestrians(tU32 pFrame_period);

// Offset: 28136
// Size: 0xc9
//IDA: void __cdecl RespawnPedestrians()
void RespawnPedestrians();

// Offset: 28340
// Size: 0x2d
//IDA: int __cdecl GetPedCount()
int GetPedCount();

// Offset: 28388
// Size: 0x104
//IDA: int __usercall GetPedPosition@<EAX>(int pIndex@<EAX>, br_vector3 *pPos@<EDX>)
int GetPedPosition(int pIndex, br_vector3 *pPos);

// Offset: 28648
// Size: 0xb72
//IDA: void __usercall CreatePedestrian(FILE *pG@<EAX>, tPedestrian_instruction *pInstructions@<EDX>, int pInstruc_count@<EBX>, int pInit_instruc@<ECX>, int pRef_num, int pForce_read)
void CreatePedestrian(FILE *pG, tPedestrian_instruction *pInstructions, int pInstruc_count, int pInit_instruc, int pRef_num, int pForce_read);

// Offset: 31580
// Size: 0x49
//IDA: void __cdecl ResetProxRay()
void ResetProxRay();

// Offset: 31656
// Size: 0x22
//IDA: void __cdecl PedMaterialFromHell()
void PedMaterialFromHell();

// Offset: 31692
// Size: 0x22
//IDA: void __cdecl ResetPedMaterial()
void ResetPedMaterial();

// Offset: 31728
// Size: 0x757
//IDA: void __usercall LoadInPedestrians(FILE *pF@<EAX>, int pSubs_count@<EDX>, tPed_subs *pSubs_array@<EBX>)
void LoadInPedestrians(FILE *pF, int pSubs_count, tPed_subs *pSubs_array);

// Offset: 33608
// Size: 0x521
//IDA: br_actor* __usercall BuildPedPaths@<EAX>(tPedestrian_instruction *pInstructions@<EAX>, int pInstruc_count@<EDX>, int pInit_instruc@<EBX>)
br_actor* BuildPedPaths(tPedestrian_instruction *pInstructions, int pInstruc_count, int pInit_instruc);

// Offset: 34924
// Size: 0x489
//IDA: void __cdecl WriteOutPeds()
void WriteOutPeds();

// Offset: 36088
// Size: 0xd5
//IDA: void __cdecl AddPed()
void AddPed();

// Offset: 36304
// Size: 0x128
//IDA: void __usercall NewPed(int pRef_num@<EAX>)
void NewPed(int pRef_num);

// Offset: 36600
// Size: 0x71
//IDA: void __cdecl RemoveCurrentPedPath()
void RemoveCurrentPedPath();

// Offset: 36716
// Size: 0x59
//IDA: void __cdecl ScrubPedestrian()
void ScrubPedestrian();

// Offset: 36808
// Size: 0x86
//IDA: void __cdecl TogglePedDetect()
void TogglePedDetect();

// Offset: 36944
// Size: 0x29
//IDA: void __cdecl NewPed0()
void NewPed0();

// Offset: 36988
// Size: 0x2c
//IDA: void __cdecl NewPed1()
void NewPed1();

// Offset: 37032
// Size: 0x2c
//IDA: void __cdecl NewPed2()
void NewPed2();

// Offset: 37076
// Size: 0x2c
//IDA: void __cdecl NewPed3()
void NewPed3();

// Offset: 37120
// Size: 0x2c
//IDA: void __cdecl NewPed4()
void NewPed4();

// Offset: 37164
// Size: 0x2c
//IDA: void __cdecl NewPed5()
void NewPed5();

// Offset: 37208
// Size: 0x2c
//IDA: void __cdecl NewPed6()
void NewPed6();

// Offset: 37252
// Size: 0x2c
//IDA: void __cdecl NewPed7()
void NewPed7();

// Offset: 37296
// Size: 0x2c
//IDA: void __cdecl NewPed8()
void NewPed8();

// Offset: 37340
// Size: 0x2c
//IDA: void __cdecl NewPed9()
void NewPed9();

// Offset: 37384
// Size: 0x2c
//IDA: void __cdecl NewPed0B()
void NewPed0B();

// Offset: 37428
// Size: 0x2c
//IDA: void __cdecl NewPed1B()
void NewPed1B();

// Offset: 37472
// Size: 0x2c
//IDA: void __cdecl NewPed2B()
void NewPed2B();

// Offset: 37516
// Size: 0x2c
//IDA: void __cdecl NewPed3B()
void NewPed3B();

// Offset: 37560
// Size: 0x2c
//IDA: void __cdecl NewPed4B()
void NewPed4B();

// Offset: 37604
// Size: 0x2c
//IDA: void __cdecl NewPed5B()
void NewPed5B();

// Offset: 37648
// Size: 0x2c
//IDA: void __cdecl NewPed6B()
void NewPed6B();

// Offset: 37692
// Size: 0x2c
//IDA: void __cdecl NewPed7B()
void NewPed7B();

// Offset: 37736
// Size: 0x2c
//IDA: void __cdecl NewPed8B()
void NewPed8B();

// Offset: 37780
// Size: 0x2c
//IDA: void __cdecl NewPed9B()
void NewPed9B();

// Offset: 37824
// Size: 0x64
//IDA: void __cdecl MungeShowPedPath()
void MungeShowPedPath();

// Offset: 37924
// Size: 0x65
//IDA: void __cdecl DropPedPoint2()
void DropPedPoint2();

// Offset: 38028
// Size: 0x43
//IDA: void __cdecl DropPedPoint()
void DropPedPoint();

// Offset: 38096
// Size: 0x4d
//IDA: void __cdecl DropInitPedPoint()
void DropInitPedPoint();

// Offset: 38176
// Size: 0x7e
//IDA: void __cdecl DropPedPointAir2()
void DropPedPointAir2();

// Offset: 38304
// Size: 0x43
//IDA: void __cdecl DropPedPointAir()
void DropPedPointAir();

// Offset: 38372
// Size: 0x4d
//IDA: void __cdecl DropInitPedPointAir()
void DropInitPedPointAir();

// Offset: 38452
// Size: 0x4d
//IDA: br_uint_32 __cdecl KillActorsModel(br_actor *pActor, void *pArg)
br_uint_32 KillActorsModel(br_actor *pActor, void *pArg);

// Offset: 38532
// Size: 0x9a
//IDA: void __cdecl DisposePedPaths()
void DisposePedPaths();

// Offset: 38688
// Size: 0x1a1
//IDA: void __usercall GetPedPos(int *pPed_index@<EAX>, int *pPoint_index@<EDX>)
void GetPedPos(int *pPed_index, int *pPoint_index);

// Offset: 39108
// Size: 0x69
//IDA: void __cdecl ShowPedPos()
void ShowPedPos();

// Offset: 39216
// Size: 0x17d
//IDA: void __cdecl ShowPedPaths()
void ShowPedPaths();

// Offset: 39600
// Size: 0x68
//IDA: void __cdecl PullPedPoint()
void PullPedPoint();

// Offset: 39704
// Size: 0x8d
//IDA: void __cdecl PullPedPointAir()
void PullPedPointAir();

// Offset: 39848
// Size: 0x87
//IDA: void __cdecl DeletePedPath()
void DeletePedPath();

// Offset: 39984
// Size: 0x59
//IDA: void __cdecl DeletePedPoint()
void DeletePedPoint();

// Offset: 40076
// Size: 0x24d
//IDA: void __cdecl DisposePedestrians()
void DisposePedestrians();

// Offset: 40668
// Size: 0x16c
//IDA: void __cdecl DoPedReport()
void DoPedReport();

// Offset: 41032
// Size: 0x4c7
//IDA: void __usercall RenderProximityRays(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, tU32 pTime)
void RenderProximityRays(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, tU32 pTime);

// Offset: 42256
// Size: 0x91
//IDA: void __usercall AdjustProxRay(int pRay_index@<EAX>, tU16 pCar_ID@<EDX>, tU16 pPed_index@<EBX>, tU32 pTime@<ECX>)
void AdjustProxRay(int pRay_index, tU16 pCar_ID, tU16 pPed_index, tU32 pTime);

// Offset: 42404
// Size: 0x4b0
//IDA: void __usercall ReceivedPedestrian(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>, tU32 pReceive_time@<EBX>)
void ReceivedPedestrian(tNet_contents *pContents, tNet_message *pMessage, tU32 pReceive_time);

// Offset: 43604
// Size: 0x73
//IDA: void __usercall SendAllPedestrianPositions(tPlayer_ID pPlayer@<EAX>)
void SendAllPedestrianPositions(tPlayer_ID pPlayer);

#endif
