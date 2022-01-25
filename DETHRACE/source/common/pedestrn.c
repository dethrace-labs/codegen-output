#include "pedestrn.h"

int gDetect_peds;
int gReally_stupid_ped_bug_enable;
int gPed_sound_disable;
int gVesuvians_last_time;
int gSend_peds;
tU32 gLast_ped_message_send;
tPedestrian_instruction *gInitial_instruction;
char *gRate_commands[3];
char *gCollide_commands[1];
char *gInstruc_commands[10];
float gMin_ped_gib_speeds[4];
float gPed_gib_distrib[4];
float gPed_gib_speeds[4];
int gPed_size_counts[4];
char *gPed_gib_names[4][5];
char *gPed_geb_names[4][5];
int gPed_gib_maxes[4][5];
br_scalar gExploding_ped_scale[3];
 // Suffix added to avoid duplicate symbol
br_vector3 gZero_v__pedestrn;
int gPed_instruc_count;
int gPed_count;
br_actor *gPath_actor;
br_actor *gCurrent_ped_path_actor;
int gPedestrians_on;
int gVesuvian_corpses;
br_material *gPed_material;
int gPed_gib_counts[4][5];
tPedestrian_instruction gPed_instrucs[100];
tPed_gib gPed_gibs[30];
tPed_gib_materials gPed_gib_materials[4];
tProximity_ray gProximity_rays[20];
int gPed_colliding;
float gZombie_factor;
int gRespawn_variance;
br_scalar gPed_scale_factor;
int gTotal_peds;
int gPedestrian_harvest;
br_vector3 gPed_pos_camera;
int gMin_respawn_time;
br_material *gPath_mat_calc;
float gPedestrian_speed_factor;
int gExploding_pedestrians;
int gBlind_pedestrians;
br_material *gPath_mat_normal;
br_material *gInit_pos_mat_calc;
int gPed_other;
int gAttracted_pedestrians;
int gPed_ref_num;
br_scalar gMax_distance_squared;
br_model *gPed_model;
float gDanger_level;
br_vector3 gDanger_direction;
int gInit_ped_instruc;
int gCurrent_lollipop_index;
int gVesuvians_this_time;
int gNumber_of_ped_gibs;
tPedestrian_data *gFlag_waving_bastard;
int gNumber_of_pedestrians;
br_pixelmap *gProx_ray_shade_table;
tPedestrian_data *gPedestrian_array;
tU32 gLast_ped_splat_time;
int gCurrent_ped_multiplier;

// Offset: 0
// Size: 0x98
//IDA: void __usercall PedModelUpdate(br_model *pModel@<EAX>, br_scalar x0, br_scalar y0, br_scalar x1, br_scalar y1, br_scalar x2, br_scalar y2, br_scalar x3, br_scalar y3)
void PedModelUpdate(br_model *pModel, br_scalar x0, br_scalar y0, br_scalar x1, br_scalar y1, br_scalar x2, br_scalar y2, br_scalar x3, br_scalar y3) {
    LOG_TRACE("(%p, %f, %f, %f, %f, %f, %f, %f, %f)", pModel, x0, y0, x1, y1, x2, y2, x3, y3);
    NOT_IMPLEMENTED();
}

// Offset: 152
// Size: 0x62
//IDA: int __usercall ActorIsPedestrian@<EAX>(br_actor *pActor@<EAX>)
int ActorIsPedestrian(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 252
// Size: 0x4f
//IDA: br_scalar __usercall PedHeightFromActor@<ST0>(br_actor *pActor@<EAX>)
br_scalar PedHeightFromActor(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 332
// Size: 0x34
//IDA: int __usercall GetPedestrianValue@<EAX>(br_actor *pActor@<EAX>)
int GetPedestrianValue(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 384
// Size: 0x58
//IDA: int __usercall PedestrianActorIsPerson@<EAX>(br_actor *pActor@<EAX>)
int PedestrianActorIsPerson(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 472
// Size: 0x57
//IDA: br_actor* __usercall GetPedestrianActor@<EAX>(int pIndex@<EAX>)
br_actor* GetPedestrianActor(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 560
// Size: 0x61
//IDA: br_pixelmap* __usercall GetPedestrianTexture@<EAX>(br_actor *pActor@<EAX>, int *pFlipped@<EDX>)
br_pixelmap* GetPedestrianTexture(br_actor *pActor, int *pFlipped) {
    LOG_TRACE("(%p, %p)", pActor, pFlipped);
    NOT_IMPLEMENTED();
}

// Offset: 660
// Size: 0x99
//IDA: void __cdecl TogglePedestrians()
void TogglePedestrians() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 816
// Size: 0x396
//IDA: void __cdecl InitPedGibs()
void InitPedGibs() {
    int i;
    int j;
    br_model *the_model;
    br_pixelmap *the_pix;
    br_material *the_material;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1736
// Size: 0xf0
//IDA: void __usercall SetPedMaterialForRender(br_actor *pActor@<EAX>)
void SetPedMaterialForRender(br_actor *pActor) {
    tPedestrian_data *ped;
    int changed;
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 1976
// Size: 0x9e
//IDA: void __cdecl PedCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, void *pRender_data, br_uint_8 pStyle, int pOn_screen)
void PedCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, void *pRender_data, br_uint_8 pStyle, int pOn_screen) {
    tPedestrian_data *ped;
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", pActor, pModel, pMaterial, pRender_data, pStyle, pOn_screen);
    NOT_IMPLEMENTED();
}

// Offset: 2136
// Size: 0x204
//IDA: void __cdecl InitPeds()
void InitPeds() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2652
// Size: 0x113
//IDA: void __usercall MungeModelSize(br_actor *pActor@<EAX>, br_scalar pScaling_factor)
void MungeModelSize(br_actor *pActor, br_scalar pScaling_factor) {
    br_pixelmap *the_pix;
    br_scalar half_width;
    br_scalar half_height;
    LOG_TRACE("(%p, %f)", pActor, pScaling_factor);
    NOT_IMPLEMENTED();
}

// Offset: 2928
// Size: 0x5bc
//IDA: int __usercall BurstPedestrian@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pSplattitudinalitude, int pAllow_explosion)
int BurstPedestrian(tPedestrian_data *pPedestrian, float pSplattitudinalitude, int pAllow_explosion) {
    int i;
    int j;
    int gib_index;
    int next_gib_index;
    int size_threshold;
    int current_size;
    int max_size;
    int gib_count;
    int exploded;
    tPed_gib *the_ped_gib;
    br_scalar min_speed;
    br_scalar max_speed;
    tU32 the_time;
    LOG_TRACE("(%p, %f, %d)", pPedestrian, pSplattitudinalitude, pAllow_explosion);
    NOT_IMPLEMENTED();
}

// Offset: 4396
// Size: 0x89
//IDA: void __cdecl ResetAllPedGibs()
void ResetAllPedGibs() {
    int i;
    tPed_gib *the_ped_gib;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4536
// Size: 0xc8
//IDA: void __usercall AdjustPedGib(int pIndex@<EAX>, int pSize@<EDX>, int pGib_index@<EBX>, int pPed_index@<ECX>, br_matrix34 *pTrans)
void AdjustPedGib(int pIndex, int pSize, int pGib_index, int pPed_index, br_matrix34 *pTrans) {
    tPed_gib *the_ped_gib;
    LOG_TRACE("(%d, %d, %d, %d, %p)", pIndex, pSize, pGib_index, pPed_index, pTrans);
    NOT_IMPLEMENTED();
}

// Offset: 4736
// Size: 0x32a
//IDA: void __usercall MungePedGibs(tU32 pFrame_period@<EAX>)
void MungePedGibs(tU32 pFrame_period) {
    int i;
    int frame;
    tPed_gib *the_ped_gib;
    br_scalar s_frame_period;
    tU32 the_time;
    tPedestrian_data *pedestrian;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 5548
// Size: 0x10b
//IDA: void __usercall KillPedestrian(tPedestrian_data *pPedestrian@<EAX>)
void KillPedestrian(tPedestrian_data *pPedestrian) {
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 5816
// Size: 0x12e
//IDA: void __usercall CalcPedWidthNHeight(tPedestrian_data *pPedestrian@<EAX>, br_pixelmap *pPixelmap@<EDX>, br_scalar *pHeight@<EBX>, br_scalar *pWidth@<ECX>)
void CalcPedWidthNHeight(tPedestrian_data *pPedestrian, br_pixelmap *pPixelmap, br_scalar *pHeight, br_scalar *pWidth) {
    br_pixelmap *reference_pixel_bastard;
    br_scalar scale_to_use;
    LOG_TRACE("(%p, %p, %p, %p)", pPedestrian, pPixelmap, pHeight, pWidth);
    NOT_IMPLEMENTED();
}

// Offset: 6120
// Size: 0x796
//IDA: int __usercall PedestrianNextInstruction@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level, int pPosition_explicitly, int pMove_pc)
int PedestrianNextInstruction(tPedestrian_data *pPedestrian, float pDanger_level, int pPosition_explicitly, int pMove_pc) {
    tPedestrian_instruction *instruction;
    float most_dangerous;
    float chance_value;
    int result;
    int start_index;
    int end_index;
    int i;
    int j;
    int choice;
    int the_marker_ref;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %f, %d, %d)", pPedestrian, pDanger_level, pPosition_explicitly, pMove_pc);
    NOT_IMPLEMENTED();
}

// Offset: 8064
// Size: 0x1d0
//IDA: void __usercall MungePedestrianSequence(tPedestrian_data *pPedestrian@<EAX>, int pAction_changed@<EDX>)
void MungePedestrianSequence(tPedestrian_data *pPedestrian, int pAction_changed) {
    tPedestrian_action *the_action;
    int i;
    int the_sequence;
    int current_looping;
    br_scalar ped_movement_angle;
    float heading_difference;
    tPedestrian_sequence *sequence_ptr;
    LOG_TRACE("(%p, %d)", pPedestrian, pAction_changed);
    NOT_IMPLEMENTED();
}

// Offset: 8528
// Size: 0xa6
//IDA: void __usercall DetachPedFromCar(tPedestrian_data *pPedestrian@<EAX>)
void DetachPedFromCar(tPedestrian_data *pPedestrian) {
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 8696
// Size: 0x75
//IDA: void __usercall SetPedPos(tPedestrian_data *pPedestrian@<EAX>)
void SetPedPos(tPedestrian_data *pPedestrian) {
    br_vector3 temp_v;
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 8816
// Size: 0x3b
//IDA: void __usercall DetachPedActorFromCar(br_actor *pActor@<EAX>)
void DetachPedActorFromCar(br_actor *pActor) {
    LOG_TRACE("(%p)", pActor);
    NOT_IMPLEMENTED();
}

// Offset: 8876
// Size: 0x525
//IDA: void __usercall MungePedestrianFrames(tPedestrian_data *pPedestrian@<EAX>)
void MungePedestrianFrames(tPedestrian_data *pPedestrian) {
    tPedestrian_sequence *the_sequence;
    float f_the_time;
    float frame_period;
    int frame_offset;
    int number_of_frames;
    int new_frame;
    tU32 the_time;
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 10196
// Size: 0x508
//IDA: void __usercall MungePedModel(tPedestrian_data *pPedestrian@<EAX>)
void MungePedModel(tPedestrian_data *pPedestrian) {
    br_vector3 old_pos;
    br_vector3 delta_pos;
    br_scalar height_over2;
    br_matrix34 mat;
    br_scalar x_offset;
    br_scalar y_offset;
    br_scalar temp_scalar;
    br_scalar *component_address;
    br_pixelmap *current_pixel_bastard;
    br_pixelmap *reference_pixel_bastard;
    br_vertex *vertices;
    int model_changed;
    tPed_frame_info *the_frame;
    tCar_spec *murderer;
    br_actor *old_parent;
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 11484
// Size: 0x198
//IDA: void __usercall ChangeActionTo(tPedestrian_data *pPedestrian@<EAX>, int pAction_index@<EDX>, int pRedo_frames_etc@<EBX>)
void ChangeActionTo(tPedestrian_data *pPedestrian, int pAction_index, int pRedo_frames_etc) {
    tPedestrian_action *the_action;
    int the_sound;
    tU32 the_pitch;
    LOG_TRACE("(%p, %d, %d)", pPedestrian, pAction_index, pRedo_frames_etc);
    NOT_IMPLEMENTED();
}

// Offset: 11892
// Size: 0x24d
//IDA: int __usercall MungePedestrianAction@<EAX>(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level)
int MungePedestrianAction(tPedestrian_data *pPedestrian, float pDanger_level) {
    tU32 time_diff;
    int i;
    int choice;
    int start_index;
    int end_index;
    float chance_value;
    float most_dangerous;
    LOG_TRACE("(%p, %f)", pPedestrian, pDanger_level);
    NOT_IMPLEMENTED();
}

// Offset: 12484
// Size: 0x69
//IDA: void __cdecl MakeFlagWavingBastardWaveHisFlagWhichIsTheProbablyTheLastThingHeWillEverDo()
void MakeFlagWavingBastardWaveHisFlagWhichIsTheProbablyTheLastThingHeWillEverDo() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12592
// Size: 0x91e
//IDA: void __usercall MungePedestrianPath(tPedestrian_data *pPedestrian@<EAX>, float pDanger_level, br_vector3 *pDanger_direction)
void MungePedestrianPath(tPedestrian_data *pPedestrian, float pDanger_level, br_vector3 *pDanger_direction) {
    tPedestrian_action *the_action;
    float terminal_speed;
    float new_falling_speed;
    float grav_times_period;
    float ped_gravity;
    br_vector3 movement_vector;
    br_vector3 over_shoot;
    br_vector3 cast_point;
    br_scalar old_y;
    br_scalar new_y;
    int damage;
    tU32 the_pitch;
    LOG_TRACE("(%p, %f, %p)", pPedestrian, pDanger_level, pDanger_direction);
    NOT_IMPLEMENTED();
}

// Offset: 14928
// Size: 0x2fc
//IDA: float __usercall CalcPedestrianDangerLevel@<ST0>(tPedestrian_data *pPedestrian@<EAX>, br_vector3 *pDanger_direction@<EDX>)
float CalcPedestrianDangerLevel(tPedestrian_data *pPedestrian, br_vector3 *pDanger_direction) {
    br_vector3 *ped_pos;
    int i;
    float most_dangerous;
    float this_danger;
    br_scalar distance_squared;
    br_scalar car_movement_angle;
    br_scalar car_to_pedestrian_angle;
    br_scalar heading_difference;
    br_scalar camera_view_angle;
    tCar_spec *car;
    LOG_TRACE("(%p, %p)", pPedestrian, pDanger_direction);
    NOT_IMPLEMENTED();
}

// Offset: 15692
// Size: 0x3cc
//IDA: tPed_hit_position __usercall MoveToEdgeOfCar@<EAX>(tPedestrian_data *pPedestrian@<EAX>, tCollision_info *pCar@<EDX>, br_actor *pCar_actor@<EBX>, br_scalar pPed_x, br_scalar pPed_z, br_scalar pCar_bounds_min_x, br_scalar pCar_bounds_max_x, br_scalar pCar_bounds_min_z, br_scalar pCar_bounds_max_z, br_vector3 *pMin_ped_bounds_car, br_vector3 *pMax_ped_bounds_car)
tPed_hit_position MoveToEdgeOfCar(tPedestrian_data *pPedestrian, tCollision_info *pCar, br_actor *pCar_actor, br_scalar pPed_x, br_scalar pPed_z, br_scalar pCar_bounds_min_x, br_scalar pCar_bounds_max_x, br_scalar pCar_bounds_min_z, br_scalar pCar_bounds_max_z, br_vector3 *pMin_ped_bounds_car, br_vector3 *pMax_ped_bounds_car) {
    br_vector3 car_plus_ped;
    br_vector3 delta_vector;
    br_vector3 ped_move_in_car;
    br_vector3 ped_move_in_global;
    br_vector3 scaled_car_direction;
    br_vector3 scaled_ped_direction;
    br_matrix34 global_to_car;
    br_scalar z_to_use;
    br_scalar x_to_use;
    br_scalar t;
    br_scalar x;
    br_scalar z;
    tPed_hit_position result;
    LOG_TRACE("(%p, %p, %p, %f, %f, %f, %f, %f, %f, %p, %p)", pPedestrian, pCar, pCar_actor, pPed_x, pPed_z, pCar_bounds_min_x, pCar_bounds_max_x, pCar_bounds_min_z, pCar_bounds_max_z, pMin_ped_bounds_car, pMax_ped_bounds_car);
    NOT_IMPLEMENTED();
}

// Offset: 16664
// Size: 0x65
//IDA: void __cdecl CheckLastPed()
void CheckLastPed() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16768
// Size: 0x13f
//IDA: int __usercall BloodyWheels@<EAX>(tCar_spec *pCar@<EAX>, br_vector3 *pPed_car@<EDX>, br_scalar pSize, br_vector3 *pPed_glob)
int BloodyWheels(tCar_spec *pCar, br_vector3 *pPed_car, br_scalar pSize, br_vector3 *pPed_glob) {
    int wheel;
    int squish;
    br_scalar ped_m_z;
    br_scalar ped_m_x;
    br_scalar dist_sqr;
    br_scalar size_sqr;
    LOG_TRACE("(%p, %p, %f, %p)", pCar, pPed_car, pSize, pPed_glob);
    NOT_IMPLEMENTED();
}

// Offset: 17088
// Size: 0x8e
//IDA: int __usercall FancyATossOffMate@<EAX>(tPedestrian_data *pPedestrian@<EAX>, tCollision_info *pCar@<EDX>, float pImpact_speed)
int FancyATossOffMate(tPedestrian_data *pPedestrian, tCollision_info *pCar, float pImpact_speed) {
    LOG_TRACE("(%p, %p, %f)", pPedestrian, pCar, pImpact_speed);
    NOT_IMPLEMENTED();
}

// Offset: 17232
// Size: 0x16ee
//IDA: void __usercall CheckPedestrianDeathScenario(tPedestrian_data *pPedestrian@<EAX>)
void CheckPedestrianDeathScenario(tPedestrian_data *pPedestrian) {
    int norman;
    int i;
    int tossing;
    int orig_gib_flag;
    int exploded;
    int proximity_rayed;
    int fated;
    int billiards_shot;
    int credits_value;
    br_vector3 *car_pos;
    br_vector3 *ped_pos;
    br_vector3 min_ped_bounds;
    br_vector3 max_ped_bounds;
    br_vector3 min_ped_bounds_car;
    br_vector3 max_ped_bounds_car;
    br_vector3 ped_to_car_vector;
    br_vector3 up;
    br_vector3 zero_v;
    br_scalar attitude;
    br_scalar distance_squared;
    br_scalar ped_centre_x;
    br_scalar ped_centre_y;
    br_scalar car_bounds_min_x;
    br_scalar car_bounds_max_x;
    br_scalar car_bounds_min_z;
    br_scalar car_bounds_max_z;
    br_scalar prev_car_bounds_min_x;
    br_scalar prev_car_bounds_max_x;
    br_scalar prev_car_bounds_min_z;
    br_scalar prev_car_bounds_max_z;
    br_scalar scalar_frame_time;
    br_scalar gross_dismiss;
    br_actor *car_actor;
    br_actor *incident_actor;
    br_matrix34 ped_to_car;
    tCollision_info *the_car;
    float impact_speed;
    float volume_damage;
    tU32 the_time;
    tPed_hit_position hit_pos;
    br_scalar __block0__temp;
    br_scalar __block1__temp;
    br_scalar __block2__temp;
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 23104
// Size: 0x301
//IDA: void __usercall SendPedestrian(tPedestrian_data *pPedestrian@<EAX>, int pIndex@<EDX>)
void SendPedestrian(tPedestrian_data *pPedestrian, int pIndex) {
    tNet_contents *the_contents;
    tNet_message *the_message;
    int size_decider;
    LOG_TRACE("(%p, %d)", pPedestrian, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 23876
// Size: 0x48a
//IDA: void __usercall DoPedestrian(tPedestrian_data *pPedestrian@<EAX>, int pIndex@<EDX>)
void DoPedestrian(tPedestrian_data *pPedestrian, int pIndex) {
    float danger_level;
    float start_speed;
    int action_changed;
    int alive;
    int old_frame;
    int start_ins;
    int start_act;
    int start_hp;
    int start_ins_dir;
    br_vector3 danger_direction;
    br_vector3 old_pos;
    LOG_TRACE("(%p, %d)", pPedestrian, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 25040
// Size: 0x2ff
//IDA: void __usercall AdjustPedestrian(int pIndex@<EAX>, int pAction_index@<EDX>, int pFrame_index@<EBX>, int pHit_points@<ECX>, int pDone_initial, tU16 pParent, br_actor *pParent_actor, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset, br_vector3 *pTrans)
void AdjustPedestrian(int pIndex, int pAction_index, int pFrame_index, int pHit_points, int pDone_initial, tU16 pParent, br_actor *pParent_actor, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset, br_vector3 *pTrans) {
    tPedestrian_data *pedestrian;
    br_actor *parent;
    br_vector3 old_pos;
    br_scalar __block0___scale;
    LOG_TRACE("(%d, %d, %d, %d, %d, %d, %p, %f, %f, %p, %p)", pIndex, pAction_index, pFrame_index, pHit_points, pDone_initial, pParent, pParent_actor, pSpin_period, pJump_magnitude, pOffset, pTrans);
    NOT_IMPLEMENTED();
}

// Offset: 25808
// Size: 0xc2
//IDA: void __usercall SquirtPathVertex(br_vertex *pFirst_vertex@<EAX>, br_vector3 *pPoint@<EDX>)
void SquirtPathVertex(br_vertex *pFirst_vertex, br_vector3 *pPoint) {
    LOG_TRACE("(%p, %p)", pFirst_vertex, pPoint);
    NOT_IMPLEMENTED();
}

// Offset: 26004
// Size: 0x5c
//IDA: void __cdecl ResetAllPedestrians()
void ResetAllPedestrians() {
    int i;
    tPedestrian_data *the_pedestrian;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 26096
// Size: 0x1dc
//IDA: void __usercall GroundPedestrian(tPedestrian_data *pPedestrian@<EAX>)
void GroundPedestrian(tPedestrian_data *pPedestrian) {
    br_scalar new_y;
    br_vector3 cast_point;
    tPedestrian_sequence *sequence;
    LOG_TRACE("(%p)", pPedestrian);
    NOT_IMPLEMENTED();
}

// Offset: 26572
// Size: 0x1e3
//IDA: void __usercall RevivePedestrian(tPedestrian_data *pPedestrian@<EAX>, int pAnimate@<EDX>)
void RevivePedestrian(tPedestrian_data *pPedestrian, int pAnimate) {
    LOG_TRACE("(%p, %d)", pPedestrian, pAnimate);
    NOT_IMPLEMENTED();
}

// Offset: 27056
// Size: 0x436
//IDA: void __usercall MungePedestrians(tU32 pFrame_period@<EAX>)
void MungePedestrians(tU32 pFrame_period) {
    int i;
    int mirror_on;
    tPedestrian_data *the_pedestrian;
    br_vector3 ped_pos;
    br_vector3 ped_pos_car;
    br_vector3 ped_pos_temp;
    br_matrix34 ped_pos_matrix;
    br_camera *camera_ptr;
    br_scalar max_distance;
    br_scalar distance_squared;
    br_scalar x_delta;
    br_scalar y_delta;
    br_scalar z_delta;
    tS32 diff;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 28136
// Size: 0xc9
//IDA: void __cdecl RespawnPedestrians()
void RespawnPedestrians() {
    int i;
    tPedestrian_data *the_pedestrian;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28340
// Size: 0x2d
//IDA: int __cdecl GetPedCount()
int GetPedCount() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28388
// Size: 0x104
//IDA: int __usercall GetPedPosition@<EAX>(int pIndex@<EAX>, br_vector3 *pPos@<EDX>)
int GetPedPosition(int pIndex, br_vector3 *pPos) {
    tPedestrian_data *pedestrian;
    LOG_TRACE("(%d, %p)", pIndex, pPos);
    NOT_IMPLEMENTED();
}

// Offset: 28648
// Size: 0xb72
//IDA: void __usercall CreatePedestrian(FILE *pG@<EAX>, tPedestrian_instruction *pInstructions@<EDX>, int pInstruc_count@<EBX>, int pInit_instruc@<ECX>, int pRef_num, int pForce_read)
void CreatePedestrian(FILE *pG, tPedestrian_instruction *pInstructions, int pInstruc_count, int pInit_instruc, int pRef_num, int pForce_read) {
    tPath_name the_path;
    char s[256];
    char s2[256];
    char *str;
    char *str2;
    tPedestrian_data *the_pedestrian;
    tPedestrian_sequence *the_sequence;
    tPedestrian_action *the_action;
    br_model *the_model;
    int the_ref;
    int i;
    int j;
    int k;
    int l;
    int temp_int;
    int new_frames;
    tPed_collide_type collide_frame;
    float temp_float1;
    float temp_float2;
    br_scalar height;
    br_scalar width_over_2;
    br_scalar minnest_min;
    br_scalar maxest_min;
    br_scalar minnest_max;
    br_scalar maxest_max;
    LOG_TRACE("(%p, %p, %d, %d, %d, %d)", pG, pInstructions, pInstruc_count, pInit_instruc, pRef_num, pForce_read);
    NOT_IMPLEMENTED();
}

// Offset: 31580
// Size: 0x49
//IDA: void __cdecl ResetProxRay()
void ResetProxRay() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31656
// Size: 0x22
//IDA: void __cdecl PedMaterialFromHell()
void PedMaterialFromHell() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31692
// Size: 0x22
//IDA: void __cdecl ResetPedMaterial()
void ResetPedMaterial() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31728
// Size: 0x757
//IDA: void __usercall LoadInPedestrians(FILE *pF@<EAX>, int pSubs_count@<EDX>, tPed_subs *pSubs_array@<EBX>)
void LoadInPedestrians(FILE *pF, int pSubs_count, tPed_subs *pSubs_array) {
    tPath_name the_path;
    char s[256];
    char s2[256];
    char *str;
    char *str2;
    FILE *g;
    int the_ref;
    int i;
    int j;
    int k;
    int l;
    int knock_out;
    int check_for_duplicates;
    int duplicates_found;
    int temp_int;
    int ref_number;
    int instruc_count;
    int ped_count;
    int init_instruc;
    float temp_float1;
    float temp_float2;
    tPedestrian_instruction *instructions;
    tPedestrian_instruction *the_instruction;
    tPed_choice *the_choice;
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    float __block1__x_0;
    float __block1__x_1;
    float __block1__x_2;
    LOG_TRACE("(%p, %d, %p)", pF, pSubs_count, pSubs_array);
    NOT_IMPLEMENTED();
}

// Offset: 33608
// Size: 0x521
//IDA: br_actor* __usercall BuildPedPaths@<EAX>(tPedestrian_instruction *pInstructions@<EAX>, int pInstruc_count@<EDX>, int pInit_instruc@<EBX>)
br_actor* BuildPedPaths(tPedestrian_instruction *pInstructions, int pInstruc_count, int pInit_instruc) {
    int vertex_count;
    int last_vertex_count;
    int face_count;
    int j;
    int point_count;
    br_vector3 the_point;
    br_material *the_mat;
    br_model *the_model;
    br_actor *the_actor;
    LOG_TRACE("(%p, %d, %d)", pInstructions, pInstruc_count, pInit_instruc);
    NOT_IMPLEMENTED();
}

// Offset: 34924
// Size: 0x489
//IDA: void __cdecl WriteOutPeds()
void WriteOutPeds() {
    int i;
    int j;
    int k;
    int point_count;
    int min_ped;
    int min_point;
    br_vector3 the_point;
    br_vector3 last_point;
    br_scalar min_distance;
    br_scalar the_distance;
    char s[255];
    tPedestrian_data *the_pedestrian;
    tPedestrian_instruction *the_instruction;
    tPed_choice *the_choice;
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36088
// Size: 0xd5
//IDA: void __cdecl AddPed()
void AddPed() {
    tPedestrian_instruction *instructions;
    FILE *g;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36304
// Size: 0x128
//IDA: void __usercall NewPed(int pRef_num@<EAX>)
void NewPed(int pRef_num) {
    char s[255];
    LOG_TRACE("(%d)", pRef_num);
    NOT_IMPLEMENTED();
}

// Offset: 36600
// Size: 0x71
//IDA: void __cdecl RemoveCurrentPedPath()
void RemoveCurrentPedPath() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36716
// Size: 0x59
//IDA: void __cdecl ScrubPedestrian()
void ScrubPedestrian() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36808
// Size: 0x86
//IDA: void __cdecl TogglePedDetect()
void TogglePedDetect() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36944
// Size: 0x29
//IDA: void __cdecl NewPed0()
void NewPed0() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 36988
// Size: 0x2c
//IDA: void __cdecl NewPed1()
void NewPed1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37032
// Size: 0x2c
//IDA: void __cdecl NewPed2()
void NewPed2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37076
// Size: 0x2c
//IDA: void __cdecl NewPed3()
void NewPed3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37120
// Size: 0x2c
//IDA: void __cdecl NewPed4()
void NewPed4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37164
// Size: 0x2c
//IDA: void __cdecl NewPed5()
void NewPed5() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37208
// Size: 0x2c
//IDA: void __cdecl NewPed6()
void NewPed6() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37252
// Size: 0x2c
//IDA: void __cdecl NewPed7()
void NewPed7() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37296
// Size: 0x2c
//IDA: void __cdecl NewPed8()
void NewPed8() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37340
// Size: 0x2c
//IDA: void __cdecl NewPed9()
void NewPed9() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37384
// Size: 0x2c
//IDA: void __cdecl NewPed0B()
void NewPed0B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37428
// Size: 0x2c
//IDA: void __cdecl NewPed1B()
void NewPed1B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37472
// Size: 0x2c
//IDA: void __cdecl NewPed2B()
void NewPed2B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37516
// Size: 0x2c
//IDA: void __cdecl NewPed3B()
void NewPed3B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37560
// Size: 0x2c
//IDA: void __cdecl NewPed4B()
void NewPed4B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37604
// Size: 0x2c
//IDA: void __cdecl NewPed5B()
void NewPed5B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37648
// Size: 0x2c
//IDA: void __cdecl NewPed6B()
void NewPed6B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37692
// Size: 0x2c
//IDA: void __cdecl NewPed7B()
void NewPed7B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37736
// Size: 0x2c
//IDA: void __cdecl NewPed8B()
void NewPed8B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37780
// Size: 0x2c
//IDA: void __cdecl NewPed9B()
void NewPed9B() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37824
// Size: 0x64
//IDA: void __cdecl MungeShowPedPath()
void MungeShowPedPath() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 37924
// Size: 0x65
//IDA: void __cdecl DropPedPoint2()
void DropPedPoint2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38028
// Size: 0x43
//IDA: void __cdecl DropPedPoint()
void DropPedPoint() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38096
// Size: 0x4d
//IDA: void __cdecl DropInitPedPoint()
void DropInitPedPoint() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38176
// Size: 0x7e
//IDA: void __cdecl DropPedPointAir2()
void DropPedPointAir2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38304
// Size: 0x43
//IDA: void __cdecl DropPedPointAir()
void DropPedPointAir() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38372
// Size: 0x4d
//IDA: void __cdecl DropInitPedPointAir()
void DropInitPedPointAir() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38452
// Size: 0x4d
//IDA: br_uint_32 __cdecl KillActorsModel(br_actor *pActor, void *pArg)
br_uint_32 KillActorsModel(br_actor *pActor, void *pArg) {
    LOG_TRACE("(%p, %p)", pActor, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 38532
// Size: 0x9a
//IDA: void __cdecl DisposePedPaths()
void DisposePedPaths() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 38688
// Size: 0x1a1
//IDA: void __usercall GetPedPos(int *pPed_index@<EAX>, int *pPoint_index@<EDX>)
void GetPedPos(int *pPed_index, int *pPoint_index) {
    int i;
    int j;
    int point_count;
    br_vector3 the_point;
    br_vector3 last_point;
    br_scalar min_distance;
    br_scalar the_distance;
    LOG_TRACE("(%p, %p)", pPed_index, pPoint_index);
    NOT_IMPLEMENTED();
}

// Offset: 39108
// Size: 0x69
//IDA: void __cdecl ShowPedPos()
void ShowPedPos() {
    int min_ped;
    int min_point;
    char s[255];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39216
// Size: 0x17d
//IDA: void __cdecl ShowPedPaths()
void ShowPedPaths() {
    int i;
    br_model *the_model;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39600
// Size: 0x68
//IDA: void __cdecl PullPedPoint()
void PullPedPoint() {
    int the_ped;
    int the_point;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39704
// Size: 0x8d
//IDA: void __cdecl PullPedPointAir()
void PullPedPointAir() {
    int the_ped;
    int the_point;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39848
// Size: 0x87
//IDA: void __cdecl DeletePedPath()
void DeletePedPath() {
    int the_ped;
    int the_point;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39984
// Size: 0x59
//IDA: void __cdecl DeletePedPoint()
void DeletePedPoint() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 40076
// Size: 0x24d
//IDA: void __cdecl DisposePedestrians()
void DisposePedestrians() {
    int i;
    int j;
    tPedestrian_data *the_pedestrian;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 40668
// Size: 0x16c
//IDA: void __cdecl DoPedReport()
void DoPedReport() {
    FILE *f;
    tPath_name the_path;
    time_t the_bloody_time;
    int i;
    int j;
    int count;
    int last_ref_num;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 41032
// Size: 0x4c7
//IDA: void __usercall RenderProximityRays(br_pixelmap *pRender_screen@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>, tU32 pTime)
void RenderProximityRays(br_pixelmap *pRender_screen, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world, tU32 pTime) {
    int i;
    float seed;
    tU32 the_time;
    br_vector3 car_pos;
    br_vector3 ped_pos;
    br_vector3 car_pos_cam;
    br_vector3 ped_pos_cam;
    br_vector3 car_add;
    br_vector3 car_add_c;
    br_vector3 ped_add;
    br_vector3 ray;
    br_vector3 r1;
    br_vector3 from_pos;
    br_vector3 to_pos;
    br_model *car_model;
    br_scalar distance;
    br_scalar t;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p, %p, %p, %d)", pRender_screen, pDepth_buffer, pCamera, pCamera_to_world, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 42256
// Size: 0x91
//IDA: void __usercall AdjustProxRay(int pRay_index@<EAX>, tU16 pCar_ID@<EDX>, tU16 pPed_index@<EBX>, tU32 pTime@<ECX>)
void AdjustProxRay(int pRay_index, tU16 pCar_ID, tU16 pPed_index, tU32 pTime) {
    LOG_TRACE("(%d, %d, %d, %d)", pRay_index, pCar_ID, pPed_index, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 42404
// Size: 0x4b0
//IDA: void __usercall ReceivedPedestrian(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>, tU32 pReceive_time@<EBX>)
void ReceivedPedestrian(tNet_contents *pContents, tNet_message *pMessage, tU32 pReceive_time) {
    tPedestrian_data *the_pedestrian;
    tNet_game_player_info *sender;
    tNet_game_player_info *murderer;
    int modified_action;
    int modified_action_2;
    int action;
    int instruction;
    int dead;
    tPedestrian_sequence *the_sequence;
    LOG_TRACE("(%p, %p, %d)", pContents, pMessage, pReceive_time);
    NOT_IMPLEMENTED();
}

// Offset: 43604
// Size: 0x73
//IDA: void __usercall SendAllPedestrianPositions(tPlayer_ID pPlayer@<EAX>)
void SendAllPedestrianPositions(tPlayer_ID pPlayer) {
    int i;
    tPedestrian_data *the_pedestrian;
    tNet_contents *the_contents;
    LOG_TRACE("(%d)", pPlayer);
    NOT_IMPLEMENTED();
}

