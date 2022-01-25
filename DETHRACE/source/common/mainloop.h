#ifndef _MAINLOOP_H_
#define _MAINLOOP_H_

#include "dr_types.h"
#include "br_types.h"

extern int gNasty_kludgey_cockpit_variable; // addr: 00014E80
extern tInfo_mode gInfo_mode; // addr: 00014E84
extern tU32 gLast_tick_count; // addr: 00014E88
extern tU32 gActual_last_tick_count; // addr: 00014E8C
extern tU32 gAverage_frame_period; // addr: 00014E90
extern tU32 gOld_camera_time; // addr: 00037A60
extern tU32 gLast_wasted_massage_start; // addr: 00037A64
extern float gMr_odo; // addr: 00037A68
extern tU32 gWasted_last_flash; // addr: 00037A6C
extern tTime_bonus_state gTime_bonus_state; // addr: 00037A70
extern int gQueued_wasted_massages_count; // addr: 00037A74
extern int gTime_bonus; // addr: 00037A78
extern int gRace_bonus_headup; // addr: 00037A7C
extern int gWasted_flash_state; // addr: 00037A80
extern int gLast_time_headup; // addr: 00037A84
extern int gTime_bonus_headup; // addr: 00037A88
extern int gQueued_wasted_massages[5]; // addr: 00037A8C
extern tU32 gTime_bonus_start; // addr: 00037AA0
extern int gLast_credit_headup__mainloop; // addr: 00037AA4 // suffix added to avoid duplicate symbol

// Offset: 0
// Size: 0xa1
//IDA: void __cdecl ToggleInfo()
void ToggleInfo();

// Offset: 164
// Size: 0xdc
//IDA: void __cdecl CalculateFrameRate()
void CalculateFrameRate();

// Offset: 384
// Size: 0x68
//IDA: void __cdecl LoseOldestWastedMassage()
void LoseOldestWastedMassage();

// Offset: 488
// Size: 0x61
//IDA: void __usercall QueueWastedMassage(int pIndex@<EAX>)
void QueueWastedMassage(int pIndex);

// Offset: 588
// Size: 0xaec
//IDA: void __cdecl MungeHeadups()
void MungeHeadups();

// Offset: 3384
// Size: 0x24c
//IDA: void __usercall UpdateFramePeriod(tU32 *pCamera_period@<EAX>)
void UpdateFramePeriod(tU32 *pCamera_period);

// Offset: 3972
// Size: 0x2d
//IDA: tU32 __cdecl GetLastTickCount()
tU32 GetLastTickCount();

// Offset: 4020
// Size: 0xc0
//IDA: void __cdecl CheckTimer()
void CheckTimer();

// Offset: 4212
// Size: 0x13f
//IDA: int __cdecl MungeRaceFinished()
int MungeRaceFinished();

// Offset: 4532
// Size: 0x74c
//IDA: tRace_result __cdecl MainGameLoop()
tRace_result MainGameLoop();

// Offset: 6400
// Size: 0x3d
//IDA: tRace_result __cdecl DoRace()
tRace_result DoRace();

#endif
