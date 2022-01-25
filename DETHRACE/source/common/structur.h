#ifndef _STRUCTUR_H_
#define _STRUCTUR_H_

#include "dr_types.h"
#include "br_types.h"

extern int gLast_wrong_checkpoint; // addr: 0001A918
extern int gMirror_on__structur; // addr: 0001A91C // suffix added to avoid duplicate symbol
extern int gPratcam_on; // addr: 0001A920
extern int gCockpit_on; // addr: 0001A924
extern int gOpponent_mix[10][5]; // addr: 0001A928
extern tU32 gLast_checkpoint_time; // addr: 0001A9F0
extern tRace_over_reason gRace_over_reason; // addr: 0003FD20

// Offset: 0
// Size: 0x7c
//IDA: int __cdecl NumberOfOpponentsLeft()
int NumberOfOpponentsLeft();

// Offset: 124
// Size: 0x1a3
//IDA: void __usercall RaceCompleted(tRace_over_reason pReason@<EAX>)
void RaceCompleted(tRace_over_reason pReason);

// Offset: 544
// Size: 0x4f
//IDA: void __usercall Checkpoint(int pCheckpoint_index@<EAX>, int pDo_sound@<EDX>)
void Checkpoint(int pCheckpoint_index, int pDo_sound);

// Offset: 624
// Size: 0x131
//IDA: void __cdecl IncrementCheckpoint()
void IncrementCheckpoint();

// Offset: 932
// Size: 0x46
//IDA: void __cdecl IncrementLap()
void IncrementLap();

// Offset: 1004
// Size: 0x98
//IDA: int __usercall RayHitFace@<EAX>(br_vector3 *pV0@<EAX>, br_vector3 *pV1@<EDX>, br_vector3 *pV2@<EBX>, br_vector3 *pNormal@<ECX>, br_vector3 *pStart, br_vector3 *pDir)
int RayHitFace(br_vector3 *pV0, br_vector3 *pV1, br_vector3 *pV2, br_vector3 *pNormal, br_vector3 *pStart, br_vector3 *pDir);

// Offset: 1156
// Size: 0xf1
//IDA: void __usercall WrongCheckpoint(int pCheckpoint_index@<EAX>)
void WrongCheckpoint(int pCheckpoint_index);

// Offset: 1400
// Size: 0x366
//IDA: void __cdecl CheckCheckpoints()
void CheckCheckpoints();

// Offset: 2272
// Size: 0x48
//IDA: void __cdecl TotalRepair()
void TotalRepair();

// Offset: 2344
// Size: 0x40
//IDA: void __cdecl DoLogos()
void DoLogos();

// Offset: 2408
// Size: 0x36
//IDA: void __cdecl DoProgOpeningAnimation()
void DoProgOpeningAnimation();

// Offset: 2464
// Size: 0x3b
//IDA: void __cdecl DoProgramDemo()
void DoProgramDemo();

// Offset: 2524
// Size: 0x134
//IDA: int __usercall ChooseOpponent@<EAX>(int pNastiness@<EAX>, int *pHad_scum@<EDX>)
int ChooseOpponent(int pNastiness, int *pHad_scum);

// Offset: 2832
// Size: 0x126
//IDA: void __usercall SelectOpponents(tRace_info *pRace_info@<EAX>)
void SelectOpponents(tRace_info *pRace_info);

// Offset: 3128
// Size: 0x10d
//IDA: int __usercall PickNetRace@<EAX>(int pCurrent_race@<EAX>, tNet_sequence_type pNet_race_sequence@<EDX>)
int PickNetRace(int pCurrent_race, tNet_sequence_type pNet_race_sequence);

// Offset: 3400
// Size: 0x120
//IDA: void __cdecl SwapNetCarsLoad()
void SwapNetCarsLoad();

// Offset: 3688
// Size: 0xa5
//IDA: void __cdecl SwapNetCarsDispose()
void SwapNetCarsDispose();

// Offset: 3856
// Size: 0x489
//IDA: void __cdecl DoGame()
void DoGame();

// Offset: 5020
// Size: 0xf2
//IDA: void __cdecl InitialiseProgramState()
void InitialiseProgramState();

// Offset: 5264
// Size: 0xab
//IDA: void __cdecl DoProgram()
void DoProgram();

// Offset: 5436
// Size: 0x10e
//IDA: void __cdecl JumpTheStart()
void JumpTheStart();

// Offset: 5708
// Size: 0x51
//IDA: void __cdecl GoingToInterfaceFromRace()
void GoingToInterfaceFromRace();

// Offset: 5792
// Size: 0x51
//IDA: void __cdecl GoingBackToRaceFromInterface()
void GoingBackToRaceFromInterface();

#endif
