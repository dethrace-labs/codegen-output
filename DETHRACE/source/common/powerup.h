#ifndef _POWERUP_H_
#define _POWERUP_H_

#include "dr_types.h"
#include "br_types.h"

extern tGot_proc gGot_procs[34]; // addr: 00018484
extern tLose_proc gLose_procs[34]; // addr: 0001850C
extern tPeriodic_proc gPeriodic_procs[34]; // addr: 00018594
extern tU32 *gReal_render_palette; // addr: 0001861C
extern char *gFizzle_names[3]; // addr: 00018620
extern br_vector3 gZero_v__powerup; // addr: 0001862C // suffix added to avoid duplicate symbol
extern int gPed_harvest_sounds[4]; // addr: 00018638
extern tHeadup_icon gIcon_list[20]; // addr: 0003BC80
extern br_pixelmap *gFizzle_in[3]; // addr: 0003BDC0
extern int gNumber_of_powerups; // addr: 0003BDCC
extern int gFizzle_height; // addr: 0003BDD0
extern int gNumber_of_icons; // addr: 0003BDD4
extern tPowerup *gPowerup_array; // addr: 0003BDD8

// Offset: 0
// Size: 0x12f
//IDA: void __usercall LosePowerupX(tPowerup *pThe_powerup@<EAX>, int pTell_net_players@<EDX>)
void LosePowerupX(tPowerup *pThe_powerup, int pTell_net_players);

// Offset: 304
// Size: 0x32
//IDA: void __usercall LosePowerup(tPowerup *pThe_powerup@<EAX>)
void LosePowerup(tPowerup *pThe_powerup);

// Offset: 356
// Size: 0x8b
//IDA: void __usercall LoseAllSimilarPowerups(tPowerup *pThe_powerup@<EAX>)
void LoseAllSimilarPowerups(tPowerup *pThe_powerup);

// Offset: 496
// Size: 0x427
//IDA: int __usercall GotPowerupX@<EAX>(tCar_spec *pCar@<EAX>, int pIndex@<EDX>, int pTell_net_players@<EBX>, int pDisplay_headup@<ECX>, tU32 pTime_left)
int GotPowerupX(tCar_spec *pCar, int pIndex, int pTell_net_players, int pDisplay_headup, tU32 pTime_left);

// Offset: 1560
// Size: 0x43
//IDA: int __usercall GotPowerup@<EAX>(tCar_spec *pCar@<EAX>, int pIndex@<EDX>)
int GotPowerup(tCar_spec *pCar, int pIndex);

// Offset: 1628
// Size: 0x32b
//IDA: void __cdecl LoadPowerups()
void LoadPowerups();

// Offset: 2440
// Size: 0x70
//IDA: void __cdecl InitPowerups()
void InitPowerups();

// Offset: 2552
// Size: 0x63
//IDA: void __cdecl CloseDownPowerUps()
void CloseDownPowerUps();

// Offset: 2652
// Size: 0x2bd
//IDA: void __usercall DrawPowerups(tU32 pTime@<EAX>)
void DrawPowerups(tU32 pTime);

// Offset: 3356
// Size: 0xb0
//IDA: void __usercall DoPowerupPeriodics(tU32 pFrame_period@<EAX>)
void DoPowerupPeriodics(tU32 pFrame_period);

// Offset: 3532
// Size: 0x9e
//IDA: void __usercall GotPowerupN(int pN@<EAX>)
void GotPowerupN(int pN);

// Offset: 3692
// Size: 0x29
//IDA: void __cdecl GotPowerup0()
void GotPowerup0();

// Offset: 3736
// Size: 0x2c
//IDA: void __cdecl GotPowerup1()
void GotPowerup1();

// Offset: 3780
// Size: 0x2c
//IDA: void __cdecl GotPowerup2()
void GotPowerup2();

// Offset: 3824
// Size: 0x2c
//IDA: void __cdecl GotPowerup3()
void GotPowerup3();

// Offset: 3868
// Size: 0x2c
//IDA: void __cdecl GotPowerup4()
void GotPowerup4();

// Offset: 3912
// Size: 0x2c
//IDA: void __cdecl GotPowerup5()
void GotPowerup5();

// Offset: 3956
// Size: 0x2c
//IDA: void __cdecl GotPowerup6()
void GotPowerup6();

// Offset: 4000
// Size: 0x2c
//IDA: void __cdecl GotPowerup7()
void GotPowerup7();

// Offset: 4044
// Size: 0x2c
//IDA: void __cdecl GotPowerup8()
void GotPowerup8();

// Offset: 4088
// Size: 0x2c
//IDA: void __cdecl GotPowerup9()
void GotPowerup9();

// Offset: 4132
// Size: 0xa3
//IDA: int __usercall GotCredits@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int GotCredits(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 4296
// Size: 0x59
//IDA: void __usercall ImprovePSPowerup(tCar_spec *pCar@<EAX>, int pIndex@<EDX>)
void ImprovePSPowerup(tCar_spec *pCar, int pIndex);

// Offset: 4388
// Size: 0x18d
//IDA: int __usercall GotTimeOrPower@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int GotTimeOrPower(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 4788
// Size: 0x4f
//IDA: int __usercall SetPedSpeed@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetPedSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 4868
// Size: 0x46
//IDA: int __usercall SetHades@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetHades(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 4940
// Size: 0x2b
//IDA: void __usercall ResetHades(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetHades(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 4984
// Size: 0xbb
//IDA: int __usercall SetPedSize@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetPedSize(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5172
// Size: 0x4b
//IDA: int __usercall SetPedExplode@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetPedExplode(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5248
// Size: 0x4e
//IDA: int __usercall SetInvulnerability@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetInvulnerability(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5328
// Size: 0x33
//IDA: void __usercall ResetInvulnerability(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetInvulnerability(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5380
// Size: 0x54
//IDA: int __usercall SetFreeRepairs@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetFreeRepairs(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5464
// Size: 0x39
//IDA: void __usercall ResetFreeRepairs(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetFreeRepairs(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5524
// Size: 0x4b
//IDA: int __usercall SetBlindPedestrians@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetBlindPedestrians(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5600
// Size: 0x30
//IDA: void __usercall ResetBlindPedestrians(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetBlindPedestrians(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5648
// Size: 0x6b
//IDA: int __usercall FreezeTimer@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int FreezeTimer(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5756
// Size: 0x39
//IDA: void __usercall UnfreezeTimer(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void UnfreezeTimer(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5816
// Size: 0x4f
//IDA: int __usercall DoInstantRepair@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int DoInstantRepair(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5896
// Size: 0x30
//IDA: void __usercall ResetPedSpeed(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetPedSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 5944
// Size: 0x3a
//IDA: void __usercall ResetPedSize(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetPedSize(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6004
// Size: 0x30
//IDA: void __usercall ResetPedExplode(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetPedExplode(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6052
// Size: 0x99
//IDA: int __usercall SetEngineFactor@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetEngineFactor(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6208
// Size: 0x4e
//IDA: int __usercall SetUnderwater@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetUnderwater(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6288
// Size: 0x100
//IDA: int __usercall TrashBodywork@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int TrashBodywork(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6544
// Size: 0x8d
//IDA: int __usercall TakeDrugs@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int TakeDrugs(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 6688
// Size: 0xc3
//IDA: void __usercall PaletteFuckedUpByDrugs(br_pixelmap *pPixelmap@<EAX>, int pOffset@<EDX>)
void PaletteFuckedUpByDrugs(br_pixelmap *pPixelmap, int pOffset);

// Offset: 6884
// Size: 0x48
//IDA: void __usercall TheEffectsOfDrugs(tPowerup *pPowerup@<EAX>, tU32 pPeriod@<EDX>)
void TheEffectsOfDrugs(tPowerup *pPowerup, tU32 pPeriod);

// Offset: 6956
// Size: 0xa2
//IDA: int __usercall SetOpponentsSpeed@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetOpponentsSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7120
// Size: 0x4f
//IDA: int __usercall SetCopsSpeed@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetCopsSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7200
// Size: 0x4f
//IDA: int __usercall SetGravity@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetGravity(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7280
// Size: 0x4f
//IDA: int __usercall SetPinball@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetPinball(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7360
// Size: 0x4e
//IDA: int __usercall SetWallclimb@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetWallclimb(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7440
// Size: 0x77
//IDA: int __usercall SetBouncey@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetBouncey(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7560
// Size: 0x75
//IDA: int __usercall SetSuspension@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetSuspension(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7680
// Size: 0x52
//IDA: int __usercall SetTyreGrip@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetTyreGrip(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7764
// Size: 0x52
//IDA: int __usercall SetDamageMultiplier@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetDamageMultiplier(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7848
// Size: 0x5b
//IDA: void __usercall ResetEngineFactor(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetEngineFactor(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7940
// Size: 0x33
//IDA: void __usercall ResetUnderwater(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetUnderwater(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 7992
// Size: 0x4a
//IDA: void __usercall PukeDrugsBackUp(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void PukeDrugsBackUp(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8068
// Size: 0x83
//IDA: void __usercall ResetOpponentsSpeed(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetOpponentsSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8200
// Size: 0x30
//IDA: void __usercall ResetCopsSpeed(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetCopsSpeed(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8248
// Size: 0x32
//IDA: void __usercall ResetGravity(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetGravity(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8300
// Size: 0x30
//IDA: void __usercall ResetPinball(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetPinball(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8348
// Size: 0x33
//IDA: void __usercall ResetWallclimb(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetWallclimb(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8400
// Size: 0x40
//IDA: void __usercall ResetBouncey(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetBouncey(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8464
// Size: 0x41
//IDA: void __usercall ResetSuspension(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetSuspension(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8532
// Size: 0x33
//IDA: void __usercall ResetDamageMultiplier(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetDamageMultiplier(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8584
// Size: 0x33
//IDA: void __usercall ResetTyreGrip(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetTyreGrip(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8636
// Size: 0x53
//IDA: int __usercall PickAtRandom@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int PickAtRandom(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8720
// Size: 0x46
//IDA: int __usercall PedestrianRespawn@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int PedestrianRespawn(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8792
// Size: 0x57
//IDA: int __usercall GotVouchers@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int GotVouchers(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 8880
// Size: 0x31
//IDA: void __usercall MungeVouchers(tPowerup *pPowerup@<EAX>, tU32 pPeriod@<EDX>)
void MungeVouchers(tPowerup *pPowerup, tU32 pPeriod);

// Offset: 8932
// Size: 0x54
//IDA: int __usercall SetInstantHandbrake@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetInstantHandbrake(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9016
// Size: 0x39
//IDA: void __usercall ResetInstantHandbrake(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetInstantHandbrake(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9076
// Size: 0x89
//IDA: void __usercall DoBouncey(tPowerup *pPowerup@<EAX>, tU32 pPeriod@<EDX>)
void DoBouncey(tPowerup *pPowerup, tU32 pPeriod);

// Offset: 9216
// Size: 0x1c2
//IDA: int __usercall HitMine@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int HitMine(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9668
// Size: 0x52
//IDA: int __usercall SetMassMultiplier@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetMassMultiplier(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9752
// Size: 0x33
//IDA: void __usercall ResetMassMultiplier(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetMassMultiplier(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9804
// Size: 0x54
//IDA: int __usercall ShowPedestrians@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int ShowPedestrians(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9888
// Size: 0x39
//IDA: void __usercall HidePedestrians(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void HidePedestrians(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 9948
// Size: 0x5a
//IDA: int __usercall SetProximity@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetProximity(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10040
// Size: 0x33
//IDA: void __usercall ResetProximity(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetProximity(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10092
// Size: 0x4b
//IDA: int __usercall SetPedHarvest@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetPedHarvest(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10168
// Size: 0x78
//IDA: void __usercall ResetPedHarvest(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetPedHarvest(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10288
// Size: 0x4b
//IDA: int __usercall SetVesuvianCorpses@<EAX>(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
int SetVesuvianCorpses(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10364
// Size: 0x30
//IDA: void __usercall ResetVesuvianCorpses(tPowerup *pPowerup@<EAX>, tCar_spec *pCar@<EDX>)
void ResetVesuvianCorpses(tPowerup *pPowerup, tCar_spec *pCar);

// Offset: 10412
// Size: 0x1a7
//IDA: void __usercall ReceivedPowerup(tNet_contents *pContents@<EAX>)
void ReceivedPowerup(tNet_contents *pContents);

// Offset: 10836
// Size: 0x162
//IDA: void __cdecl SendCurrentPowerups()
void SendCurrentPowerups();

// Offset: 11192
// Size: 0x89
//IDA: void __usercall LoseAllLocalPowerups(tCar_spec *pCar@<EAX>)
void LoseAllLocalPowerups(tCar_spec *pCar);

#endif
