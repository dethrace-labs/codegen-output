#ifndef _RACESTRT_H_
#define _RACESTRT_H_

#include "dr_types.h"
#include "br_types.h"

extern int gGrid_number_colour[4]; // addr: 0001864C
extern int gJust_bought_part; // addr: 0001865C
extern tU32 gLast_host_query; // addr: 00018660
extern br_pixelmap *gDead_car; // addr: 0003BE80
extern int gFade_away_parts_shop; // addr: 0003BE84
extern tU32 gDare_start_time; // addr: 0003BE88
extern int gRefund_rate; // addr: 0003BE8C
extern int gSwap_grid_2; // addr: 0003BE90
extern int gSwap_grid_1; // addr: 0003BE94
extern int gChange_race_net_mode; // addr: 0003BE98
extern tParts_category gPart_category; // addr: 0003BE9C
extern tU32 gNet_synch_start; // addr: 0003BEA0
extern tNet_game_details *gChoose_car_net_game; // addr: 0003BEA4
extern int gPart_index; // addr: 0003BEA8
extern int gChallenger_index__racestrt; // addr: 0003BEAC // suffix added to avoid duplicate symbol
extern tGrid_draw gDraw_grid_status; // addr: 0003BEB0
extern tNet_sequence_type gNet_race_sequence__racestrt; // addr: 0003BEB4 // suffix added to avoid duplicate symbol
extern br_pixelmap *gTaken_image; // addr: 0003BEB8
extern int gGrid_number_x_coords[31]; // addr: 0003BEBC
extern int gGrid_transition_stage; // addr: 0003BF38
extern int gGrid_y_adjust; // addr: 0003BF3C
extern br_pixelmap *gBullet_image; // addr: 0003BF40
extern br_pixelmap *gDeceased_image; // addr: 0003BF44
extern int gBest_pos_available; // addr: 0003BF48
extern int gChallenger_position; // addr: 0003BF4C
extern int gOpponent_index; // addr: 0003BF50
extern int gChallenge_time; // addr: 0003BF54
extern int gOriginal_position; // addr: 0003BF58
extern int gCurrent_race_index; // addr: 0003BF5C
extern tInterface_spec *gStart_interface_spec; // addr: 0003BF60
extern int gCurrent_car_index; // addr: 0003BF64
extern int gOur_starting_position; // addr: 0003BF68

// Offset: 0
// Size: 0x55b
//IDA: void __usercall DrawRaceList(int pOffset@<EAX>)
void DrawRaceList(int pOffset);

// Offset: 1372
// Size: 0x8d
//IDA: void __usercall MoveRaceList(int pFrom@<EAX>, int pTo@<EDX>, tS32 pTime_to_move@<EBX>)
void MoveRaceList(int pFrom, int pTo, tS32 pTime_to_move);

// Offset: 1516
// Size: 0xe3
//IDA: int __usercall UpRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpRace(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 1744
// Size: 0xe8
//IDA: int __usercall DownRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownRace(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 1976
// Size: 0xe5
//IDA: int __usercall ClickOnRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int ClickOnRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 2208
// Size: 0x3d
//IDA: int __usercall UpClickRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 2272
// Size: 0x3d
//IDA: int __usercall DownClickRace@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickRace(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 2336
// Size: 0x37
//IDA: void __cdecl StartChangeRace()
void StartChangeRace();

// Offset: 2392
// Size: 0xe3
//IDA: int __usercall ChangeRace@<EAX>(int *pRace_index@<EAX>, int pNet_mode@<EDX>, tNet_sequence_type pNet_race_sequence@<EBX>)
int ChangeRace(int *pRace_index, int pNet_mode, tNet_sequence_type pNet_race_sequence);

// Offset: 2620
// Size: 0x3e
//IDA: void __cdecl DoChangeRace()
void DoChangeRace();

// Offset: 2684
// Size: 0x2e2
//IDA: void __usercall DrawCar(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawCar(int pCurrent_choice, int pCurrent_mode);

// Offset: 3424
// Size: 0x61
//IDA: void __cdecl SetCarFlic()
void SetCarFlic();

// Offset: 3524
// Size: 0x11f
//IDA: int __usercall UpCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpCar(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3812
// Size: 0x124
//IDA: int __usercall DownCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownCar(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 4104
// Size: 0x3d
//IDA: int __usercall UpClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 4168
// Size: 0x3d
//IDA: int __usercall DownClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 4232
// Size: 0x6b
//IDA: int __usercall ChangeCarGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int ChangeCarGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 4340
// Size: 0x396
//IDA: int __usercall ChangeCar@<EAX>(int pNet_mode@<EAX>, int *pCar_index@<EDX>, tNet_game_details *pNet_game@<EBX>)
int ChangeCar(int pNet_mode, int *pCar_index, tNet_game_details *pNet_game);

// Offset: 5260
// Size: 0x30
//IDA: void __cdecl DoChangeCar()
void DoChangeCar();

// Offset: 5308
// Size: 0x108
//IDA: int __cdecl PartsShopRecommended()
int PartsShopRecommended();

// Offset: 5572
// Size: 0xb4
//IDA: void __usercall CalcPartPrice(int pCategory@<EAX>, int pIndex@<EDX>, int *pPrice@<EBX>, int *pCost@<ECX>)
void CalcPartPrice(int pCategory, int pIndex, int *pPrice, int *pCost);

// Offset: 5752
// Size: 0x91
//IDA: int __usercall BuyPart@<EAX>(int pCategory@<EAX>, int pIndex@<EDX>)
int BuyPart(int pCategory, int pIndex);

// Offset: 5900
// Size: 0x101
//IDA: void __cdecl DoAutoParts()
void DoAutoParts();

// Offset: 6160
// Size: 0xae
//IDA: void __cdecl DrawPartsLabel()
void DrawPartsLabel();

// Offset: 6336
// Size: 0xfe
//IDA: void __usercall ErasePartsText(int pTotal_as_well@<EAX>)
void ErasePartsText(int pTotal_as_well);

// Offset: 6592
// Size: 0x314
//IDA: void __cdecl DrawPartsText()
void DrawPartsText();

// Offset: 7380
// Size: 0x84
//IDA: void __cdecl SetPartsImage()
void SetPartsImage();

// Offset: 7512
// Size: 0x81
//IDA: int __cdecl GetPartsMax()
int GetPartsMax();

// Offset: 7644
// Size: 0x8a
//IDA: void __cdecl CalcPartsIndex()
void CalcPartsIndex();

// Offset: 7784
// Size: 0x94
//IDA: void __cdecl DoExchangePart()
void DoExchangePart();

// Offset: 7932
// Size: 0x204
//IDA: int __usercall PartsShopGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsShopGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 8448
// Size: 0x16f
//IDA: int __usercall UpPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpPart(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 8816
// Size: 0x178
//IDA: int __usercall DownPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownPart(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9192
// Size: 0x3d
//IDA: int __usercall UpClickPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickPart(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 9256
// Size: 0x3d
//IDA: int __usercall DownClickPart@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickPart(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 9320
// Size: 0xc5
//IDA: int __usercall PartsArrowsOn@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsArrowsOn(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9520
// Size: 0xc5
//IDA: int __usercall PartsArrowsOff@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int PartsArrowsOff(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9720
// Size: 0x2c
//IDA: void __cdecl StartPartsShop()
void StartPartsShop();

// Offset: 9764
// Size: 0x4d
//IDA: int __usercall DonePartsShop@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int DonePartsShop(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 9844
// Size: 0x2b
//IDA: void __usercall DrawPartsShop(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawPartsShop(int pCurrent_choice, int pCurrent_mode);

// Offset: 9888
// Size: 0xc3
//IDA: void __usercall DoPartsShop(int pFade_away@<EAX>)
void DoPartsShop(int pFade_away);

// Offset: 10084
// Size: 0x42
//IDA: int __usercall AutoPartsDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int AutoPartsDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 10152
// Size: 0xa6
//IDA: tSO_result __cdecl DoAutoPartsShop()
tSO_result DoAutoPartsShop();

// Offset: 10320
// Size: 0x61
//IDA: void __cdecl SetOpponentFlic()
void SetOpponentFlic();

// Offset: 10420
// Size: 0xa1
//IDA: void __cdecl DrawSceneyMappyInfoVieweyThing()
void DrawSceneyMappyInfoVieweyThing();

// Offset: 10584
// Size: 0x50
//IDA: void __cdecl DismissSceneyMappyInfoVieweyThing()
void DismissSceneyMappyInfoVieweyThing();

// Offset: 10664
// Size: 0x47
//IDA: int __usercall SelectRaceDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SelectRaceDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 10736
// Size: 0xbf
//IDA: int __usercall StartRaceGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int StartRaceGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 10928
// Size: 0x63
//IDA: int __usercall TryToMoveToArrows@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int TryToMoveToArrows(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 11028
// Size: 0x128
//IDA: int __usercall UpOpponent@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int UpOpponent(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 11324
// Size: 0x12e
//IDA: int __usercall DownOpponent@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int DownOpponent(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 11628
// Size: 0x3d
//IDA: int __usercall UpClickOpp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int UpClickOpp(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 11692
// Size: 0x3d
//IDA: int __usercall DownClickOpp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int DownClickOpp(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 11756
// Size: 0x33
//IDA: void __cdecl SelectRaceStart()
void SelectRaceStart();

// Offset: 11808
// Size: 0x1e0
//IDA: int __cdecl SuggestRace()
int SuggestRace();

// Offset: 12288
// Size: 0x5d5
//IDA: void __usercall SelectRaceDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void SelectRaceDraw(int pCurrent_choice, int pCurrent_mode);

// Offset: 13784
// Size: 0x2f2
//IDA: tSO_result __usercall DoSelectRace@<EAX>(int *pSecond_time_around@<EAX>)
tSO_result DoSelectRace(int *pSecond_time_around);

// Offset: 14540
// Size: 0x87
//IDA: void __usercall DrawGridCar(int pX@<EAX>, int pY@<EDX>, br_pixelmap *pImage@<EBX>)
void DrawGridCar(int pX, int pY, br_pixelmap *pImage);

// Offset: 14676
// Size: 0x841
//IDA: void __usercall DrawGrid(int pOffset@<EAX>, int pDraw_it@<EDX>)
void DrawGrid(int pOffset, int pDraw_it);

// Offset: 16792
// Size: 0x99
//IDA: void __usercall MoveGrid(int pFrom@<EAX>, int pTo@<EDX>, tS32 pTime_to_move@<EBX>)
void MoveGrid(int pFrom, int pTo, tS32 pTime_to_move);

// Offset: 16948
// Size: 0x39
//IDA: int __usercall CalcGridOffset@<EAX>(int pPosition@<EAX>)
int CalcGridOffset(int pPosition);

// Offset: 17008
// Size: 0x4d
//IDA: void __usercall GridDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void GridDraw(int pCurrent_choice, int pCurrent_mode);

// Offset: 17088
// Size: 0x70
//IDA: void __usercall ActuallySwapOrder(int pFirst_index@<EAX>, int pSecond_index@<EDX>)
void ActuallySwapOrder(int pFirst_index, int pSecond_index);

// Offset: 17200
// Size: 0xf1
//IDA: void __usercall DoGridTransition(int pFirst_index@<EAX>, int pSecond_index@<EDX>)
void DoGridTransition(int pFirst_index, int pSecond_index);

// Offset: 17444
// Size: 0x37f
//IDA: void __cdecl ChallengeStart()
void ChallengeStart();

// Offset: 18340
// Size: 0xba
//IDA: int __usercall CheckNextStage@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CheckNextStage(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 18528
// Size: 0xd4
//IDA: int __usercall ChallengeDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int ChallengeDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 18740
// Size: 0xac
//IDA: void __cdecl DoChallengeScreen()
void DoChallengeScreen();

// Offset: 18912
// Size: 0x51
//IDA: int __usercall GridDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int GridDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 18996
// Size: 0x4b
//IDA: void __cdecl GridStart()
void GridStart();

// Offset: 19072
// Size: 0xb9
//IDA: int __usercall GridMoveLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GridMoveLeft(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 19260
// Size: 0xa6
//IDA: int __usercall GridMoveRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GridMoveRight(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 19428
// Size: 0xfd
//IDA: int __usercall GridClickCar@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickCar(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 19684
// Size: 0xd5
//IDA: int __usercall GridClickNumbers@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickNumbers(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 19900
// Size: 0x3d
//IDA: int __usercall GridClickLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickLeft(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 19964
// Size: 0x3d
//IDA: int __usercall GridClickRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int GridClickRight(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 20028
// Size: 0x5a
//IDA: int __usercall CheckChallenge@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int CheckChallenge(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 20120
// Size: 0x64
//IDA: int __usercall FindBestPos@<EAX>(int pOur_rank@<EAX>)
int FindBestPos(int pOur_rank);

// Offset: 20220
// Size: 0x38
//IDA: int __usercall SortGridFunction@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortGridFunction(void *pFirst_one, void *pSecond_one);

// Offset: 20276
// Size: 0x11e
//IDA: void __cdecl SortOpponents()
void SortOpponents();

// Offset: 20564
// Size: 0x146
//IDA: tSO_result __cdecl DoGridPosition()
tSO_result DoGridPosition();

// Offset: 20892
// Size: 0xb9
//IDA: void __cdecl CheckPlayersAreResponding()
void CheckPlayersAreResponding();

// Offset: 21080
// Size: 0x27
//IDA: void __cdecl NetSynchStartStart()
void NetSynchStartStart();

// Offset: 21120
// Size: 0x5c
//IDA: void __usercall DrawAnItem(int pX@<EAX>, int pY_index@<EDX>, int pFont_index@<EBX>, char *pText@<ECX>)
// Suffix added to avoid duplicate symbol
void DrawAnItem__racestrt(int pX, int pY_index, int pFont_index, char *pText);

// Offset: 21212
// Size: 0x2f7
//IDA: void __usercall NetSynchStartDraw(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void NetSynchStartDraw(int pCurrent_choice, int pCurrent_mode);

// Offset: 21972
// Size: 0x52
//IDA: int __usercall NetSynchStartDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int NetSynchStartDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 22056
// Size: 0xd9
//IDA: int __usercall NetSynchStartGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int NetSynchStartGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 22276
// Size: 0x6f
//IDA: int __usercall ExitWhenReady@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int ExitWhenReady(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 22388
// Size: 0xf6
//IDA: tSO_result __usercall NetSynchRaceStart2@<EAX>(tNet_synch_mode pMode@<EAX>)
tSO_result NetSynchRaceStart2(tNet_synch_mode pMode);

// Offset: 22636
// Size: 0x64
//IDA: tSO_result __cdecl NetSynchRaceStart()
tSO_result NetSynchRaceStart();

#endif
