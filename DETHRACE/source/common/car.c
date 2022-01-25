#include "car.h"

int gDoing_physics;
br_scalar gDt;
 // Suffix added to avoid duplicate symbol
int gCollision_detection_on__car;
 // Suffix added to avoid duplicate symbol
br_vector3 gGround_normal__car;
 // Suffix added to avoid duplicate symbol
void (*ControlCar__car[6])(tCar_spec*, br_scalar);
 // Suffix added to avoid duplicate symbol
int gControl__car;
 // Suffix added to avoid duplicate symbol
int gFace_num__car;
 // Suffix added to avoid duplicate symbol
br_angle gOld_yaw__car;
br_angle gOld_zoom;
br_vector3 gCamera_pos_before_collide;
 // Suffix added to avoid duplicate symbol
int gMetal_crunch_sound_id__car[5];
 // Suffix added to avoid duplicate symbol
int gMetal_scrape_sound_id__car[3];
int gCar_car_collisions;
int gFreeze_mechanics;
tU32 gLast_cunning_stunt;
tU32 gWild_start;
tU32 gQuite_wild_start;
tU32 gQuite_wild_end;
tU32 gOn_me_wheels_start;
int gWoz_upside_down_at_all;
tS3_sound_tag gSkid_tag[2];
tCar_spec *gLast_car_to_skid[2];
int gEliminate_faces;
 // Suffix added to avoid duplicate symbol
br_vector3 gZero_v__car;
tU32 gSwitch_time;
tSave_camera gSave_camera[2];
tU32 gLast_mechanics_time;
int gOpponent_viewing_mode;
int gNet_player_to_view_index;
int gDouble_pling_water;
int gStop_opponents_moving;
float gDefensive_powerup_factor[6];
float gOffensive_powerup_factor[6];
float gEngine_powerup_factor[6];
br_angle gPanning_camera_angle;
br_scalar gPanning_camera_height;
int gFace_count;
float gCar_simplification_factor[2][5];
int gCar_simplification_level;
int gNum_active_non_cars;
int gCamera_has_collided;
 // Suffix added to avoid duplicate symbol
tFace_ref gFace_list__car[150];
tNon_car_spec *gActive_non_car_list[50];
int gOver_shoot;
br_scalar gMin_world_y;
br_scalar gAccel;
br_vector3 gAverage_grid_position;
br_actor *gPed_actor;
int gCollision_count;
int gCamera_frozen;
int gMaterial_index;
int gInTheSea;
int gCamera_mode;
 // Suffix added to avoid duplicate symbol
br_scalar gOur_yaw__car;
 // Suffix added to avoid duplicate symbol
br_scalar gGravity__car;
 // Suffix added to avoid duplicate symbol
br_vector3 gNew_ground_normal__car;
char gNon_car_spec_list[100];
tU32 gMechanics_time_sync;
int gNum_cars_and_non_cars;

// Offset: 0
// Size: 0x5b
//IDA: void __usercall DamageUnit(tCar_spec *pCar@<EAX>, int pUnit_type@<EDX>, int pDamage_amount@<EBX>)
void DamageUnit(tCar_spec *pCar, int pUnit_type, int pDamage_amount) {
    tDamage_unit *the_damage;
    LOG_TRACE("(%p, %d, %d)", pCar, pUnit_type, pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 92
// Size: 0x3d
//IDA: void __usercall DamageUnitWithSmoke(tCar_spec *pCar@<EAX>, int pUnit_type@<EDX>, int pDamage_amount@<EBX>)
void DamageUnitWithSmoke(tCar_spec *pCar, int pUnit_type, int pDamage_amount) {
    LOG_TRACE("(%p, %d, %d)", pCar, pUnit_type, pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 156
// Size: 0x34
//IDA: void __usercall DamageEngine(int pDamage_amount@<EAX>)
void DamageEngine(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 208
// Size: 0x37
//IDA: void __usercall DamageTrans(int pDamage_amount@<EAX>)
void DamageTrans(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 264
// Size: 0x37
//IDA: void __usercall DamageSteering(int pDamage_amount@<EAX>)
void DamageSteering(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 320
// Size: 0x37
//IDA: void __usercall DamageLFWheel(int pDamage_amount@<EAX>)
void DamageLFWheel(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 376
// Size: 0x37
//IDA: void __usercall DamageLFBrake(int pDamage_amount@<EAX>)
void DamageLFBrake(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 432
// Size: 0x37
//IDA: void __usercall DamageLRBrake(int pDamage_amount@<EAX>)
void DamageLRBrake(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 488
// Size: 0x37
//IDA: void __usercall DamageLRWheel(int pDamage_amount@<EAX>)
void DamageLRWheel(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 544
// Size: 0x37
//IDA: void __usercall DamageRFWheel(int pDamage_amount@<EAX>)
void DamageRFWheel(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 600
// Size: 0x37
//IDA: void __usercall DamageRFBrake(int pDamage_amount@<EAX>)
void DamageRFBrake(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 656
// Size: 0x37
//IDA: void __usercall DamageRRBrake(int pDamage_amount@<EAX>)
void DamageRRBrake(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 712
// Size: 0x37
//IDA: void __usercall DamageRRWheel(int pDamage_amount@<EAX>)
void DamageRRWheel(int pDamage_amount) {
    LOG_TRACE("(%d)", pDamage_amount);
    NOT_IMPLEMENTED();
}

// Offset: 768
// Size: 0x1fc
//IDA: void __usercall CalculatePlaneNormal(br_vector3 *pP1@<EAX>, br_vector3 *pP2@<EDX>, br_vector3 *pP3@<EBX>, br_vector3 *pNormal@<ECX>)
void CalculatePlaneNormal(br_vector3 *pP1, br_vector3 *pP2, br_vector3 *pP3, br_vector3 *pNormal) {
    br_vector3 p0;
    br_vector3 p1;
    br_vector3 cross_product;
    br_vector3 temp_vector;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    br_scalar __block2___scale;
    LOG_TRACE("(%p, %p, %p, %p)", pP1, pP2, pP3, pNormal);
    NOT_IMPLEMENTED();
}

// Offset: 1276
// Size: 0x8f
//IDA: void __usercall CalculateGroundNormal(br_model *pThe_model@<EAX>, int pFace_index@<EDX>)
void CalculateGroundNormal(br_model *pThe_model, int pFace_index) {
    LOG_TRACE("(%p, %d)", pThe_model, pFace_index);
    NOT_IMPLEMENTED();
}

// Offset: 1420
// Size: 0x18f
//IDA: void __cdecl ChangeYCoordinate(br_scalar pNew_y, tU32 pTime_taken, br_model *pThe_model, int pFace_index)
void ChangeYCoordinate(br_scalar pNew_y, tU32 pTime_taken, br_model *pThe_model, int pFace_index) {
    br_scalar y_change;
    br_transform new_transform;
    br_vector3 side_window;
    LOG_TRACE("(%f, %d, %p, %d)", pNew_y, pTime_taken, pThe_model, pFace_index);
    NOT_IMPLEMENTED();
}

// Offset: 1820
// Size: 0x7f
//IDA: void __usercall SwitchCarActor(tCar_spec *pCar_spec@<EAX>, int pModel_index@<EDX>)
void SwitchCarActor(tCar_spec *pCar_spec, int pModel_index) {
    int i;
    LOG_TRACE("(%p, %d)", pCar_spec, pModel_index);
    NOT_IMPLEMENTED();
}

// Offset: 1948
// Size: 0x642
//IDA: void __usercall InitialiseCar2(tCar_spec *pCar@<EAX>, int pClear_disabled_flag@<EDX>)
void InitialiseCar2(tCar_spec *pCar, int pClear_disabled_flag) {
    int index;
    int j;
    int cat;
    int car_count;
    br_actor *car_actor;
    br_angle initial_yaw;
    br_scalar nearest_y_above;
    br_scalar nearest_y_below;
    br_scalar speed;
    int below_face_index;
    int above_face_index;
    br_model *below_model;
    br_model *above_model;
    br_vector3 grid_offset;
    br_matrix34 initial_yaw_matrix;
    br_matrix34 safe_position;
    LOG_TRACE("(%p, %d)", pCar, pClear_disabled_flag);
    NOT_IMPLEMENTED();
}

// Offset: 3552
// Size: 0x32
//IDA: void __usercall InitialiseCar(tCar_spec *pCar@<EAX>)
void InitialiseCar(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 3604
// Size: 0x10e
//IDA: void __usercall InitialiseCarsEtc(tRace_info *pThe_race@<EAX>)
void InitialiseCarsEtc(tRace_info *pThe_race) {
    int i;
    int cat;
    int car_count;
    tCar_spec *car;
    br_bounds bnds;
    LOG_TRACE("(%p)", pThe_race);
    NOT_IMPLEMENTED();
}

// Offset: 3876
// Size: 0xe7
//IDA: void __usercall GetAverageGridPosition(tRace_info *pThe_race@<EAX>)
void GetAverageGridPosition(tRace_info *pThe_race) {
    int i;
    br_scalar total_cars;
    tCar_spec *car;
    LOG_TRACE("(%p)", pThe_race);
    NOT_IMPLEMENTED();
}

// Offset: 4108
// Size: 0x42b
//IDA: void __usercall SetInitialPosition(tRace_info *pThe_race@<EAX>, int pCar_index@<EDX>, int pGrid_index@<EBX>)
void SetInitialPosition(tRace_info *pThe_race, int pCar_index, int pGrid_index) {
    int place_on_grid;
    int i;
    int start_i;
    int j;
    br_actor *car_actor;
    br_angle initial_yaw;
    br_scalar nearest_y_above;
    br_scalar nearest_y_below;
    br_scalar speed;
    int below_face_index;
    int above_face_index;
    br_model *below_model;
    br_model *above_model;
    tCar_spec *car;
    br_vector3 grid_offset;
    br_vector3 dist;
    br_vector3 real_pos;
    br_matrix34 initial_yaw_matrix;
    br_bounds bnds;
    LOG_TRACE("(%p, %d, %d)", pThe_race, pCar_index, pGrid_index);
    NOT_IMPLEMENTED();
}

// Offset: 5176
// Size: 0x54
//IDA: void __usercall SetInitialPositions(tRace_info *pThe_race@<EAX>)
void SetInitialPositions(tRace_info *pThe_race) {
    int i;
    LOG_TRACE("(%p)", pThe_race);
    NOT_IMPLEMENTED();
}

// Offset: 5260
// Size: 0x216
//IDA: void __usercall InitialiseNonCar(tNon_car_spec *non_car@<EAX>)
void InitialiseNonCar(tNon_car_spec *non_car) {
    tCollision_info *c;
    LOG_TRACE("(%p)", non_car);
    NOT_IMPLEMENTED();
}

// Offset: 5796
// Size: 0x819
//IDA: void __usercall GetFacesInBox(tCollision_info *c@<EAX>)
void GetFacesInBox(tCollision_info *c) {
    tBounds bnds;
    br_bounds new_in_old;
    br_bounds predicted_bounds;
    br_matrix34 mat;
    br_matrix34 mat2;
    br_matrix34 mat3;
    br_matrix34 mat4;
    br_matrix34 mat5;
    br_matrix34 mat6;
    br_scalar old_d;
    int i;
    br_bounds current_bounds;
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 7872
// Size: 0x2d
//IDA: int __cdecl IsCarInTheSea()
int IsCarInTheSea() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7920
// Size: 0x23a
//IDA: void __usercall RememberSafePosition(tCar_spec *car@<EAX>, tU32 pTime@<EDX>)
void RememberSafePosition(tCar_spec *car, tU32 pTime) {
    static tU32 time_count;
    int j;
    br_vector3 r;
    br_scalar ts;
    LOG_TRACE("(%p, %d)", car, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 8492
// Size: 0x41f
//IDA: void __usercall ControlOurCar(tU32 pTime_difference@<EAX>)
void ControlOurCar(tU32 pTime_difference) {
    br_scalar ts;
    br_vector3 minus_k;
    tCar_spec *car;
    static int steering_locked;
    int i;
    tU32 time;
    LOG_TRACE("(%d)", pTime_difference);
    NOT_IMPLEMENTED();
}

// Offset: 9548
// Size: 0x643
//IDA: void __usercall CalcEngineForce(tCar_spec *c@<EAX>, br_scalar dt)
void CalcEngineForce(tCar_spec *c, br_scalar dt) {
    br_scalar torque;
    br_scalar ts;
    br_scalar ts2;
    br_scalar brake_temp;
    int sign;
    tS32 temp_for_swap;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 11152
// Size: 0x203
//IDA: void __usercall PrepareCars(tU32 pFrame_start_time@<EAX>)
void PrepareCars(tU32 pFrame_start_time) {
    tCar_spec *car;
    int i;
    static tU32 last_frame_start;
    LOG_TRACE("(%d)", pFrame_start_time);
    NOT_IMPLEMENTED();
}

// Offset: 11668
// Size: 0x603
//IDA: void __usercall FinishCars(tU32 pLast_frame_time@<EAX>, tU32 pTime@<EDX>)
void FinishCars(tU32 pLast_frame_time, tU32 pTime) {
    tCar_spec *car;
    br_vector3 minus_k;
    int i;
    int wheel;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%d, %d)", pLast_frame_time, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 13208
// Size: 0x151
//IDA: void __usercall InterpolateCars(tU32 pLast_frame_time@<EAX>, tU32 pTime@<EDX>)
void InterpolateCars(tU32 pLast_frame_time, tU32 pTime) {
    br_scalar dt;
    tCar_spec *car;
    int i;
    LOG_TRACE("(%d, %d)", pLast_frame_time, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 13548
// Size: 0xda
//IDA: void __cdecl ResetOldmat()
void ResetOldmat() {
    tCar_spec *car;
    int i;
    br_matrix34 mat;
    static int normalise_count;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 13768
// Size: 0x76
//IDA: void __cdecl GetNonCars()
void GetNonCars() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 13888
// Size: 0x3eb
//IDA: void __usercall GetNetPos(tCar_spec *pCar@<EAX>)
void GetNetPos(tCar_spec *pCar) {
    int j;
    float amount;
    br_scalar total_deflection;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 14892
// Size: 0x512
//IDA: void __usercall ApplyPhysicsToCars(tU32 last_frame_time@<EAX>, tU32 pTime_difference@<EDX>)
void ApplyPhysicsToCars(tU32 last_frame_time, tU32 pTime_difference) {
    br_vector3 minus_k;
    int i;
    int old_num_cars;
    int step_number;
    int dam_index;
    static int steering_locked;
    tCar_spec *car;
    tCollision_info *car_info;
    tNon_car_spec *non_car;
    tU32 time_step;
    tU32 frame_end_time;
    LOG_TRACE("(%d, %d)", last_frame_time, pTime_difference);
    NOT_IMPLEMENTED();
}

// Offset: 16192
// Size: 0x1b4
//IDA: void __usercall MungeSpecialVolume(tCollision_info *pCar@<EAX>)
void MungeSpecialVolume(tCollision_info *pCar) {
    tSpecial_volume *new_special_volume;
    tCar_spec *car;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 16628
// Size: 0xc7
//IDA: void __usercall ResetCarSpecialVolume(tCollision_info *pCar@<EAX>)
void ResetCarSpecialVolume(tCollision_info *pCar) {
    br_vector3 cast_v;
    br_vector3 norm;
    br_scalar t;
    int id_len;
    char *mat_id;
    tSpecial_volume *new_special_volume;
    br_material *material;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 16828
// Size: 0x41c
//IDA: void __usercall TestAutoSpecialVolume(tCollision_info *pCar@<EAX>)
void TestAutoSpecialVolume(tCollision_info *pCar) {
    br_vector3 pos;
    br_scalar car_d;
    br_scalar d;
    br_scalar d2;
    br_vector3 dir;
    br_vector3 tv;
    br_vector3 lp;
    br_vector3 hp;
    tSpecial_volume *vol;
    br_matrix34 *mat;
    br_scalar lowest_p;
    br_scalar highest_p;
    br_scalar val;
    int i;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 17880
// Size: 0x1a5
//IDA: void __usercall MoveAndCollideCar(tCar_spec *car@<EAX>, br_scalar dt)
void MoveAndCollideCar(tCar_spec *car, br_scalar dt) {
    tCollision_info *car_info;
    int wheel;
    LOG_TRACE("(%p, %f)", car, dt);
    NOT_IMPLEMENTED();
}

// Offset: 18304
// Size: 0x10f
//IDA: void __usercall MoveAndCollideNonCar(tNon_car_spec *non_car@<EAX>, br_scalar dt)
void MoveAndCollideNonCar(tNon_car_spec *non_car, br_scalar dt) {
    tCollision_info *car_info;
    LOG_TRACE("(%p, %f)", non_car, dt);
    NOT_IMPLEMENTED();
}

// Offset: 18576
// Size: 0x150
//IDA: int __usercall CollideCarWithWall@<EAX>(tCollision_info *car@<EAX>, br_scalar dt)
int CollideCarWithWall(tCollision_info *car, br_scalar dt) {
    LOG_TRACE("(%p, %f)", car, dt);
    NOT_IMPLEMENTED();
}

// Offset: 18912
// Size: 0x10c
//IDA: void __cdecl ToggleControls()
void ToggleControls() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19180
// Size: 0x2a3
//IDA: void __usercall ControlCar2(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar2(tCar_spec *c, br_scalar dt) {
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 19856
// Size: 0x2ae
//IDA: void __usercall ControlCar3(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar3(tCar_spec *c, br_scalar dt) {
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 20544
// Size: 0x55e
//IDA: void __usercall ControlCar4(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar4(tCar_spec *c, br_scalar dt) {
    br_scalar ts;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 21920
// Size: 0x449
//IDA: void __usercall ControlCar5(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar5(tCar_spec *c, br_scalar dt) {
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 23020
// Size: 0x212
//IDA: void __usercall ControlCar1(tCar_spec *c@<EAX>, br_scalar dt)
void ControlCar1(tCar_spec *c, br_scalar dt) {
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 23552
// Size: 0x8a
//IDA: void __usercall setrotate(br_vector3 *wdt@<EAX>, br_matrix34 *m@<EDX>)
void setrotate(br_vector3 *wdt, br_matrix34 *m) {
    br_euler e;
    LOG_TRACE("(%p, %p)", wdt, m);
    NOT_IMPLEMENTED();
}

// Offset: 23692
// Size: 0x1c6
//IDA: void __usercall RotateCar2(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCar2(tCollision_info *c, br_scalar dt) {
    br_vector3 wdt;
    br_vector3 wdt2;
    br_vector3 L;
    br_vector3 L2;
    br_matrix34 m;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 24148
// Size: 0x2a1
//IDA: void __usercall RotateCarSecondOrder(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCarSecondOrder(tCollision_info *c, br_scalar dt) {
    br_vector3 L;
    br_vector3 L2;
    br_vector3 axis;
    br_vector3 omega;
    br_scalar rad;
    br_scalar rad_rate;
    br_matrix34 m;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 24824
// Size: 0x1e6
//IDA: void __usercall RotateCarFirstOrder(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCarFirstOrder(tCollision_info *c, br_scalar dt) {
    br_vector3 axis;
    br_vector3 L;
    br_vector3 L2;
    br_matrix34 m;
    br_scalar rad_rate;
    br_scalar rad;
    br_scalar e1;
    br_scalar e2;
    static br_scalar max_rad;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 25312
// Size: 0xda
//IDA: void __usercall SimpleRotate(tCollision_info *c@<EAX>, br_scalar dt)
void SimpleRotate(tCollision_info *c, br_scalar dt) {
    br_vector3 axis;
    br_scalar rad_rate;
    br_scalar rad;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 25532
// Size: 0x131
//IDA: void __usercall RotateCar(tCollision_info *c@<EAX>, br_scalar dt)
void RotateCar(tCollision_info *c, br_scalar dt) {
    br_scalar rad_squared;
    int steps;
    int i;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 25840
// Size: 0x1b2
//IDA: void __usercall SteeringSelfCentre(tCar_spec *c@<EAX>, br_scalar dt, br_vector3 *n)
void SteeringSelfCentre(tCar_spec *c, br_scalar dt, br_vector3 *n) {
    br_scalar ts;
    br_scalar ts2;
    LOG_TRACE("(%p, %f, %p)", c, dt, n);
    NOT_IMPLEMENTED();
}

// Offset: 26276
// Size: 0x39b
//IDA: void __usercall NonCarCalcForce(tNon_car_spec *nc@<EAX>, br_scalar dt)
void NonCarCalcForce(tNon_car_spec *nc, br_scalar dt) {
    tCollision_info *c;
    tSpecial_volume *vol;
    br_scalar ts;
    br_vector3 tv;
    br_vector3 v;
    LOG_TRACE("(%p, %f)", nc, dt);
    NOT_IMPLEMENTED();
}

// Offset: 27200
// Size: 0x192
//IDA: void __usercall AddDrag(tCar_spec *c@<EAX>, br_scalar dt)
void AddDrag(tCar_spec *c, br_scalar dt) {
    br_scalar drag_multiplier;
    br_scalar ts;
    tSpecial_volume *vol;
    br_vector3 b;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 27604
// Size: 0x1a3
//IDA: void __usercall DoBumpiness(tCar_spec *c@<EAX>, br_vector3 *wheel_pos@<EDX>, br_vector3 *norm@<EBX>, br_scalar *d@<ECX>, int n)
void DoBumpiness(tCar_spec *c, br_vector3 *wheel_pos, br_vector3 *norm, br_scalar *d, int n) {
    br_vector3 tv;
    int delta;
    int x;
    int y;
    tMaterial_modifiers *mat_list;
    LOG_TRACE("(%p, %p, %p, %p, %d)", c, wheel_pos, norm, d, n);
    NOT_IMPLEMENTED();
}

// Offset: 28024
// Size: 0x2f06
//IDA: void __usercall CalcForce(tCar_spec *c@<EAX>, br_scalar dt)
void CalcForce(tCar_spec *c, br_scalar dt) {
    int n;
    int normnum;
    int i;
    int x;
    int y;
    br_scalar force[4];
    br_scalar d[4];
    br_scalar ts;
    br_scalar ts2;
    br_scalar ts3;
    br_scalar ts4;
    br_scalar ts5;
    br_scalar ts6;
    br_scalar deltaomega;
    br_scalar wheelratio;
    br_scalar modf;
    br_scalar maxfl;
    br_scalar maxfr;
    br_scalar max_retardation;
    br_scalar front_retardation;
    br_scalar friction_number;
    br_vector3 a;
    br_vector3 b;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 norm[4];
    br_vector3 v_batwick;
    br_vector3 vplane;
    br_vector3 rightplane;
    br_vector3 t;
    br_vector3 f;
    br_vector3 ff;
    br_vector3 fb;
    br_scalar ffi;
    br_scalar ffk;
    br_scalar fbi;
    br_scalar fbk;
    br_vector3 wheel_pos[4];
    br_scalar direction;
    br_scalar wheel_spin_force;
    br_scalar d_damage;
    br_scalar fl_oil_factor;
    br_scalar fr_oil_factor;
    br_scalar rl_oil_factor;
    br_scalar rr_oil_factor;
    br_matrix34 *mat;
    tMaterial_modifiers *mat_list;
    static br_scalar stop_timer;
    static br_scalar slide_dist;
    tDamage_type dam;
    br_scalar v;
    tSpecial_volume *vol;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    br_scalar __block2___scale;
    br_scalar __block3___scale;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 40064
// Size: 0x484
//IDA: void __usercall DoRevs(tCar_spec *c@<EAX>, br_scalar dt)
void DoRevs(tCar_spec *c, br_scalar dt) {
    br_scalar wheel_spin_force;
    br_scalar ts;
    int revs_increase;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 41220
// Size: 0x7f
//IDA: void __usercall ApplyTorque(tCar_spec *c@<EAX>, br_vector3 *tdt@<EDX>)
void ApplyTorque(tCar_spec *c, br_vector3 *tdt) {
    LOG_TRACE("(%p, %p)", c, tdt);
    NOT_IMPLEMENTED();
}

// Offset: 41348
// Size: 0x78
//IDA: void __usercall TranslateCar(tCollision_info *c@<EAX>, br_scalar dt)
void TranslateCar(tCollision_info *c, br_scalar dt) {
    br_vector3 t;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 41468
// Size: 0x2345
//IDA: int __usercall CollCheck@<EAX>(tCollision_info *c@<EAX>, br_scalar dt)
int CollCheck(tCollision_info *c, br_scalar dt) {
    br_vector3 a;
    br_vector3 a1;
    br_vector3 aa;
    br_vector3 bb;
    br_vector3 cc;
    br_vector3 pos;
    br_vector3 r[8];
    br_vector3 norm;
    br_vector3 n[8];
    br_vector3 dir;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 tau[4];
    br_vector3 old_val;
    br_vector3 ftau;
    br_vector3 max_friction;
    br_vector3 vel;
    br_vector3 p_vel;
    br_vector3 normal_force;
    br_vector3 friction_force;
    br_scalar d[4];
    br_scalar f[4];
    br_scalar total_force;
    br_scalar point_vel;
    br_scalar batwick_length;
    br_matrix4 M;
    br_scalar dist;
    br_scalar min_d;
    br_scalar ts;
    br_scalar ts2;
    br_scalar v_diff;
    br_matrix34 *mat;
    br_matrix34 *oldmat;
    br_matrix34 mat_to_oldmat;
    br_matrix34 oldmat_to_mat;
    br_matrix34 tm;
    int collision;
    br_bounds bnds;
    tFace_ref *f_ref;
    int i;
    int j;
    int l;
    int k;
    int material;
    int noise_defeat;
    static int oldk;
    br_scalar min;
    br_scalar max;
    br_vector3 edges[3];
    br_vector3 corner;
    br_vector3 test_dir;
    br_scalar min_acc;
    br_scalar max_acc;
    br_matrix34 message_mat;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 50500
// Size: 0x394
//IDA: br_scalar __usercall AddFriction@<ST0>(tCollision_info *c@<EAX>, br_vector3 *vel@<EDX>, br_vector3 *normal_force@<EBX>, br_vector3 *pos@<ECX>, br_scalar total_force, br_vector3 *max_friction)
br_scalar AddFriction(tCollision_info *c, br_vector3 *vel, br_vector3 *normal_force, br_vector3 *pos, br_scalar total_force, br_vector3 *max_friction) {
    br_vector3 norm;
    br_vector3 tv;
    br_vector3 ftau;
    br_scalar ts;
    br_scalar point_vel;
    LOG_TRACE("(%p, %p, %p, %p, %f, %p)", c, vel, normal_force, pos, total_force, max_friction);
    NOT_IMPLEMENTED();
}

// Offset: 51416
// Size: 0x49b
//IDA: void __usercall AddFrictionCarToCar(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_vector3 *vel1@<EBX>, br_vector3 *vel2@<ECX>, br_vector3 *normal_force1, br_vector3 *pos1, br_vector3 *pos2, br_scalar total_force, br_vector3 *max_friction)
void AddFrictionCarToCar(tCollision_info *car1, tCollision_info *car2, br_vector3 *vel1, br_vector3 *vel2, br_vector3 *normal_force1, br_vector3 *pos1, br_vector3 *pos2, br_scalar total_force, br_vector3 *max_friction) {
    br_vector3 v_diff1;
    br_vector3 v_diff2;
    br_vector3 tau1;
    br_vector3 tau2;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 vel2_in_frame_1;
    br_scalar ts;
    br_scalar ts2;
    br_scalar v_diff;
    br_scalar stopping_impulse;
    br_scalar total_friction;
    int i;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p, %p, %f, %p)", car1, car2, vel1, vel2, normal_force1, pos1, pos2, total_force, max_friction);
    NOT_IMPLEMENTED();
}

// Offset: 52596
// Size: 0xe9
//IDA: void __cdecl ScrapeNoise(br_scalar vel, br_vector3 *position, int material)
void ScrapeNoise(br_scalar vel, br_vector3 *position, int material) {
    tS3_volume vol;
    static tS3_sound_tag scrape_tag;
    static tS3_volume last_scrape_vol;
    br_vector3 velocity;
    br_vector3 position_in_br;
    LOG_TRACE("(%f, %p, %d)", vel, position, material);
    NOT_IMPLEMENTED();
}

// Offset: 52832
// Size: 0x2eb
//IDA: void __usercall SkidNoise(tCar_spec *pC@<EAX>, int pWheel_num@<EDX>, br_scalar pV, int material)
void SkidNoise(tCar_spec *pC, int pWheel_num, br_scalar pV, int material) {
    br_vector3 pos;
    br_vector3 world_pos;
    br_vector3 wv;
    br_vector3 wvw;
    br_scalar ts;
    static tS3_volume last_skid_vol[2];
    int i;
    LOG_TRACE("(%p, %d, %f, %d)", pC, pWheel_num, pV, material);
    NOT_IMPLEMENTED();
}

// Offset: 53580
// Size: 0x4d
//IDA: void __usercall StopSkid(tCar_spec *pC@<EAX>)
void StopSkid(tCar_spec *pC) {
    LOG_TRACE("(%p)", pC);
    NOT_IMPLEMENTED();
}

// Offset: 53660
// Size: 0xff
//IDA: void __usercall CrashNoise(br_vector3 *pForce@<EAX>, br_vector3 *position@<EDX>, int material@<EBX>)
void CrashNoise(br_vector3 *pForce, br_vector3 *position, int material) {
    static tS3_sound_tag crunch_tag;
    static tS3_volume last_crunch_vol;
    tS3_volume vol;
    br_vector3 velocity;
    LOG_TRACE("(%p, %p, %d)", pForce, position, material);
    NOT_IMPLEMENTED();
}

// Offset: 53916
// Size: 0x605
//IDA: void __usercall CrushAndDamageCar(tCar_spec *c@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pForce_car_space@<EBX>, tCar_spec *car2@<ECX>)
void CrushAndDamageCar(tCar_spec *c, br_vector3 *pPosition, br_vector3 *pForce_car_space, tCar_spec *car2) {
    br_vector3 force;
    br_vector3 force2;
    br_vector3 position;
    br_vector3 pos_w;
    br_vector3 car_to_cam;
    br_vector3 force_for_bodywork;
    br_scalar ts;
    int i;
    br_matrix34 m;
    br_scalar fudge_multiplier;
    LOG_TRACE("(%p, %p, %p, %p)", c, pPosition, pForce_car_space, car2);
    NOT_IMPLEMENTED();
}

// Offset: 55460
// Size: 0x1d8
//IDA: int __usercall ExpandBoundingBox@<EAX>(tCar_spec *c@<EAX>)
int ExpandBoundingBox(tCar_spec *c) {
    br_scalar min_z;
    br_scalar max_z;
    br_scalar dist;
    br_vector3 tv;
    br_vector3 old_pos;
    int l;
    br_matrix34 mat;
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 55932
// Size: 0x31b
//IDA: void __usercall CrushBoundingBox(tCar_spec *c@<EAX>, int crush_only@<EDX>)
void CrushBoundingBox(tCar_spec *c, int crush_only) {
    br_vector3 min;
    br_vector3 max;
    int i;
    br_actor *actor;
    LOG_TRACE("(%p, %d)", c, crush_only);
    NOT_IMPLEMENTED();
}

// Offset: 56728
// Size: 0x117
//IDA: void __cdecl AddCollPoint(br_scalar dist, br_vector3 *p, br_vector3 *norm, br_vector3 *r, br_vector3 *n, br_vector3 *dir, int num, tCollision_info *c)
void AddCollPoint(br_scalar dist, br_vector3 *p, br_vector3 *norm, br_vector3 *r, br_vector3 *n, br_vector3 *dir, int num, tCollision_info *c) {
    static br_scalar d[4];
    int i;
    int furthest;
    LOG_TRACE("(%f, %p, %p, %p, %p, %p, %d, %p)", dist, p, norm, r, n, dir, num, c);
    NOT_IMPLEMENTED();
}

// Offset: 57008
// Size: 0x58
//IDA: br_scalar __usercall SinglePointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>)
br_scalar SinglePointColl(br_scalar *f, br_matrix4 *m, br_scalar *d) {
    LOG_TRACE("(%p, %p, %p)", f, m, d);
    NOT_IMPLEMENTED();
}

// Offset: 57096
// Size: 0x167
//IDA: br_scalar __usercall TwoPointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar TwoPointColl(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n) {
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p)", f, m, d, tau, n);
    NOT_IMPLEMENTED();
}

// Offset: 57456
// Size: 0x3e
//IDA: br_scalar __usercall DrMatrix4Inverse@<ST0>(br_matrix4 *mi@<EAX>, br_matrix4 *mc@<EDX>)
br_scalar DrMatrix4Inverse(br_matrix4 *mi, br_matrix4 *mc) {
    LOG_TRACE("(%p, %p)", mi, mc);
    NOT_IMPLEMENTED();
}

// Offset: 57520
// Size: 0xac
//IDA: br_scalar __usercall ThreePointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>)
br_scalar ThreePointColl(br_scalar *f, br_matrix4 *m, br_scalar *d) {
    br_matrix4 mc;
    br_matrix4 mi;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p)", f, m, d);
    NOT_IMPLEMENTED();
}

// Offset: 57692
// Size: 0x27e
//IDA: br_scalar __usercall ThreePointCollRec@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n, tCollision_info *c)
br_scalar ThreePointCollRec(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n, tCollision_info *c) {
    int i;
    int j;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", f, m, d, tau, n, c);
    NOT_IMPLEMENTED();
}

// Offset: 58332
// Size: 0x27f
//IDA: br_scalar __usercall FourPointColl@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n, tCollision_info *c)
br_scalar FourPointColl(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n, tCollision_info *c) {
    int i;
    int j;
    int l;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", f, m, d, tau, n, c);
    NOT_IMPLEMENTED();
}

// Offset: 58972
// Size: 0xe4
//IDA: void __usercall MultiFindFloorInBoxM(int pNum_rays@<EAX>, br_vector3 *a@<EDX>, br_vector3 *b@<EBX>, br_vector3 *nor@<ECX>, br_scalar *d, tCar_spec *c, int *mat_ref)
void MultiFindFloorInBoxM(int pNum_rays, br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCar_spec *c, int *mat_ref) {
    br_vector3 aa[4];
    br_vector3 bb;
    int i;
    LOG_TRACE("(%d, %p, %p, %p, %p, %p, %p)", pNum_rays, a, b, nor, d, c, mat_ref);
    NOT_IMPLEMENTED();
}

// Offset: 59200
// Size: 0x152
//IDA: void __usercall MultiFindFloorInBoxBU(int pNum_rays@<EAX>, br_vector3 *a@<EDX>, br_vector3 *b@<EBX>, br_vector3 *nor@<ECX>, br_scalar *d, tCar_spec *c, int *mat_ref)
void MultiFindFloorInBoxBU(int pNum_rays, br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCar_spec *c, int *mat_ref) {
    br_vector3 nor2;
    int i;
    int j;
    int l;
    br_scalar dist[4];
    tFace_ref *face_ref;
    LOG_TRACE("(%d, %p, %p, %p, %p, %p, %p)", pNum_rays, a, b, nor, d, c, mat_ref);
    NOT_IMPLEMENTED();
}

// Offset: 59540
// Size: 0x95
//IDA: void __usercall findfloor(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>)
void findfloor(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d) {
    br_material *material;
    br_vector3 aa;
    br_vector3 bb;
    LOG_TRACE("(%p, %p, %p, %p)", a, b, nor, d);
    NOT_IMPLEMENTED();
}

// Offset: 59692
// Size: 0x9d
//IDA: int __usercall FindFloorInBoxM@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxM(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c) {
    br_vector3 aa;
    br_vector3 bb;
    LOG_TRACE("(%p, %p, %p, %p, %p)", a, b, nor, d, c);
    NOT_IMPLEMENTED();
}

// Offset: 59852
// Size: 0x116
//IDA: int __usercall FindFloorInBoxBU@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxBU(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c) {
    br_vector3 nor2;
    int i;
    int j;
    br_scalar dist;
    tFace_ref *face_ref;
    LOG_TRACE("(%p, %p, %p, %p, %p)", a, b, nor, d, c);
    NOT_IMPLEMENTED();
}

// Offset: 60132
// Size: 0x1bb
//IDA: int __usercall FindFloorInBoxBU2@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxBU2(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c) {
    br_vector3 nor2;
    br_vector3 tv;
    int i;
    int j;
    br_scalar dist;
    tFace_ref *face_ref;
    LOG_TRACE("(%p, %p, %p, %p, %p)", a, b, nor, d, c);
    NOT_IMPLEMENTED();
}

// Offset: 60576
// Size: 0x9d
//IDA: int __usercall FindFloorInBoxM2@<EAX>(br_vector3 *a@<EAX>, br_vector3 *b@<EDX>, br_vector3 *nor@<EBX>, br_scalar *d@<ECX>, tCollision_info *c)
int FindFloorInBoxM2(br_vector3 *a, br_vector3 *b, br_vector3 *nor, br_scalar *d, tCollision_info *c) {
    br_vector3 aa;
    br_vector3 bb;
    LOG_TRACE("(%p, %p, %p, %p, %p)", a, b, nor, d, c);
    NOT_IMPLEMENTED();
}

// Offset: 60736
// Size: 0x52c
//IDA: int __usercall BoxFaceIntersect@<EAX>(br_bounds *pB@<EAX>, br_matrix34 *pM@<EDX>, br_matrix34 *pMold@<EBX>, br_vector3 *pPoint_list@<ECX>, br_vector3 *pNorm_list, br_scalar *pDist_list, int pMax_pnts, tCollision_info *c)
int BoxFaceIntersect(br_bounds *pB, br_matrix34 *pM, br_matrix34 *pMold, br_vector3 *pPoint_list, br_vector3 *pNorm_list, br_scalar *pDist_list, int pMax_pnts, tCollision_info *c) {
    br_vector3 p[3];
    br_vector3 tv;
    br_vector3 pos;
    br_bounds bnds;
    int i;
    int j;
    int n;
    int flag;
    int m;
    tFace_ref *f_ref;
    br_face *face;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p, %d, %p)", pB, pM, pMold, pPoint_list, pNorm_list, pDist_list, pMax_pnts, c);
    NOT_IMPLEMENTED();
}

// Offset: 62060
// Size: 0xe07
//IDA: int __usercall AddEdgeCollPoints@<EAX>(br_vector3 *p1@<EAX>, br_vector3 *p2@<EDX>, br_bounds *pB@<EBX>, br_matrix34 *pMold@<ECX>, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int n, int pMax_pnts, tCollision_info *c)
int AddEdgeCollPoints(br_vector3 *p1, br_vector3 *p2, br_bounds *pB, br_matrix34 *pMold, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int n, int pMax_pnts, tCollision_info *c) {
    br_vector3 op1;
    br_vector3 op2;
    br_vector3 a;
    br_vector3 b;
    br_vector3 edge;
    br_vector3 hp1;
    br_vector3 hp2;
    br_vector3 hp3;
    int plane1;
    int plane2;
    int plane3;
    int d;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    br_scalar __block2___scale;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p, %d, %d, %p)", p1, p2, pB, pMold, pPoint_list, pNorm_list, n, pMax_pnts, c);
    NOT_IMPLEMENTED();
}

// Offset: 65652
// Size: 0x76
//IDA: void __usercall GetPlaneNormal(br_vector3 *n@<EAX>, int p@<EDX>)
void GetPlaneNormal(br_vector3 *n, int p) {
    int d;
    LOG_TRACE("(%p, %d)", n, p);
    NOT_IMPLEMENTED();
}

// Offset: 65772
// Size: 0x216
//IDA: int __usercall GetBoundsEdge@<EAX>(br_vector3 *pos@<EAX>, br_vector3 *edge@<EDX>, br_bounds *pB@<EBX>, int plane1@<ECX>, int plane2, br_vector3 *a, br_vector3 *b, br_vector3 *c, int flag)
int GetBoundsEdge(br_vector3 *pos, br_vector3 *edge, br_bounds *pB, int plane1, int plane2, br_vector3 *a, br_vector3 *b, br_vector3 *c, int flag) {
    int d1;
    int d2;
    int d3;
    br_vector3 n;
    br_vector3 p;
    br_vector3 q;
    LOG_TRACE("(%p, %p, %p, %d, %d, %p, %p, %p, %d)", pos, edge, pB, plane1, plane2, a, b, c, flag);
    NOT_IMPLEMENTED();
}

// Offset: 66308
// Size: 0x25b
//IDA: void __usercall oldMoveOurCar(tU32 pTime_difference@<EAX>)
void oldMoveOurCar(tU32 pTime_difference) {
    br_vector3 thrust_vector;
    br_matrix34 direction_matrix;
    br_matrix34 old_mat;
    double rotate_amount;
    br_scalar nearest_y_above;
    br_scalar nearest_y_below;
    br_scalar speed;
    int below_face_index;
    int above_face_index;
    br_model *below_model;
    br_model *above_model;
    LOG_TRACE("(%d)", pTime_difference);
    NOT_IMPLEMENTED();
}

// Offset: 66912
// Size: 0x22
//IDA: void __cdecl ToggleCollisionDetection()
void ToggleCollisionDetection() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 66948
// Size: 0x54
//IDA: void __cdecl CancelPendingCunningStunt()
void CancelPendingCunningStunt() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 67032
// Size: 0x3d
//IDA: float __cdecl frac(float pN)
float frac(float pN) {
    LOG_TRACE("(%f)", pN);
    NOT_IMPLEMENTED();
}

// Offset: 67096
// Size: 0x259
//IDA: void __usercall SetAmbientPratCam(tCar_spec *pCar@<EAX>)
void SetAmbientPratCam(tCar_spec *pCar) {
    br_scalar vcs_x;
    br_scalar vcs_y;
    br_scalar vcs_z;
    br_scalar abs_vcs_x;
    br_scalar abs_vcs_y;
    br_scalar abs_vcs_z;
    br_scalar abs_omega_x;
    br_scalar abs_omega_y;
    br_scalar abs_omega_z;
    tU32 the_time;
    static tU32 last_time_on_ground;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 67700
// Size: 0xe0f
//IDA: void __usercall MungeCarGraphics(tU32 pFrame_period@<EAX>)
void MungeCarGraphics(tU32 pFrame_period) {
    int i;
    int j;
    int update_mat;
    int spinning_wildly;
    int spinning_mildly;
    int car_count;
    int oily_count;
    int car;
    int cat;
    int new_special_screen;
    tCar_spec *the_car;
    br_scalar distance_from_camera;
    br_scalar car_x;
    br_scalar car_z;
    br_scalar oily_size;
    br_scalar car_radius;
    br_scalar abs_omega_x;
    br_scalar abs_omega_y;
    br_scalar abs_omega_z;
    float wheel_speed;
    float speed_mph;
    float rev_angle;
    float sine_angle;
    float raw_revs;
    float rev_reducer;
    tSpecial_screen *the_special_screen;
    br_material *the_material;
    tU32 the_time;
    br_actor *oily_actor;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 71300
// Size: 0xb3
//IDA: void __cdecl ResetCarScreens()
void ResetCarScreens() {
    int cat;
    int car_count;
    int i;
    tCar_spec *the_car;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 71480
// Size: 0xd0
//IDA: tCar_spec* __cdecl GetRaceLeader()
tCar_spec* GetRaceLeader() {
    int i;
    int score;
    tCar_spec *car;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 71688
// Size: 0x22b
//IDA: void __cdecl AmIGettingBoredWatchingCameraSpin()
void AmIGettingBoredWatchingCameraSpin() {
    static tU32 time_of_death;
    static tU32 headup_timer;
    tCar_spec *car;
    char s[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72244
// Size: 0xa1
//IDA: void __cdecl ViewNetPlayer()
void ViewNetPlayer() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72408
// Size: 0xfb
//IDA: void __cdecl ViewOpponent()
void ViewOpponent() {
    static int n;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72660
// Size: 0x86
//IDA: void __cdecl ToggleCarToCarCollisions()
void ToggleCarToCarCollisions() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72796
// Size: 0x22
//IDA: void __cdecl SwapCar()
void SwapCar() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72832
// Size: 0xb2
//IDA: void __cdecl AdjustDownForce()
void AdjustDownForce() {
    char s[100];
    tCar_spec *c;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 73012
// Size: 0x86
//IDA: void __cdecl FreezeMechanics()
void FreezeMechanics() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 73148
// Size: 0x86
//IDA: void __cdecl PutOpponentsInNeutral()
void PutOpponentsInNeutral() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 73284
// Size: 0x85
//IDA: void __cdecl SetPanningFieldOfView()
void SetPanningFieldOfView() {
    br_camera *camera_ptr;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 73420
// Size: 0xe8
//IDA: void __usercall CheckDisablePlingMaterials(tCar_spec *pCar@<EAX>)
void CheckDisablePlingMaterials(tCar_spec *pCar) {
    br_matrix34 *mat;
    br_scalar height;
    int i;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 73652
// Size: 0x15a
//IDA: void __usercall PositionExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void PositionExternalCamera(tCar_spec *c, tU32 pTime) {
    static int old_camera_mode;
    br_camera *camera_ptr;
    LOG_TRACE("(%p, %d)", c, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 74000
// Size: 0x66
//IDA: void __usercall CameraBugFix(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void CameraBugFix(tCar_spec *c, tU32 pTime) {
    br_matrix34 mat;
    br_matrix34 *m2;
    br_vector3 tv;
    LOG_TRACE("(%p, %d)", c, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 74104
// Size: 0x8d
//IDA: int __usercall PossibleRemoveNonCarFromWorld@<EAX>(br_actor *pActor@<EAX>)
int PossibleRemoveNonCarFromWorld(br_actor *pActor) {
    tU8 cx;
    tU8 cz;
    tTrack_spec *track_spec;
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 74248
// Size: 0x75
//IDA: void __usercall PutNonCarBackInWorld(br_actor *pActor@<EAX>)
void PutNonCarBackInWorld(br_actor *pActor) {
    tU8 cx;
    tU8 cz;
    tTrack_spec *track_spec;
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 74368
// Size: 0xa49
//IDA: int __usercall IncidentCam@<EAX>(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
int IncidentCam(tCar_spec *c, tU32 pTime) {
    br_matrix34 *m2;
    br_matrix34 mat;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 perp;
    br_vector3 vertical;
    br_vector3 murderer_pos;
    br_scalar ts;
    tCar_spec *car2;
    static tU32 next_incident_time;
    static tIncident_type type;
    static float severity;
    static tIncident_info info;
    static int random;
    static int count;
    br_scalar temp;
    br_vector3 old_cam_pos;
    int removed;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    br_scalar __block2___scale;
    LOG_TRACE("(%p, %d)", c, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 77004
// Size: 0x4f3
//IDA: int __usercall MoveCamToIncident@<EAX>(tCar_spec *c@<EAX>, tIncident_type *type@<EDX>, float *severity@<EBX>, tIncident_info *info@<ECX>, tU32 *next_incident_time)
int MoveCamToIncident(tCar_spec *c, tIncident_type *type, float *severity, tIncident_info *info, tU32 *next_incident_time) {
    tU32 next_incident_time2;
    tU32 t;
    tIncident_type type2;
    float severity2;
    tIncident_info info2;
    br_vector3 pos;
    br_vector3 left;
    br_vector3 right;
    br_vector3 vertical;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 perp;
    int test;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p, %p, %p, %p)", c, type, severity, info, next_incident_time);
    NOT_IMPLEMENTED();
}

// Offset: 78272
// Size: 0x170
//IDA: void __usercall PanningExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void PanningExternalCamera(tCar_spec *c, tU32 pTime) {
    br_matrix34 *m2;
    br_matrix34 *m1;
    br_vector3 tv;
    br_scalar ts;
    static int inside_camera_zone;
    LOG_TRACE("(%p, %d)", c, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 78640
// Size: 0x88
//IDA: int __usercall CheckForWall@<EAX>(br_vector3 *start@<EAX>, br_vector3 *end@<EDX>)
int CheckForWall(br_vector3 *start, br_vector3 *end) {
    br_vector3 dir;
    br_material *material;
    br_vector3 normal;
    br_scalar d;
    LOG_TRACE("(%p, %p)", start, end);
    NOT_IMPLEMENTED();
}

// Offset: 78776
// Size: 0x567
//IDA: void __usercall SetUpPanningCamera(tCar_spec *c@<EAX>)
void SetUpPanningCamera(tCar_spec *c) {
    br_vector3 pos;
    br_vector3 perp;
    br_vector3 dir;
    br_vector3 tv;
    br_vector3 tv2;
    br_scalar ts;
    tU32 time;
    tU32 t;
    tU32 t2;
    tU32 time_step;
    br_matrix34 *m2;
    br_matrix34 *m1;
    br_vector3 left;
    br_vector3 right;
    br_vector3 car_centre;
    int left_score;
    int right_score;
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 80160
// Size: 0x61
//IDA: void __usercall SaveCameraPosition(int i@<EAX>)
void SaveCameraPosition(int i) {
    LOG_TRACE("(%d)", i);
    NOT_IMPLEMENTED();
}

// Offset: 80260
// Size: 0x61
//IDA: void __usercall RestoreCameraPosition(int i@<EAX>)
void RestoreCameraPosition(int i) {
    LOG_TRACE("(%d)", i);
    NOT_IMPLEMENTED();
}

// Offset: 80360
// Size: 0x83b
//IDA: void __usercall NormalPositionExternalCamera(tCar_spec *c@<EAX>, tU32 pTime@<EDX>)
void NormalPositionExternalCamera(tCar_spec *c, tU32 pTime) {
    br_matrix34 *m2;
    br_matrix34 *m1;
    br_scalar time;
    br_scalar ts;
    br_scalar ts2;
    br_scalar dist;
    br_scalar height_inc;
    br_scalar l;
    br_scalar frac;
    br_vector3 vn;
    br_vector3 a;
    br_vector3 b;
    br_vector3 tv;
    br_angle yaw;
    br_angle theta;
    br_scalar d;
    int face;
    int i;
    int swoop;
    int manual_swing;
    int manual_zoom;
    br_vector3 old_camera_pos;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %d)", c, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 82468
// Size: 0x1be
//IDA: void __usercall MoveWithWheels(tCar_spec *c@<EAX>, br_vector3 *vn@<EDX>, int manual_swing@<EBX>)
void MoveWithWheels(tCar_spec *c, br_vector3 *vn, int manual_swing) {
    br_angle yaw;
    br_angle theta;
    static int move_with_wheels;
    LOG_TRACE("(%p, %p, %d)", c, vn, manual_swing);
    NOT_IMPLEMENTED();
}

// Offset: 82916
// Size: 0x724
//IDA: void __usercall SwingCamera(tCar_spec *c@<EAX>, br_matrix34 *m1@<EDX>, br_matrix34 *m2@<EBX>, br_vector3 *vn@<ECX>, tU32 pTime)
void SwingCamera(tCar_spec *c, br_matrix34 *m1, br_matrix34 *m2, br_vector3 *vn, tU32 pTime) {
    int i;
    br_scalar ts;
    br_angle yaw;
    br_angle theta;
    br_angle alpha;
    br_scalar sin_dtheta;
    br_scalar cos_dtheta;
    br_scalar sign;
    int manual_swing;
    static br_angle omega;
    static int elapsed_time;
    static br_vector3 old_vn;
    LOG_TRACE("(%p, %p, %p, %p, %d)", c, m1, m2, vn, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 84744
// Size: 0x308
//IDA: void __usercall PointCameraAtCar(tCar_spec *c@<EAX>, br_matrix34 *m1@<EDX>, br_matrix34 *m2@<EBX>)
void PointCameraAtCar(tCar_spec *c, br_matrix34 *m1, br_matrix34 *m2) {
    br_vector3 vn;
    br_vector3 tv;
    br_vector3 tv2;
    br_scalar dist;
    br_scalar frac;
    br_angle theta;
    br_vector3 *pos;
    br_camera *camera_ptr;
    br_angle off_centre_angle;
    int swoop;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p, %p)", c, m1, m2);
    NOT_IMPLEMENTED();
}

// Offset: 85520
// Size: 0x1d1
//IDA: void __usercall PointCamera(br_vector3 *pos@<EAX>, br_matrix34 *m2@<EDX>)
void PointCamera(br_vector3 *pos, br_matrix34 *m2) {
    br_vector3 vn;
    br_scalar dist;
    br_angle theta;
    br_camera *camera_ptr;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p)", pos, m2);
    NOT_IMPLEMENTED();
}

// Offset: 85988
// Size: 0x96b
//IDA: int __usercall CollideCamera2@<EAX>(br_vector3 *car_pos@<EAX>, br_vector3 *cam_pos@<EDX>, br_vector3 *old_camera_pos@<EBX>, int manual_move@<ECX>)
int CollideCamera2(br_vector3 *car_pos, br_vector3 *cam_pos, br_vector3 *old_camera_pos, int manual_move) {
    int i;
    int k;
    br_vector3 a;
    br_vector3 b;
    br_vector3 vn;
    br_vector3 tv;
    br_vector3 tv2;
    br_scalar l;
    br_scalar d;
    br_scalar ts;
    br_scalar ts2;
    br_scalar dist;
    br_scalar hither;
    br_angle theta;
    tBounds bnds;
    br_matrix34 mat;
    br_material *material;
    br_scalar alpha;
    br_scalar sa;
    br_scalar sb;
    br_scalar sc;
    tFace_ref face_list[3];
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %p, %p, %d)", car_pos, cam_pos, old_camera_pos, manual_move);
    NOT_IMPLEMENTED();
}

// Offset: 88400
// Size: 0x8d
//IDA: int __usercall BoundsTest@<EAX>(br_bounds *bnds@<EAX>, br_vector3 *p@<EDX>)
int BoundsTest(br_bounds *bnds, br_vector3 *p) {
    int j;
    LOG_TRACE("(%p, %p)", bnds, p);
    NOT_IMPLEMENTED();
}

// Offset: 88544
// Size: 0x1ee
//IDA: int __usercall CollideCameraWithOtherCars@<EAX>(br_vector3 *car_pos@<EAX>, br_vector3 *cam_pos@<EDX>)
int CollideCameraWithOtherCars(br_vector3 *car_pos, br_vector3 *cam_pos) {
    int i;
    int plane;
    br_scalar ts;
    tCar_spec *c;
    br_vector3 tv;
    br_vector3 pos_car_space;
    br_vector3 dir;
    br_vector3 p;
    br_vector3 n;
    br_bounds bnds;
    LOG_TRACE("(%p, %p)", car_pos, cam_pos);
    NOT_IMPLEMENTED();
}

// Offset: 89040
// Size: 0x1ff
//IDA: void __cdecl InitialiseExternalCamera()
void InitialiseExternalCamera() {
    br_scalar ts;
    tCar_spec *c;
    br_vector3 r;
    br_angle yaw;
    br_scalar __block0___scale;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 89552
// Size: 0x2c
//IDA: void __cdecl FreezeCamera()
void FreezeCamera() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 89596
// Size: 0x8c8
//IDA: void __usercall FlyCar(tCar_spec *c@<EAX>, br_scalar dt)
void FlyCar(tCar_spec *c, br_scalar dt) {
    int accflag;
    int turnflag;
    br_vector3 step;
    br_matrix34 *mat;
    br_angle theta;
    static br_scalar vel;
    tFace_ref faces[20];
    tBounds bnds;
    br_vector3 __block0__a;
    br_vector3 __block0__b;
    br_vector3 __block0__norm;
    br_vector3 __block0__norm2;
    br_scalar __block0__dist;
    br_scalar __block0__dist2;
    br_scalar __block0__ts;
    br_angle __block0__phi;
    int __block0__i;
    br_angle __block0__theta;
    LOG_TRACE("(%p, %f)", c, dt);
    NOT_IMPLEMENTED();
}

// Offset: 91844
// Size: 0x9d
//IDA: void __usercall DrVector3RotateY(br_vector3 *v@<EAX>, br_angle t@<EDX>)
void DrVector3RotateY(br_vector3 *v, br_angle t) {
    br_scalar c;
    br_scalar s;
    br_scalar ts;
    LOG_TRACE("(%p, %d)", v, t);
    NOT_IMPLEMENTED();
}

// Offset: 92004
// Size: 0xed
//IDA: void __cdecl CrashCarsTogether(br_scalar dt)
void CrashCarsTogether(br_scalar dt) {
    int pass;
    int k;
    int i;
    tCollison_data collide_list[32];
    LOG_TRACE("(%f)", dt);
    NOT_IMPLEMENTED();
}

// Offset: 92244
// Size: 0x950
//IDA: int __cdecl CrashCarsTogetherSinglePass(br_scalar dt, int pPass, tCollison_data *collide_list)
int CrashCarsTogetherSinglePass(br_scalar dt, int pPass, tCollison_data *collide_list) {
    int i;
    int j;
    int l;
    int m;
    int n;
    int collided;
    int k;
    int ref1;
    int ref2;
    int c1im;
    int c2im;
    tCollision_info *car_1;
    tCollision_info *car_2;
    tCollision_info *car_3;
    tCollision_info *car_in_middle;
    tCollision_info *car_on_wall;
    LOG_TRACE("(%f, %d, %p)", dt, pPass, collide_list);
    NOT_IMPLEMENTED();
}

// Offset: 94628
// Size: 0x8e
//IDA: void __usercall BringCarToAGrindingHalt(tCollision_info *car@<EAX>)
void BringCarToAGrindingHalt(tCollision_info *car) {
    LOG_TRACE("(%p)", car);
    NOT_IMPLEMENTED();
}

// Offset: 94772
// Size: 0xa5
//IDA: int __usercall BoundsOverlapTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>)
// Suffix added to avoid duplicate symbol
int BoundsOverlapTest__car(br_bounds *b1, br_bounds *b2) {
    LOG_TRACE("(%p, %p)", b1, b2);
    NOT_IMPLEMENTED();
}

// Offset: 94940
// Size: 0x63
//IDA: int __usercall SimpleCarCarCollisionTest@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>)
int SimpleCarCarCollisionTest(tCollision_info *car1, tCollision_info *car2) {
    LOG_TRACE("(%p, %p)", car1, car2);
    NOT_IMPLEMENTED();
}

// Offset: 95040
// Size: 0x36d
//IDA: int __usercall CollideTwoCarsWithWalls@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_scalar dt)
int CollideTwoCarsWithWalls(tCollision_info *car1, tCollision_info *car2, br_scalar dt) {
    br_vector3 mom1;
    br_vector3 mom2;
    int l;
    int m;
    int n;
    int p;
    int im1;
    int im2;
    LOG_TRACE("(%p, %p, %f)", car1, car2, dt);
    NOT_IMPLEMENTED();
}

// Offset: 95920
// Size: 0x12a
//IDA: int __usercall CollideTwoCarsRepeatedly@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_scalar dt)
int CollideTwoCarsRepeatedly(tCollision_info *car1, tCollision_info *car2, br_scalar dt) {
    int l;
    int collide;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %f)", car1, car2, dt);
    NOT_IMPLEMENTED();
}

// Offset: 96220
// Size: 0xdab
//IDA: int __usercall CollideTwoCars@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, int pPass@<EBX>)
int CollideTwoCars(tCollision_info *car1, tCollision_info *car2, int pPass) {
    int k;
    int old_k;
    int i;
    int j;
    br_scalar dist;
    br_scalar ts;
    br_bounds new_car1_bnds;
    br_bounds new_car2_bnds;
    br_bounds bnds;
    br_matrix34 *mat1;
    br_matrix34 *mat2;
    br_matrix34 *oldmat1;
    br_matrix34 *oldmat2;
    br_matrix34 inv_mat1;
    br_matrix34 inv_mat2;
    br_matrix34 inv_oldmat1;
    br_matrix34 inv_oldmat2;
    br_matrix34 car2_to_car1;
    br_matrix34 car1_to_car2;
    br_matrix34 old_car2_to_car1;
    br_matrix34 old_car1_to_car2;
    br_matrix34 car1_to_old_car1;
    br_matrix34 car2_to_old_car2;
    br_vector3 r[16];
    br_vector3 n[16];
    br_vector3 sep;
    br_vector3 tv;
    int add_point;
    static br_vector3 oldr1;
    static br_vector3 oldr2;
    static br_vector3 oldn1;
    static br_vector3 oldn2;
    static int is_old_point_available;
    LOG_TRACE("(%p, %p, %d)", car1, car2, pPass);
    NOT_IMPLEMENTED();
}

// Offset: 99720
// Size: 0xe0e
//IDA: int __usercall GetEdgeEdgeCollisions@<EAX>(br_bounds *pB1@<EAX>, br_bounds *pB2@<EDX>, br_matrix34 *pM21@<EBX>, br_matrix34 *pM12@<ECX>, br_matrix34 *pMo21, br_matrix34 *pMo12, br_matrix34 *pM1o1, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax)
int GetEdgeEdgeCollisions(br_bounds *pB1, br_bounds *pB2, br_matrix34 *pM21, br_matrix34 *pM12, br_matrix34 *pMo21, br_matrix34 *pMo12, br_matrix34 *pM1o1, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax) {
    br_vector3 p1;
    br_vector3 p2;
    br_vector3 tp1;
    br_vector3 tp2;
    br_vector3 tp3;
    br_vector3 hp1;
    br_vector3 hp2;
    br_vector3 hp3;
    br_vector3 shp1;
    br_vector3 shp2;
    br_vector3 edge;
    int plane1;
    int plane2;
    int plane3;
    br_scalar ts;
    int i;
    int j;
    int n;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p, %p, %p, %p, %d)", pB1, pB2, pM21, pM12, pMo21, pMo12, pM1o1, pPoint_list, pNorm_list, pMax);
    NOT_IMPLEMENTED();
}

// Offset: 103320
// Size: 0x780
//IDA: int __usercall FacePointCarCarCollide@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_matrix34 *pMms@<EBX>, br_matrix34 *pMoms@<ECX>, br_matrix34 *pMsos, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax, int order)
int FacePointCarCarCollide(tCollision_info *car1, tCollision_info *car2, br_matrix34 *pMms, br_matrix34 *pMoms, br_matrix34 *pMsos, br_vector3 *pPoint_list, br_vector3 *pNorm_list, int pMax, int order) {
    int k;
    int i;
    int j;
    int l;
    int plane;
    br_vector3 a;
    br_vector3 a1;
    br_vector3 aa;
    br_vector3 bb;
    br_vector3 norm;
    br_vector3 hp;
    br_vector3 centre;
    br_scalar dist;
    br_bounds *pStat_box;
    br_bounds *pMove_box;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p, %p, %d, %d)", car1, car2, pMms, pMoms, pMsos, pPoint_list, pNorm_list, pMax, order);
    NOT_IMPLEMENTED();
}

// Offset: 105240
// Size: 0x6f
//IDA: void __usercall MungeCarsMass(tCollision_info *pCar@<EAX>, br_scalar pFactor)
void MungeCarsMass(tCollision_info *pCar, br_scalar pFactor) {
    LOG_TRACE("(%p, %f)", pCar, pFactor);
    NOT_IMPLEMENTED();
}

// Offset: 105352
// Size: 0x7c
//IDA: void __usercall ModifyCarsMass(tCollision_info *pCar_1@<EAX>, tCollision_info *pCar_2@<EDX>)
void ModifyCarsMass(tCollision_info *pCar_1, tCollision_info *pCar_2) {
    LOG_TRACE("(%p, %p)", pCar_1, pCar_2);
    NOT_IMPLEMENTED();
}

// Offset: 105476
// Size: 0x90
//IDA: void __usercall ResetCarsMass(tCollision_info *pCar_1@<EAX>, tCollision_info *pCar_2@<EDX>)
void ResetCarsMass(tCollision_info *pCar_1, tCollision_info *pCar_2) {
    LOG_TRACE("(%p, %p)", pCar_1, pCar_2);
    NOT_IMPLEMENTED();
}

// Offset: 105620
// Size: 0x22ed
//IDA: int __usercall DoCollide@<EAX>(tCollision_info *car1@<EAX>, tCollision_info *car2@<EDX>, br_vector3 *r@<EBX>, br_vector3 *n@<ECX>, int k, int pPass, br_matrix34 *mat1_to_mat2)
int DoCollide(tCollision_info *car1, tCollision_info *car2, br_vector3 *r, br_vector3 *n, int k, int pPass, br_matrix34 *mat1_to_mat2) {
    br_matrix34 *mat1;
    br_matrix34 *mat2;
    br_matrix34 *oldmat1;
    br_matrix34 *oldmat2;
    br_matrix4 M;
    br_vector3 tau1[8];
    br_vector3 a;
    br_vector3 norm;
    br_vector3 f1;
    br_vector3 f2;
    br_vector3 pos1;
    br_vector3 pos2;
    br_vector3 max_friction;
    br_vector3 tv;
    br_vector3 tv2;
    br_vector3 *tau2;
    br_vector3 torque1;
    br_vector3 torque2;
    br_scalar f[4];
    br_scalar d[4];
    br_scalar ts;
    br_scalar tforce;
    int i;
    int j;
    int car1_point;
    int car2_point;
    int plane;
    int move_car1;
    int move_car2;
    br_vector3 a2;
    br_vector3 f12;
    br_vector3 f22;
    br_vector3 point_vel1;
    br_vector3 point_vel2;
    br_scalar fudge_multiplier;
    br_scalar factor;
    int need_to_fudge;
    LOG_TRACE("(%p, %p, %p, %p, %d, %d, %p)", car1, car2, r, n, k, pPass, mat1_to_mat2);
    NOT_IMPLEMENTED();
}

// Offset: 114564
// Size: 0x1a1
//IDA: br_scalar __usercall TwoPointCollB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar TwoPointCollB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n) {
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p)", f, m, d, tau, n);
    NOT_IMPLEMENTED();
}

// Offset: 114984
// Size: 0x33b
//IDA: br_scalar __usercall ThreePointCollRecB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar ThreePointCollRecB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n) {
    int i;
    int j;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p)", f, m, d, tau, n);
    NOT_IMPLEMENTED();
}

// Offset: 115812
// Size: 0x315
//IDA: br_scalar __usercall FourPointCollB@<ST0>(br_scalar *f@<EAX>, br_matrix4 *m@<EDX>, br_scalar *d@<EBX>, br_vector3 *tau@<ECX>, br_vector3 *n)
br_scalar FourPointCollB(br_scalar *f, br_matrix4 *m, br_scalar *d, br_vector3 *tau, br_vector3 *n) {
    int i;
    int j;
    int l;
    br_scalar ts;
    LOG_TRACE("(%p, %p, %p, %p, %p)", f, m, d, tau, n);
    NOT_IMPLEMENTED();
}

// Offset: 116604
// Size: 0x59
//IDA: int __usercall TestForNan@<EAX>(float *f@<EAX>)
int TestForNan(float *f) {
    tU32 i;
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 116696
// Size: 0x59
//IDA: void __cdecl CheckCameraHither()
void CheckCameraHither() {
    br_camera *cam;
    static int old_hither;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 116788
// Size: 0x20d
//IDA: void __usercall SetCarSuspGiveAndHeight(tCar_spec *pCar@<EAX>, br_scalar pFront_give_factor, br_scalar pRear_give_factor, br_scalar pDamping_factor, br_scalar pExtra_front_height, br_scalar pExtra_rear_height)
void SetCarSuspGiveAndHeight(tCar_spec *pCar, br_scalar pFront_give_factor, br_scalar pRear_give_factor, br_scalar pDamping_factor, br_scalar pExtra_front_height, br_scalar pExtra_rear_height) {
    br_scalar front_give;
    br_scalar rear_give;
    br_scalar damping;
    br_scalar ratio;
    int i;
    LOG_TRACE("(%p, %f, %f, %f, %f, %f)", pCar, pFront_give_factor, pRear_give_factor, pDamping_factor, pExtra_front_height, pExtra_rear_height);
    NOT_IMPLEMENTED();
}

// Offset: 117316
// Size: 0x3ff
//IDA: int __usercall TestForCarInSensiblePlace@<EAX>(tCar_spec *car@<EAX>)
int TestForCarInSensiblePlace(tCar_spec *car) {
    br_bounds bnds;
    br_matrix34 mat;
    br_matrix34 *mat1;
    br_matrix34 *mat2;
    int i;
    int j;
    int k;
    tCollision_info *c2;
    tCollision_info *car_info;
    br_vector3 sep;
    br_vector3 tv;
    br_vector3 tv2;
    br_scalar __block0___scale;
    LOG_TRACE("(%p)", car);
    NOT_IMPLEMENTED();
}

// Offset: 118340
// Size: 0x210
//IDA: int __usercall TestOldMats@<EAX>(tCollision_info *c1@<EAX>, tCollision_info *c2@<EDX>, int newmats@<EBX>)
int TestOldMats(tCollision_info *c1, tCollision_info *c2, int newmats) {
    br_vector3 p1;
    br_vector3 p2;
    br_vector3 tp1;
    br_vector3 tp2;
    br_vector3 tp3;
    br_vector3 hp1;
    br_vector3 hp2;
    br_vector3 hp3;
    br_vector3 shp1;
    br_vector3 shp2;
    br_vector3 edge;
    int plane1;
    int plane2;
    int plane3;
    br_scalar ts;
    int i;
    int j;
    int n;
    br_bounds *b1;
    br_bounds *b2;
    br_matrix34 invmat1;
    br_matrix34 mat21;
    LOG_TRACE("(%p, %p, %d)", c1, c2, newmats);
    NOT_IMPLEMENTED();
}

// Offset: 118868
// Size: 0x45
//IDA: int __usercall PullActorFromWorld@<EAX>(br_actor *pActor@<EAX>)
int PullActorFromWorld(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 118940
// Size: 0x2a9
//IDA: int __usercall DoPullActorFromWorld@<EAX>(br_actor *pActor@<EAX>)
int DoPullActorFromWorld(br_actor *pActor) {
    int num;
    int i;
    tCollision_info *c;
    tNon_car_spec *non_car;
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 119624
// Size: 0x388
//IDA: void __usercall CheckForDeAttachmentOfNonCars(tU32 pTime@<EAX>)
void CheckForDeAttachmentOfNonCars(tU32 pTime) {
    static tU32 total_time;
    br_bounds bnds;
    int i;
    int j;
    int last_free_slot;
    int drop;
    tCollision_info *c;
    tCollision_info *c2;
    br_actor *actor;
    tU8 cx;
    tU8 cz;
    tTrack_spec *track_spec;
    br_matrix34 mat;
    LOG_TRACE("(%d)", pTime);
    NOT_IMPLEMENTED();
}

// Offset: 120528
// Size: 0xf8
//IDA: void __usercall AdjustNonCar(br_actor *pActor@<EAX>, br_matrix34 *pMat@<EDX>)
void AdjustNonCar(br_actor *pActor, br_matrix34 *pMat) {
    tU8 cx;
    tU8 cz;
    tTrack_spec *track_spec;
    LOG_TRACE("(%p, %p)", pActor, pMat);
    NOT_IMPLEMENTED();
}

// Offset: 120776
// Size: 0xf0
//IDA: void __usercall PipeSingleNonCar(tCollision_info *c@<EAX>)
void PipeSingleNonCar(tCollision_info *c) {
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 121016
// Size: 0xa9
//IDA: int __usercall GetPrecalculatedFacesUnderCar@<EAX>(tCar_spec *pCar@<EAX>, tFace_ref **pFace_refs@<EDX>)
int GetPrecalculatedFacesUnderCar(tCar_spec *pCar, tFace_ref **pFace_refs) {
    LOG_TRACE("(%p, %p)", pCar, pFace_refs);
    NOT_IMPLEMENTED();
}

// Offset: 121188
// Size: 0x35
//IDA: br_material* __cdecl SomeNearbyMaterial()
br_material* SomeNearbyMaterial() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

