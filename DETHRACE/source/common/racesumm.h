#ifndef _RACESUMM_H_
#define _RACESUMM_H_

#include "dr_types.h"
#include "br_types.h"

extern int gPlayer_lookup[6]; // addr: 0003BF70
extern tMouse_area gOld_back_button; // addr: 0003BF88
extern tWreck_info gWreck_array[30]; // addr: 0003BFB8
extern br_actor *gWreck_root; // addr: 0003CE40
extern br_actor *gWreck_camera; // addr: 0003CE44
extern tU32 gWreck_start_zoom; // addr: 0003CE48
extern tU32 gWreck_gallery_start; // addr: 0003CE4C
extern float gTemp_rank_increase; // addr: 0003CE50
extern float gRank_per_ms; // addr: 0003CE54
extern tU32 gLast_wreck_draw; // addr: 0003CE58
extern tS3_sound_tag gSumm_sound; // addr: 0003CE5C
extern float gCredits_per_ms; // addr: 0003CE60
extern tMouse_area *gBack_button_ptr; // addr: 0003CE64
extern tU32 gSummary_start; // addr: 0003CE68
extern br_pixelmap *gWreck_z_buffer; // addr: 0003CE6C
extern br_pixelmap *gWreck_render_area; // addr: 0003CE70
extern int gWreck_selected; // addr: 0003CE74
extern int gWreck_zoom_out; // addr: 0003CE78
extern br_pixelmap *gChrome_font; // addr: 0003CE7C
extern int gWreck_zoom_in; // addr: 0003CE80
extern int gTemp_credits; // addr: 0003CE84
extern int gUser_interacted; // addr: 0003CE88
extern int gWreck_count; // addr: 0003CE8C
extern int gRank_etc_munged; // addr: 0003CE90
extern int gRank_increase; // addr: 0003CE94
extern int gTemp_earned; // addr: 0003CE98
extern int gTemp_rank; // addr: 0003CE9C
extern int gWreck_zoomed_in; // addr: 0003CEA0
extern int gDone_initial; // addr: 0003CEA4
extern int gTemp_lost; // addr: 0003CEA8

// Offset: 0
// Size: 0x12e
//IDA: void __usercall MungeRankEtc(tProgram_state *pThe_state@<EAX>)
void MungeRankEtc(tProgram_state *pThe_state);

// Offset: 304
// Size: 0x60
//IDA: void __cdecl CalcRankIncrease()
void CalcRankIncrease();

// Offset: 400
// Size: 0x51
//IDA: int __usercall RaceSummaryDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int RaceSummaryDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 484
// Size: 0xa6
//IDA: void __usercall DrawInBox(int pBox_left@<EAX>, int pText_left@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour, int pAmount)
void DrawInBox(int pBox_left, int pText_left, int pTop, int pRight, int pBottom, int pColour, int pAmount);

// Offset: 652
// Size: 0xdc
//IDA: void __usercall DrawChromeNumber(int pLeft_1@<EAX>, int pLeft_2@<EDX>, int pPitch@<EBX>, int pTop@<ECX>, int pAmount)
void DrawChromeNumber(int pLeft_1, int pLeft_2, int pPitch, int pTop, int pAmount);

// Offset: 872
// Size: 0x25c
//IDA: void __cdecl DrawSummaryItems()
void DrawSummaryItems();

// Offset: 1476
// Size: 0x7f
//IDA: void __usercall RampUpRate(float *pRate@<EAX>, tU32 pTime@<EDX>)
void RampUpRate(float *pRate, tU32 pTime);

// Offset: 1604
// Size: 0x2eb
//IDA: void __usercall DrawSummary(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawSummary(int pCurrent_choice, int pCurrent_mode);

// Offset: 2352
// Size: 0x31
//IDA: void __cdecl StartSummary()
void StartSummary();

// Offset: 2404
// Size: 0x56
//IDA: void __cdecl SetUpTemps()
void SetUpTemps();

// Offset: 2492
// Size: 0x4e
//IDA: int __usercall Summ1GoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int Summ1GoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 2572
// Size: 0x144
//IDA: int __usercall SummCheckGameOver@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SummCheckGameOver(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 2896
// Size: 0x120
//IDA: tSO_result __cdecl DoEndRaceSummary1()
tSO_result DoEndRaceSummary1();

// Offset: 3184
// Size: 0xa5
//IDA: void __usercall PrepareBoundingRadius(br_model *model@<EAX>)
// Suffix added to avoid duplicate symbol
void PrepareBoundingRadius__racesumm(br_model *model);

// Offset: 3352
// Size: 0x3eb
//IDA: void __cdecl BuildWrecks()
void BuildWrecks();

// Offset: 4356
// Size: 0x181
//IDA: void __cdecl DisposeWrecks()
void DisposeWrecks();

// Offset: 4744
// Size: 0xb9
//IDA: int __usercall MatrixIsIdentity@<EAX>(br_matrix34 *pMat@<EAX>)
int MatrixIsIdentity(br_matrix34 *pMat);

// Offset: 4932
// Size: 0x193
//IDA: void __usercall SpinWrecks(tU32 pFrame_period@<EAX>)
void SpinWrecks(tU32 pFrame_period);

// Offset: 5336
// Size: 0x8f
//IDA: void __usercall ZoomInTo(int pIndex@<EAX>, int *pCurrent_choice@<EDX>, int *pCurrent_mode@<EBX>)
void ZoomInTo(int pIndex, int *pCurrent_choice, int *pCurrent_mode);

// Offset: 5480
// Size: 0xbd
//IDA: void __usercall ZoomOutTo(int pIndex@<EAX>, int *pCurrent_choice@<EDX>, int *pCurrent_mode@<EBX>)
void ZoomOutTo(int pIndex, int *pCurrent_choice, int *pCurrent_mode);

// Offset: 5672
// Size: 0x66
//IDA: int __cdecl WreckPick(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pNear, br_scalar pFar, void *pArg)
int WreckPick(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pNear, br_scalar pFar, void *pArg);

// Offset: 5776
// Size: 0x194
//IDA: int __usercall CastSelectionRay@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CastSelectionRay(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 6180
// Size: 0xa7
//IDA: int __usercall DamageScrnExit@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnExit(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 6348
// Size: 0x9b1
//IDA: void __usercall DamageScrnDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DamageScrnDraw(int pCurrent_choice, int pCurrent_mode);

// Offset: 8832
// Size: 0x10c
//IDA: int __usercall DamageScrnLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnLeft(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9100
// Size: 0x113
//IDA: int __usercall DamageScrnRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnRight(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9376
// Size: 0x1ac
//IDA: int __usercall DamageScrnUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnUp(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9804
// Size: 0x1d6
//IDA: int __usercall DamageScrnDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnDown(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 10276
// Size: 0xb0
//IDA: int __usercall DamageScrnGoHead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnGoHead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 10452
// Size: 0x102
//IDA: int __usercall ClickDamage@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int ClickDamage(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 10712
// Size: 0x42
//IDA: int __usercall DamageScrnDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int DamageScrnDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 10780
// Size: 0x11e
//IDA: tSO_result __cdecl DoEndRaceSummary2()
tSO_result DoEndRaceSummary2();

// Offset: 11068
// Size: 0x5c
//IDA: void __usercall DrawAnItem(int pX@<EAX>, int pY_index@<EDX>, int pFont_index@<EBX>, char *pText@<ECX>)
// Suffix added to avoid duplicate symbol
void DrawAnItem__racesumm(int pX, int pY_index, int pFont_index, char *pText);

// Offset: 11160
// Size: 0x60
//IDA: void __usercall DrawColumnHeading(int pStr_index@<EAX>, int pX@<EDX>)
// Suffix added to avoid duplicate symbol
void DrawColumnHeading__racesumm(int pStr_index, int pX);

// Offset: 11256
// Size: 0x4a
//IDA: int __usercall SortScores@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortScores(void *pFirst_one, void *pSecond_one);

// Offset: 11332
// Size: 0x3c
//IDA: void __cdecl SortGameScores()
void SortGameScores();

// Offset: 11392
// Size: 0x2c5
//IDA: void __usercall NetSumDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void NetSumDraw(int pCurrent_choice, int pCurrent_mode);

// Offset: 12104
// Size: 0xbc
//IDA: void __cdecl DoNetRaceSummary()
void DoNetRaceSummary();

// Offset: 12292
// Size: 0xe3
//IDA: tSO_result __usercall DoEndRaceSummary@<EAX>(int *pFirst_summary_done@<EAX>, tRace_result pRace_result@<EDX>)
tSO_result DoEndRaceSummary(int *pFirst_summary_done, tRace_result pRace_result);

#endif
