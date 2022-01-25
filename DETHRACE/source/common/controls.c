#include "controls.h"

tToggle_element gToggle_array[43];
int gRepair_last_time;
int gHad_auto_recover;
tU32 gLast_repair_time;
tEdit_mode gWhich_edit_mode;
char *gEdit_mode_names[10];
tEdit_func gEdit_funcs[10][18][8];
tCheat gKev_keys[44];
int gAllow_car_flying;
int gEntering_message;
tU32 gPalette_fade_time;
char *gAbuse_text[10];
char gString[84];
int gToo_late;
int gRecover_timer;
int gRecovery_voucher_count;
int gInstant_handbrake;
int gAuto_repair;

// Offset: 0
// Size: 0x35
//IDA: void __cdecl AbortRace()
void AbortRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 56
// Size: 0x10f
//IDA: void __cdecl F4Key()
void F4Key() {
    char s[256];
    tEdit_mode old_edit_mode;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 328
// Size: 0x57
//IDA: void __usercall SetFlag(int i@<EAX>)
void SetFlag(int i) {
    LOG_TRACE("(%d)", i);
    NOT_IMPLEMENTED();
}

// Offset: 416
// Size: 0x2a
//IDA: void __usercall FinishLap(int i@<EAX>)
void FinishLap(int i) {
    LOG_TRACE("(%d)", i);
    NOT_IMPLEMENTED();
}

// Offset: 460
// Size: 0x30
//IDA: void __cdecl EnsureSpecialVolumesHidden()
void EnsureSpecialVolumesHidden() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 508
// Size: 0x30
//IDA: void __cdecl ShowSpecialVolumesIfRequ()
void ShowSpecialVolumesIfRequ() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 556
// Size: 0x105
//IDA: void __usercall DoEditModeKey(int pIndex@<EAX>)
void DoEditModeKey(int pIndex) {
    int modifiers;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 820
// Size: 0x29
//IDA: void __cdecl F5Key()
void F5Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 864
// Size: 0x2c
//IDA: void __cdecl F6Key()
void F6Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 908
// Size: 0x2c
//IDA: void __cdecl F7Key()
void F7Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 952
// Size: 0x2c
//IDA: void __cdecl F8Key()
void F8Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 996
// Size: 0x2c
//IDA: void __cdecl F10Key()
void F10Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1040
// Size: 0x2c
//IDA: void __cdecl F11Key()
void F11Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1084
// Size: 0x2c
//IDA: void __cdecl F12Key()
void F12Key() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1128
// Size: 0x2c
//IDA: void __cdecl NumberKey0()
void NumberKey0() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1172
// Size: 0x2c
//IDA: void __cdecl NumberKey1()
void NumberKey1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1216
// Size: 0x2c
//IDA: void __cdecl NumberKey2()
void NumberKey2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1260
// Size: 0x2c
//IDA: void __cdecl NumberKey3()
void NumberKey3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1304
// Size: 0x2c
//IDA: void __cdecl NumberKey4()
void NumberKey4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1348
// Size: 0x2c
//IDA: void __cdecl NumberKey5()
void NumberKey5() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1392
// Size: 0x2c
//IDA: void __cdecl NumberKey6()
void NumberKey6() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1436
// Size: 0x2c
//IDA: void __cdecl NumberKey7()
void NumberKey7() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1480
// Size: 0x2c
//IDA: void __cdecl NumberKey8()
void NumberKey8() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1524
// Size: 0x2c
//IDA: void __cdecl NumberKey9()
void NumberKey9() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1568
// Size: 0xaf
//IDA: void __cdecl LookLeft()
void LookLeft() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1744
// Size: 0x80
//IDA: void __cdecl LookForward()
void LookForward() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1872
// Size: 0xaf
//IDA: void __cdecl LookRight()
void LookRight() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2048
// Size: 0x22
//IDA: void __cdecl DamageTest()
void DamageTest() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2084
// Size: 0x2c
//IDA: void __cdecl TDamageEngine()
void TDamageEngine() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2128
// Size: 0x5b
//IDA: void __cdecl TDamageDriver()
void TDamageDriver() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2220
// Size: 0x2c
//IDA: void __cdecl TDamageTrans()
void TDamageTrans() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2264
// Size: 0x2c
//IDA: void __cdecl TDamageSteering()
void TDamageSteering() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2308
// Size: 0x2c
//IDA: void __cdecl TDamageLFWheel()
void TDamageLFWheel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2352
// Size: 0x2c
//IDA: void __cdecl TDamageLFBrake()
void TDamageLFBrake() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2396
// Size: 0x2c
//IDA: void __cdecl TDamageLRBrake()
void TDamageLRBrake() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2440
// Size: 0x2c
//IDA: void __cdecl TDamageLRWheel()
void TDamageLRWheel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2484
// Size: 0x2c
//IDA: void __cdecl TDamageRFWheel()
void TDamageRFWheel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2528
// Size: 0x2c
//IDA: void __cdecl TDamageRFBrake()
void TDamageRFBrake() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2572
// Size: 0x2c
//IDA: void __cdecl TDamageRRBrake()
void TDamageRRBrake() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2616
// Size: 0x2c
//IDA: void __cdecl TDamageRRWheel()
void TDamageRRWheel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2660
// Size: 0x4c
//IDA: void __cdecl MoveBonnetForward()
void MoveBonnetForward() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2736
// Size: 0x5d
//IDA: void __cdecl SaveBonnet()
void SaveBonnet() {
    br_actor *bonny;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2832
// Size: 0x49
//IDA: void __cdecl MoveBonnetBackward()
void MoveBonnetBackward() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2908
// Size: 0x4c
//IDA: void __cdecl MoveBonnetLeft()
void MoveBonnetLeft() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2984
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetX()
void ShrinkBonnetX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3060
// Size: 0x49
//IDA: void __cdecl SwellBonnetX()
void SwellBonnetX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3136
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetY()
void ShrinkBonnetY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3212
// Size: 0x49
//IDA: void __cdecl SwellBonnetY()
void SwellBonnetY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3288
// Size: 0x49
//IDA: void __cdecl ShrinkBonnetZ()
void ShrinkBonnetZ() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3364
// Size: 0x49
//IDA: void __cdecl SwellBonnetZ()
void SwellBonnetZ() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3440
// Size: 0x49
//IDA: void __cdecl MoveBonnetDown()
void MoveBonnetDown() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3516
// Size: 0x49
//IDA: void __cdecl MoveBonnetRight()
void MoveBonnetRight() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3592
// Size: 0x4c
//IDA: void __cdecl MoveBonnetUp()
void MoveBonnetUp() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3668
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownX()
void TiltBonnetDownX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3736
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpX()
void TiltBonnetUpX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3804
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownY()
void TiltBonnetDownY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3872
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpY()
void TiltBonnetUpY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3940
// Size: 0x43
//IDA: void __cdecl TiltBonnetDownZ()
void TiltBonnetDownZ() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4008
// Size: 0x43
//IDA: void __cdecl TiltBonnetUpZ()
void TiltBonnetUpZ() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4076
// Size: 0xf6
//IDA: void __cdecl ToggleCockpit()
void ToggleCockpit() {
    br_scalar ts;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4324
// Size: 0x95
//IDA: void __cdecl ToggleMirror()
void ToggleMirror() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4476
// Size: 0x82
//IDA: void __cdecl ConcussMe()
void ConcussMe() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4608
// Size: 0x22
//IDA: void __cdecl CheckHelp()
void CheckHelp() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4644
// Size: 0x139
//IDA: void __cdecl CheckLoadSave()
void CheckLoadSave() {
    int save_load_allowed;
    int switched_res;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4960
// Size: 0x16c
//IDA: void __usercall CheckToggles(int pRacing@<EAX>)
void CheckToggles(int pRacing) {
    int i;
    int new_state;
    LOG_TRACE("(%d)", pRacing);
    NOT_IMPLEMENTED();
}

// Offset: 5324
// Size: 0x1bc
//IDA: int __usercall CarWorldOffFallenCheckThingy@<EAX>(tCar_spec *pCar@<EAX>, int pCheck_around@<EDX>)
int CarWorldOffFallenCheckThingy(tCar_spec *pCar, int pCheck_around) {
    br_vector3 car_pos;
    br_vector3 offset_c;
    br_vector3 offset_w;
    int result;
    LOG_TRACE("(%p, %d)", pCar, pCheck_around);
    NOT_IMPLEMENTED();
}

// Offset: 5768
// Size: 0x38
//IDA: int __usercall HasCarFallenOffWorld@<EAX>(tCar_spec *pCar@<EAX>)
int HasCarFallenOffWorld(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 5824
// Size: 0xfa
//IDA: void __cdecl CheckForBeingOutOfThisWorld()
void CheckForBeingOutOfThisWorld() {
    static tU32 the_time;
    static tU32 sLast_check;
    int time_step;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6076
// Size: 0xbe
//IDA: void __usercall CheckHornLocal(tCar_spec *pCar@<EAX>)
void CheckHornLocal(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 6268
// Size: 0xf9
//IDA: void __usercall CheckHorn3D(tCar_spec *pCar@<EAX>)
void CheckHorn3D(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 6520
// Size: 0x67
//IDA: void __cdecl CheckHorns()
void CheckHorns() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6624
// Size: 0x19d
//IDA: void __cdecl SetRecovery()
void SetRecovery() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7040
// Size: 0x48
//IDA: void __cdecl RecoverCar()
void RecoverCar() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7112
// Size: 0x2fd
//IDA: void __cdecl CheckMapRenderMove()
void CheckMapRenderMove() {
    int shift_down;
    int amount;
    float old_x;
    float old_y;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7880
// Size: 0x12c
//IDA: void __usercall ExplodeCar(tCar_spec *pCar@<EAX>)
void ExplodeCar(tCar_spec *pCar) {
    br_vector3 tv;
    br_vector3 pos;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 8180
// Size: 0x1c0
//IDA: void __usercall CheckRecoveryOfCars(tU32 pEndFrameTime@<EAX>)
void CheckRecoveryOfCars(tU32 pEndFrameTime) {
    int i;
    int time;
    char s[256];
    LOG_TRACE("(%d)", pEndFrameTime);
    NOT_IMPLEMENTED();
}

// Offset: 8628
// Size: 0x6b
//IDA: void __usercall LoseSomePSPowerups(int pNumber@<EAX>)
void LoseSomePSPowerups(int pNumber) {
    int index;
    LOG_TRACE("(%d)", pNumber);
    NOT_IMPLEMENTED();
}

// Offset: 8736
// Size: 0x6eb
//IDA: void __cdecl CheckOtherRacingKeys()
void CheckOtherRacingKeys() {
    int i;
    int j;
    int new_level;
    int old_level;
    char s[256];
    tU32 cost;
    br_scalar ts;
    br_vector3 tv;
    int flip_up_flag;
    tCar_spec *car;
    float bodywork_repair_amount;
    static tU32 total_repair_cost;
    static tS3_sound_tag sound_tag;
    static br_scalar amount;
    static int NeedToExpandBoundingBox;
    static int total_difference;
    static int stopped_repairing;
    int __block0__loop;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10508
// Size: 0x103
//IDA: int __cdecl CheckRecoverCost()
int CheckRecoverCost() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10768
// Size: 0x117
//IDA: void __usercall SortOutRecover(tCar_spec *pCar@<EAX>)
void SortOutRecover(tCar_spec *pCar) {
    int the_time;
    int val;
    static int old_time;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 11048
// Size: 0x73
//IDA: void __usercall SetFlipUpCar(tCar_spec *pCar@<EAX>)
void SetFlipUpCar(tCar_spec *pCar) {
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 11164
// Size: 0x569
//IDA: void __usercall FlipUpCar(tCar_spec *car@<EAX>)
void FlipUpCar(tCar_spec *car) {
    br_vector3 tv;
    br_vector3 dir;
    int new_pos;
    int i;
    int j;
    int l;
    int count;
    br_scalar dist;
    br_material *material;
    br_scalar t;
    LOG_TRACE("(%p)", car);
    NOT_IMPLEMENTED();
}

// Offset: 12552
// Size: 0x32
//IDA: void __usercall GetPowerup(int pNum@<EAX>)
void GetPowerup(int pNum) {
    LOG_TRACE("(%d)", pNum);
    NOT_IMPLEMENTED();
}

// Offset: 12604
// Size: 0x70
//IDA: void __usercall CheckSystemKeys(int pRacing@<EAX>)
void CheckSystemKeys(int pRacing) {
    tU32 start_menu_time;
    int i;
    LOG_TRACE("(%d)", pRacing);
    NOT_IMPLEMENTED();
}

// Offset: 12716
// Size: 0x18b
//IDA: void __cdecl CheckKevKeys()
void CheckKevKeys() {
    int i;
    tU32 *value;
    char s[128];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 13112
// Size: 0xbe
//IDA: void __cdecl BrakeInstantly()
void BrakeInstantly() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 13304
// Size: 0x355
//IDA: void __usercall PollCarControls(tU32 pTime_difference@<EAX>)
void PollCarControls(tU32 pTime_difference) {
    int decay_steering;
    int decay_speed;
    float decay_rate;
    tS32 joyX;
    tS32 joyY;
    tCar_controls keys;
    tJoystick joystick;
    tCar_spec *c;
    LOG_TRACE("(%d)", pTime_difference);
    NOT_IMPLEMENTED();
}

// Offset: 14160
// Size: 0x34e
//IDA: void __usercall PollCameraControls(tU32 pTime_difference@<EAX>)
void PollCameraControls(tU32 pTime_difference) {
    int flag;
    int left;
    int right;
    int swirl_mode;
    int up_and_down_mode;
    int going_up;
    static int last_swirl_mode;
    LOG_TRACE("(%d)", pTime_difference);
    NOT_IMPLEMENTED();
}

// Offset: 15008
// Size: 0x3e
//IDA: void __usercall SetFlag2(int i@<EAX>)
void SetFlag2(int i) {
    LOG_TRACE("(%d)", i);
    NOT_IMPLEMENTED();
}

// Offset: 15072
// Size: 0xa4
//IDA: void __cdecl ToggleFlying()
void ToggleFlying() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15236
// Size: 0x88
//IDA: void __cdecl ToggleInvulnerability()
void ToggleInvulnerability() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15372
// Size: 0x2c
//IDA: void __cdecl MoreTime()
void MoreTime() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15416
// Size: 0x2c
//IDA: void __cdecl MuchMoreTime()
void MuchMoreTime() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15460
// Size: 0x8b
//IDA: void __cdecl ToggleTimerFreeze()
void ToggleTimerFreeze() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15600
// Size: 0x2c
//IDA: void __cdecl EarnDosh()
void EarnDosh() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15644
// Size: 0x2c
//IDA: void __cdecl LoseDosh()
void LoseDosh() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15688
// Size: 0x12d
//IDA: void __cdecl ToggleMap()
void ToggleMap() {
    static int old_indent;
    static int was_in_cockpit;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 15992
// Size: 0x33
//IDA: int __cdecl HornBlowing()
int HornBlowing() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16044
// Size: 0xd7
//IDA: void __cdecl ToggleArrow()
void ToggleArrow() {
    static br_actor *old_actor;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16260
// Size: 0x2d
//IDA: int __cdecl GetRecoverVoucherCount()
int GetRecoverVoucherCount() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16308
// Size: 0x2e
//IDA: void __usercall AddVouchers(int pCount@<EAX>)
void AddVouchers(int pCount) {
    LOG_TRACE("(%d)", pCount);
    NOT_IMPLEMENTED();
}

// Offset: 16356
// Size: 0x2c
//IDA: void __cdecl ResetRecoveryVouchers()
void ResetRecoveryVouchers() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16400
// Size: 0xc2
//IDA: void __cdecl CycleCarTexturingLevel()
void CycleCarTexturingLevel() {
    tCar_texturing_level new_level;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16596
// Size: 0xca
//IDA: void __cdecl CycleWallTexturingLevel()
void CycleWallTexturingLevel() {
    tWall_texturing_level new_level;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16800
// Size: 0x9d
//IDA: void __cdecl CycleRoadTexturingLevel()
void CycleRoadTexturingLevel() {
    tRoad_texturing_level new_level;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 16960
// Size: 0xf6
//IDA: void __cdecl CycleYonFactor()
void CycleYonFactor() {
    br_scalar new_factor;
    char factor_str[5];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 17208
// Size: 0x2d
//IDA: void __usercall SetSoundDetailLevel(int pLevel@<EAX>)
void SetSoundDetailLevel(int pLevel) {
    LOG_TRACE("(%d)", pLevel);
    NOT_IMPLEMENTED();
}

// Offset: 17256
// Size: 0x41
//IDA: void __usercall ReallySetSoundDetailLevel(int pLevel@<EAX>)
void ReallySetSoundDetailLevel(int pLevel) {
    LOG_TRACE("(%d)", pLevel);
    NOT_IMPLEMENTED();
}

// Offset: 17324
// Size: 0x2d
//IDA: int __cdecl GetSoundDetailLevel()
int GetSoundDetailLevel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 17372
// Size: 0xd1
//IDA: void __cdecl CycleSoundDetailLevel()
void CycleSoundDetailLevel() {
    int new_level;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 17584
// Size: 0xa2
//IDA: void __cdecl CycleCarSimplificationLevel()
void CycleCarSimplificationLevel() {
    char *src;
    char *dst;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 17748
// Size: 0xc2
//IDA: void __cdecl ToggleAccessoryRendering()
void ToggleAccessoryRendering() {
    int on;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 17944
// Size: 0x9b
//IDA: void __cdecl ToggleSmoke()
void ToggleSmoke() {
    int on;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18100
// Size: 0x90
//IDA: void __usercall DrawSomeText2(tDR_font *pFont@<EAX>)
void DrawSomeText2(tDR_font *pFont) {
    int y;
    int i;
    char *txt[15];
    LOG_TRACE("(%p)", pFont);
    NOT_IMPLEMENTED();
}

// Offset: 18244
// Size: 0x68
//IDA: void __cdecl DrawSomeText()
void DrawSomeText() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18348
// Size: 0x2c
//IDA: void __cdecl SaySorryYouLittleBastard()
void SaySorryYouLittleBastard() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18392
// Size: 0x42
//IDA: void __cdecl UserSendMessage()
void UserSendMessage() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18460
// Size: 0x32f
//IDA: void __cdecl EnterUserMessage()
void EnterUserMessage() {
    static int last_key;
    static int about_to_die;
    static tU32 next_time;
    char *the_message;
    char *p;
    int len;
    int the_key;
    int abuse_num;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19276
// Size: 0x1b3
//IDA: void __cdecl DisplayUserMessage()
void DisplayUserMessage() {
    char *the_message;
    int len;
    tDR_font *font;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19712
// Size: 0x15b
//IDA: void __cdecl InitAbuseomatic()
void InitAbuseomatic() {
    char path[256];
    char s[256];
    FILE *f;
    int i;
    int len;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20060
// Size: 0x5e
//IDA: void __cdecl DisposeAbuseomatic()
void DisposeAbuseomatic() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

