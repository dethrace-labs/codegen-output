#ifndef _CONTROLS_H_
#define _CONTROLS_H_

#include "dr_types.h"
#include "br_types.h"

extern tToggle_element gToggle_array[43]; // addr: 0000C9D8
extern int gRepair_last_time; // addr: 0000CDE0
extern int gHad_auto_recover; // addr: 0000CDE4
extern tU32 gLast_repair_time; // addr: 0000CDE8
extern tEdit_mode gWhich_edit_mode; // addr: 0000CDEC
extern char *gEdit_mode_names[10]; // addr: 0000CDF0
extern tEdit_func gEdit_funcs[10][18][8]; // addr: 0000CE18
extern tCheat gKev_keys[44]; // addr: 0000E498
extern int gAllow_car_flying; // addr: 0000E758
extern int gEntering_message; // addr: 0000E75C
extern tU32 gPalette_fade_time; // addr: 0000E760
extern char *gAbuse_text[10]; // addr: 000282A0
extern char gString[84]; // addr: 000282C8
extern int gToo_late; // addr: 0002831C
extern int gRecover_timer; // addr: 00028320
extern int gRecovery_voucher_count; // addr: 00028324
extern int gInstant_handbrake; // addr: 00028328
extern int gAuto_repair; // addr: 0002832C

// Offset: 0
// Size: 0x35
//IDA: void __cdecl AbortRace()
void AbortRace();

// Offset: 56
// Size: 0x10f
//IDA: void __cdecl F4Key()
void F4Key();

// Offset: 328
// Size: 0x57
//IDA: void __usercall SetFlag(int i@<EAX>)
void SetFlag(int i);

// Offset: 416
// Size: 0x2a
//IDA: void __usercall FinishLap(int i@<EAX>)
void FinishLap(int i);

// Offset: 460
// Size: 0x30
//IDA: void __cdecl EnsureSpecialVolumesHidden()
void EnsureSpecialVolumesHidden();

// Offset: 508
// Size: 0x30
//IDA: void __cdecl ShowSpecialVolumesIfRequ()
void ShowSpecialVolumesIfRequ();

// Offset: 556
// Size: 0x105
//IDA: void __usercall DoEditModeKey(int pIndex@<EAX>)
void DoEditModeKey(int pIndex);

// Offset: 820
// Size: 0x29
//IDA: void __cdecl F5Key()
void F5Key();

// Offset: 864
// Size: 0x2c
//IDA: void __cdecl F6Key()
void F6Key();

// Offset: 908
// Size: 0x2c
//IDA: void __cdecl F7Key()
void F7Key();

// Offset: 952
// Size: 0x2c
//IDA: void __cdecl F8Key()
void F8Key();

// Offset: 996
// Size: 0x2c
//IDA: void __cdecl F10Key()
void F10Key();

// Offset: 1040
// Size: 0x2c
//IDA: void __cdecl F11Key()
void F11Key();

// Offset: 1084
// Size: 0x2c
//IDA: void __cdecl F12Key()
void F12Key();

// Offset: 1128
// Size: 0x2c
//IDA: void __cdecl NumberKey0()
void NumberKey0();

// Offset: 1172
// Size: 0x2c
//IDA: void __cdecl NumberKey1()
void NumberKey1();

// Offset: 1216
// Size: 0x2c
//IDA: void __cdecl NumberKey2()
void NumberKey2();

// Offset: 1260
// Size: 0x2c
//IDA: void __cdecl NumberKey3()
void NumberKey3();

// Offset: 1304
// Size: 0x2c
//IDA: void __cdecl NumberKey4()
void NumberKey4();

// Offset: 1348
// Size: 0x2c
//IDA: void __cdecl NumberKey5()
void NumberKey5();

// Offset: 1392
// Size: 0x2c
//IDA: void __cdecl NumberKey6()
void NumberKey6();

// Offset: 1436
// Size: 0x2c
//IDA: void __cdecl NumberKey7()
void NumberKey7();

// Offset: 1480
// Size: 0x2c
//IDA: void __cdecl NumberKey8()
void NumberKey8();

// Offset: 1524
// Size: 0x2c
//IDA: void __cdecl NumberKey9()
void NumberKey9();

// Offset: 1568
// Size: 0xaf
//IDA: void __cdecl LookLeft()
void LookLeft();

// Offset: 1744
// Size: 0x80
//IDA: void __cdecl LookForward()
void LookForward();

// Offset: 1872
// Size: 0xaf
//IDA: void __cdecl LookRight()
void LookRight();

// Offset: 2048
// Size: 0x22
//IDA: void __cdecl DamageTest()
void DamageTest();

// Offset: 2084
// Size: 0x2c
//IDA: void __cdecl TDamageEngine()
void TDamageEngine();

// Offset: 2128
// Size: 0x5b
//IDA: void __cdecl TDamageDriver()
void TDamageDriver();

// Offset: 2220
// Size: 0x2c
//IDA: void __cdecl TDamageTrans()
void TDamageTrans();

// Offset: 2264
// Size: 0x2c
//IDA: void __cdecl TDamageSteering()
void TDamageSteering();

// Offset: 2308
// Size: 0x2c
//IDA: void __cdecl TDamageLFWheel()
void TDamageLFWheel();

// Offset: 2352
// Size: 0x2c
//IDA: void __cdecl TDamageLFBrake()
void TDamageLFBrake();

// Offset: 2396
// Size: 0x2c
//IDA: void __cdecl TDamageLRBrake()
void TDamageLRBrake();

// Offset: 2440
// Size: 0x2c
//IDA: void __cdecl TDamageLRWheel()
void TDamageLRWheel();

// Offset: 2484
// Size: 0x2c
//IDA: void __cdecl TDamageRFWheel()
void TDamageRFWheel();

// Offset: 2528
// Size: 0x2c
//IDA: void __cdecl TDamageRFBrake()
void TDamageRFBrake();

// Offset: 2572
// Size: 0x2c
//IDA: void __cdecl TDamageRRBrake()
void TDamageRRBrake();

// Offset: 2616
// Size: 0x2c
//IDA: void __cdecl TDamageRRWheel()
void TDamageRRWheel();

// Offset: 2660
// Size: 0x4c
//IDA: void __cdecl MoveBonnetForward()
void MoveBonnetForward();

// Offset: 2736
// Size: 0x5d
//IDA: void __cdecl SaveBonnet()
void SaveBonnet();

// Offset: 2832
// Size: 0x49
//IDA: void __cdecl MoveBonnetBackward()
void MoveBonnetBackward();

// Offset: 2908
// Size: 0x4c
//IDA: void __cdecl MoveBonnetLeft()
void MoveBonnetLeft();

// Offset: 2984
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetX()
void ShrinkBonnetX();

// Offset: 3060
// Size: 0x49
//IDA: void __cdecl SwellBonnetX()
void SwellBonnetX();

// Offset: 3136
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetY()
void ShrinkBonnetY();

// Offset: 3212
// Size: 0x49
//IDA: void __cdecl SwellBonnetY()
void SwellBonnetY();

// Offset: 3288
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetZ()
void ShrinkBonnetZ();

// Offset: 3364
// Size: 0x49
//IDA: void __cdecl SwellBonnetZ()
void SwellBonnetZ();

// Offset: 3440
// Size: 0x49
//IDA: void __cdecl MoveBonnetDown()
void MoveBonnetDown();

// Offset: 3516
// Size: 0x49
//IDA: void __cdecl MoveBonnetRight()
void MoveBonnetRight();

// Offset: 3592
// Size: 0x4c
//IDA: void __cdecl MoveBonnetUp()
void MoveBonnetUp();

// Offset: 3668
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownX()
void TiltBonnetDownX();

// Offset: 3736
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpX()
void TiltBonnetUpX();

// Offset: 3804
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownY()
void TiltBonnetDownY();

// Offset: 3872
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpY()
void TiltBonnetUpY();

// Offset: 3940
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownZ()
void TiltBonnetDownZ();

// Offset: 4008
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpZ()
void TiltBonnetUpZ();

// Offset: 4076
// Size: 0xf6
//IDA: void __cdecl ToggleCockpit()
void ToggleCockpit();

// Offset: 4324
// Size: 0x95
//IDA: void __cdecl ToggleMirror()
void ToggleMirror();

// Offset: 4476
// Size: 0x82
//IDA: void __cdecl ConcussMe()
void ConcussMe();

// Offset: 4608
// Size: 0x22
//IDA: void __cdecl CheckHelp()
void CheckHelp();

// Offset: 4644
// Size: 0x139
//IDA: void __cdecl CheckLoadSave()
void CheckLoadSave();

// Offset: 4960
// Size: 0x16c
//IDA: void __usercall CheckToggles(int pRacing@<EAX>)
void CheckToggles(int pRacing);

// Offset: 5324
// Size: 0x1bc
//IDA: int __usercall CarWorldOffFallenCheckThingy@<EAX>(tCar_spec *pCar@<EAX>, int pCheck_around@<EDX>)
int CarWorldOffFallenCheckThingy(tCar_spec *pCar, int pCheck_around);

// Offset: 5768
// Size: 0x38
//IDA: int __usercall HasCarFallenOffWorld@<EAX>(tCar_spec *pCar@<EAX>)
int HasCarFallenOffWorld(tCar_spec *pCar);

// Offset: 5824
// Size: 0xfa
//IDA: void __cdecl CheckForBeingOutOfThisWorld()
void CheckForBeingOutOfThisWorld();

// Offset: 6076
// Size: 0xbe
//IDA: void __usercall CheckHornLocal(tCar_spec *pCar@<EAX>)
void CheckHornLocal(tCar_spec *pCar);

// Offset: 6268
// Size: 0xf9
//IDA: void __usercall CheckHorn3D(tCar_spec *pCar@<EAX>)
void CheckHorn3D(tCar_spec *pCar);

// Offset: 6520
// Size: 0x67
//IDA: void __cdecl CheckHorns()
void CheckHorns();

// Offset: 6624
// Size: 0x19d
//IDA: void __cdecl SetRecovery()
void SetRecovery();

// Offset: 7040
// Size: 0x48
//IDA: void __cdecl RecoverCar()
void RecoverCar();

// Offset: 7112
// Size: 0x2fd
//IDA: void __cdecl CheckMapRenderMove()
void CheckMapRenderMove();

// Offset: 7880
// Size: 0x12c
//IDA: void __usercall ExplodeCar(tCar_spec *pCar@<EAX>)
void ExplodeCar(tCar_spec *pCar);

// Offset: 8180
// Size: 0x1c0
//IDA: void __usercall CheckRecoveryOfCars(tU32 pEndFrameTime@<EAX>)
void CheckRecoveryOfCars(tU32 pEndFrameTime);

// Offset: 8628
// Size: 0x6b
//IDA: void __usercall LoseSomePSPowerups(int pNumber@<EAX>)
void LoseSomePSPowerups(int pNumber);

// Offset: 8736
// Size: 0x6eb
//IDA: void __cdecl CheckOtherRacingKeys()
void CheckOtherRacingKeys();

// Offset: 10508
// Size: 0x103
//IDA: int __cdecl CheckRecoverCost()
int CheckRecoverCost();

// Offset: 10768
// Size: 0x117
//IDA: void __usercall SortOutRecover(tCar_spec *pCar@<EAX>)
void SortOutRecover(tCar_spec *pCar);

// Offset: 11048
// Size: 0x73
//IDA: void __usercall SetFlipUpCar(tCar_spec *pCar@<EAX>)
void SetFlipUpCar(tCar_spec *pCar);

// Offset: 11164
// Size: 0x569
//IDA: void __usercall FlipUpCar(tCar_spec *car@<EAX>)
void FlipUpCar(tCar_spec *car);

// Offset: 12552
// Size: 0x32
//IDA: void __usercall GetPowerup(int pNum@<EAX>)
void GetPowerup(int pNum);

// Offset: 12604
// Size: 0x70
//IDA: void __usercall CheckSystemKeys(int pRacing@<EAX>)
void CheckSystemKeys(int pRacing);

// Offset: 12716
// Size: 0x18b
//IDA: void __cdecl CheckKevKeys()
void CheckKevKeys();

// Offset: 13112
// Size: 0xbe
//IDA: void __cdecl BrakeInstantly()
void BrakeInstantly();

// Offset: 13304
// Size: 0x355
//IDA: void __usercall PollCarControls(tU32 pTime_difference@<EAX>)
void PollCarControls(tU32 pTime_difference);

// Offset: 14160
// Size: 0x34e
//IDA: void __usercall PollCameraControls(tU32 pTime_difference@<EAX>)
void PollCameraControls(tU32 pTime_difference);

// Offset: 15008
// Size: 0x3e
//IDA: void __usercall SetFlag2(int i@<EAX>)
void SetFlag2(int i);

// Offset: 15072
// Size: 0xa4
//IDA: void __cdecl ToggleFlying()
void ToggleFlying();

// Offset: 15236
// Size: 0x88
//IDA: void __cdecl ToggleInvulnerability()
void ToggleInvulnerability();

// Offset: 15372
// Size: 0x2c
//IDA: void __cdecl MoreTime()
void MoreTime();

// Offset: 15416
// Size: 0x2c
//IDA: void __cdecl MuchMoreTime()
void MuchMoreTime();

// Offset: 15460
// Size: 0x8b
//IDA: void __cdecl ToggleTimerFreeze()
void ToggleTimerFreeze();

// Offset: 15600
// Size: 0x2c
//IDA: void __cdecl EarnDosh()
void EarnDosh();

// Offset: 15644
// Size: 0x2c
//IDA: void __cdecl LoseDosh()
void LoseDosh();

// Offset: 15688
// Size: 0x12d
//IDA: void __cdecl ToggleMap()
void ToggleMap();

// Offset: 15992
// Size: 0x33
//IDA: int __cdecl HornBlowing()
int HornBlowing();

// Offset: 16044
// Size: 0xd7
//IDA: void __cdecl ToggleArrow()
void ToggleArrow();

// Offset: 16260
// Size: 0x2d
//IDA: int __cdecl GetRecoverVoucherCount()
int GetRecoverVoucherCount();

// Offset: 16308
// Size: 0x2e
//IDA: void __usercall AddVouchers(int pCount@<EAX>)
void AddVouchers(int pCount);

// Offset: 16356
// Size: 0x2c
//IDA: void __cdecl ResetRecoveryVouchers()
void ResetRecoveryVouchers();

// Offset: 16400
// Size: 0xc2
//IDA: void __cdecl CycleCarTexturingLevel()
void CycleCarTexturingLevel();

// Offset: 16596
// Size: 0xca
//IDA: void __cdecl CycleWallTexturingLevel()
void CycleWallTexturingLevel();

// Offset: 16800
// Size: 0x9d
//IDA: void __cdecl CycleRoadTexturingLevel()
void CycleRoadTexturingLevel();

// Offset: 16960
// Size: 0xf6
//IDA: void __cdecl CycleYonFactor()
void CycleYonFactor();

// Offset: 17208
// Size: 0x2d
//IDA: void __usercall SetSoundDetailLevel(int pLevel@<EAX>)
void SetSoundDetailLevel(int pLevel);

// Offset: 17256
// Size: 0x41
//IDA: void __usercall ReallySetSoundDetailLevel(int pLevel@<EAX>)
void ReallySetSoundDetailLevel(int pLevel);

// Offset: 17324
// Size: 0x2d
//IDA: int __cdecl GetSoundDetailLevel()
int GetSoundDetailLevel();

// Offset: 17372
// Size: 0xd1
//IDA: void __cdecl CycleSoundDetailLevel()
void CycleSoundDetailLevel();

// Offset: 17584
// Size: 0xa2
//IDA: void __cdecl CycleCarSimplificationLevel()
void CycleCarSimplificationLevel();

// Offset: 17748
// Size: 0xc2
//IDA: void __cdecl ToggleAccessoryRendering()
void ToggleAccessoryRendering();

// Offset: 17944
// Size: 0x9b
//IDA: void __cdecl ToggleSmoke()
void ToggleSmoke();

// Offset: 18100
// Size: 0x90
//IDA: void __usercall DrawSomeText2(tDR_font *pFont@<EAX>)
void DrawSomeText2(tDR_font *pFont);

// Offset: 18244
// Size: 0x68
//IDA: void __cdecl DrawSomeText()
void DrawSomeText();

// Offset: 18348
// Size: 0x2c
//IDA: void __cdecl SaySorryYouLittleBastard()
void SaySorryYouLittleBastard();

// Offset: 18392
// Size: 0x42
//IDA: void __cdecl UserSendMessage()
void UserSendMessage();

// Offset: 18460
// Size: 0x32f
//IDA: void __cdecl EnterUserMessage()
void EnterUserMessage();

// Offset: 19276
// Size: 0x1b3
//IDA: void __cdecl DisplayUserMessage()
void DisplayUserMessage();

// Offset: 19712
// Size: 0x15b
//IDA: void __cdecl InitAbuseomatic()
void InitAbuseomatic();

// Offset: 20060
// Size: 0x5e
//IDA: void __cdecl DisposeAbuseomatic()
void DisposeAbuseomatic();

#endif
