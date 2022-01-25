#ifndef _CAR_H_
#define _CAR_H_

#include "dr_types.h"
#include "br_types.h"

extern int gDoing_physics; // addr: 0000C800
extern br_scalar gDt; // addr: 0000C804
extern int gCollision_detection_on__car; // addr: 0000C808 // suffix added to avoid duplicate symbol
extern br_vector3 gGround_normal__car; // addr: 0000C80C // suffix added to avoid duplicate symbol
extern void (*ControlCar__car[6])(tCar_spec*, br_scalar); // addr: 0000C818 // suffix added to avoid duplicate symbol
extern int gControl__car; // addr: 0000C830 // suffix added to avoid duplicate symbol
extern int gFace_num__car; // addr: 0000C834 // suffix added to avoid duplicate symbol
extern br_angle gOld_yaw__car; // addr: 0000C838 // suffix added to avoid duplicate symbol
extern br_angle gOld_zoom; // addr: 0000C83A
extern br_vector3 gCamera_pos_before_collide; // addr: 0000C83C
extern int gMetal_crunch_sound_id__car[5]; // addr: 0000C848 // suffix added to avoid duplicate symbol
extern int gMetal_scrape_sound_id__car[3]; // addr: 0000C85C // suffix added to avoid duplicate symbol
extern int gCar_car_collisions; // addr: 0000C868
extern int gFreeze_mechanics; // addr: 0000C86C
extern tU32 gLast_cunning_stunt; // addr: 0000C870
extern tU32 gWild_start; // addr: 0000C874
extern tU32 gQuite_wild_start; // addr: 0000C878
extern tU32 gQuite_wild_end; // addr: 0000C87C
extern tU32 gOn_me_wheels_start; // addr: 0000C880
extern int gWoz_upside_down_at_all; // addr: 0000C884
extern tS3_sound_tag gSkid_tag[2]; // addr: 0000C888
extern tCar_spec *gLast_car_to_skid[2]; // addr: 0000C890
extern int gEliminate_faces; // addr: 0000C898
extern br_vector3 gZero_v__car; // addr: 0000C89C // suffix added to avoid duplicate symbol
extern tU32 gSwitch_time; // addr: 0000C8A8
extern tSave_camera gSave_camera[2]; // addr: 0000C8AC
extern tU32 gLast_mechanics_time; // addr: 0000C8C4
extern int gOpponent_viewing_mode; // addr: 0000C8C8
extern int gNet_player_to_view_index; // addr: 0000C8CC
extern int gDouble_pling_water; // addr: 0000C8D0
extern int gStop_opponents_moving; // addr: 0000C8D4
extern float gDefensive_powerup_factor[6]; // addr: 0000C8D8
extern float gOffensive_powerup_factor[6]; // addr: 0000C8F0
extern float gEngine_powerup_factor[6]; // addr: 0000C908
extern br_angle gPanning_camera_angle; // addr: 0000C920
extern br_scalar gPanning_camera_height; // addr: 0000C924
extern int gFace_count; // addr: 0000C928
extern float gCar_simplification_factor[2][5]; // addr: 0000C92C
extern int gCar_simplification_level; // addr: 0000C954
extern int gNum_active_non_cars; // addr: 0000C958
extern int gCamera_has_collided; // addr: 0000C95C
extern tFace_ref gFace_list__car[150]; // addr: 00025690 // suffix added to avoid duplicate symbol
extern tNon_car_spec *gActive_non_car_list[50]; // addr: 000280C0
extern int gOver_shoot; // addr: 00028188
extern br_scalar gMin_world_y; // addr: 0002818C
extern br_scalar gAccel; // addr: 00028190
extern br_vector3 gAverage_grid_position; // addr: 00028194
extern br_actor *gPed_actor; // addr: 000281A0
extern int gCollision_count; // addr: 000281A4
extern int gCamera_frozen; // addr: 000281A8
extern int gMaterial_index; // addr: 000281AC
extern int gInTheSea; // addr: 000281B0
extern int gCamera_mode; // addr: 000281B4
extern br_scalar gOur_yaw__car; // addr: 000281B8 // suffix added to avoid duplicate symbol
extern br_scalar gGravity__car; // addr: 000281BC // suffix added to avoid duplicate symbol
extern br_vector3 gNew_ground_normal__car; // addr: 000281C0 // suffix added to avoid duplicate symbol
extern char gNon_car_spec_list[100]; // addr: 000281CC
extern tU32 gMechanics_time_sync; // addr: 00028230
extern int gNum_cars_and_non_cars; // addr: 00028234

// Offset: 0
// Size: 0x5b
//IDA: void __usercall DamageUnit(tCar_spec *pCar@<EAX>, int pUnit_type@<EDX>, int pDamage_amount@<EBX>)
void DamageUnit(tCar_spec *pCar, int pUnit_type, int pDamage_amount);

// Offset: 92
// Size: 0x3d
//IDA: void __usercall DamageUnitWithSmoke(tCar_spec *pCar@<EAX>, int pUnit_type@<EDX>, int pDamage_amount@<EBX>)
void DamageUnitWithSmoke(tCar_spec *pCar, int pUnit_type, int pDamage_amount);

// Offset: 156
// Size: 0x34
//IDA: void __usercall DamageEngine(int pDamage_amount@<EAX>)
void DamageEngine(int pDamage_amount);

// Offset: 208
// Size: 0x37
//IDA: void __usercall DamageTrans(int pDamage_amount@<EAX>)
void DamageTrans(int pDamage_amount);

// Offset: 264
// Size: 0x37
//IDA: void __usercall DamageSteering(int pDamage_amount@<EAX>)
void DamageSteering(int pDamage_amount);

// Offset: 320
// Size: 0x37
//IDA: void __usercall DamageLFWheel(int pDamage_amount@<EAX>)
void DamageLFWheel(int pDamage_amount);

// Offset: 376
// Size: 0x37
//IDA: void __usercall DamageLFBrake(int pDamage_amount@<EAX>)
void DamageLFBrake(int pDamage_amount);

// Offset: 432
// Size: 0x37
//IDA: void __usercall DamageLRBrake(int pDamage_amount@<EAX>)
void DamageLRBrake(int pDamage_amount);

// Offset: 488
// Size: 0x37
//IDA: void __usercall DamageLRWheel(int pDamage_amount@<EAX>)
void DamageLRWheel(int pDamage_amount);

// Offset: 544
// Size: 0x37
//IDA: void __usercall DamageRFWheel(int pDamage_amount@<EAX>)
void DamageRFWheel(int pDamage_amount);

// Offset: 600
// Size: 0x37
//IDA: void __usercall DamageRFBrake(int pDamage_amount@<EAX>)
void DamageRFBrake(int pDamage_amount);

// Offset: 656
// Size: 0x37
//IDA: void __usercall DamageRRBrake(int pDamage_amount@<EAX>)
void DamageRRBrake(int pDamage_amount);

// Offset: 712
// Size: 0x37
//IDA: void __usercall DamageRRWheel(int pDamage_amount@<EAX>)
void DamageRRWheel(int pDamage_amount);

// Offset: 768
// Size: 0x1fc
//IDA: void __usercall CalculatePlaneNormal(br_vector3 *pP1@<EAX>, br_vector3 *pP2@<EDX>, br_vector3 *pP3@<EBX>, br_vector3 *pNormal@<ECX>)
void CalculatePlaneNormal(br_vector3 *pP1, br_vector3 *pP2, br_vector3 *pP3, br_vector3 *pNormal);

// Offset: 1276
// Size: 0x8f
//IDA: void __usercall CalculateGroundNormal(br_model *pThe_model@<EAX>, int pFace_index@<EDX>)
void CalculateGroundNormal(br_model *pThe_model, int pFace_index);

// Offset: 1420
// Size: 0x18f
//IDA: void __cdecl ChangeYCoordinate(br_scalar pNew_y, tU32 pTime_taken, br_model *pThe_model, int pFace_index)
void ChangeYCoordinate(br_scalar pNew_y, tU32 pTime_taken, br_model *pThe_model, int pFace_index);

// Offset: 1820
// Size: 0x7f
//IDA: void __usercall SwitchCarActor(tCar_spec *pCar_spec@<EAX>, int pModel_index@<EDX>)
void SwitchCarActor(tCar_spec *pCar_spec, int pModel_index);

// Offset: 1948
// Size: 0x642
//IDA: void __usercall InitialiseCar2(tCar_spec *pCar@<EAX>, int pClear_disabled_flag@<EDX>)
void InitialiseCar2(tCar_spec *pCar, int pClear_disabled_flag);

// Offset: 3552
// Size: 0x32
//IDA: void __usercall InitialiseCar(tCar_spec *pCar@<EAX>)
void InitialiseCar(tCar_spec *pCar);

// Offset: 3604
// Size: 0x10e
//IDA: void __usercall InitialiseCarsEtc(tRace_info *pThe_race@<EAX>)
void InitialiseCarsEtc(tRace_info *pThe_race);

// Offset: 3876
// Size: 0xe7
//IDA: void __usercall GetAverageGridPosition(tRace_info *pThe_race@<EAX>)
void GetAverageGridPosition(tRace_info *pThe_race);

// Offset: 4108
// Size: 0x42b
//IDA: void __usercall SetInitialPosition(tRace_info *pThe_race@<EAX>, int pCar_index@<EDX>, int pGrid_index@<EBX>)
void SetInitialPosition(tRace_info *pThe_race, int pCar_index, int pGrid_index);

// Offset: 5176
// Size: 0x54
//IDA: void __usercall SetInitialPositions(tRace_info *pThe_race@<EAX>)
void SetInitialPositions(tRace_info *pThe_race);

// Offset: 5260
// Size: 0x216
//IDA: void __usercall InitialiseNonCar(tNon_car_spec *non_car@<EAX>)
void InitialiseNonCar(tNon_car_spec *non_car);

// Offset: 5796
// Size: 0x819
//IDA: void __usercall GetFacesInBox(tCollision_info *c@<EAX>)
void GetFacesInBox(tCollision_info *c);

// Offset: 7872
// Size: 0x2d
//IDA: int __cdecl IsCarInTheSea()
int IsCarInTheSea();

// Offset: 7920
// Size: 0x23a
//IDA: void __usercall RememberSafePosition(tCar_spec *car@<EAX>, tU32 pTime@<EDX>)
void RememberSafePosition(tCar_spec *car, tU32 pTime);

// Offset: 8492
// Size: 0x41f
//IDA: void __usercall ControlOurCar(tU32 pTime_difference@<EAX>)
void ControlOurCar(tU32 pTime_difference);

// Offset: 9548
// Size: 0x643
//IDA: void __usercall CalcEngineForce(tCar_spec *c@<EAX>, br_scalar dt)
void CalcEngineForce(tCar_spec *c, br_scalar dt);

// Offset: 11152
// Size: 0x203
//IDA: void __usercall PrepareCars(tU32 pFrame_start_time@<EAX>)
void PrepareCars(tU32 pFrame_start_time);

// Offset: 11668
// Size: 0x603
//IDA: void __usercall FinishCars(tU32 pLast_frame_time@<EAX>, tU32 pTime@<EDX>)
void FinishCars(tU32 pLast_frame_time, tU32 pTime);

// Offset: 13208
// Size: 0x151
//IDA: void __usercall InterpolateCars(tU32 pLast_frame_time@<EAX>, tU32 pTime@<EDX>)
void InterpolateCars(tU32 pLast_frame_time, tU32 pTime);

// Offset: 13548
// Size: 0xda
//IDA: void __cdecl ResetOldmat()
void ResetOldmat();

// Offset: 13768
// Size: 0x76
//IDA: void __cdecl GetNonCars()
void GetNonCars();

// Offset: 13888
// Size: 0x3eb
//IDA: void __usercall GetNetPos(tCar_spec *pCar@<EAX>)
void GetNetPos(tCar_spec *pCar);

// Offset: 14892
// Size: 0x512
//IDA: void __usercall ApplyPhysicsToCars(tU32 last_frame_time@<EAX>, tU32 pTime_difference@<EDX>)
void ApplyPhysicsToCars(tU32 last_frame_time, tU32 pTime_difference);

// Offset: 16192
// Size: 0x1b4
//IDA: void __usercall MungeSpecialVolume(tCollision_info *pCar@<EAX>)
void MungeSpecialVolume(tCollision_info *pCar);

// Offset: 16628
// Size: 0xc7
//IDA: void __usercall ResetCarSpecialVolume(tCollision_info *pCar@<EAX>)
void ResetCarSpecialVolume(tCollision_info *pCar);

// Offset: 16828
// Size: 0x41c
//IDA: void __usercall TestAutoSpecialVolume(tCollision_info *pCar@<EAX>)
void TestAutoSpecialVolume(tCollision_info *pCar);

// Offset: 17880
// Size: 0x1a5
//IDA: void __usercall MoveAndCollideCar(tCar_spec *car@<EAX>, br_scalar dt)
void MoveAndCollideCar(tCar_spec *car, br_scalar dt);

// Offset: 18304
// Size: 0x10f
//IDA: void __usercall MoveAndCollideNonCar(tNon_car_spec *non_car@<EAX>, br_scalar dt)
void MoveAndCollideNonCar(tNon_car_spec *non_car, br_scalar dt);

// Offset: 18576
// Size: 0x150
//IDA: int __usercall CollideCarWithWall@<EAX>(tCollision_info *car@<EAX>, br_scalar dt)
int CollideCarWithWall(tCollision_info *car, br_scalar dt);

// Offset: 18912
// Size: 0x10c
//IDA: void __cdecl ToggleControls()
void ToggleControls();

// Offset: 19180
// Size: 0x2a3
//IDA: void __usercall ControlCar2(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar2(tCar_spec *c, br_scalar dt);

// Offset: 19856
// Size: 0x2ae
//IDA: void __usercall ControlCar3(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar3(tCar_spec *c, br_scalar dt);

// Offset: 20544
// Size: 0x55e
//IDA: void __usercall ControlCar4(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar4(tCar_spec *c, br_scalar dt);

// Offset: 21920
// Size: 0x449
//IDA: void __usercall ControlCar5(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar5(tCar_spec *c, br_scalar dt);

// Offset: 23020
// Size: 0x212
//IDA: void __usercall ControlCar1(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar1(tCar_spec *c, br_scalar dt);

// Offset: 23552
// Size: 0x8a
//IDA: void __usercall setrotate(br_vector3 *wdt@<EAX>, br_matrix34 *m@<EDX>)
void setrotate(br_vector3 *wdt, br_matrix34 *m);

// Offset: 23692
// Size: 0x1c6
//IDA: void __usercall RotateCar2(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCar2(tCollision_info *c, br_scalar dt);

// Offset: 24148
// Size: 0x2a1
//IDA: void __usercall RotateCarSecondOrder(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCarSecondOrder(tCollision_info *c, br_scalar dt);

// Offset: 24824
// Size: 0x1e6
//IDA: void __usercall RotateCarFirstOrder(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCarFirstOrder(tCollision_info *c, br_scalar dt);

// Offset: 25312
// Size: 0xda
//IDA: void __usercall SimpleRotate(tCollision_info *c@<EAX>, br_scalar dt)
void SimpleRotate(tCollision_info *c, br_scalar dt);

// Offset: 25532
// Size: 0x131
//IDA: void __usercall RotateCar(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCar(tCollision_info *c, br_scalar dt);

// Offset: 25840
// Size: 0x1b2
//IDA: void __usercall SteeringSelfCentre(tCar_spec *c@<EAX>, br_scalar dt, br_vector3 *n)
void SteeringSelfCentre(tCar_spec *c, br_scalar dt, br_vector3 *n);

// Offset: 26276
// Size: 0x39b
//IDA: void __usercall NonCarCalcForce(tNon_car_spec *nc@<EAX>, br_scalar dt)
void NonCarCalcForce(tNon_car_spec *nc, br_scalar dt);

// Offset: 27200
// Size: 0x192
//IDA: void __usercall AddDrag(tCar_spec *c@<EAX>, br_scalar dt)
void AddDrag(tCar_spec *c, br_scalar dt);

// Offset: 27604
// Size: 0x1a3
//IDA: void __usercall DoBumpiness(tCar_spec *c@<EAX>, br_vector3 *wheel_pos@<EDX>, br_vector3 *norm@<EBX>, br_scalar *d@<ECX>, int n)
void DoBumpiness(tCar_spec *c, br_vector3 *wheel_pos, br_vector3 *norm, br_scalar *d, int n);

// Offset: 28024
// Size: 0x2f06
//IDA: void __usercall CalcForce(tCar_spec *c@<EAX>, br_scalar dt)
void CalcForce(tCar_spec *c, br_scalar dt);

// Offset: 40064
// Size: 0x484
//IDA: void __usercall DoRevs(tCar_spec *c@<EAX>, br_scalar dt)
void DoRevs(tCar_spec *c, br_scalar dt);

// Offset: 41220
// Size: 0x7f
//IDA: void __usercall ApplyTorque(tCar_spec *c@<EAX>, br_vector3 *tdt@<EDX>)
void ApplyTorque(tCar_spec *c, br_vector3 *tdt);

// Offset: 41348
// Size: 0x78
//IDA: void __usercall TranslateCar(tCollision_info *c@<EAX>, br_scalar dt)
void TranslateCar(tCollision_info *c, br_scalar dt);

// Offset: 41468
// Size: 0x2345
//IDA: int __usercall CollCheck@<EAX>(tCollision_info *c@<EAX>, br_scalar dt)
int CollCheck(tCollision_info *c, br_scalar dt);

// Offset: 50500
// Size: 0x394
//IDA: br_scalar __usercall AddFriction@<ST0>(tCollision_info *c@<EAX>, br_vector3 *vel@<EDX>, br_vector3 *normal_force@<EBX>, br_vector3 *pos@<ECX>, br_scalar total_force, br_vector3 *max_friction)
br_scalar AddFriction(tCollision_info *c, br_vector3 *vel, br_vector3 *normal_force, br_vector3 *pos, br_scalar total_force, br_vector3 *max_friction);

// Offset: 51416
// Size: 0x49b
//IDA: void __usercall AddFrictionCarToCar(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_vector3 *vel1@<EBX>, br_vector3 *vel2@<ECX>, br_vector3 *normal_force1, br_vector3 *pos1, br_vector3 *pos2, br_scalar total_force, br_vector3 *max_friction)
void AddFrictionCarToCar(tCollision_info *car1, tCollision_info *car2, br_vector3 *vel1, br_vector3 *vel2, br_vector3 *normal_force1, br_vector3 *pos1, br_vector3 *pos2, br_scalar total_force, br_vector3 *max_friction);

// Offset: 52596
// Size: 0xe9
//IDA: void __cdecl ScrapeNoise(br_scalar vel, br_vector3 *position, int material)
void ScrapeNoise(br_scalar vel, br_vector3 *position, int material);

// Offset: 52832
// Size: 0x2eb
//IDA: void __usercall SkidNoise(tCar_spec *pC@<EAX>, int pWheel_num@<EDX>, br_scalar pV, int material)
void SkidNoise(tCar_spec *pC, int pWheel_num, br_scalar pV, int material);

// Offset: 53580
// Size: 0x4d
//IDA: void __usercall StopSkid(tCar_spec *pC@<EAX>)
void StopSkid(tCar_spec *pC);

// Offset: 53660
// Size: 0xff
//IDA: void __usercall CrashNoise(br_vector3 *pForce@<EAX>, br_vector3 *position@<EDX>, int material@<EBX>)
void CrashNoise(br_vector3 *pForce, br_vector3 *position, int material);

// Offset: 53916
// Size: 0x605
//IDA: void __usercall CrushAndDamageCar(tCar_spec *c@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pForce_car_space@<EBX>, tCar_spec *car2@<ECX>)
void CrushAndDamageCar(tCar_spec *c, br_vector3 *pPosition, br_vector3 *pForce_car_space, tCar_spec *car2);

// Offset: 55460
// Size: 0x1d8
//IDA: int __usercall ExpandBoundingBox@<EAX>(tCar_spec *c@<EAX>)
int ExpandBoundingBox(tCar_spec *c);

// Offset: 55932
// Size: 0x31b
//IDA: void __usercall CrushBoundingBox(tCar_spec *c@<EAX>, int crush_only@<EDX>)
void CrushBoundingBox(tCar_spec *c, int crush_only);

// Offset: 56728
// Size: 0x117
//IDA: void __cdecl AddCollPoint(br_scalar dist, br_vector3 *p, br_vector3 *norm, br_vector3 *r, br_vector3 *n, br_vector3 *dir, int num, tCollision_info *c)
void AddCollPoint(br_scalar dist, br_vector3 *p, br_vector3 *norm, br_vector3 *r, br_vector3 *n, br_vector3 *dir, int num, tCollision_info *c);

// Offset: 57008
// Size: 0x58
//IDA: br_scalar __usercall SinglePointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>)
br_scalar SinglePointColl(br_scalar *f, br_matrix4 *m, br_scalar *d);

// Offset: 57096
// Size: 0x167
//IDA: br_scalar __usercall TwoPointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar TwoPointColl(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n);

// Offset: 57456
// Size: 0x3e
//IDA: br_scalar __usercall DrMatrix4Inverse@<ST0>(br_matrix4 *mi@<EAX>, br_matrix4 *mc@<EDX>)
br_scalar DrMatrix4Inverse(br_matrix4 *mi, br_matrix4 *mc);

// Offset: 57520
// Size: 0xac
//IDA: br_scalar __usercall ThreePointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>)
br_scalar ThreePointColl(br_scalar *f, br_matrix4 *m, br_scalar *d);

// Offset: 57692
// Size: 0x27e
//IDA: br_scalar __usercall ThreePointCollRec@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n, tCollision_info *c)
br_scalar ThreePointCollRec(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n, tCollision_info *c);

// Offset: 58332
// Size: 0x27f
//IDA: br_scalar __usercall FourPointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n, tCollision_info *c)
br_scalar FourPointColl(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n, tCollision_info *c);

// Offset: 58972
// Size: 0xe4
//IDA: void __usercall MultiFindFloorInBoxM(int pNum_rays@<EAX>, br_vector3 *a@<EDX>, br_vector3 *b@<EBX>, br_vector3 *nor@<ECX>, br_scalar *d, tCar_spec *c, int *mat_ref)
void MultiFindFloorInBoxM(int pNum_rays, br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCar_spec *c, int *mat_ref);

// Offset: 59200
// Size: 0x152
//IDA: void __usercall MultiFindFloorInBoxBU(int pNum_rays@<EAX>, br_vector3 *a@<EDX>, br_vector3 *b@<EBX>, br_vector3 *nor@<ECX>, br_scalar *d, tCar_spec *c, int *mat_ref)
void MultiFindFloorInBoxBU(int pNum_rays, br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCar_spec *c, int *mat_ref);

// Offset: 59540
// Size: 0x95
//IDA: void __usercall findfloor(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>)
void findfloor(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d);

// Offset: 59692
// Size: 0x9d
//IDA: int __usercall FindFloorInBoxM@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxM(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c);

// Offset: 59852
// Size: 0x116
//IDA: int __usercall FindFloorInBoxBU@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxBU(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c);

// Offset: 60132
// Size: 0x1bb
//IDA: int __usercall FindFloorInBoxBU2@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxBU2(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c);

// Offset: 60576
// Size: 0x9d
//IDA: int __usercall FindFloorInBoxM2@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxM2(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c);

// Offset: 60736
// Size: 0x52c
//IDA: int __usercall BoxFaceIntersect@<EAX>(br_bounds *pB@<EAX>, br_matrix34 *pM@<EDX>, br_matrix34 *pMold@<EBX>, br_vector3 *pPoint_list@<ECX>, br_vector3 *pNorm_list, br_scalar *pDist_list, int pMax_pnts, tCollision_info *c)
int BoxFaceIntersect(br_bounds *pB, br_matrix34 *pM, br_matrix34 *pMold, br_vector3 *pPoint_list, br_vector3 *pNorm_list, br_scalar *pDist_list, int pMax_pnts, tCollision_info *c);

// Offset: 62060
// Size: 0xe07
//IDA: int __usercall AddEdgeCollPoints@<EAX>(br_vector3 *p1@<EAX>, br_vector3 *p2@<EDX>, br_bounds *pB@<EBX>, br_matrix34 *pMold@<ECX>, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int n, int pMax_pnts, tCollision_info *c)
int AddEdgeCollPoints(br_vector3 *p1, br_vector3 *p2, br_bounds *pB, br_matrix34 *pMold, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int n, int pMax_pnts, tCollision_info *c);

// Offset: 65652
// Size: 0x76
//IDA: void __usercall GetPlaneNormal(br_vector3 *n@<EAX>, int p@<EDX>)
void GetPlaneNormal(br_vector3 *n, int p);

// Offset: 65772
// Size: 0x216
//IDA: int __usercall GetBoundsEdge@<EAX>(br_vector3 *pos@<EAX>, br_vector3 *edge@<EDX>, br_bounds *pB@<EBX>, int plane1@<ECX>, int plane2, br_vector3 *a, br_vector3 *b, br_vector3 *c, int flag)
int GetBoundsEdge(br_vector3 *pos, br_vector3 *edge, br_bounds *pB, int plane1, int plane2, br_vector3 *a, br_vector3 *b, br_vector3 *c, int flag);

// Offset: 66308
// Size: 0x25b
//IDA: void __usercall oldMoveOurCar(tU32 pTime_difference@<EAX>)
void oldMoveOurCar(tU32 pTime_difference);

// Offset: 66912
// Size: 0x22
//IDA: void __cdecl ToggleCollisionDetection()
void ToggleCollisionDetection();

// Offset: 66948
// Size: 0x54
//IDA: void __cdecl CancelPendingCunningStunt()
void CancelPendingCunningStunt();

// Offset: 67032
// Size: 0x3d
//IDA: float __cdecl frac(float pN)
float frac(float pN);

// Offset: 67096
// Size: 0x259
//IDA: void __usercall SetAmbientPratCam(tCar_spec *pCar@<EAX>)
void SetAmbientPratCam(tCar_spec *pCar);

// Offset: 67700
// Size: 0xe0f
//IDA: void __usercall MungeCarGraphics(tU32 pFrame_period@<EAX>)
void MungeCarGraphics(tU32 pFrame_period);

// Offset: 71300
// Size: 0xb3
//IDA: void __cdecl ResetCarScreens()
void ResetCarScreens();

// Offset: 71480
// Size: 0xd0
//IDA: tCar_spec* __cdecl GetRaceLeader()
tCar_spec* GetRaceLeader();

// Offset: 71688
// Size: 0x22b
//IDA: void __cdecl AmIGettingBoredWatchingCameraSpin()
void AmIGettingBoredWatchingCameraSpin();

// Offset: 72244
// Size: 0xa1
//IDA: void __cdecl ViewNetPlayer()
void ViewNetPlayer();

// Offset: 72408
// Size: 0xfb
//IDA: void __cdecl ViewOpponent()
void ViewOpponent();

// Offset: 72660
// Size: 0x86
//IDA: void __cdecl ToggleCarToCarCollisions()
void ToggleCarToCarCollisions();

// Offset: 72796
// Size: 0x22
//IDA: void __cdecl SwapCar()
void SwapCar();

// Offset: 72832
// Size: 0xb2
//IDA: void __cdecl AdjustDownForce()
void AdjustDownForce();

// Offset: 73012
// Size: 0x86
//IDA: void __cdecl FreezeMechanics()
void FreezeMechanics();

// Offset: 73148
// Size: 0x86
//IDA: void __cdecl PutOpponentsInNeutral()
void PutOpponentsInNeutral();

// Offset: 73284
// Size: 0x85
//IDA: void __cdecl SetPanningFieldOfView()
void SetPanningFieldOfView();

// Offset: 73420
// Size: 0xe8
//IDA: void __usercall CheckDisablePlingMaterials(tCar_spec *pCar@<EAX>)
void CheckDisablePlingMaterials(tCar_spec *pCar);

// Offset: 73652
// Size: 0x15a
//IDA: void __usercall PositionExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void PositionExternalCamera(tCar_spec *c, tU32 pTime);

// Offset: 74000
// Size: 0x66
//IDA: void __usercall CameraBugFix(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void CameraBugFix(tCar_spec *c, tU32 pTime);

// Offset: 74104
// Size: 0x8d
//IDA: int __usercall PossibleRemoveNonCarFromWorld@<EAX>(br_actor *pActor@<EAX>)
int PossibleRemoveNonCarFromWorld(br_actor *pActor);

// Offset: 74248
// Size: 0x75
//IDA: void __usercall PutNonCarBackInWorld(br_actor *pActor@<EAX>)
void PutNonCarBackInWorld(br_actor *pActor);

// Offset: 74368
// Size: 0xa49
//IDA: int __usercall IncidentCam@<EAX>(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
int IncidentCam(tCar_spec *c, tU32 pTime);

// Offset: 77004
// Size: 0x4f3
//IDA: int __usercall MoveCamToIncident@<EAX>(tCar_spec *c@<EAX>, tIncident_type *type@<EDX>, float *severity@<EBX>, tIncident_info *info@<ECX>, tU32 *next_incident_time)
int MoveCamToIncident(tCar_spec *c, tIncident_type *type, float *severity, tIncident_info *info, tU32 *next_incident_time);

// Offset: 78272
// Size: 0x170
//IDA: void __usercall PanningExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void PanningExternalCamera(tCar_spec *c, tU32 pTime);

// Offset: 78640
// Size: 0x88
//IDA: int __usercall CheckForWall@<EAX>(br_vector3 *start@<EAX>, br_vector3 *end@<EDX>)
int CheckForWall(br_vector3 *start, br_vector3 *end);

// Offset: 78776
// Size: 0x567
//IDA: void __usercall SetUpPanningCamera(tCar_spec *c@<EAX>)
void SetUpPanningCamera(tCar_spec *c);

// Offset: 80160
// Size: 0x61
//IDA: void __usercall SaveCameraPosition(int i@<EAX>)
void SaveCameraPosition(int i);

// Offset: 80260
// Size: 0x61
//IDA: void __usercall RestoreCameraPosition(int i@<EAX>)
void RestoreCameraPosition(int i);

// Offset: 80360
// Size: 0x83b
//IDA: void __usercall NormalPositionExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void NormalPositionExternalCamera(tCar_spec *c, tU32 pTime);

// Offset: 82468
// Size: 0x1be
//IDA: void __usercall MoveWithWheels(tCar_spec *c@<EAX>, br_vector3 *vn@<EDX>, int manual_swing@<EBX>)
void MoveWithWheels(tCar_spec *c, br_vector3 *vn, int manual_swing);

// Offset: 82916
// Size: 0x724
//IDA: void __usercall SwingCamera(tCar_spec *c@<EAX>, br_matrix34 *m1@<EDX>, br_matrix34 *m2@<EBX>, br_vector3 *vn@<ECX>, tU32 pTime)
void SwingCamera(tCar_spec *c, br_matrix34 *m1, br_matrix34 *m2, br_vector3 *vn, tU32 pTime);

// Offset: 84744
// Size: 0x308
//IDA: void __usercall PointCameraAtCar(tCar_spec *c@<EAX>, br_matrix34 *m1@<EDX>, br_matrix34 *m2@<EBX>)
void PointCameraAtCar(tCar_spec *c, br_matrix34 *m1, br_matrix34 *m2);

// Offset: 85520
// Size: 0x1d1
//IDA: void __usercall PointCamera(br_vector3 *pos@<EAX>, br_matrix34 *m2@<EDX>)
void PointCamera(br_vector3 *pos, br_matrix34 *m2);

// Offset: 85988
// Size: 0x96b
//IDA: int __usercall CollideCamera2@<EAX>(br_vector3 *car_pos@<EAX>, br_vector3 *cam_pos@<EDX>, br_vector3 *old_camera_pos@<EBX>, int manual_move@<ECX>)
int CollideCamera2(br_vector3 *car_pos, br_vector3 *cam_pos, br_vector3 *old_camera_pos, int manual_move);

// Offset: 88400
// Size: 0x8d
//IDA: int __usercall BoundsTest@<EAX>(br_bounds *bnds@<EAX>, br_vector3 *p@<EDX>)
int BoundsTest(br_bounds *bnds, br_vector3 *p);

// Offset: 88544
// Size: 0x1ee
//IDA: int __usercall CollideCameraWithOtherCars@<EAX>(br_vector3 *car_pos@<EAX>, br_vector3 *cam_pos@<EDX>)
int CollideCameraWithOtherCars(br_vector3 *car_pos, br_vector3 *cam_pos);

// Offset: 89040
// Size: 0x1ff
//IDA: void __cdecl InitialiseExternalCamera()
void InitialiseExternalCamera();

// Offset: 89552
// Size: 0x2c
//IDA: void __cdecl FreezeCamera()
void FreezeCamera();

// Offset: 89596
// Size: 0x8c8
//IDA: void __usercall FlyCar(tCar_spec *c@<EAX>, br_scalar dt)
void FlyCar(tCar_spec *c, br_scalar dt);

// Offset: 91844
// Size: 0x9d
//IDA: void __usercall DrVector3RotateY(br_vector3 *v@<EAX>, br_angle t@<EDX>)
void DrVector3RotateY(br_vector3 *v, br_angle t);

// Offset: 92004
// Size: 0xed
//IDA: void __cdecl CrashCarsTogether(br_scalar dt)
void CrashCarsTogether(br_scalar dt);

// Offset: 92244
// Size: 0x950
//IDA: int __cdecl CrashCarsTogetherSinglePass(br_scalar dt, int pPass, tCollison_data *collide_list)
int CrashCarsTogetherSinglePass(br_scalar dt, int pPass, tCollison_data *collide_list);

// Offset: 94628
// Size: 0x8e
//IDA: void __usercall BringCarToAGrindingHalt(tCollision_info *car@<EAX>)
void BringCarToAGrindingHalt(tCollision_info *car);

// Offset: 94772
// Size: 0xa5
//IDA: int __usercall BoundsOverlapTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>)
// Suffix added to avoid duplicate symbol
int BoundsOverlapTest__car(br_bounds *b1, br_bounds *b2);

// Offset: 94940
// Size: 0x63
//IDA: int __usercall SimpleCarCarCollisionTest@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>)
int SimpleCarCarCollisionTest(tCollision_info *car1, tCollision_info *car2);

// Offset: 95040
// Size: 0x36d
//IDA: int __usercall CollideTwoCarsWithWalls@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_scalar dt)
int CollideTwoCarsWithWalls(tCollision_info *car1, tCollision_info *car2, br_scalar dt);

// Offset: 95920
// Size: 0x12a
//IDA: int __usercall CollideTwoCarsRepeatedly@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_scalar dt)
int CollideTwoCarsRepeatedly(tCollision_info *car1, tCollision_info *car2, br_scalar dt);

// Offset: 96220
// Size: 0xdab
//IDA: int __usercall CollideTwoCars@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, int pPass@<EBX>)
int CollideTwoCars(tCollision_info *car1, tCollision_info *car2, int pPass);

// Offset: 99720
// Size: 0xe0e
//IDA: int __usercall GetEdgeEdgeCollisions@<EAX>(br_bounds *pB1@<EAX>, br_bounds *pB2@<EDX>, br_matrix34 *pM21@<EBX>, br_matrix34 *pM12@<ECX>, br_matrix34 *pMo21, br_matrix34 *pMo12, br_matrix34 *pM1o1, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax)
int GetEdgeEdgeCollisions(br_bounds *pB1, br_bounds *pB2, br_matrix34 *pM21, br_matrix34 *pM12, br_matrix34 *pMo21, br_matrix34 *pMo12, br_matrix34 *pM1o1, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax);

// Offset: 103320
// Size: 0x780
//IDA: int __usercall FacePointCarCarCollide@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_matrix34 *pMms@<EBX>, br_matrix34 *pMoms@<ECX>, br_matrix34 *pMsos, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax, int order)
int FacePointCarCarCollide(tCollision_info *car1, tCollision_info *car2, br_matrix34 *pMms, br_matrix34 *pMoms, br_matrix34 *pMsos, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax, int order);

// Offset: 105240
// Size: 0x6f
//IDA: void __usercall MungeCarsMass(tCollision_info *pCar@<EAX>, br_scalar pFactor)
void MungeCarsMass(tCollision_info *pCar, br_scalar pFactor);

// Offset: 105352
// Size: 0x7c
//IDA: void __usercall ModifyCarsMass(tCollision_info *pCar_1@<EAX>, tCollision_info *pCar_2@<EDX>)
void ModifyCarsMass(tCollision_info *pCar_1, tCollision_info *pCar_2);

// Offset: 105476
// Size: 0x90
//IDA: void __usercall ResetCarsMass(tCollision_info *pCar_1@<EAX>, tCollision_info *pCar_2@<EDX>)
void ResetCarsMass(tCollision_info *pCar_1, tCollision_info *pCar_2);

// Offset: 105620
// Size: 0x22ed
//IDA: int __usercall DoCollide@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_vector3 *r@<EBX>, br_vector3 *n@<ECX>, int k, int pPass, br_matrix34 *mat1_to_mat2)
int DoCollide(tCollision_info *car1, tCollision_info *car2, br_vector3 *r, br_vector3 *n, int k, int pPass, br_matrix34 *mat1_to_mat2);

// Offset: 114564
// Size: 0x1a1
//IDA: br_scalar __usercall TwoPointCollB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar TwoPointCollB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n);

// Offset: 114984
// Size: 0x33b
//IDA: br_scalar __usercall ThreePointCollRecB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar ThreePointCollRecB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n);

// Offset: 115812
// Size: 0x315
//IDA: br_scalar __usercall FourPointCollB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar FourPointCollB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n);

// Offset: 116604
// Size: 0x59
//IDA: int __usercall TestForNan@<EAX>(float *f@<EAX>)
int TestForNan(float *f);

// Offset: 116696
// Size: 0x59
//IDA: void __cdecl CheckCameraHither()
void CheckCameraHither();

// Offset: 116788
// Size: 0x20d
//IDA: void __usercall SetCarSuspGiveAndHeight(tCar_spec *pCar@<EAX>, br_scalar pFront_give_factor, br_scalar pRear_give_factor, br_scalar pDamping_factor, br_scalar pExtra_front_height, br_scalar pExtra_rear_height)
void SetCarSuspGiveAndHeight(tCar_spec *pCar, br_scalar pFront_give_factor, br_scalar pRear_give_factor, br_scalar pDamping_factor, br_scalar pExtra_front_height, br_scalar pExtra_rear_height);

// Offset: 117316
// Size: 0x3ff
//IDA: int __usercall TestForCarInSensiblePlace@<EAX>(tCar_spec *car@<EAX>)
int TestForCarInSensiblePlace(tCar_spec *car);

// Offset: 118340
// Size: 0x210
//IDA: int __usercall TestOldMats@<EAX>(tCollision_info *c1@<EAX>, tCollision_info *c2@<EDX>, int newmats@<EBX>)
int TestOldMats(tCollision_info *c1, tCollision_info *c2, int newmats);

// Offset: 118868
// Size: 0x45
//IDA: int __usercall PullActorFromWorld@<EAX>(br_actor *pActor@<EAX>)
int PullActorFromWorld(br_actor *pActor);

// Offset: 118940
// Size: 0x2a9
//IDA: int __usercall DoPullActorFromWorld@<EAX>(br_actor *pActor@<EAX>)
int DoPullActorFromWorld(br_actor *pActor);

// Offset: 119624
// Size: 0x388
//IDA: void __usercall CheckForDeAttachmentOfNonCars(tU32 pTime@<EAX>)
void CheckForDeAttachmentOfNonCars(tU32 pTime);

// Offset: 120528
// Size: 0xf8
//IDA: void __usercall AdjustNonCar(br_actor *pActor@<EAX>, br_matrix34 *pMat@<EDX>)
void AdjustNonCar(br_actor *pActor, br_matrix34 *pMat);

// Offset: 120776
// Size: 0xf0
//IDA: void __usercall PipeSingleNonCar(tCollision_info *c@<EAX>)
void PipeSingleNonCar(tCollision_info *c);

// Offset: 121016
// Size: 0xa9
//IDA: int __usercall GetPrecalculatedFacesUnderCar@<EAX>(tCar_spec *pCar@<EAX>, tFace_ref **pFace_refs@<EDX>)
int GetPrecalculatedFacesUnderCar(tCar_spec *pCar, tFace_ref **pFace_refs);

// Offset: 121188
// Size: 0x35
//IDA: br_material* __cdecl SomeNearbyMaterial()
br_material* SomeNearbyMaterial();

#endif
