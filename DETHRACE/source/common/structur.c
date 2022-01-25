#include "structur.h"

int gLast_wrong_checkpoint;
 // Suffix added to avoid duplicate symbol
int gMirror_on__structur;
int gPratcam_on;
int gCockpit_on;
int gOpponent_mix[10][5];
tU32 gLast_checkpoint_time;
tRace_over_reason gRace_over_reason;

// Offset: 0
// Size: 0x7c
//IDA: int __cdecl NumberOfOpponentsLeft()
int NumberOfOpponentsLeft() {
    int i;
    int car_count;
    int result;
    tCar_spec *the_car;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 124
// Size: 0x1a3
//IDA: void __usercall RaceCompleted(tRace_over_reason pReason@<EAX>)
void RaceCompleted(tRace_over_reason pReason) {
    LOG_TRACE("(%d)", pReason);
    NOT_IMPLEMENTED();
}

// Offset: 544
// Size: 0x4f
//IDA: void __usercall Checkpoint(int pCheckpoint_index@<EAX>, int pDo_sound@<EDX>)
void Checkpoint(int pCheckpoint_index, int pDo_sound) {
    LOG_TRACE("(%d, %d)", pCheckpoint_index, pDo_sound);
    NOT_IMPLEMENTED();
}

// Offset: 624
// Size: 0x131
//IDA: void __cdecl IncrementCheckpoint()
void IncrementCheckpoint() {
    int done_voice;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 932
// Size: 0x46
//IDA: void __cdecl IncrementLap()
void IncrementLap() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1004
// Size: 0x98
//IDA: int __usercall RayHitFace@<EAX>(br_vector3 *pV0@<EAX>, br_vector3 *pV1@<EDX>, br_vector3 *pV2@<EBX>, br_vector3 *pNormal@<ECX>, br_vector3 *pStart, br_vector3 *pDir)
int RayHitFace(br_vector3 *pV0, br_vector3 *pV1, br_vector3 *pV2, br_vector3 *pNormal, br_vector3 *pStart, br_vector3 *pDir) {
    tFace_ref the_face;
    br_scalar rt;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", pV0, pV1, pV2, pNormal, pStart, pDir);
    NOT_IMPLEMENTED();
}

// Offset: 1156
// Size: 0xf1
//IDA: void __usercall WrongCheckpoint(int pCheckpoint_index@<EAX>)
void WrongCheckpoint(int pCheckpoint_index) {
    LOG_TRACE("(%d)", pCheckpoint_index);
    NOT_IMPLEMENTED();
}

// Offset: 1400
// Size: 0x366
//IDA: void __cdecl CheckCheckpoints()
void CheckCheckpoints() {
    tCar_spec *car;
    br_vector3 orig;
    br_vector3 dir;
    int i;
    int j;
    int cat;
    int car_count;
    int car_index;
    tNet_game_player_info *net_player;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2272
// Size: 0x48
//IDA: void __cdecl TotalRepair()
void TotalRepair() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2344
// Size: 0x40
//IDA: void __cdecl DoLogos()
void DoLogos() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2408
// Size: 0x36
//IDA: void __cdecl DoProgOpeningAnimation()
void DoProgOpeningAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2464
// Size: 0x3b
//IDA: void __cdecl DoProgramDemo()
void DoProgramDemo() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2524
// Size: 0x134
//IDA: int __usercall ChooseOpponent@<EAX>(int pNastiness@<EAX>, int *pHad_scum@<EDX>)
int ChooseOpponent(int pNastiness, int *pHad_scum) {
    int i;
    int count;
    int temp_array[40];
    LOG_TRACE("(%d, %p)", pNastiness, pHad_scum);
    NOT_IMPLEMENTED();
}

// Offset: 2832
// Size: 0x126
//IDA: void __usercall SelectOpponents(tRace_info *pRace_info@<EAX>)
void SelectOpponents(tRace_info *pRace_info) {
    int i;
    int rank_band;
    int nastiness;
    int had_scum;
    LOG_TRACE("(%p)", pRace_info);
    NOT_IMPLEMENTED();
}

// Offset: 3128
// Size: 0x10d
//IDA: int __usercall PickNetRace@<EAX>(int pCurrent_race@<EAX>, tNet_sequence_type pNet_race_sequence@<EDX>)
int PickNetRace(int pCurrent_race, tNet_sequence_type pNet_race_sequence) {
    int i;
    int new_index;
    int races_count;
    int most_seldom_seen;
    int races_to_pick_from[50];
    LOG_TRACE("(%d, %d)", pCurrent_race, pNet_race_sequence);
    NOT_IMPLEMENTED();
}

// Offset: 3400
// Size: 0x120
//IDA: void __cdecl SwapNetCarsLoad()
void SwapNetCarsLoad() {
    int i;
    int switched_res;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3688
// Size: 0xa5
//IDA: void __cdecl SwapNetCarsDispose()
void SwapNetCarsDispose() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3856
// Size: 0x489
//IDA: void __cdecl DoGame()
void DoGame() {
    tSO_result options_result;
    tRace_result race_result;
    int second_select_race;
    int first_summary_done;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5020
// Size: 0xf2
//IDA: void __cdecl InitialiseProgramState()
void InitialiseProgramState() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5264
// Size: 0xab
//IDA: void __cdecl DoProgram()
void DoProgram() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5436
// Size: 0x10e
//IDA: void __cdecl JumpTheStart()
void JumpTheStart() {
    char s[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5708
// Size: 0x51
//IDA: void __cdecl GoingToInterfaceFromRace()
void GoingToInterfaceFromRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5792
// Size: 0x51
//IDA: void __cdecl GoingBackToRaceFromInterface()
void GoingBackToRaceFromInterface() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

