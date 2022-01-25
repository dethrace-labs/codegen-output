#include "opponent.h"

br_actor *gOppo_path_actor;
br_model *gOppo_path_model;
br_material *gMat_dk_yel;
br_material *gMat_md_yel;
br_material *gMat_lt_yel;
br_material *gMat_dk_red;
br_material *gMat_lt_red;
br_material *gMat_dk_grn;
br_material *gMat_lt_grn;
br_material *gMat_dk_blu;
br_material *gMat_lt_blu;
br_material *gMat_dk_turq;
br_material *gMat_lt_turq;
br_material *gMat_dk_gry;
br_material *gMat_md_gry;
br_material *gMat_lt_gry;
int gMellow_opponents;
int gTest_toggle;
int gAlready_elasticating;
int gVertices_used_in_non_edit_paths;
int gFaces_used_in_non_edit_paths;
int gMats_allocated;
int gOppo_paths_shown;
int gMade_path_filename;
int gBIG_APC_index;
char *gPath_section_type_names[3];
int gMin_bangness;
int gMax_bangness;
tU32 gNext_elastication;
tU32 gNext_write_during_elastication;
char *gCop_name;
char *gDrone_name;
 // Suffix added to avoid duplicate symbol
int gChallenger_index__opponent;
int gSFS_count;
int gSFS_total_cycles;
int gSFS_max_cycles;
float gOpponent_nastyness_frigger;
char gOppo_path_filename[256];
br_scalar gIn_view_distance;
tU8 *gBit_per_node;
int gGrudge_reduction_per_period;
int gSFS_cycles_this_time;
br_scalar gMinimum_yness_before_knackerisation;
int gWanky_arse_tit_fuck;
br_scalar gHead_on_cos_value;
tU32 gNext_grudge_reduction;
br_scalar gCop_pursuit_speed_percentage_multiplier;
br_scalar gDefinite_cop_pursuit_speed;
int gAcknowledged_start;
int gStart_jumped;
int gNum_of_opponents_getting_near;
int gNumber_of_cops_before_faffage;
int gFirst_frame;
tU32 gAcme_frame_count;
br_scalar gDefinite_no_cop_pursuit_speed;
int gNum_of_opponents_completing_race;
int gNum_of_opponents_pursuing;
int gActive_car_list_rebuild_required;
br_scalar gFrame_period_for_this_munging_in_secs;
int gBig_bang;
int gProcessing_opponents;
tU32 gFrame_period_for_this_munging;
tU32 gTime_stamp_for_this_munging;
tS16 gMobile_section;

// Offset: 0
// Size: 0x89
//IDA: void __usercall PointActorAlongThisBloodyVector(br_actor *pThe_actor@<EAX>, br_vector3 *pThe_vector@<EDX>)
void PointActorAlongThisBloodyVector(br_actor *pThe_actor, br_vector3 *pThe_vector) {
    br_transform trans;
    LOG_TRACE("(%p, %p)", pThe_actor, pThe_vector);
    NOT_IMPLEMENTED();
}

// Offset: 140
// Size: 0x12d
//IDA: void __usercall ProcessCurrentObjective(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessCurrentObjective(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 444
// Size: 0xbe
//IDA: tS16 __usercall ReallocExtraPathNodes@<AX>(int pHow_many_then@<EAX>)
tS16 ReallocExtraPathNodes(int pHow_many_then) {
    tPath_node *new_nodes;
    tS16 first_new_node;
    LOG_TRACE("(%d)", pHow_many_then);
    NOT_IMPLEMENTED();
}

// Offset: 636
// Size: 0xbc
//IDA: tS16 __usercall ReallocExtraPathSections@<AX>(int pHow_many_then@<EAX>)
tS16 ReallocExtraPathSections(int pHow_many_then) {
    tPath_section *new_sections;
    tS16 first_new_section;
    LOG_TRACE("(%d)", pHow_many_then);
    NOT_IMPLEMENTED();
}

// Offset: 824
// Size: 0xba
//IDA: int __usercall PointVisibleFromHere@<EAX>(br_vector3 *pFrom@<EAX>, br_vector3 *pTo@<EDX>)
int PointVisibleFromHere(br_vector3 *pFrom, br_vector3 *pTo) {
    br_vector3 from;
    br_vector3 dir;
    br_vector3 norm;
    br_scalar t;
    br_material *material;
    LOG_TRACE("(%p, %p)", pFrom, pTo);
    NOT_IMPLEMENTED();
}

// Offset: 1012
// Size: 0x114
//IDA: tS16 __usercall FindNearestPathNode@<AX>(br_vector3 *pActor_coords@<EAX>, br_scalar *pDistance@<EDX>)
tS16 FindNearestPathNode(br_vector3 *pActor_coords, br_scalar *pDistance) {
    int i;
    tS16 nearest_node;
    br_scalar distance;
    br_vector3 actor_to_node;
    LOG_TRACE("(%p, %p)", pActor_coords, pDistance);
    NOT_IMPLEMENTED();
}

// Offset: 1288
// Size: 0x42
//IDA: tS16 __usercall FindNearestPathSection@<AX>(br_vector3 *pActor_coords@<EAX>, br_vector3 *pPath_direction@<EDX>, br_vector3 *pIntersect@<EBX>, br_scalar *pDistance@<ECX>)
tS16 FindNearestPathSection(br_vector3 *pActor_coords, br_vector3 *pPath_direction, br_vector3 *pIntersect, br_scalar *pDistance) {
    LOG_TRACE("(%p, %p, %p, %p)", pActor_coords, pPath_direction, pIntersect, pDistance);
    NOT_IMPLEMENTED();
}

// Offset: 1356
// Size: 0x4a3
//IDA: tS16 __usercall FindNearestGeneralSection@<AX>(tCar_spec *pPursuee@<EAX>, br_vector3 *pActor_coords@<EDX>, br_vector3 *pPath_direction@<EBX>, br_vector3 *pIntersect@<ECX>, br_scalar *pDistance)
tS16 FindNearestGeneralSection(tCar_spec *pPursuee, br_vector3 *pActor_coords, br_vector3 *pPath_direction, br_vector3 *pIntersect, br_scalar *pDistance) {
    int section_no;
    int no_sections;
    tS16 nearest_node_section_no;
    tS16 nearest_section;
    br_scalar nearest_node_distance_squared;
    br_scalar closest_distance_squared;
    br_scalar the_distance_squared;
    br_scalar t;
    br_scalar length_squared_a;
    br_vector3 a;
    br_vector3 p;
    br_vector3 wank;
    br_vector3 intersect;
    br_vector3 *start;
    br_vector3 *finish;
    br_vector3 *nearest_node_v;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pPursuee, pActor_coords, pPath_direction, pIntersect, pDistance);
    NOT_IMPLEMENTED();
}

// Offset: 2544
// Size: 0xab
//IDA: void __usercall DeadStopCar(tCar_spec *pCar_spec@<EAX>)
void DeadStopCar(tCar_spec *pCar_spec) {
    LOG_TRACE("(%p)", pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 2716
// Size: 0x45
//IDA: void __usercall TurnOpponentPhysicsOn(tOpponent_spec *pOpponent_spec@<EAX>)
void TurnOpponentPhysicsOn(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 2788
// Size: 0x50
//IDA: void __usercall TurnOpponentPhysicsOff(tOpponent_spec *pOpponent_spec@<EAX>)
void TurnOpponentPhysicsOff(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 2868
// Size: 0xf7
//IDA: void __cdecl NewObjective(tOpponent_spec *pOpponent_spec, tOpponent_objective_type pObjective_type, ...)
void NewObjective(tOpponent_spec *pOpponent_spec, tOpponent_objective_type pObjective_type, ...) {
    va_list marker;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pObjective_type);
    NOT_IMPLEMENTED();
}

// Offset: 3116
// Size: 0x3a1
//IDA: void __usercall CalcRaceRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcRaceRoute(tOpponent_spec *pOpponent_spec) {
    tS16 section_no;
    tS16 section_no_index;
    tS16 node_no;
    tS16 race_section_count;
    tS16 normal_section_ok_direction_count;
    tS16 normal_section_wrong_direction_count;
    tS16 temp_section_array[8];
    br_scalar distance;
    br_vector3 direction_v;
    br_vector3 intersect;
    char str[256];
    char work_str[32];
    int i;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 4048
// Size: 0x316
//IDA: void __usercall TopUpRandomRoute(tOpponent_spec *pOpponent_spec@<EAX>, int pSections_to_add@<EDX>)
void TopUpRandomRoute(tOpponent_spec *pOpponent_spec, int pSections_to_add) {
    tS16 section_no;
    tS16 node_no;
    tS16 temp_section_array[8];
    int i;
    int target;
    int num_of_temp_sections;
    int direction;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSections_to_add);
    NOT_IMPLEMENTED();
}

// Offset: 4840
// Size: 0x3ae
//IDA: int __usercall SearchForSection@<EAX>(tRoute_section *pTemp_store@<EAX>, tRoute_section *pPerm_store@<EDX>, int *pNum_of_perm_store_sections@<EBX>, tS16 pTarget_section@<ECX>, int pDepth, br_scalar pDistance_so_far, tOpponent_spec *pOpponent_spec)
int SearchForSection(tRoute_section *pTemp_store, tRoute_section *pPerm_store, int *pNum_of_perm_store_sections, tS16 pTarget_section, int pDepth, br_scalar pDistance_so_far, tOpponent_spec *pOpponent_spec) {
    static br_scalar shortest_dist;
    static int routes_found;
    char depth_indent[32];
    int direction;
    tPath_node *node_ptr;
    tS16 node_no;
    tS16 section_no;
    tS16 section_no_index;
    br_scalar distance_so_far;
    LOG_TRACE("(%p, %p, %p, %d, %d, %f, %p)", pTemp_store, pPerm_store, pNum_of_perm_store_sections, pTarget_section, pDepth, pDistance_so_far, pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 5784
// Size: 0x31c
//IDA: void __usercall CalcGetNearPlayerRoute(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPlayer@<EDX>)
void CalcGetNearPlayerRoute(tOpponent_spec *pOpponent_spec, tCar_spec *pPlayer) {
    int i;
    int pass_2_depth;
    int sections_away;
    int num_of_perm_store_sections;
    int sections_to_copy;
    int fuck_it;
    tS16 section_no;
    tS16 players_section;
    br_vector3 section_v;
    br_vector3 intersect;
    br_scalar distance;
    tRoute_section temp_store[10];
    tRoute_section perm_store[10];
    char work_str[32];
    char str[256];
    LOG_TRACE("(%p, %p)", pOpponent_spec, pPlayer);
    NOT_IMPLEMENTED();
}

// Offset: 6580
// Size: 0x23f
//IDA: void __usercall CalcReturnToStartPointRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcReturnToStartPointRoute(tOpponent_spec *pOpponent_spec) {
    int i;
    int pass_2_depth;
    int sections_away;
    int num_of_perm_store_sections;
    int sections_to_copy;
    tS16 section_no;
    br_vector3 intersect;
    br_vector3 section_v;
    br_scalar distance;
    tRoute_section temp_store[10];
    tRoute_section perm_store[10];
    br_scalar __block0___scale;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 7156
// Size: 0x2f
//IDA: void __usercall ClearOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void ClearOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 7204
// Size: 0x72
//IDA: int __usercall AddToOpponentsProjectedRoute@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection_no@<EDX>, int pDirection@<EBX>)
int AddToOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec, tS16 pSection_no, int pDirection) {
    LOG_TRACE("(%p, %d, %d)", pOpponent_spec, pSection_no, pDirection);
    NOT_IMPLEMENTED();
}

// Offset: 7320
// Size: 0xb1
//IDA: int __usercall ShiftOpponentsProjectedRoute@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pPlaces@<EDX>)
int ShiftOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec, int pPlaces) {
    int i;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pPlaces);
    NOT_IMPLEMENTED();
}

// Offset: 7500
// Size: 0x86
//IDA: void __usercall StunTheBugger(tOpponent_spec *pOpponent_spec@<EAX>, int pMilliseconds@<EDX>)
void StunTheBugger(tOpponent_spec *pOpponent_spec, int pMilliseconds) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pMilliseconds);
    NOT_IMPLEMENTED();
}

// Offset: 7636
// Size: 0x2f
//IDA: void __usercall UnStunTheBugger(tOpponent_spec *pOpponent_spec@<EAX>)
void UnStunTheBugger(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 7684
// Size: 0x1b4
//IDA: void __usercall ProcessCompleteRace(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessCompleteRace(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    br_vector3 *initial_pos;
    br_actor *car_actor;
    tComplete_race_data *data;
    int res;
    char str[256];
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 8120
// Size: 0x151
//IDA: void __usercall StartRecordingTrail(tCar_spec *pPursuee@<EAX>)
void StartRecordingTrail(tCar_spec *pPursuee) {
    int i;
    LOG_TRACE("(%p)", pPursuee);
    NOT_IMPLEMENTED();
}

// Offset: 8460
// Size: 0x40f
//IDA: void __usercall RecordNextTrailNode(tCar_spec *pPursuee@<EAX>)
void RecordNextTrailNode(tCar_spec *pPursuee) {
    tPursuee_trail *trail;
    br_vector3 start1;
    br_vector3 finish1;
    br_vector3 start2;
    br_vector3 finish2;
    br_vector3 offset_v;
    br_vector3 car_to_last_point_v;
    br_scalar length;
    int visible;
    LOG_TRACE("(%p)", pPursuee);
    NOT_IMPLEMENTED();
}

// Offset: 9500
// Size: 0x4e
//IDA: tS16 __usercall FindNearestTrailSection@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPursuee@<EDX>, br_vector3 *pSection_v@<EBX>, br_vector3 *pIntersect@<ECX>, br_scalar *pDistance)
tS16 FindNearestTrailSection(tOpponent_spec *pOpponent_spec, tCar_spec *pPursuee, br_vector3 *pSection_v, br_vector3 *pIntersect, br_scalar *pDistance) {
    LOG_TRACE("(%p, %p, %p, %p, %p)", pOpponent_spec, pPursuee, pSection_v, pIntersect, pDistance);
    NOT_IMPLEMENTED();
}

// Offset: 9580
// Size: 0x6f
//IDA: tS16 __usercall CalcNextTrailSection@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, int pSection@<EDX>)
tS16 CalcNextTrailSection(tOpponent_spec *pOpponent_spec, int pSection) {
    int section_no;
    tPursuee_trail *trail;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 9692
// Size: 0x9d3
//IDA: void __usercall ProcessPursueAndTwat(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessPursueAndTwat(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    tPursue_car_data *data;
    br_vector3 wank;
    br_vector3 section_v;
    br_vector3 intersect;
    br_scalar d;
    br_scalar s;
    br_scalar t;
    br_scalar distance;
    tFollow_path_result res;
    char str[256];
    tS16 section_no;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 12208
// Size: 0x27e
//IDA: void __usercall ProcessRunAway(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessRunAway(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    int res;
    tS16 section_no;
    br_scalar distance;
    br_vector3 intersect;
    br_vector3 direction_v;
    char str[256];
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 12848
// Size: 0x7e
//IDA: void __usercall ProcessWaitForSomeHaplessSod(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessWaitForSomeHaplessSod(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 12976
// Size: 0x275
//IDA: void __usercall ProcessReturnToStart(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessReturnToStart(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    br_vector3 section_v;
    br_vector3 our_pos_xz;
    br_vector3 cop_to_start;
    br_scalar distance;
    int res;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 13608
// Size: 0x399
//IDA: void __usercall ProcessLevitate(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessLevitate(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    float t;
    float terminal_time;
    float y;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 14532
// Size: 0x21f
//IDA: void __usercall ProcessGetNearPlayer(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessGetNearPlayer(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    br_vector3 *initial_pos;
    br_actor *car_actor;
    int res;
    char str[256];
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 15076
// Size: 0xe6
//IDA: void __usercall ProcessFrozen(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessFrozen(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCommand);
    NOT_IMPLEMENTED();
}

// Offset: 15308
// Size: 0x163
//IDA: int __usercall HeadOnWithPlayerPossible@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int HeadOnWithPlayerPossible(tOpponent_spec *pOpponent_spec) {
    br_vector3 oppo_to_player_norm;
    br_scalar __block0___scale;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 15664
// Size: 0x58
//IDA: int __usercall AlreadyPursuingCar@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPursuee@<EDX>)
int AlreadyPursuingCar(tOpponent_spec *pOpponent_spec, tCar_spec *pPursuee) {
    LOG_TRACE("(%p, %p)", pOpponent_spec, pPursuee);
    NOT_IMPLEMENTED();
}

// Offset: 15752
// Size: 0x61
//IDA: int __usercall LastTwatteeAPlayer@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int LastTwatteeAPlayer(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 15852
// Size: 0x61
//IDA: int __usercall LastTwatterAPlayer@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int LastTwatterAPlayer(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 15952
// Size: 0x82
//IDA: void __usercall ObjectiveComplete(tOpponent_spec *pOpponent_spec@<EAX>)
void ObjectiveComplete(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 16084
// Size: 0x21e
//IDA: void __usercall TeleportOpponentToNearestSafeLocation(tOpponent_spec *pOpponent_spec@<EAX>)
void TeleportOpponentToNearestSafeLocation(tOpponent_spec *pOpponent_spec) {
    tS16 section_no;
    tU8 section_direction;
    br_scalar distance;
    br_vector3 direction_v;
    br_vector3 intersect;
    int section_counter;
    int found_safe_place;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 16628
// Size: 0xfd9
//IDA: void __usercall ChooseNewObjective(tOpponent_spec *pOpponent_spec@<EAX>, int pMust_choose_one@<EDX>)
void ChooseNewObjective(tOpponent_spec *pOpponent_spec, int pMust_choose_one) {
    char str[255];
    tS16 players_section;
    br_vector3 wank;
    br_vector3 player_to_oppo_v;
    br_vector3 section_v;
    br_vector3 intersect;
    br_scalar dot;
    br_scalar distance;
    int do_it;
    int i;
    int j;
    int pursuit_percentage;
    int percentage;
    int general_grudge_increase;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pMust_choose_one);
    NOT_IMPLEMENTED();
}

// Offset: 20688
// Size: 0x16d
//IDA: void __usercall ProcessThisOpponent(tOpponent_spec *pOpponent_spec@<EAX>)
void ProcessThisOpponent(tOpponent_spec *pOpponent_spec) {
    int i;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 21056
// Size: 0x100
//IDA: int __usercall IsNetCarActive@<EAX>(br_vector3 *pPoint@<EAX>)
int IsNetCarActive(br_vector3 *pPoint) {
    br_vector3 tv;
    LOG_TRACE("(%p)", pPoint);
    NOT_IMPLEMENTED();
}

// Offset: 21312
// Size: 0x2b4
//IDA: void __cdecl RebuildActiveCarList()
void RebuildActiveCarList() {
    int i;
    tCar_spec *car_spec;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 22004
// Size: 0x3a
//IDA: void __cdecl ForceRebuildActiveCarList()
void ForceRebuildActiveCarList() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 22064
// Size: 0x8a
//IDA: void __usercall StartToCheat(tOpponent_spec *pOpponent_spec@<EAX>)
void StartToCheat(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 22204
// Size: 0x8a
//IDA: void __usercall OiStopCheating(tOpponent_spec *pOpponent_spec@<EAX>)
void OiStopCheating(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 22344
// Size: 0x146
//IDA: int __usercall TeleportCopToStart@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int TeleportCopToStart(tOpponent_spec *pOpponent_spec) {
    br_vector3 wank;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 22672
// Size: 0x8b
//IDA: void __usercall CalcDistanceFromHome(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcDistanceFromHome(tOpponent_spec *pOpponent_spec) {
    br_vector3 wank;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 22812
// Size: 0x2ff
//IDA: int __usercall MassageOpponentPosition@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pMassage_count@<EDX>)
int MassageOpponentPosition(tOpponent_spec *pOpponent_spec, int pMassage_count) {
    br_matrix34 *mat;
    br_vector3 *car_trans;
    br_vector3 displacement;
    br_vector3 positive_y_vector;
    br_vector3 direction_v;
    br_scalar __block0___scale;
    br_scalar __block1___scale;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pMassage_count);
    NOT_IMPLEMENTED();
}

// Offset: 23580
// Size: 0x335
//IDA: int __usercall RematerialiseOpponentOnThisSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed, tS16 pSection_no)
int RematerialiseOpponentOnThisSection(tOpponent_spec *pOpponent_spec, br_scalar pSpeed, tS16 pSection_no) {
    br_vector3 *start;
    br_vector3 *finish;
    br_vector3 a;
    br_vector3 p;
    br_vector3 section_v;
    br_vector3 car_to_end;
    br_vector3 intersect;
    br_scalar t;
    br_scalar distance_to_end;
    br_scalar length;
    LOG_TRACE("(%p, %f, %d)", pOpponent_spec, pSpeed, pSection_no);
    NOT_IMPLEMENTED();
}

// Offset: 24404
// Size: 0x1e2
//IDA: int __usercall RematerialiseOpponentOnNearestSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed)
int RematerialiseOpponentOnNearestSection(tOpponent_spec *pOpponent_spec, br_scalar pSpeed) {
    br_vector3 intersect;
    br_vector3 direction_v;
    br_vector3 car_to_end;
    br_vector3 *start;
    br_vector3 *finish;
    br_scalar distance;
    br_scalar distance_to_end;
    tS16 section_no;
    LOG_TRACE("(%p, %f)", pOpponent_spec, pSpeed);
    NOT_IMPLEMENTED();
}

// Offset: 24888
// Size: 0x93d
//IDA: int __usercall RematerialiseOpponent@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed)
int RematerialiseOpponent(tOpponent_spec *pOpponent_spec, br_scalar pSpeed) {
    static int count;
    static int total;
    static int highest;
    int this_total;
    br_matrix34 *mat;
    br_matrix34 original_mat;
    br_vector3 a;
    br_vector3 b;
    br_vector3 norm;
    br_vector3 norm2;
    br_scalar dist;
    br_scalar dist2;
    br_scalar ts;
    br_angle phi;
    int i;
    int j;
    int massage_count;
    br_angle theta;
    int sensible_place;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %f)", pOpponent_spec, pSpeed);
    NOT_IMPLEMENTED();
}

// Offset: 27256
// Size: 0x1b2
//IDA: void __usercall CalcPlayerConspicuousness(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcPlayerConspicuousness(tOpponent_spec *pOpponent_spec) {
    br_vector3 pos_in_cop_space;
    br_matrix34 inverse_transform;
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 27692
// Size: 0xc0
//IDA: void __usercall CalcOpponentConspicuousnessWithAViewToCheatingLikeFuck(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcOpponentConspicuousnessWithAViewToCheatingLikeFuck(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 27884
// Size: 0x34
//IDA: void __usercall ChallengeOccurred(int pChallenger_index@<EAX>, int pAccepted@<EDX>)
void ChallengeOccurred(int pChallenger_index, int pAccepted) {
    LOG_TRACE("(%d, %d)", pChallenger_index, pAccepted);
    NOT_IMPLEMENTED();
}

// Offset: 27936
// Size: 0xe8
//IDA: void __cdecl LoadCopCars()
void LoadCopCars() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 28168
// Size: 0x99c
//IDA: void __usercall LoadInOppoPaths(FILE *pF@<EAX>)
void LoadInOppoPaths(FILE *pF) {
    char s[256];
    char *res;
    int data_errors;
    int section_no;
    int node_no;
    int i;
    br_scalar x;
    br_scalar y;
    br_scalar z;
    br_scalar scalars[8];
    br_scalar distance;
    tPath_node *node_ptr;
    br_vector3 section_v;
    br_vector3 positive_y_vector;
    br_vector3 intersect;
    br_vector3 cop_to_section;
    int j;
    int sections_to_delete;
    int delete_these[1024];
    float __block0__x_0;
    float __block0__x_1;
    float __block0__x_2;
    LOG_TRACE("(%p)", pF);
    NOT_IMPLEMENTED();
}

// Offset: 30628
// Size: 0x99
//IDA: void __cdecl DisposeOpponentPaths()
void DisposeOpponentPaths() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 30784
// Size: 0x3b6
//IDA: void __usercall MungeOpponents(tU32 pFrame_period@<EAX>)
void MungeOpponents(tU32 pFrame_period) {
    int i;
    int un_stun_flag;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 31736
// Size: 0xfb
//IDA: void __cdecl SetInitialCopPositions()
void SetInitialCopPositions() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 31988
// Size: 0x9f1
//IDA: void __usercall InitOpponents(tRace_info *pRace_info@<EAX>)
void InitOpponents(tRace_info *pRace_info) {
    int i;
    int opponent_number;
    int rank_dependent_difficulty;
    int skill_dependent_difficulty;
    br_bounds bounds;
    tCar_spec *__block0__car_spec;
    tOpponent_spec *__block0__opponent_spec;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 34536
// Size: 0x8e
//IDA: void __cdecl DisposeOpponents()
void DisposeOpponents() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 34680
// Size: 0x137
//IDA: void __usercall WakeUpOpponentsToTheFactThatTheStartHasBeenJumped(int pWhat_the_countdown_was@<EAX>)
void WakeUpOpponentsToTheFactThatTheStartHasBeenJumped(int pWhat_the_countdown_was) {
    int i;
    LOG_TRACE("(%d)", pWhat_the_countdown_was);
    NOT_IMPLEMENTED();
}

// Offset: 34992
// Size: 0x5b
//IDA: void __usercall ReportMurderToPoliceDepartment(tCar_spec *pCar_spec@<EAX>)
void ReportMurderToPoliceDepartment(tCar_spec *pCar_spec) {
    int i;
    LOG_TRACE("(%p)", pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 35084
// Size: 0xb2
//IDA: int __usercall GetCarCount@<EAX>(tVehicle_type pCategory@<EAX>)
int GetCarCount(tVehicle_type pCategory) {
    LOG_TRACE("(%d)", pCategory);
    NOT_IMPLEMENTED();
}

// Offset: 35264
// Size: 0xee
//IDA: tCar_spec* __usercall GetCarSpec@<EAX>(tVehicle_type pCategory@<EAX>, int pIndex@<EDX>)
tCar_spec* GetCarSpec(tVehicle_type pCategory, int pIndex) {
    LOG_TRACE("(%d, %d)", pCategory, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 35504
// Size: 0xac
//IDA: char* __usercall GetDriverName@<EAX>(tVehicle_type pCategory@<EAX>, int pIndex@<EDX>)
char* GetDriverName(tVehicle_type pCategory, int pIndex) {
    LOG_TRACE("(%d, %d)", pCategory, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 35676
// Size: 0xf0
//IDA: tOpponent_spec* __usercall GetOpponentSpecFromCarSpec@<EAX>(tCar_spec *pCar_spec@<EAX>)
tOpponent_spec* GetOpponentSpecFromCarSpec(tCar_spec *pCar_spec) {
    int i;
    LOG_TRACE("(%p)", pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 35916
// Size: 0x71
//IDA: tCar_spec* __usercall GetCarSpecFromGlobalOppoIndex@<EAX>(int pIndex@<EAX>)
tCar_spec* GetCarSpecFromGlobalOppoIndex(int pIndex) {
    int i;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 36032
// Size: 0x5f
//IDA: int __usercall GetOpponentsRealSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pSection_no@<EDX>)
int GetOpponentsRealSection(tOpponent_spec *pOpponent_spec, int pSection_no) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection_no);
    NOT_IMPLEMENTED();
}

// Offset: 36128
// Size: 0x6a
//IDA: int __usercall GetOpponentsFirstSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int GetOpponentsFirstSection(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 36236
// Size: 0xb9
//IDA: int __usercall GetOpponentsNextSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pCurrent_section@<EDX>)
int GetOpponentsNextSection(tOpponent_spec *pOpponent_spec, tS16 pCurrent_section) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pCurrent_section);
    NOT_IMPLEMENTED();
}

// Offset: 36424
// Size: 0xef
//IDA: tS16 __usercall GetOpponentsSectionStartNode@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
tS16 GetOpponentsSectionStartNode(tOpponent_spec *pOpponent_spec, tS16 pSection) {
    tS16 section_no;
    int node_index_index;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 36664
// Size: 0xb9
//IDA: tS16 __usercall GetOpponentsSectionFinishNode@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
tS16 GetOpponentsSectionFinishNode(tOpponent_spec *pOpponent_spec, tS16 pSection) {
    tS16 section_no;
    int node_index_index;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 36852
// Size: 0x11c
//IDA: br_vector3* __usercall GetOpponentsSectionStartNodePoint@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_vector3* GetOpponentsSectionStartNodePoint(tOpponent_spec *pOpponent_spec, tS16 pSection) {
    tS16 section_no;
    tS16 node_no;
    int node_index_index;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 37136
// Size: 0x10a
//IDA: br_vector3* __usercall GetOpponentsSectionFinishNodePoint@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_vector3* GetOpponentsSectionFinishNodePoint(tOpponent_spec *pOpponent_spec, tS16 pSection) {
    tS16 section_no;
    tS16 node_no;
    int node_index_index;
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 37404
// Size: 0xa5
//IDA: br_scalar __usercall GetOpponentsSectionWidth@<ST0>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_scalar GetOpponentsSectionWidth(tOpponent_spec *pOpponent_spec, tS16 pSection) {
    LOG_TRACE("(%p, %d)", pOpponent_spec, pSection);
    NOT_IMPLEMENTED();
}

// Offset: 37572
// Size: 0x106
//IDA: int __usercall GetOpponentsSectionMinSpeed@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>, int pTowards_finish@<EBX>)
int GetOpponentsSectionMinSpeed(tOpponent_spec *pOpponent_spec, tS16 pSection, int pTowards_finish) {
    tS16 section_no;
    int direction;
    LOG_TRACE("(%p, %d, %d)", pOpponent_spec, pSection, pTowards_finish);
    NOT_IMPLEMENTED();
}

// Offset: 37836
// Size: 0x106
//IDA: int __usercall GetOpponentsSectionMaxSpeed@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>, int pTowards_finish@<EBX>)
int GetOpponentsSectionMaxSpeed(tOpponent_spec *pOpponent_spec, tS16 pSection, int pTowards_finish) {
    tS16 section_no;
    int direction;
    LOG_TRACE("(%p, %d, %d)", pOpponent_spec, pSection, pTowards_finish);
    NOT_IMPLEMENTED();
}

// Offset: 38100
// Size: 0x3b
//IDA: void __usercall InitOpponentPsyche(int pOpponent_index@<EAX>)
void InitOpponentPsyche(int pOpponent_index) {
    int i;
    LOG_TRACE("(%d)", pOpponent_index);
    NOT_IMPLEMENTED();
}

// Offset: 38160
// Size: 0x6c
//IDA: void __usercall ClearTwattageOccurrenceVariables(tOpponent_spec *pOpponent_spec@<EAX>)
void ClearTwattageOccurrenceVariables(tOpponent_spec *pOpponent_spec) {
    LOG_TRACE("(%p)", pOpponent_spec);
    NOT_IMPLEMENTED();
}

// Offset: 38268
// Size: 0x56
//IDA: void __usercall TwoCarsHitEachOther(tCar_spec *pA_car@<EAX>, tCar_spec *pAnother_car@<EDX>)
void TwoCarsHitEachOther(tCar_spec *pA_car, tCar_spec *pAnother_car) {
    LOG_TRACE("(%p, %p)", pA_car, pAnother_car);
    NOT_IMPLEMENTED();
}

// Offset: 38356
// Size: 0x48e
//IDA: void __usercall RecordOpponentTwattageOccurrence(tCar_spec *pTwatter@<EAX>, tCar_spec *pTwattee@<EDX>)
void RecordOpponentTwattageOccurrence(tCar_spec *pTwatter, tCar_spec *pTwattee) {
    int bangness;
    int twatter_index;
    int twattee_index;
    int grudginess_caused_by_damage;
    int new_grudge_value;
    float damage;
    char str[256];
    tOpponent_spec *twattee_opponent_spec;
    tOpponent_spec *twatter_opponent_spec;
    LOG_TRACE("(%p, %p)", pTwatter, pTwattee);
    NOT_IMPLEMENTED();
}

// Offset: 39524
// Size: 0x43
//IDA: void __cdecl ToggleOpponentTest()
void ToggleOpponentTest() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39592
// Size: 0x156
//IDA: void __cdecl ToggleOpponentProcessing()
void ToggleOpponentProcessing() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 39936
// Size: 0xb7
//IDA: void __cdecl ToggleMellowOpponents()
void ToggleMellowOpponents() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 40120
// Size: 0xb8
//IDA: void __cdecl RepairOpponentsSystems()
void RepairOpponentsSystems() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 40304
// Size: 0x90
//IDA: void __usercall CopyVertex(br_vertex *pDest_vertex@<EAX>, br_vertex *pSrc_vertex@<EDX>)
// Suffix added to avoid duplicate symbol
void CopyVertex__opponent(br_vertex *pDest_vertex, br_vertex *pSrc_vertex) {
    LOG_TRACE("(%p, %p)", pDest_vertex, pSrc_vertex);
    NOT_IMPLEMENTED();
}

// Offset: 40448
// Size: 0x74
//IDA: void __usercall CopyFace(br_face *pDest_face@<EAX>, br_face *pSrc_face@<EDX>)
// Suffix added to avoid duplicate symbol
void CopyFace__opponent(br_face *pDest_face, br_face *pSrc_face) {
    LOG_TRACE("(%p, %p)", pDest_face, pSrc_face);
    NOT_IMPLEMENTED();
}

// Offset: 40564
// Size: 0x212
//IDA: void __usercall DeleteSection(tS16 pSection_to_delete@<EAX>)
void DeleteSection(tS16 pSection_to_delete) {
    tS16 section_no;
    tS16 section_no_index;
    tS16 node_no;
    tS16 node_no_index;
    tS16 found_it;
    LOG_TRACE("(%d)", pSection_to_delete);
    NOT_IMPLEMENTED();
}

// Offset: 41096
// Size: 0x338
//IDA: void __usercall DeleteNode(tS16 pNode_to_delete@<EAX>, int pAnd_sections@<EDX>)
void DeleteNode(tS16 pNode_to_delete, int pAnd_sections) {
    tS16 node_no;
    tS16 section_no;
    tS16 section1;
    tS16 section2;
    LOG_TRACE("(%d, %d)", pNode_to_delete, pAnd_sections);
    NOT_IMPLEMENTED();
}

// Offset: 41920
// Size: 0x74
//IDA: void __cdecl DeleteOrphanNodes()
void DeleteOrphanNodes() {
    tS16 node_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 42036
// Size: 0x2cc
//IDA: void __usercall InsertThisNodeInThisSectionHere(tS16 pInserted_node@<EAX>, tS16 pSection_no@<EDX>, br_vector3 *pWhere@<EBX>)
void InsertThisNodeInThisSectionHere(tS16 pInserted_node, tS16 pSection_no, br_vector3 *pWhere) {
    tS16 new_section;
    tS16 section_no_index;
    tS16 node1;
    tS16 node2;
    tS16 node3;
    LOG_TRACE("(%d, %d, %p)", pInserted_node, pSection_no, pWhere);
    NOT_IMPLEMENTED();
}

// Offset: 42752
// Size: 0xfe
//IDA: void __cdecl TrackElasticateyPath()
void TrackElasticateyPath() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 43008
// Size: 0x413
//IDA: void __usercall RecalcNearestPathSectionSpeed(int pMax_not_min@<EAX>, int pAdjustment@<EDX>)
void RecalcNearestPathSectionSpeed(int pMax_not_min, int pAdjustment) {
    tS16 section_no;
    br_vector3 direction_v;
    br_vector3 intersect;
    br_vector3 wank;
    br_scalar distance;
    br_scalar dist_to_start;
    br_scalar dist_to_finish;
    char str[128];
    int new_speed;
    int nearest_end;
    LOG_TRACE("(%d, %d)", pMax_not_min, pAdjustment);
    NOT_IMPLEMENTED();
}

// Offset: 44052
// Size: 0x140
//IDA: void __cdecl RecalcNearestPathSectionWidth(br_scalar pAdjustment)
void RecalcNearestPathSectionWidth(br_scalar pAdjustment) {
    tS16 section_no;
    br_vector3 direction_v;
    br_vector3 intersect;
    br_scalar distance;
    char str[128];
    LOG_TRACE("(%f)", pAdjustment);
    NOT_IMPLEMENTED();
}

// Offset: 44372
// Size: 0x145
//IDA: void __usercall CalcNegativeXVector(br_vector3 *pNegative_x_vector@<EAX>, br_vector3 *pStart@<EDX>, br_vector3 *pFinish@<EBX>, br_scalar pLength)
void CalcNegativeXVector(br_vector3 *pNegative_x_vector, br_vector3 *pStart, br_vector3 *pFinish, br_scalar pLength) {
    br_vector3 positive_y_vector;
    br_vector3 path_vector;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %p, %p, %f)", pNegative_x_vector, pStart, pFinish, pLength);
    NOT_IMPLEMENTED();
}

// Offset: 44700
// Size: 0xa2
//IDA: void __usercall MakeVertexAndOffsetIt(br_model *pModel@<EAX>, int pVertex_num@<EDX>, br_scalar pX, br_scalar pY, br_scalar pZ, br_vector3 *pOffset)
void MakeVertexAndOffsetIt(br_model *pModel, int pVertex_num, br_scalar pX, br_scalar pY, br_scalar pZ, br_vector3 *pOffset) {
    LOG_TRACE("(%p, %d, %f, %f, %f, %p)", pModel, pVertex_num, pX, pY, pZ, pOffset);
    NOT_IMPLEMENTED();
}

// Offset: 44864
// Size: 0x86
//IDA: void __usercall MakeFaceAndTextureIt(br_model *pModel@<EAX>, int pFace_num@<EDX>, int pV0@<EBX>, int pV1@<ECX>, int pV2, br_material *pMaterial)
void MakeFaceAndTextureIt(br_model *pModel, int pFace_num, int pV0, int pV1, int pV2, br_material *pMaterial) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %p)", pModel, pFace_num, pV0, pV1, pV2, pMaterial);
    NOT_IMPLEMENTED();
}

// Offset: 45000
// Size: 0x3ae
//IDA: void __usercall MakeSection(br_uint_16 pFirst_vertex@<EAX>, br_uint_16 pFirst_face@<EDX>, br_vector3 *pStart@<EBX>, br_vector3 *pFinish@<ECX>, br_scalar pWidth, br_material *pMaterial_centre_lt, br_material *pMaterial_centre_dk, br_material *pMaterial_edges_start_lt, br_material *pMaterial_edges_start_dk, br_material *pMaterial_edges_finish_lt, br_material *pMaterial_edges_finish_dk)
void MakeSection(br_uint_16 pFirst_vertex, br_uint_16 pFirst_face, br_vector3 *pStart, br_vector3 *pFinish, br_scalar pWidth, br_material *pMaterial_centre_lt, br_material *pMaterial_centre_dk, br_material *pMaterial_edges_start_lt, br_material *pMaterial_edges_start_dk, br_material *pMaterial_edges_finish_lt, br_material *pMaterial_edges_finish_dk) {
    int i;
    br_vector3 offset_v;
    br_vector3 centre_length_v;
    br_material *the_material_start_lt;
    br_material *the_material_start_dk;
    br_material *the_material_finish_lt;
    br_material *the_material_finish_dk;
    br_scalar height;
    LOG_TRACE("(%d, %d, %p, %p, %f, %p, %p, %p, %p, %p, %p)", pFirst_vertex, pFirst_face, pStart, pFinish, pWidth, pMaterial_centre_lt, pMaterial_centre_dk, pMaterial_edges_start_lt, pMaterial_edges_start_dk, pMaterial_edges_finish_lt, pMaterial_edges_finish_dk);
    NOT_IMPLEMENTED();
}

// Offset: 45944
// Size: 0x4d3
//IDA: void __usercall MakeCube(br_uint_16 pFirst_vertex@<EAX>, br_uint_16 pFirst_face@<EDX>, br_vector3 *pPoint@<EBX>, br_material *pMaterial_1@<ECX>, br_material *pMaterial_2, br_material *pMaterial_3)
void MakeCube(br_uint_16 pFirst_vertex, br_uint_16 pFirst_face, br_vector3 *pPoint, br_material *pMaterial_1, br_material *pMaterial_2, br_material *pMaterial_3) {
    br_vector3 offset_v;
    br_vector3 point;
    LOG_TRACE("(%d, %d, %p, %p, %p, %p)", pFirst_vertex, pFirst_face, pPoint, pMaterial_1, pMaterial_2, pMaterial_3);
    NOT_IMPLEMENTED();
}

// Offset: 47180
// Size: 0x58
//IDA: void __usercall CalcNumberOfFacesAndVerticesForOppoPathModel(br_uint_16 *pFace_index_ptr@<EAX>, br_uint_16 *pVertex_index_ptr@<EDX>)
void CalcNumberOfFacesAndVerticesForOppoPathModel(br_uint_16 *pFace_index_ptr, br_uint_16 *pVertex_index_ptr) {
    LOG_TRACE("(%p, %p)", pFace_index_ptr, pVertex_index_ptr);
    NOT_IMPLEMENTED();
}

// Offset: 47268
// Size: 0x1b1
//IDA: void __usercall ReallocModelFacesAndVertices(br_model *pModel@<EAX>, int pNum_faces@<EDX>, int pNum_vertices@<EBX>)
void ReallocModelFacesAndVertices(br_model *pModel, int pNum_faces, int pNum_vertices) {
    br_vertex *new_vertices;
    br_face *new_faces;
    int i;
    LOG_TRACE("(%p, %d, %d)", pModel, pNum_faces, pNum_vertices);
    NOT_IMPLEMENTED();
}

// Offset: 47704
// Size: 0x7f
//IDA: br_material* __usercall CreateSimpleMaterial@<EAX>(int pColour_index@<EAX>)
br_material* CreateSimpleMaterial(int pColour_index) {
    br_material *return_me;
    LOG_TRACE("(%d)", pColour_index);
    NOT_IMPLEMENTED();
}

// Offset: 47832
// Size: 0xfe
//IDA: void __cdecl AllocateMatsForOppoPathModel()
void AllocateMatsForOppoPathModel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 48088
// Size: 0x445
//IDA: void __cdecl RebuildOppoPathModel()
void RebuildOppoPathModel() {
    static int nvertices_last_time;
    static int nfaces_last_time;
    int i;
    int at_least_one;
    br_uint_16 nfaces;
    br_uint_16 nvertices;
    br_uint_16 first_face;
    br_uint_16 first_vertex;
    br_material *centre_mat_lt;
    br_material *centre_mat_dk;
    br_material *edge_mat_start_lt;
    br_material *edge_mat_start_dk;
    br_material *edge_mat_finish_lt;
    br_material *edge_mat_finish_dk;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 49184
// Size: 0x527
//IDA: int __cdecl ConsistencyCheck()
int ConsistencyCheck() {
    tS16 node_no;
    tS16 section_no;
    tS16 start_node;
    tS16 finish_node;
    tS16 section_no_index;
    tS16 section_no_index1;
    int found_how_many;
    int failed;
    tU8 *nodes_referenced_by_sections_array;
    tU8 *sections_referenced_by_nodes_array;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 50504
// Size: 0xac
//IDA: void __cdecl ShowOppoPaths()
void ShowOppoPaths() {
    char str[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 50676
// Size: 0x340
//IDA: void __cdecl WriteOutOppoPaths()
void WriteOutOppoPaths() {
    char the_path[256];
    char str[13];
    FILE *f;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 51508
// Size: 0x152
//IDA: int __cdecl NewNodeOKHere()
int NewNodeOKHere() {
    br_vector3 last_node_to_this;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 51848
// Size: 0x51
//IDA: void __cdecl ShowHideOppoPaths()
void ShowHideOppoPaths() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 51932
// Size: 0x47c
//IDA: void __cdecl DropElasticateyNode()
void DropElasticateyNode() {
    char str[256];
    tS16 old_node;
    tS16 new_node;
    tS16 section_no_index;
    br_scalar distance;
    int all_the_same_type;
    int one_wayness;
    tPath_section_type_enum section_type;
    tPath_section_type_enum original_type;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 53080
// Size: 0x4c0
//IDA: void __cdecl InsertAndElasticate()
void InsertAndElasticate() {
    tS16 inserted_node;
    tS16 elasticatey_node;
    tS16 section_no;
    tS16 new_section;
    br_vector3 direction_v;
    br_vector3 intersect;
    br_vector3 wank;
    br_scalar distance;
    int not_perp;
    int one_wayness;
    char str[256];
    tPath_section_type_enum section_type;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 54296
// Size: 0x26f
//IDA: void __cdecl InsertAndDontElasticate()
void InsertAndDontElasticate() {
    tS16 inserted_node;
    tS16 section_no;
    br_vector3 direction_v;
    br_vector3 intersect;
    br_vector3 wank;
    br_scalar distance;
    int not_perp;
    char str[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 54920
// Size: 0x12c
//IDA: void __cdecl DropDeadEndNode()
void DropDeadEndNode() {
    char str[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55220
// Size: 0x194
//IDA: void __cdecl DropNodeOnNodeAndStopElasticating()
void DropNodeOnNodeAndStopElasticating() {
    int node_no;
    char str[256];
    br_scalar distance;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55624
// Size: 0x35
//IDA: void __cdecl WidenOppoPathSection()
void WidenOppoPathSection() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55680
// Size: 0x35
//IDA: void __cdecl NarrowOppoPathSection()
void NarrowOppoPathSection() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55736
// Size: 0x37
//IDA: void __cdecl IncreaseSectionMinSpeed()
void IncreaseSectionMinSpeed() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55792
// Size: 0x37
//IDA: void __cdecl DecreaseSectionMinSpeed()
void DecreaseSectionMinSpeed() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55848
// Size: 0x3a
//IDA: void __cdecl IncreaseSectionMaxSpeed()
void IncreaseSectionMaxSpeed() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55908
// Size: 0x3a
//IDA: void __cdecl DecreaseSectionMaxSpeed()
void DecreaseSectionMaxSpeed() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 55968
// Size: 0x104
//IDA: void __cdecl PullOppoPoint()
void PullOppoPoint() {
    tS16 node_no;
    br_scalar distance;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 56228
// Size: 0x12d
//IDA: void __cdecl ShowNodeInfo()
void ShowNodeInfo() {
    tS16 node_no;
    char str[256];
    br_scalar distance;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 56532
// Size: 0x16c
//IDA: void __cdecl ShowSectionInfo1()
void ShowSectionInfo1() {
    tS16 section_no;
    char str[256];
    br_scalar distance;
    br_vector3 direction_v;
    br_vector3 intersect;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 56896
// Size: 0x2cd
//IDA: void __cdecl ShowSectionInfo2()
void ShowSectionInfo2() {
    tS16 section_no;
    char str[256];
    br_scalar distance;
    br_vector3 direction_v;
    br_vector3 intersect;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 57616
// Size: 0xe2
//IDA: void __cdecl DeleteOppoPathSection()
void DeleteOppoPathSection() {
    br_scalar distance;
    br_vector3 intersect;
    br_vector3 direction_v;
    tS16 section_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 57844
// Size: 0xe1
//IDA: void __cdecl DeleteOppoPathNodeAndSections()
void DeleteOppoPathNodeAndSections() {
    br_scalar distance;
    tS16 node_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 58072
// Size: 0x217
//IDA: void __cdecl DeleteOppoPathNodeAndJoin()
void DeleteOppoPathNodeAndJoin() {
    br_scalar distance;
    tS16 node_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 58608
// Size: 0x1a8
//IDA: void __cdecl ReverseSectionDirection()
void ReverseSectionDirection() {
    tS16 temp;
    tU8 speed_temp;
    br_scalar distance;
    br_vector3 intersect;
    br_vector3 direction_v;
    tS16 section_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 59032
// Size: 0x145
//IDA: void __cdecl CycleSectionType()
void CycleSectionType() {
    br_scalar distance;
    br_vector3 intersect;
    br_vector3 direction_v;
    tS16 section_no;
    char str[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 59360
// Size: 0x141
//IDA: void __cdecl ToggleOneWayNess()
void ToggleOneWayNess() {
    br_scalar distance;
    br_vector3 intersect;
    br_vector3 direction_v;
    tS16 section_no;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 59684
// Size: 0x15e
//IDA: void __cdecl CopStartPointInfo()
void CopStartPointInfo() {
    char str[256];
    int i;
    int closest;
    br_scalar closest_distance;
    br_scalar distance;
    br_vector3 car_to_point;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 60036
// Size: 0x13e
//IDA: void __cdecl DropCopStartPoint()
void DropCopStartPoint() {
    char str[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 60356
// Size: 0x1f8
//IDA: void __cdecl DeleteCopStartPoint()
void DeleteCopStartPoint() {
    char str[256];
    int i;
    int closest;
    br_scalar closest_distance;
    br_scalar distance;
    br_vector3 car_to_point;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 60860
// Size: 0x22
//IDA: void __cdecl CycleCopStartPointType()
void CycleCopStartPointType() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

