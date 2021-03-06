#include "newgame.h"

tU8 *gFrank_flic_data;
tU8 *gAnne_flic_data;
int gNet_storage_allocated;
 // Suffix added to avoid duplicate symbol
tRadio_bastards gRadio_bastards__newgame[11];
char *gBasic_car_names[2];
tNet_game_options gNet_settings[8];
tJoinable_game gGames_to_join[6];
tNet_game_options *gOptions;
int gNet_target[7];
 // Suffix added to avoid duplicate symbol
int gLast_graph_sel__newgame;
 // Suffix added to avoid duplicate symbol
tInterface_spec *gThe_interface_spec__newgame;
 // Suffix added to avoid duplicate symbol
tNet_sequence_type gNet_race_sequence__newgame;
tNet_game_type gLast_game_type;
int gCurrent_net_game_count;
tU32 gAnne_flic_data_length;
int gShifted_default_yet;
char *gNet_name;
tU32 gFrank_flic_data_length;
int gLast_net_choose_box;
int gCurrent_game_selection;
int gRace_index;
int gRadio_selected;

// Offset: 0
// Size: 0x95
//IDA: void __cdecl StartRollingPlayerNamesIn()
void StartRollingPlayerNamesIn() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 152
// Size: 0x13a
//IDA: void __cdecl FrankAnneStart1()
void FrankAnneStart1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 468
// Size: 0x96
//IDA: void __cdecl FrankAnneStart2()
void FrankAnneStart2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 620
// Size: 0x44
//IDA: void __usercall GetPlayerName(int pStarting_to_type@<EAX>, int pCurrent_choice@<EDX>, char *pString@<EBX>, int *pMax_length@<ECX>)
void GetPlayerName(int pStarting_to_type, int pCurrent_choice, char *pString, int *pMax_length) {
    LOG_TRACE("(%d, %d, \"%s\", %p)", pStarting_to_type, pCurrent_choice, pString, pMax_length);
    NOT_IMPLEMENTED();
}

// Offset: 688
// Size: 0xcb
//IDA: int __usercall FrankAnneDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int FrankAnneDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 892
// Size: 0x8b
//IDA: void __usercall FrankAnneDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void FrankAnneDraw(int pCurrent_choice, int pCurrent_mode) {
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 1032
// Size: 0x7b
//IDA: int __cdecl FrankieOrAnnie()
int FrankieOrAnnie() {
    static tFlicette flicker_on[3];
    static tFlicette flicker_off[3];
    static tFlicette push[3];
    static tMouse_area mouse_areas[3];
    static tRectile recopy_areas[2];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1156
// Size: 0x58
//IDA: int __cdecl SelectSkillLevel()
int SelectSkillLevel() {
    static tFlicette flicker_on[4];
    static tFlicette flicker_off[4];
    static tFlicette push[4];
    static tMouse_area mouse_areas[4];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1244
// Size: 0x143
//IDA: int __cdecl DoOnePlayerStart()
int DoOnePlayerStart() {
    int merrily_looping;
    tProgram_state saved_state;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1568
// Size: 0x107
//IDA: int __usercall NewNetGameUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NewNetGameUp(int *pCurrent_choice, int *pCurrent_mode) {
    int new_sel;
    int i;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 1832
// Size: 0x107
//IDA: int __usercall NewNetGameDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NewNetGameDown(int *pCurrent_choice, int *pCurrent_mode) {
    int new_sel;
    int i;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 2096
// Size: 0x46
//IDA: void __usercall DisposeJoinableGame(int pIndex@<EAX>)
void DisposeJoinableGame(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 2168
// Size: 0x7b
//IDA: void __usercall DrawAnItem(int pX@<EAX>, int pY_index@<EDX>, int pFont_index@<EBX>, char *pText@<ECX>)
// Suffix added to avoid duplicate symbol
void DrawAnItem__newgame(int pX, int pY_index, int pFont_index, char *pText) {
    LOG_TRACE("(%d, %d, %d, \"%s\")", pX, pY_index, pFont_index, pText);
    NOT_IMPLEMENTED();
}

// Offset: 2292
// Size: 0x77
//IDA: void __usercall DrawColumnHeading(int pStr_index@<EAX>, int pX@<EDX>)
// Suffix added to avoid duplicate symbol
void DrawColumnHeading__newgame(int pStr_index, int pX) {
    LOG_TRACE("(%d, %d)", pStr_index, pX);
    NOT_IMPLEMENTED();
}

// Offset: 2412
// Size: 0x71d
//IDA: void __usercall DrawGames(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawGames(int pCurrent_choice, int pCurrent_mode) {
    int i;
    int font_index;
    int current_index;
    int x_coord;
    int y_coord;
    char s[256];
    char *s2;
    char *s3;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 4236
// Size: 0x55
//IDA: void __cdecl InitGamesToJoin()
void InitGamesToJoin() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4324
// Size: 0x5f
//IDA: void __usercall DisposeJoinList(int pExemption@<EAX>)
void DisposeJoinList(int pExemption) {
    int i;
    LOG_TRACE("(%d)", pExemption);
    NOT_IMPLEMENTED();
}

// Offset: 4420
// Size: 0xe3
//IDA: void __usercall AddToJoinList(tNet_game_details *pGame@<EAX>)
void AddToJoinList(tNet_game_details *pGame) {
    int i;
    int slot_to_use;
    tU32 this_game_ID;
    LOG_TRACE("(%p)", pGame);
    NOT_IMPLEMENTED();
}

// Offset: 4648
// Size: 0x6f
//IDA: void __cdecl NewNetStart1()
void NewNetStart1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4760
// Size: 0x3d
//IDA: void __cdecl NewNetStart2()
void NewNetStart2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4824
// Size: 0x3e
//IDA: void __usercall NewNetGetName(int pStarting_to_type@<EAX>, int pCurrent_choice@<EDX>, char *pString@<EBX>, int *pMax_length@<ECX>)
void NewNetGetName(int pStarting_to_type, int pCurrent_choice, char *pString, int *pMax_length) {
    LOG_TRACE("(%d, %d, \"%s\", %p)", pStarting_to_type, pCurrent_choice, pString, pMax_length);
    NOT_IMPLEMENTED();
}

// Offset: 4888
// Size: 0x48
//IDA: int __usercall NewNetDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int NewNetDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 4960
// Size: 0x48
//IDA: int __usercall NewNetGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NewNetGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 5032
// Size: 0x11f
//IDA: tJoin_or_host_result __usercall JoinOrHostGame@<EAX>(tNet_game_details **pGame_to_join@<EAX>)
tJoin_or_host_result JoinOrHostGame(tNet_game_details **pGame_to_join) {
    static tFlicette flicker_on[2];
    static tFlicette flicker_off[2];
    static tFlicette push[2];
    static tMouse_area mouse_areas[3];
    static tRectile recopy_areas[1];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("(%p)", pGame_to_join);
    NOT_IMPLEMENTED();
}

// Offset: 5320
// Size: 0xdf
//IDA: void __usercall GetNetOptions(tNet_game_options *pGame_options@<EAX>)
void GetNetOptions(tNet_game_options *pGame_options) {
    LOG_TRACE("(%p)", pGame_options);
    NOT_IMPLEMENTED();
}

// Offset: 5544
// Size: 0xea
//IDA: void __usercall SetNetOptions(tNet_game_options *pGame_options@<EAX>)
void SetNetOptions(tNet_game_options *pGame_options) {
    LOG_TRACE("(%p)", pGame_options);
    NOT_IMPLEMENTED();
}

// Offset: 5780
// Size: 0x48
//IDA: void __usercall NetPlayCheckboxOn2(int pIndex@<EAX>)
void NetPlayCheckboxOn2(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 5852
// Size: 0x48
//IDA: void __usercall NetPlayCheckboxOff2(int pIndex@<EAX>)
void NetPlayCheckboxOff2(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 5924
// Size: 0x4b
//IDA: void __usercall NetPlayCheckboxOn(int pIndex@<EAX>)
void NetPlayCheckboxOn(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 6000
// Size: 0x4b
//IDA: void __usercall NetPlayCheckboxOff(int pIndex@<EAX>)
void NetPlayCheckboxOff(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 6076
// Size: 0x51
//IDA: void __usercall NetPlayRadioOn2(int pIndex@<EAX>, int pValue@<EDX>)
void NetPlayRadioOn2(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
    NOT_IMPLEMENTED();
}

// Offset: 6160
// Size: 0x51
//IDA: void __usercall NetPlayRadioOff2(int pIndex@<EAX>, int pValue@<EDX>)
void NetPlayRadioOff2(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
    NOT_IMPLEMENTED();
}

// Offset: 6244
// Size: 0x4f
//IDA: void __usercall NetPlayRadioOn(int pIndex@<EAX>, int pValue@<EDX>)
void NetPlayRadioOn(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
    NOT_IMPLEMENTED();
}

// Offset: 6324
// Size: 0x4f
//IDA: void __usercall NetPlayRadioOff(int pIndex@<EAX>, int pValue@<EDX>)
void NetPlayRadioOff(int pIndex, int pValue) {
    LOG_TRACE("(%d, %d)", pIndex, pValue);
    NOT_IMPLEMENTED();
}

// Offset: 6404
// Size: 0xe5
//IDA: void __cdecl DrawNOptInitialRadios()
void DrawNOptInitialRadios() {
    int i;
    int j;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6636
// Size: 0x54
//IDA: void __usercall NetRadioChanged(int pIndex@<EAX>, int pNew_value@<EDX>)
void NetRadioChanged(int pIndex, int pNew_value) {
    LOG_TRACE("(%d, %d)", pIndex, pNew_value);
    NOT_IMPLEMENTED();
}

// Offset: 6720
// Size: 0x74
//IDA: void __usercall NetCheckboxChanged(int pIndex@<EAX>)
void NetCheckboxChanged(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 6836
// Size: 0x99
//IDA: int __usercall NetOptLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetOptLeft(int *pCurrent_choice, int *pCurrent_mode) {
    int new_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 6992
// Size: 0x9d
//IDA: int __usercall NetOptRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetOptRight(int *pCurrent_choice, int *pCurrent_mode) {
    int new_value;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 7152
// Size: 0x94
//IDA: int __usercall NetOptUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetOptUp(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 7300
// Size: 0x94
//IDA: int __usercall NetOptDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetOptDown(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 7448
// Size: 0xd5
//IDA: int __usercall NetRadioClick@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int NetRadioClick(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int i;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 7664
// Size: 0x8e
//IDA: void __cdecl RevertToDefaults()
void RevertToDefaults() {
    tPath_name the_path;
    FILE *f;
    tNet_game_options net_options;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7808
// Size: 0x9c
//IDA: void __cdecl DefaultNetSettings()
void DefaultNetSettings() {
    tPath_name the_path;
    FILE *f;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7964
// Size: 0x62
//IDA: int __usercall NetOptGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetOptGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 8064
// Size: 0xca
//IDA: void __usercall NetPlotAGraphBox(int pIndex@<EAX>, int pColour_value@<EDX>)
void NetPlotAGraphBox(int pIndex, int pColour_value) {
    LOG_TRACE("(%d, %d)", pIndex, pColour_value);
    NOT_IMPLEMENTED();
}

// Offset: 8268
// Size: 0x32
//IDA: void __usercall NetDrawAGraphBox(int pIndex@<EAX>)
void NetDrawAGraphBox(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8320
// Size: 0x2f
//IDA: void __usercall NetEraseAGraphBox(int pIndex@<EAX>)
void NetEraseAGraphBox(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8368
// Size: 0x50
//IDA: void __usercall DrawNetOptBox(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawNetOptBox(int pCurrent_choice, int pCurrent_mode) {
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 8448
// Size: 0x6f
//IDA: void __usercall DoNetOptions(tNet_game_options *pGame_options@<EAX>)
void DoNetOptions(tNet_game_options *pGame_options) {
    static tFlicette flicker_on[14];
    static tFlicette flicker_off[14];
    static tFlicette push[14];
    static tMouse_area mouse_areas[14];
    static tInterface_spec interface_spec;
    LOG_TRACE("(%p)", pGame_options);
    NOT_IMPLEMENTED();
}

// Offset: 8560
// Size: 0xbe
//IDA: void __usercall SetOptions(tNet_game_type pGame_type@<EAX>, tNet_game_options *pGame_options@<EDX>)
void SetOptions(tNet_game_type pGame_type, tNet_game_options *pGame_options) {
    LOG_TRACE("(%d, %p)", pGame_type, pGame_options);
    NOT_IMPLEMENTED();
}

// Offset: 8752
// Size: 0x76
//IDA: void __usercall PlayRadioOn(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void PlayRadioOn__newgame(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8872
// Size: 0x76
//IDA: void __usercall PlayRadioOff(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void PlayRadioOff__newgame(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 8992
// Size: 0x2c
//IDA: void __cdecl DrawNetChooseInitial()
void DrawNetChooseInitial() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9036
// Size: 0xfa
//IDA: int __usercall NetChooseGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetChooseGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9288
// Size: 0xb6
//IDA: void __usercall PlotAGraphBox(int pIndex@<EAX>, int pColour_value@<EDX>)
// Suffix added to avoid duplicate symbol
void PlotAGraphBox__newgame(int pIndex, int pColour_value) {
    LOG_TRACE("(%d, %d)", pIndex, pColour_value);
    NOT_IMPLEMENTED();
}

// Offset: 9472
// Size: 0x32
//IDA: void __usercall DrawAGraphBox(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void DrawAGraphBox__newgame(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 9524
// Size: 0x2f
//IDA: void __usercall EraseAGraphBox(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void EraseAGraphBox__newgame(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 9572
// Size: 0x2cf
//IDA: void __usercall DrawNetChoose(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawNetChoose(int pCurrent_choice, int pCurrent_mode) {
    char s[256];
    tU32 *k;
    int i;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 10292
// Size: 0x3d
//IDA: int __usercall NetChooseLR@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetChooseLR(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 10356
// Size: 0xbe
//IDA: void __usercall SetGameTarget(tNet_game_type *pGame_type@<EAX>, tNet_game_options *pGame_options@<EDX>)
void SetGameTarget(tNet_game_type *pGame_type, tNet_game_options *pGame_options) {
    LOG_TRACE("(%p, %p)", pGame_type, pGame_options);
    NOT_IMPLEMENTED();
}

// Offset: 10548
// Size: 0x17f
//IDA: int __usercall NetGameChoices@<EAX>(tNet_game_type *pGame_type@<EAX>, tNet_game_options *pGame_options@<EDX>, int *pRace_index@<EBX>)
int NetGameChoices(tNet_game_type *pGame_type, tNet_game_options *pGame_options, int *pRace_index) {
    static tFlicette flicker_on[11];
    static tFlicette flicker_off[11];
    static tFlicette push[11];
    static tMouse_area mouse_areas[11];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("(%p, %p, %p)", pGame_type, pGame_options, pRace_index);
    NOT_IMPLEMENTED();
}

// Offset: 10932
// Size: 0x5f
//IDA: void __usercall ReadNetGameChoices(tNet_game_type *pGame_type@<EAX>, tNet_game_options *pGame_options@<EDX>, int *pRace_index@<EBX>)
void ReadNetGameChoices(tNet_game_type *pGame_type, tNet_game_options *pGame_options, int *pRace_index) {
    LOG_TRACE("(%p, %p, %p)", pGame_type, pGame_options, pRace_index);
    NOT_IMPLEMENTED();
}

// Offset: 11028
// Size: 0x38
//IDA: int __usercall ChooseStartRace@<EAX>(int *pRank@<EAX>)
int ChooseStartRace(int *pRank) {
    LOG_TRACE("(%p)", pRank);
    NOT_IMPLEMENTED();
}

// Offset: 11084
// Size: 0x3f
//IDA: void __usercall SetUpOtherNetThings(tNet_game_details *pNet_game@<EAX>)
void SetUpOtherNetThings(tNet_game_details *pNet_game) {
    LOG_TRACE("(%p)", pNet_game);
    NOT_IMPLEMENTED();
}

// Offset: 11148
// Size: 0x61
//IDA: void __usercall RequestCarDetails(tNet_game_details *pNet_game@<EAX>)
void RequestCarDetails(tNet_game_details *pNet_game) {
    tNet_message *message;
    LOG_TRACE("(%p)", pNet_game);
    NOT_IMPLEMENTED();
}

// Offset: 11248
// Size: 0xb5
//IDA: int __cdecl PickARandomCar()
int PickARandomCar() {
    int i;
    int cars[120];
    int array_size;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 11432
// Size: 0x36
//IDA: void __usercall PollCarDetails(tNet_game_details *pNet_game@<EAX>)
void PollCarDetails(tNet_game_details *pNet_game) {
    LOG_TRACE("(%p)", pNet_game);
    NOT_IMPLEMENTED();
}

// Offset: 11488
// Size: 0x116
//IDA: void __usercall SetNetAvailability(tNet_game_options *pOptions@<EAX>)
void SetNetAvailability(tNet_game_options *pOptions) {
    int i;
    LOG_TRACE("(%p)", pOptions);
    NOT_IMPLEMENTED();
}

// Offset: 11768
// Size: 0x18c
//IDA: int __usercall ChooseNetCar@<EAX>(tNet_game_details *pNet_game@<EAX>, tNet_game_options *pOptions@<EDX>, int *pCar_index@<EBX>, int pIm_the_host_so_fuck_off@<ECX>)
int ChooseNetCar(tNet_game_details *pNet_game, tNet_game_options *pOptions, int *pCar_index, int pIm_the_host_so_fuck_off) {
    tS32 start_time;
    int i;
    int result;
    int car_index;
    int the_car_index;
    LOG_TRACE("(%p, %p, %p, %d)", pNet_game, pOptions, pCar_index, pIm_the_host_so_fuck_off);
    NOT_IMPLEMENTED();
}

// Offset: 12164
// Size: 0x73
//IDA: void __cdecl InitNetStorageSpace()
void InitNetStorageSpace() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12280
// Size: 0x3f
//IDA: void __cdecl DisposeNetStorageSpace()
void DisposeNetStorageSpace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12344
// Size: 0x319
//IDA: int __cdecl DoMultiPlayerStart()
int DoMultiPlayerStart() {
    tJoin_or_host_result result;
    tNet_game_details *game_to_join;
    char s[256];
    char *s2;
    tNet_game_type new_game_type;
    tNet_game_options new_game_options;
    int start_rank;
    int car_index;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

