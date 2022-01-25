#include "displays.h"

int gLast_fancy_index;
 // Suffix added to avoid duplicate symbol
int gLast_credit_headup__displays;
int gLast_time_credit_headup;
tDR_font *gCached_font;
br_font *gBR_fonts[4];
tQueued_headup gQueued_headups[4];
int gOld_times[10];
int gLast_fancy_headup;
tU32 gLast_time_earn_time;
tU32 gLast_centre_headup;
tU32 gLast_fancy_time;
int gQueued_headup_count;
tU32 gLast_earn_time;
tU32 gLast_time_credit_amount;
int gLast_credit_amount;
tHeadup gHeadups[15];
int gLaps_headup;
int gCar_kill_count_headup;
int gTimer_headup;
int gTime_awarded_headup;
int gPed_kill_count_headup;
int gDim_amount;
br_pixelmap *gHeadup_images[31];
int gNet_cash_headup;
int gNet_ped_headup;
int gCredits_lost_headup;
int gCredits_won_headup;

// Offset: 0
// Size: 0x38
//IDA: void __usercall GetTimerString(char *pStr@<EAX>, int pFudge_colon@<EDX>)
void GetTimerString(char *pStr, int pFudge_colon) {
    LOG_TRACE("(\"%s\", %d)", pStr, pFudge_colon);
    NOT_IMPLEMENTED();
}

// Offset: 56
// Size: 0x74
//IDA: void __cdecl InitHeadups()
void InitHeadups() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 172
// Size: 0x36
//IDA: void __usercall ClearHeadup(int pIndex@<EAX>)
void ClearHeadup(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 228
// Size: 0x6e
//IDA: void __usercall ClearHeadupSlot(int pSlot_index@<EAX>)
void ClearHeadupSlot(int pSlot_index) {
    int i;
    tHeadup *the_headup;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 340
// Size: 0xcc
//IDA: void __cdecl ClearHeadups()
void ClearHeadups() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 544
// Size: 0x4e
//IDA: int __usercall HeadupActive@<EAX>(int pIndex@<EAX>)
int HeadupActive(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 624
// Size: 0x196
//IDA: void __usercall DRPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void DRPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge) {
    int i;
    int x;
    int len;
    int chr;
    int ch_width;
    unsigned char *ch;
    LOG_TRACE("(%p, %d, %d, %p, \"%s\", %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);
    NOT_IMPLEMENTED();
}

// Offset: 1032
// Size: 0x226
//IDA: void __usercall DRPixelmapCleverText2(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, signed char *pText, int pRight_edge)
void DRPixelmapCleverText2(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, signed char *pText, int pRight_edge) {
    int i;
    int x;
    int len;
    int chr;
    int ch_width;
    unsigned char *ch;
    tDR_font *new_font;
    LOG_TRACE("(%p, %d, %d, %p, %p, %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);
    NOT_IMPLEMENTED();
}

// Offset: 1584
// Size: 0xf8
//IDA: void __usercall DeviouslyDimRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pKnock_out_corners)
void DeviouslyDimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pPixelmap, pLeft, pTop, pRight, pBottom, pKnock_out_corners);
    NOT_IMPLEMENTED();
}

// Offset: 1832
// Size: 0x1cd
//IDA: void __cdecl DimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners)
void DimRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pKnock_out_corners) {
    tU8 *ptr;
    tU8 *depth_table_ptr;
    tU8 *right_ptr;
    int x;
    int y;
    int line_skip;
    int width;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pPixelmap, pLeft, pTop, pRight, pBottom, pKnock_out_corners);
    NOT_IMPLEMENTED();
}

// Offset: 2296
// Size: 0x160
//IDA: void __cdecl DimAFewBits()
void DimAFewBits() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2648
// Size: 0x41
//IDA: void __cdecl KillOldestQueuedHeadup()
void KillOldestQueuedHeadup() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2716
// Size: 0x78
//IDA: void __usercall DubreyBar(int pX_index@<EAX>, int pY@<EDX>, int pColour@<EBX>)
void DubreyBar(int pX_index, int pY, int pColour) {
    int x;
    LOG_TRACE("(%d, %d, %d)", pX_index, pY, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 2836
// Size: 0x149
//IDA: void __usercall DoPSPowerHeadup(int pY@<EAX>, int pLevel@<EDX>, char *pName@<EBX>, int pBar_colour@<ECX>)
void DoPSPowerHeadup(int pY, int pLevel, char *pName, int pBar_colour) {
    char s[16];
    int i;
    LOG_TRACE("(%d, %d, \"%s\", %d)", pY, pLevel, pName, pBar_colour);
    NOT_IMPLEMENTED();
}

// Offset: 3168
// Size: 0xa3
//IDA: void __cdecl DoPSPowerupHeadups()
void DoPSPowerupHeadups() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3332
// Size: 0x924
//IDA: void __usercall DoHeadups(tU32 pThe_time@<EAX>)
void DoHeadups(tU32 pThe_time) {
    int i;
    int x_offset;
    int y_offset;
    tHeadup *the_headup;
    int time_factor;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 5672
// Size: 0x88
//IDA: int __usercall FindAHeadupHoleWoofBarkSoundsABitRude@<EAX>(int pSlot_index@<EAX>)
int FindAHeadupHoleWoofBarkSoundsABitRude(int pSlot_index) {
    int i;
    int empty_one;
    tHeadup *the_headup;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 5808
// Size: 0x90
//IDA: int __usercall DRTextWidth@<EAX>(tDR_font *pFont@<EAX>, char *pText@<EDX>)
int DRTextWidth(tDR_font *pFont, char *pText) {
    int i;
    int len;
    int result;
    char *c;
    LOG_TRACE("(%p, \"%s\")", pFont, pText);
    NOT_IMPLEMENTED();
}

// Offset: 5952
// Size: 0xce
//IDA: int __usercall DRTextCleverWidth@<EAX>(tDR_font *pFont@<EAX>, signed char *pText@<EDX>)
int DRTextCleverWidth(tDR_font *pFont, signed char *pText) {
    int i;
    int len;
    int result;
    unsigned char *c;
    LOG_TRACE("(%p, %p)", pFont, pText);
    NOT_IMPLEMENTED();
}

// Offset: 6160
// Size: 0x62
//IDA: void __usercall DRPixelmapCentredText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText)
void DRPixelmapCentredText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText) {
    int width_over_2;
    LOG_TRACE("(%p, %d, %d, %p, \"%s\")", pPixelmap, pX, pY, pFont, pText);
    NOT_IMPLEMENTED();
}

// Offset: 6260
// Size: 0x4d
//IDA: int __usercall IsHeadupTextClever@<EAX>(signed char *pText@<EAX>)
int IsHeadupTextClever(signed char *pText) {
    LOG_TRACE("(%p)", pText);
    NOT_IMPLEMENTED();
}

// Offset: 6340
// Size: 0x232
//IDA: int __usercall MungeHeadupWidth@<EAX>(tHeadup *pHeadup@<EAX>)
int MungeHeadupWidth(tHeadup *pHeadup) {
    int width;
    LOG_TRACE("(%p)", pHeadup);
    NOT_IMPLEMENTED();
}

// Offset: 6904
// Size: 0x25d
//IDA: int __usercall NewTextHeadupSlot2@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pFont_index@<ECX>, char *pText, int pQueue_it)
int NewTextHeadupSlot2(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char *pText, int pQueue_it) {
    int index;
    tHeadup *the_headup;
    tHeadup_slot *headup_slot;
    tU32 time;
    LOG_TRACE("(%d, %d, %d, %d, \"%s\", %d)", pSlot_index, pFlash_rate, pLifetime, pFont_index, pText, pQueue_it);
    NOT_IMPLEMENTED();
}

// Offset: 7512
// Size: 0x47
//IDA: int __usercall NewTextHeadupSlot@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pFont_index@<ECX>, char *pText)
int NewTextHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pFont_index, char *pText) {
    LOG_TRACE("(%d, %d, %d, %d, \"%s\")", pSlot_index, pFlash_rate, pLifetime, pFont_index, pText);
    NOT_IMPLEMENTED();
}

// Offset: 7584
// Size: 0x1f0
//IDA: int __usercall NewImageHeadupSlot@<EAX>(int pSlot_index@<EAX>, int pFlash_rate@<EDX>, int pLifetime@<EBX>, int pImage_index@<ECX>)
int NewImageHeadupSlot(int pSlot_index, int pFlash_rate, int pLifetime, int pImage_index) {
    int index;
    tHeadup *the_headup;
    tHeadup_slot *headup_slot;
    LOG_TRACE("(%d, %d, %d, %d)", pSlot_index, pFlash_rate, pLifetime, pImage_index);
    NOT_IMPLEMENTED();
}

// Offset: 8080
// Size: 0x11c
//IDA: void __usercall DoFancyHeadup(int pIndex@<EAX>)
void DoFancyHeadup(int pIndex) {
    tU32 the_time;
    tHeadup *the_headup;
    int temp_ref;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8364
// Size: 0x197
//IDA: void __cdecl AdjustHeadups()
void AdjustHeadups() {
    int i;
    int delta_x;
    int delta_y;
    tHeadup *the_headup;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8772
// Size: 0x6b
//IDA: void __usercall MoveHeadupTo(int pHeadup_index@<EAX>, int pNew_x@<EDX>, int pNew_y@<EBX>)
void MoveHeadupTo(int pHeadup_index, int pNew_x, int pNew_y) {
    int delta_x;
    tHeadup *the_headup;
    LOG_TRACE("(%d, %d, %d)", pHeadup_index, pNew_x, pNew_y);
    NOT_IMPLEMENTED();
}

// Offset: 8880
// Size: 0x53
//IDA: void __usercall ChangeHeadupText(int pHeadup_index@<EAX>, char *pNew_text@<EDX>)
void ChangeHeadupText(int pHeadup_index, char *pNew_text) {
    tHeadup *the_headup;
    LOG_TRACE("(%d, \"%s\")", pHeadup_index, pNew_text);
    NOT_IMPLEMENTED();
}

// Offset: 8964
// Size: 0xc7
//IDA: void __usercall ChangeHeadupImage(int pHeadup_index@<EAX>, int pNew_image@<EDX>)
void ChangeHeadupImage(int pHeadup_index, int pNew_image) {
    tHeadup *the_headup;
    LOG_TRACE("(%d, %d)", pHeadup_index, pNew_image);
    NOT_IMPLEMENTED();
}

// Offset: 9164
// Size: 0x45
//IDA: void __usercall ChangeHeadupColour(int pHeadup_index@<EAX>, int pNew_colour@<EDX>)
void ChangeHeadupColour(int pHeadup_index, int pNew_colour) {
    LOG_TRACE("(%d, %d)", pHeadup_index, pNew_colour);
    NOT_IMPLEMENTED();
}

// Offset: 9236
// Size: 0x1ab
//IDA: void __usercall DoDamageScreen(tU32 pThe_time@<EAX>)
void DoDamageScreen(tU32 pThe_time) {
    int i;
    int y_pitch;
    int the_step;
    int the_wobble_x;
    int the_wobble_y;
    br_pixelmap *the_image;
    tDamage_unit *the_damage;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 9664
// Size: 0x194
//IDA: void __cdecl PoshDrawLine(float pAngle, br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour)
void PoshDrawLine(float pAngle, br_pixelmap *pDestn, int pX1, int pY1, int pX2, int pY2, int pColour) {
    LOG_TRACE("(%f, %p, %d, %d, %d, %d, %d)", pAngle, pDestn, pX1, pY1, pX2, pY2, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 10068
// Size: 0xc3d
//IDA: void __usercall DoInstruments(tU32 pThe_time@<EAX>)
void DoInstruments(tU32 pThe_time) {
    br_pixelmap *speedo_image;
    br_pixelmap *tacho_image;
    int the_wobble_x;
    int the_wobble_y;
    int gear;
    double the_angle;
    double the_angle2;
    double sin_angle;
    double cos_angle;
    double speed_mph;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 13204
// Size: 0x182
//IDA: void __usercall DoSteeringWheel(tU32 pThe_time@<EAX>)
void DoSteeringWheel(tU32 pThe_time) {
    br_pixelmap *hands_image;
    int hands_index;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 13592
// Size: 0x22d
//IDA: void __cdecl ChangingView()
void ChangingView() {
    tU32 the_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 14152
// Size: 0x1bd
//IDA: void __usercall EarnCredits2(int pAmount@<EAX>, char *pPrefix_text@<EDX>)
void EarnCredits2(int pAmount, char *pPrefix_text) {
    char s[256];
    int original_amount;
    tU32 the_time;
    LOG_TRACE("(%d, \"%s\")", pAmount, pPrefix_text);
    NOT_IMPLEMENTED();
}

// Offset: 14600
// Size: 0x32
//IDA: void __usercall EarnCredits(int pAmount@<EAX>)
void EarnCredits(int pAmount) {
    LOG_TRACE("(%d)", pAmount);
    NOT_IMPLEMENTED();
}

// Offset: 14652
// Size: 0x67
//IDA: int __usercall SpendCredits@<EAX>(int pAmount@<EAX>)
int SpendCredits(int pAmount) {
    int amount;
    LOG_TRACE("(%d)", pAmount);
    NOT_IMPLEMENTED();
}

// Offset: 14756
// Size: 0x117
//IDA: void __usercall AwardTime(tU32 pTime@<EAX>)
void AwardTime(tU32 pTime) {
    char s[256];
    tU32 original_amount;
    tU32 the_time;
    int i;
    LOG_TRACE("(%d)", pTime);
    NOT_IMPLEMENTED();
}

// Offset: 15036
// Size: 0xaa
//IDA: void __usercall DrawRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour)
void DrawRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pPixelmap, pLeft, pTop, pRight, pBottom, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 15208
// Size: 0xb2
//IDA: void __usercall DrawRRectangle(br_pixelmap *pPixelmap@<EAX>, int pLeft@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour)
void DrawRRectangle(br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pColour) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", pPixelmap, pLeft, pTop, pRight, pBottom, pColour);
    NOT_IMPLEMENTED();
}

// Offset: 15388
// Size: 0x26c
//IDA: void __usercall OoerrIveGotTextInMeBoxMissus(int pFont_index@<EAX>, char *pText@<EDX>, br_pixelmap *pPixelmap@<EBX>, int pLeft@<ECX>, int pTop, int pRight, int pBottom, int pCentred)
void OoerrIveGotTextInMeBoxMissus(int pFont_index, char *pText, br_pixelmap *pPixelmap, int pLeft, int pTop, int pRight, int pBottom, int pCentred) {
    tDR_font *font;
    int width;
    int current_width;
    int i;
    int centre;
    int line_char_index;
    int input_str_index;
    int start_line;
    int current_y;
    int font_needed_loading;
    char line[256];
    LOG_TRACE("(%d, \"%s\", %p, %d, %d, %d, %d, %d)", pFont_index, pText, pPixelmap, pLeft, pTop, pRight, pBottom, pCentred);
    NOT_IMPLEMENTED();
}

// Offset: 16008
// Size: 0x75
//IDA: void __usercall TransBrPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, br_uint_32 pColour@<ECX>, br_font *pFont, signed char *pText)
void TransBrPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, br_uint_32 pColour, br_font *pFont, signed char *pText) {
    int i;
    int len;
    LOG_TRACE("(%p, %d, %d, %d, %p, %p)", pPixelmap, pX, pY, pColour, pFont, pText);
    NOT_IMPLEMENTED();
}

// Offset: 16128
// Size: 0xfa
//IDA: void __usercall TransDRPixelmapText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void TransDRPixelmapText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge) {
    LOG_TRACE("(%p, %d, %d, %p, \"%s\", %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);
    NOT_IMPLEMENTED();
}

// Offset: 16380
// Size: 0xfa
//IDA: void __usercall TransDRPixelmapCleverText(br_pixelmap *pPixelmap@<EAX>, int pX@<EDX>, int pY@<EBX>, tDR_font *pFont@<ECX>, char *pText, int pRight_edge)
void TransDRPixelmapCleverText(br_pixelmap *pPixelmap, int pX, int pY, tDR_font *pFont, char *pText, int pRight_edge) {
    LOG_TRACE("(%p, %d, %d, %p, \"%s\", %d)", pPixelmap, pX, pY, pFont, pText, pRight_edge);
    NOT_IMPLEMENTED();
}

