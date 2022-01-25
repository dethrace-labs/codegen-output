#include "racesumm.h"

int gPlayer_lookup[6];
tMouse_area gOld_back_button;
tWreck_info gWreck_array[30];
br_actor *gWreck_root;
br_actor *gWreck_camera;
tU32 gWreck_start_zoom;
tU32 gWreck_gallery_start;
float gTemp_rank_increase;
float gRank_per_ms;
tU32 gLast_wreck_draw;
tS3_sound_tag gSumm_sound;
float gCredits_per_ms;
tMouse_area *gBack_button_ptr;
tU32 gSummary_start;
br_pixelmap *gWreck_z_buffer;
br_pixelmap *gWreck_render_area;
int gWreck_selected;
int gWreck_zoom_out;
br_pixelmap *gChrome_font;
int gWreck_zoom_in;
int gTemp_credits;
int gUser_interacted;
int gWreck_count;
int gRank_etc_munged;
int gRank_increase;
int gTemp_earned;
int gTemp_rank;
int gWreck_zoomed_in;
int gDone_initial;
int gTemp_lost;

// Offset: 0
// Size: 0x12e
//IDA: void __usercall MungeRankEtc(tProgram_state *pThe_state@<EAX>)
void MungeRankEtc(tProgram_state *pThe_state) {
    int i;
    int not_done_yet;
    LOG_TRACE("(%p)", pThe_state);
    NOT_IMPLEMENTED();
}

// Offset: 304
// Size: 0x60
//IDA: void __cdecl CalcRankIncrease()
void CalcRankIncrease() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 400
// Size: 0x51
//IDA: int __usercall RaceSummaryDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int RaceSummaryDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 484
// Size: 0xa6
//IDA: void __usercall DrawInBox(int pBox_left@<EAX>, int pText_left@<EDX>, int pTop@<EBX>, int pRight@<ECX>, int pBottom, int pColour, int pAmount)
void DrawInBox(int pBox_left, int pText_left, int pTop, int pRight, int pBottom, int pColour, int pAmount) {
    LOG_TRACE("(%d, %d, %d, %d, %d, %d, %d)", pBox_left, pText_left, pTop, pRight, pBottom, pColour, pAmount);
    NOT_IMPLEMENTED();
}

// Offset: 652
// Size: 0xdc
//IDA: void __usercall DrawChromeNumber(int pLeft_1@<EAX>, int pLeft_2@<EDX>, int pPitch@<EBX>, int pTop@<ECX>, int pAmount)
void DrawChromeNumber(int pLeft_1, int pLeft_2, int pPitch, int pTop, int pAmount) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pLeft_1, pLeft_2, pPitch, pTop, pAmount);
    NOT_IMPLEMENTED();
}

// Offset: 872
// Size: 0x25c
//IDA: void __cdecl DrawSummaryItems()
void DrawSummaryItems() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1476
// Size: 0x7f
//IDA: void __usercall RampUpRate(float *pRate@<EAX>, tU32 pTime@<EDX>)
void RampUpRate(float *pRate, tU32 pTime) {
    LOG_TRACE("(%p, %d)", pRate, pTime);
    NOT_IMPLEMENTED();
}

// Offset: 1604
// Size: 0x2eb
//IDA: void __usercall DrawSummary(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawSummary(int pCurrent_choice, int pCurrent_mode) {
    tU32 the_time;
    static tU32 last_time;
    static tU32 last_change_time;
    int credit_delta;
    float old_temp_increase;
    float rank_delta;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 2352
// Size: 0x31
//IDA: void __cdecl StartSummary()
void StartSummary() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2404
// Size: 0x56
//IDA: void __cdecl SetUpTemps()
void SetUpTemps() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2492
// Size: 0x4e
//IDA: int __usercall Summ1GoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int Summ1GoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 2572
// Size: 0x144
//IDA: int __usercall SummCheckGameOver@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SummCheckGameOver(int *pCurrent_choice, int *pCurrent_mode) {
    int i;
    tS3_sound_tag sound_tag;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 2896
// Size: 0x120
//IDA: tSO_result __cdecl DoEndRaceSummary1()
tSO_result DoEndRaceSummary1() {
    static tFlicette flicker_on[1];
    static tFlicette flicker_off[1];
    static tFlicette push[1];
    static tMouse_area mouse_areas[1];
    static tInterface_spec interface_spec;
    int result;
    int completed_already;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3184
// Size: 0xa5
//IDA: void __usercall PrepareBoundingRadius(br_model *model@<EAX>)
// Suffix added to avoid duplicate symbol
void PrepareBoundingRadius__racesumm(br_model *model) {
    float d;
    float max;
    int v;
    br_vertex *vp;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 3352
// Size: 0x3eb
//IDA: void __cdecl BuildWrecks()
void BuildWrecks() {
    int cat;
    int i;
    int position;
    int car_count;
    br_actor *this_car;
    tCar_spec *the_car;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4356
// Size: 0x181
//IDA: void __cdecl DisposeWrecks()
void DisposeWrecks() {
    int cat;
    int i;
    int position;
    int car_count;
    br_actor *this_car;
    tCar_spec *the_car;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4744
// Size: 0xb9
//IDA: int __usercall MatrixIsIdentity@<EAX>(br_matrix34 *pMat@<EAX>)
int MatrixIsIdentity(br_matrix34 *pMat) {
    LOG_TRACE("(%p)", pMat);
    NOT_IMPLEMENTED();
}

// Offset: 4932
// Size: 0x193
//IDA: void __usercall SpinWrecks(tU32 pFrame_period@<EAX>)
void SpinWrecks(tU32 pFrame_period) {
    int i;
    br_vector3 translation;
    br_matrix34 old_mat;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 5336
// Size: 0x8f
//IDA: void __usercall ZoomInTo(int pIndex@<EAX>, int *pCurrent_choice@<EDX>, int *pCurrent_mode@<EBX>)
void ZoomInTo(int pIndex, int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%d, %p, %p)", pIndex, pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 5480
// Size: 0xbd
//IDA: void __usercall ZoomOutTo(int pIndex@<EAX>, int *pCurrent_choice@<EDX>, int *pCurrent_mode@<EBX>)
void ZoomOutTo(int pIndex, int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%d, %p, %p)", pIndex, pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 5672
// Size: 0x66
//IDA: int __cdecl WreckPick(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pNear, br_scalar pFar, void *pArg)
int WreckPick(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pNear, br_scalar pFar, void *pArg) {
    int i;
    LOG_TRACE("(%p, %p, %p, %p, %p, %f, %f, %p)", pActor, pModel, pMaterial, pRay_pos, pRay_dir, pNear, pFar, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 5776
// Size: 0x194
//IDA: int __usercall CastSelectionRay@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CastSelectionRay(int *pCurrent_choice, int *pCurrent_mode) {
    int mouse_x;
    int mouse_y;
    int i;
    int result;
    br_scalar inv_wreck_pick_scale_factor;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 6180
// Size: 0xa7
//IDA: int __usercall DamageScrnExit@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnExit(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 6348
// Size: 0x9b1
//IDA: void __usercall DamageScrnDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DamageScrnDraw(int pCurrent_choice, int pCurrent_mode) {
    tU32 the_time;
    br_vector3 camera_movement;
    int finished;
    int h;
    int v;
    int rows;
    int columns;
    float spacing;
    br_actor *sel_actor;
    char *name;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 8832
// Size: 0x10c
//IDA: int __usercall DamageScrnLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnLeft(int *pCurrent_choice, int *pCurrent_mode) {
    int i;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9100
// Size: 0x113
//IDA: int __usercall DamageScrnRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnRight(int *pCurrent_choice, int *pCurrent_mode) {
    int i;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9376
// Size: 0x1ac
//IDA: int __usercall DamageScrnUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnUp(int *pCurrent_choice, int *pCurrent_mode) {
    int i;
    int difference;
    int new_difference;
    int new_selection;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9804
// Size: 0x1d6
//IDA: int __usercall DamageScrnDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnDown(int *pCurrent_choice, int *pCurrent_mode) {
    int i;
    int difference;
    int new_difference;
    int new_selection;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 10276
// Size: 0xb0
//IDA: int __usercall DamageScrnGoHead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DamageScrnGoHead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 10452
// Size: 0x102
//IDA: int __usercall ClickDamage@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int ClickDamage(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int mouse_x;
    int mouse_y;
    int old_mouse_x;
    int old_mouse_y;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 10712
// Size: 0x42
//IDA: int __usercall DamageScrnDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int DamageScrnDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 10780
// Size: 0x11e
//IDA: tSO_result __cdecl DoEndRaceSummary2()
tSO_result DoEndRaceSummary2() {
    static tFlicette flicker_on[3];
    static tFlicette flicker_off[3];
    static tFlicette push[3];
    static tMouse_area mouse_areas[3];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 11068
// Size: 0x5c
//IDA: void __usercall DrawAnItem(int pX@<EAX>, int pY_index@<EDX>, int pFont_index@<EBX>, char *pText@<ECX>)
// Suffix added to avoid duplicate symbol
void DrawAnItem__racesumm(int pX, int pY_index, int pFont_index, char *pText) {
    LOG_TRACE("(%d, %d, %d, \"%s\")", pX, pY_index, pFont_index, pText);
    NOT_IMPLEMENTED();
}

// Offset: 11160
// Size: 0x60
//IDA: void __usercall DrawColumnHeading(int pStr_index@<EAX>, int pX@<EDX>)
// Suffix added to avoid duplicate symbol
void DrawColumnHeading__racesumm(int pStr_index, int pX) {
    LOG_TRACE("(%d, %d)", pStr_index, pX);
    NOT_IMPLEMENTED();
}

// Offset: 11256
// Size: 0x4a
//IDA: int __usercall SortScores@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortScores(void *pFirst_one, void *pSecond_one) {
    LOG_TRACE("(%p, %p)", pFirst_one, pSecond_one);
    NOT_IMPLEMENTED();
}

// Offset: 11332
// Size: 0x3c
//IDA: void __cdecl SortGameScores()
void SortGameScores() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 11392
// Size: 0x2c5
//IDA: void __usercall NetSumDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void NetSumDraw(int pCurrent_choice, int pCurrent_mode) {
    int i;
    char s[256];
    tNet_game_player_info *player;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 12104
// Size: 0xbc
//IDA: void __cdecl DoNetRaceSummary()
void DoNetRaceSummary() {
    static tFlicette flicker_on[1];
    static tFlicette flicker_off[1];
    static tFlicette push[1];
    static tMouse_area mouse_areas[1];
    static tInterface_spec interface_spec;
    int i;
    int result;
    tS32 start_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12292
// Size: 0xe3
//IDA: tSO_result __usercall DoEndRaceSummary@<EAX>(int *pFirst_summary_done@<EAX>, tRace_result pRace_result@<EDX>)
tSO_result DoEndRaceSummary(int *pFirst_summary_done, tRace_result pRace_result) {
    tSO_result result;
    LOG_TRACE("(%p, %d)", pFirst_summary_done, pRace_result);
    NOT_IMPLEMENTED();
}

