#ifndef _DISPLAYS_H_
#define _DISPLAYS_H_

#include "dr_types.h"
#include "br_types.h"

extern int gLast_fancy_index; // addr: 0000E8E4
extern int gLast_credit_headup__displays; // addr: 0000E8E8 // suffix added to avoid duplicate symbol
extern int gLast_time_credit_headup; // addr: 0000E8EC
extern tDR_font *gCached_font; // addr: 0000E8F0
extern br_font *gBR_fonts[4]; // addr: 000283C0
extern tQueued_headup gQueued_headups[4]; // addr: 000283D0
extern int gOld_times[10]; // addr: 00028800
extern int gLast_fancy_headup; // addr: 00028828
extern tU32 gLast_time_earn_time; // addr: 0002882C
extern tU32 gLast_centre_headup; // addr: 00028830
extern tU32 gLast_fancy_time; // addr: 00028834
extern int gQueued_headup_count; // addr: 00028838
extern tU32 gLast_earn_time; // addr: 0002883C
extern tU32 gLast_time_credit_amount; // addr: 00028840
extern int gLast_credit_amount; // addr: 00028844
extern tHeadup gHeadups[15]; // addr: 00028848
extern int gLaps_headup; // addr: 00029BBC
extern int gCar_kill_count_headup; // addr: 00029BC0
extern int gTimer_headup; // addr: 00029BC4
extern int gTime_awarded_headup; // addr: 00029BC8
extern int gPed_kill_count_headup; // addr: 00029BCC
extern int gDim_amount; // addr: 00029BD0
extern br_pixelmap *gHeadup_images[31]; // addr: 00029BD4
extern int gNet_cash_headup; // addr: 00029C50
extern int gNet_ped_headup; // addr: 00029C54
extern int gCredits_lost_headup; // addr: 00029C58
extern int gCredits_won_headup; // addr: 00029C5C

// Offset: 0
// Size: 0x38
//IDA: void __usercall GetTimerString(char *pStr@<EAX>, int pFudge_colon@<EDX>)
void GetTimerString(char *pStr, int pFudge_colon);

// Offset: 56
// Size: 0x74
//IDA: void __cdecl InitHeadups()
void InitHeadups();

// Offset: 172
// Size: 0x36
//IDA: void __usercall ClearHeadup(int pIndex@<EAX>)
void ClearHeadup(int pIndex);

// Offset: 228
// Size: 0x6e
//IDA: void __usercall ClearHeadupSlot(int pSlot_index@<EAX>)
void ClearHeadupSlot(int pSlot_index);

// Offset: 340
// Size: 0xcc
//IDA: void __cdecl ClearHeadups()
void ClearHeadups();

// Offset: 544
// Size: 0x4e
//IDA: int __usercall HeadupActive@<EAX>(int pIndex@<EAX>)
int HeadupActive(int pIndex);

// Offset: 624
// Size: 0x196
//IDA: void __usercall DRPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void DRPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge);

// Offset: 1032
// Size: 0x226
//IDA: void __usercall DRPixelmapCleverText2(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, signed char *pText, int pRight_edge)
void DRPixelmapCleverText2(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, signed char *pText, int pRight_edge);

// Offset: 1584
// Size: 0xf8
//IDA: void __usercall DeviouslyDimRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pKnock_out_corners)
void DeviouslyDimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners);

// Offset: 1832
// Size: 0x1cd
//IDA: void __cdecl DimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners)
void DimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners);

// Offset: 2296
// Size: 0x160
//IDA: void __cdecl DimAFewBits()
void DimAFewBits();

// Offset: 2648
// Size: 0x41
//IDA: void __cdecl KillOldestQueuedHeadup()
void KillOldestQueuedHeadup();

// Offset: 2716
// Size: 0x78
//IDA: void __usercall DubreyBar(int pX_index@<EAX>, int pY@<EDX>, int pColour@<EBX>)
void DubreyBar(int pX_index, int pY, int pColour);

// Offset: 2836
// Size: 0x149
//IDA: void __usercall DoPSPowerHeadup(int pY@<EAX>, int pLevel@<EDX>, char *pName@<EBX>, int pBar_colour@<ECX>)
void DoPSPowerHeadup(int pY, int pLevel, char *pName, int pBar_colour);

// Offset: 3168
// Size: 0xa3
//IDA: void __cdecl DoPSPowerupHeadups()
void DoPSPowerupHeadups();

// Offset: 3332
// Size: 0x924
//IDA: void __usercall DoHeadups(tU32 pThe_time@<EAX>)
void DoHeadups(tU32 pThe_time);

// Offset: 5672
// Size: 0x88
//IDA: int __usercall FindAHeadupHoleWoofBarkSoundsABitRude@<EAX>(int pSlot_index@<EAX>)
int FindAHeadupHoleWoofBarkSoundsABitRude(int pSlot_index);

// Offset: 5808
// Size: 0x90
//IDA: int __usercall DRTextWidth@<EAX>(tDR_font *pFont@<EAX>, char *pText@<EDX>)
int DRTextWidth(tDR_font *pFont, char *pText);

// Offset: 5952
// Size: 0xce
//IDA: int __usercall DRTextCleverWidth@<EAX>(tDR_font *pFont@<EAX>, signed char *pText@<EDX>)
int DRTextCleverWidth(tDR_font *pFont, signed char *pText);

// Offset: 6160
// Size: 0x62
//IDA: void __usercall DRPixelmapCentredText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText)
void DRPixelmapCentredText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText);

// Offset: 6260
// Size: 0x4d
//IDA: int __usercall IsHeadupTextClever@<EAX>(signed char *pText@<EAX>)
int IsHeadupTextClever(signed char *pText);

// Offset: 6340
// Size: 0x232
//IDA: int __usercall MungeHeadupWidth@<EAX>(tHeadup *pHeadup@<EAX>)
int MungeHeadupWidth(tHeadup *pHeadup);

// Offset: 6904
// Size: 0x25d
//IDA: int __usercall NewTextHeadupSlot2@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pFont_index@<ECX>, char *pText, int pQueue_it)
int NewTextHeadupSlot2(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char *pText, int pQueue_it);

// Offset: 7512
// Size: 0x47
//IDA: int __usercall NewTextHeadupSlot@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pFont_index@<ECX>, char *pText)
int NewTextHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char *pText);

// Offset: 7584
// Size: 0x1f0
//IDA: int __usercall NewImageHeadupSlot@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pImage_index@<ECX>)
int NewImageHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pImage_index);

// Offset: 8080
// Size: 0x11c
//IDA: void __usercall DoFancyHeadup(int pIndex@<EAX>)
void DoFancyHeadup(int pIndex);

// Offset: 8364
// Size: 0x197
//IDA: void __cdecl AdjustHeadups()
void AdjustHeadups();

// Offset: 8772
// Size: 0x6b
//IDA: void __usercall MoveHeadupTo(int pHeadup_index@<EAX>, int pNew_x@<EDX>, int pNew_y@<EBX>)
void MoveHeadupTo(int pHeadup_index, int pNew_x, int pNew_y);

// Offset: 8880
// Size: 0x53
//IDA: void __usercall ChangeHeadupText(int pHeadup_index@<EAX>, char *pNew_text@<EDX>)
void ChangeHeadupText(int pHeadup_index, char *pNew_text);

// Offset: 8964
// Size: 0xc7
//IDA: void __usercall ChangeHeadupImage(int pHeadup_index@<EAX>, int pNew_image@<EDX>)
void ChangeHeadupImage(int pHeadup_index, int pNew_image);

// Offset: 9164
// Size: 0x45
//IDA: void __usercall ChangeHeadupColour(int pHeadup_index@<EAX>, int pNew_colour@<EDX>)
void ChangeHeadupColour(int pHeadup_index, int pNew_colour);

// Offset: 9236
// Size: 0x1ab
//IDA: void __usercall DoDamageScreen(tU32 pThe_time@<EAX>)
void DoDamageScreen(tU32 pThe_time);

// Offset: 9664
// Size: 0x194
//IDA: void __cdecl PoshDrawLine(float pAngle, br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour)
void PoshDrawLine(float pAngle, br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour);

// Offset: 10068
// Size: 0xc3d
//IDA: void __usercall DoInstruments(tU32 pThe_time@<EAX>)
void DoInstruments(tU32 pThe_time);

// Offset: 13204
// Size: 0x182
//IDA: void __usercall DoSteeringWheel(tU32 pThe_time@<EAX>)
void DoSteeringWheel(tU32 pThe_time);

// Offset: 13592
// Size: 0x22d
//IDA: void __cdecl ChangingView()
void ChangingView();

// Offset: 14152
// Size: 0x1bd
//IDA: void __usercall EarnCredits2(int pAmount@<EAX>, char *pPrefix_text@<EDX>)
void EarnCredits2(int pAmount, char *pPrefix_text);

// Offset: 14600
// Size: 0x32
//IDA: void __usercall EarnCredits(int pAmount@<EAX>)
void EarnCredits(int pAmount);

// Offset: 14652
// Size: 0x67
//IDA: int __usercall SpendCredits@<EAX>(int pAmount@<EAX>)
int SpendCredits(int pAmount);

// Offset: 14756
// Size: 0x117
//IDA: void __usercall AwardTime(tU32 pTime@<EAX>)
void AwardTime(tU32 pTime);

// Offset: 15036
// Size: 0xaa
//IDA: void __usercall DrawRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour)
void DrawRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour);

// Offset: 15208
// Size: 0xb2
//IDA: void __usercall DrawRRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour)
void DrawRRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour);

// Offset: 15388
// Size: 0x26c
//IDA: void __usercall OoerrIveGotTextInMeBoxMissus(int pFont_index@<EAX>, char *pText@<EDX>, br_pixelmap *pPixelmap@<EBX>, int pLeft@<ECX>, int pTop, int pRight, int pBottom, int pCentred)
void OoerrIveGotTextInMeBoxMissus(int pFont_index, char *pText, br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pCentred);

// Offset: 16008
// Size: 0x75
//IDA: void __usercall TransBrPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, br_uint_32 pColour@<ECX>, br_font *pFont, signed char *pText)
void TransBrPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, br_uint_32 pColour, br_font *pFont, signed char *pText);

// Offset: 16128
// Size: 0xfa
//IDA: void __usercall TransDRPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void TransDRPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge);

// Offset: 16380
// Size: 0xfa
//IDA: void __usercall TransDRPixelmapCleverText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void TransDRPixelmapCleverText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge);

#endif
