#include "racestrt.h"

int gGrid_number_colour[4];
int gJust_bought_part;
tU32 gLast_host_query;
br_pixelmap *gDead_car;
int gFade_away_parts_shop;
tU32 gDare_start_time;
int gRefund_rate;
int gSwap_grid_2;
int gSwap_grid_1;
int gChange_race_net_mode;
tParts_category gPart_category;
tU32 gNet_synch_start;
tNet_game_details *gChoose_car_net_game;
int gPart_index;
 // Suffix added to avoid duplicate symbol
int gChallenger_index__racestrt;
tGrid_draw gDraw_grid_status;
 // Suffix added to avoid duplicate symbol
tNet_sequence_type gNet_race_sequence__racestrt;
br_pixelmap *gTaken_image;
int gGrid_number_x_coords[31];
int gGrid_transition_stage;
int gGrid_y_adjust;
br_pixelmap *gBullet_image;
br_pixelmap *gDeceased_image;
int gBest_pos_available;
int gChallenger_position;
int gOpponent_index;
int gChallenge_time;
int gOriginal_position;
int gCurrent_race_index;
tInterface_spec *gStart_interface_spec;
int gCurrent_car_index;
int gOur_starting_position;

// Offset: 0
// Size: 0x55b
//IDA: void __usercall DrawRaceList(int pOffset@<EAX>)
void DrawRaceList(int pOffset) {
    int i;
    int font_height;
    int pitch;
    int y;
    int left_most;
    int right_most;
    int rank_colour;
    int text_colour;
    int box_bot;
    int text_width;
    int text_x;
    char rank_str[256];
    LOG_TRACE("(%d)", pOffset);
    NOT_IMPLEMENTED();
}

// Offset: 1372
// Size: 0x8d
//IDA: void __usercall MoveRaceList(int pFrom@<EAX>, int pTo@<EDX>, tS32 pTime_to_move@<EBX>)
void MoveRaceList(int pFrom, int pTo, tS32 pTime_to_move) {
    tS32 start_time;
    tS32 the_time;
    int move_distance;
    int pitch;
    LOG_TRACE("(%d, %d, %d)", pFrom, pTo, pTime_to_move);
    NOT_IMPLEMENTED();
}

// Offset: 1516
// Size: 0xe3
//IDA: int __usercall UpRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpRace(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 1744
// Size: 0xe8
//IDA: int __usercall DownRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownRace(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 1976
// Size: 0xe5
//IDA: int __usercall ClickOnRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int ClickOnRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int x_coord;
    int y_coord;
    int race_delta;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 2208
// Size: 0x3d
//IDA: int __usercall UpClickRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 2272
// Size: 0x3d
//IDA: int __usercall DownClickRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 2336
// Size: 0x37
//IDA: void __cdecl StartChangeRace()
void StartChangeRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2392
// Size: 0xe3
//IDA: int __usercall ChangeRace@<EAX>(int *pRace_index@<EAX>, int pNet_mode@<EDX>, tNet_sequence_type pNet_race_sequence@<EBX>)
int ChangeRace(int *pRace_index, int pNet_mode, tNet_sequence_type pNet_race_sequence) {
    static tFlicette flicker_on[4];
    static tFlicette flicker_off[4];
    static tFlicette push[4];
    static tMouse_area mouse_areas[5];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("(%p, %d, %d)", pRace_index, pNet_mode, pNet_race_sequence);
    NOT_IMPLEMENTED();
}

// Offset: 2620
// Size: 0x3e
//IDA: void __cdecl DoChangeRace()
void DoChangeRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2684
// Size: 0x2e2
//IDA: void __usercall DrawCar(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawCar(int pCurrent_choice, int pCurrent_mode) {
    char s[64];
    int text_x;
    int text_width;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 3424
// Size: 0x61
//IDA: void __cdecl SetCarFlic()
void SetCarFlic() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3524
// Size: 0x11f
//IDA: int __usercall UpCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpCar(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 3812
// Size: 0x124
//IDA: int __usercall DownCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownCar(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 4104
// Size: 0x3d
//IDA: int __usercall UpClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 4168
// Size: 0x3d
//IDA: int __usercall DownClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 4232
// Size: 0x6b
//IDA: int __usercall ChangeCarGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int ChangeCarGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 4340
// Size: 0x396
//IDA: int __usercall ChangeCar@<EAX>(int pNet_mode@<EAX>, int *pCar_index@<EDX>, tNet_game_details *pNet_game@<EBX>)
int ChangeCar(int pNet_mode, int *pCar_index, tNet_game_details *pNet_game) {
    static tFlicette flicker_on[4];
    static tFlicette flicker_off[4];
    static tFlicette push[4];
    static tMouse_area mouse_areas[4];
    static tInterface_spec interface_spec;
    int i;
    int result;
    int power_up_levels[3];
    LOG_TRACE("(%d, %p, %p)", pNet_mode, pCar_index, pNet_game);
    NOT_IMPLEMENTED();
}

// Offset: 5260
// Size: 0x30
//IDA: void __cdecl DoChangeCar()
void DoChangeCar() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5308
// Size: 0x108
//IDA: int __cdecl PartsShopRecommended()
int PartsShopRecommended() {
    int running_cost;
    int i;
    int current_index;
    int counter;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5572
// Size: 0xb4
//IDA: void __usercall CalcPartPrice(int pCategory@<EAX>, int pIndex@<EDX>, int *pPrice@<EBX>, int *pCost@<ECX>)
void CalcPartPrice(int pCategory, int pIndex, int *pPrice, int *pCost) {
    int current_value;
    LOG_TRACE("(%d, %d, %p, %p)", pCategory, pIndex, pPrice, pCost);
    NOT_IMPLEMENTED();
}

// Offset: 5752
// Size: 0x91
//IDA: int __usercall BuyPart@<EAX>(int pCategory@<EAX>, int pIndex@<EDX>)
int BuyPart(int pCategory, int pIndex) {
    int price;
    int cost;
    LOG_TRACE("(%d, %d)", pCategory, pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 5900
// Size: 0x101
//IDA: void __cdecl DoAutoParts()
void DoAutoParts() {
    int i;
    int lowest_yet;
    int lowest_one;
    int price;
    int cost;
    int current_level;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6160
// Size: 0xae
//IDA: void __cdecl DrawPartsLabel()
void DrawPartsLabel() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6336
// Size: 0xfe
//IDA: void __usercall ErasePartsText(int pTotal_as_well@<EAX>)
void ErasePartsText(int pTotal_as_well) {
    LOG_TRACE("(%d)", pTotal_as_well);
    NOT_IMPLEMENTED();
}

// Offset: 6592
// Size: 0x314
//IDA: void __cdecl DrawPartsText()
void DrawPartsText() {
    int price;
    int cost;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7380
// Size: 0x84
//IDA: void __cdecl SetPartsImage()
void SetPartsImage() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7512
// Size: 0x81
//IDA: int __cdecl GetPartsMax()
int GetPartsMax() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7644
// Size: 0x8a
//IDA: void __cdecl CalcPartsIndex()
void CalcPartsIndex() {
    int current_index;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7784
// Size: 0x94
//IDA: void __cdecl DoExchangePart()
void DoExchangePart() {
    int price;
    int cost;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7932
// Size: 0x204
//IDA: int __usercall PartsShopGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsShopGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    int flic_index;
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 8448
// Size: 0x16f
//IDA: int __usercall UpPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpPart(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 8816
// Size: 0x178
//IDA: int __usercall DownPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownPart(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9192
// Size: 0x3d
//IDA: int __usercall UpClickPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickPart(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 9256
// Size: 0x3d
//IDA: int __usercall DownClickPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickPart(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 9320
// Size: 0xc5
//IDA: int __usercall PartsArrowsOn@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsArrowsOn(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9520
// Size: 0xc5
//IDA: int __usercall PartsArrowsOff@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsArrowsOff(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9720
// Size: 0x2c
//IDA: void __cdecl StartPartsShop()
void StartPartsShop() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9764
// Size: 0x4d
//IDA: int __usercall DonePartsShop@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int DonePartsShop(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 9844
// Size: 0x2b
//IDA: void __usercall DrawPartsShop(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawPartsShop(int pCurrent_choice, int pCurrent_mode) {
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 9888
// Size: 0xc3
//IDA: void __usercall DoPartsShop(int pFade_away@<EAX>)
void DoPartsShop(int pFade_away) {
    static tFlicette flicker_on[7];
    static tFlicette flicker_off[7];
    static tFlicette push[7];
    static tMouse_area mouse_areas[7];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("(%d)", pFade_away);
    NOT_IMPLEMENTED();
}

// Offset: 10084
// Size: 0x42
//IDA: int __usercall AutoPartsDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int AutoPartsDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 10152
// Size: 0xa6
//IDA: tSO_result __cdecl DoAutoPartsShop()
tSO_result DoAutoPartsShop() {
    static tFlicette flicker_on[3];
    static tFlicette flicker_off[3];
    static tFlicette push[3];
    static tMouse_area mouse_areas[3];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10320
// Size: 0x61
//IDA: void __cdecl SetOpponentFlic()
void SetOpponentFlic() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10420
// Size: 0xa1
//IDA: void __cdecl DrawSceneyMappyInfoVieweyThing()
void DrawSceneyMappyInfoVieweyThing() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10584
// Size: 0x50
//IDA: void __cdecl DismissSceneyMappyInfoVieweyThing()
void DismissSceneyMappyInfoVieweyThing() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 10664
// Size: 0x47
//IDA: int __usercall SelectRaceDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SelectRaceDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 10736
// Size: 0xbf
//IDA: int __usercall StartRaceGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int StartRaceGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 10928
// Size: 0x63
//IDA: int __usercall TryToMoveToArrows@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int TryToMoveToArrows(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 11028
// Size: 0x128
//IDA: int __usercall UpOpponent@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpOpponent(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 11324
// Size: 0x12e
//IDA: int __usercall DownOpponent@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownOpponent(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 11628
// Size: 0x3d
//IDA: int __usercall UpClickOpp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickOpp(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 11692
// Size: 0x3d
//IDA: int __usercall DownClickOpp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickOpp(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 11756
// Size: 0x33
//IDA: void __cdecl SelectRaceStart()
void SelectRaceStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 11808
// Size: 0x1e0
//IDA: int __cdecl SuggestRace()
int SuggestRace() {
    int i;
    int least_done;
    int suggested_so_far;
    int suggested_race;
    int new_suggestion;
    int number_of_visits;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 12288
// Size: 0x5d5
//IDA: void __usercall SelectRaceDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void SelectRaceDraw(int pCurrent_choice, int pCurrent_mode) {
    tOpponent *the_opponent;
    tText_chunk *the_chunk;
    int j;
    int k;
    int y_coord;
    char s[256];
    char temp_str[256];
    char *sub_pt;
    char sub_str[16];
    tU32 *test;
    static tU32 test2;
    char __block0__s[128];
    FILE *__block0__f;
    int __block0__i;
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 13784
// Size: 0x2f2
//IDA: tSO_result __usercall DoSelectRace@<EAX>(int *pSecond_time_around@<EAX>)
tSO_result DoSelectRace(int *pSecond_time_around) {
    static tFlicette flicker_on[7];
    static tFlicette flicker_off[7];
    static tFlicette push[7];
    static tMouse_area mouse_areas[7];
    static tInterface_spec interface_spec;
    int result;
    int default_choice;
    int suggested;
    int old_current_race;
    LOG_TRACE("(%p)", pSecond_time_around);
    NOT_IMPLEMENTED();
}

// Offset: 14540
// Size: 0x87
//IDA: void __usercall DrawGridCar(int pX@<EAX>, int pY@<EDX>, br_pixelmap *pImage@<EBX>)
void DrawGridCar(int pX, int pY, br_pixelmap *pImage) {
    LOG_TRACE("(%d, %d, %p)", pX, pY, pImage);
    NOT_IMPLEMENTED();
}

// Offset: 14676
// Size: 0x841
//IDA: void __usercall DrawGrid(int pOffset@<EAX>, int pDraw_it@<EDX>)
void DrawGrid(int pOffset, int pDraw_it) {
    int i;
    int j;
    int y;
    int x;
    int str_x;
    int width_job;
    int done_highest;
    int str_index;
    int swap_1_x;
    int swap_1_y;
    int swap_2_x;
    int swap_2_y;
    br_pixelmap *the_image;
    br_pixelmap *swap_1_image;
    br_pixelmap *swap_2_image;
    char numbers_str[4][100];
    char total_str[256];
    tU32 the_time;
    LOG_TRACE("(%d, %d)", pOffset, pDraw_it);
    NOT_IMPLEMENTED();
}

// Offset: 16792
// Size: 0x99
//IDA: void __usercall MoveGrid(int pFrom@<EAX>, int pTo@<EDX>, tS32 pTime_to_move@<EBX>)
void MoveGrid(int pFrom, int pTo, tS32 pTime_to_move) {
    tS32 start_time;
    tS32 the_time;
    int move_distance;
    int pitch;
    LOG_TRACE("(%d, %d, %d)", pFrom, pTo, pTime_to_move);
    NOT_IMPLEMENTED();
}

// Offset: 16948
// Size: 0x39
//IDA: int __usercall CalcGridOffset@<EAX>(int pPosition@<EAX>)
int CalcGridOffset(int pPosition) {
    LOG_TRACE("(%d)", pPosition);
    NOT_IMPLEMENTED();
}

// Offset: 17008
// Size: 0x4d
//IDA: void __usercall GridDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void GridDraw(int pCurrent_choice, int pCurrent_mode) {
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 17088
// Size: 0x70
//IDA: void __usercall ActuallySwapOrder(int pFirst_index@<EAX>, int pSecond_index@<EDX>)
void ActuallySwapOrder(int pFirst_index, int pSecond_index) {
    tOpp_spec temp_opp;
    LOG_TRACE("(%d, %d)", pFirst_index, pSecond_index);
    NOT_IMPLEMENTED();
}

// Offset: 17200
// Size: 0xf1
//IDA: void __usercall DoGridTransition(int pFirst_index@<EAX>, int pSecond_index@<EDX>)
void DoGridTransition(int pFirst_index, int pSecond_index) {
    tU32 start_time;
    tU32 the_time;
    LOG_TRACE("(%d, %d)", pFirst_index, pSecond_index);
    NOT_IMPLEMENTED();
}

// Offset: 17444
// Size: 0x37f
//IDA: void __cdecl ChallengeStart()
void ChallengeStart() {
    br_pixelmap *the_map;
    int i;
    int j;
    int line_count;
    int dare_index;
    FILE *f;
    tPath_name the_path;
    char s[256];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18340
// Size: 0xba
//IDA: int __usercall CheckNextStage@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CheckNextStage(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 18528
// Size: 0xd4
//IDA: int __usercall ChallengeDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int ChallengeDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 18740
// Size: 0xac
//IDA: void __cdecl DoChallengeScreen()
void DoChallengeScreen() {
    static tFlicette flicker_on[2];
    static tFlicette flicker_off[2];
    static tFlicette push[2];
    static tMouse_area mouse_areas[2];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 18912
// Size: 0x51
//IDA: int __usercall GridDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int GridDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 18996
// Size: 0x4b
//IDA: void __cdecl GridStart()
void GridStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19072
// Size: 0xb9
//IDA: int __usercall GridMoveLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GridMoveLeft(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 19260
// Size: 0xa6
//IDA: int __usercall GridMoveRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GridMoveRight(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 19428
// Size: 0xfd
//IDA: int __usercall GridClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int rel_pos;
    int new_pos;
    int base_pos;
    int x_coord;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 19684
// Size: 0xd5
//IDA: int __usercall GridClickNumbers@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickNumbers(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    int new_pos;
    int i;
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 19900
// Size: 0x3d
//IDA: int __usercall GridClickLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickLeft(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 19964
// Size: 0x3d
//IDA: int __usercall GridClickRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickRight(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset) {
    LOG_TRACE("(%p, %p, %d, %d)", pCurrent_choice, pCurrent_mode, pX_offset, pY_offset);
    NOT_IMPLEMENTED();
}

// Offset: 20028
// Size: 0x5a
//IDA: int __usercall CheckChallenge@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CheckChallenge(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 20120
// Size: 0x64
//IDA: int __usercall FindBestPos@<EAX>(int pOur_rank@<EAX>)
int FindBestPos(int pOur_rank) {
    int i;
    LOG_TRACE("(%d)", pOur_rank);
    NOT_IMPLEMENTED();
}

// Offset: 20220
// Size: 0x38
//IDA: int __usercall SortGridFunction@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortGridFunction(void *pFirst_one, void *pSecond_one) {
    LOG_TRACE("(%p, %p)", pFirst_one, pSecond_one);
    NOT_IMPLEMENTED();
}

// Offset: 20276
// Size: 0x11e
//IDA: void __cdecl SortOpponents()
void SortOpponents() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20564
// Size: 0x146
//IDA: tSO_result __cdecl DoGridPosition()
tSO_result DoGridPosition() {
    static tFlicette flicker_on[3];
    static tFlicette flicker_off[3];
    static tFlicette push[3];
    static tMouse_area mouse_areas[5];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 20892
// Size: 0xb9
//IDA: void __cdecl CheckPlayersAreResponding()
void CheckPlayersAreResponding() {
    int i;
    tU32 time;
    tNet_message *message;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21080
// Size: 0x27
//IDA: void __cdecl NetSynchStartStart()
void NetSynchStartStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 21120
// Size: 0x5c
//IDA: void __usercall DrawAnItem(int pX@<EAX>, int pY_index@<EDX>, int pFont_index@<EBX>, char *pText@<ECX>)
// Suffix added to avoid duplicate symbol
void DrawAnItem__racestrt(int pX, int pY_index, int pFont_index, char *pText) {
    LOG_TRACE("(%d, %d, %d, \"%s\")", pX, pY_index, pFont_index, pText);
    NOT_IMPLEMENTED();
}

// Offset: 21212
// Size: 0x2f7
//IDA: void __usercall NetSynchStartDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void NetSynchStartDraw(int pCurrent_choice, int pCurrent_mode) {
    int i;
    int number_ready;
    char s[256];
    LOG_TRACE("(%d, %d)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 21972
// Size: 0x52
//IDA: int __usercall NetSynchStartDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int NetSynchStartDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 22056
// Size: 0xd9
//IDA: int __usercall NetSynchStartGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetSynchStartGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 22276
// Size: 0x6f
//IDA: int __usercall ExitWhenReady@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int ExitWhenReady(int *pCurrent_choice, int *pCurrent_mode) {
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 22388
// Size: 0xf6
//IDA: tSO_result __usercall NetSynchRaceStart2@<EAX>(tNet_synch_mode pMode@<EAX>)
tSO_result NetSynchRaceStart2(tNet_synch_mode pMode) {
    static tFlicette flicker_on_hf[2];
    static tFlicette flicker_off_hf[2];
    static tFlicette push_hf[2];
    static tMouse_area mouse_areas_hf[2];
    static tInterface_spec interface_spec_hf;
    static tFlicette flicker_on_hs[1];
    static tFlicette flicker_off_hs[1];
    static tFlicette push_hs[1];
    static tMouse_area mouse_areas_hs[1];
    static tInterface_spec interface_spec_hs;
    static tFlicette flicker_on_c[1];
    static tFlicette flicker_off_c[1];
    static tFlicette push_c[1];
    static tMouse_area mouse_areas_c[1];
    static tInterface_spec interface_spec_c;
    int result;
    LOG_TRACE("(%d)", pMode);
    NOT_IMPLEMENTED();
}

// Offset: 22636
// Size: 0x64
//IDA: tSO_result __cdecl NetSynchRaceStart()
tSO_result NetSynchRaceStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

