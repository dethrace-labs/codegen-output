#ifndef _NETGAME_H_
#define _NETGAME_H_

#include "dr_types.h"
#include "br_types.h"

extern int gPowerup_cost[4]; // addr: 00015878
extern int gGame_scores[6]; // addr: 00015888
extern int gPed_target; // addr: 00037B50
extern int gNot_shown_race_type_headup; // addr: 00037B54
extern tU32 gLast_it_change; // addr: 00037B58
extern tU32 gTime_for_punishment; // addr: 00037B5C
extern tNet_game_player_info *gLast_lepper; // addr: 00037B60
extern int gInitialised_grid; // addr: 00037B64
extern int gIt_or_fox; // addr: 00037B68

// Offset: 0
// Size: 0x927
//IDA: void __usercall SendCarData(tU32 pNext_frame_time@<EAX>)
void SendCarData(tU32 pNext_frame_time);

// Offset: 2344
// Size: 0x89
//IDA: void __usercall ReceivedRecover(tNet_contents *pContents@<EAX>)
void ReceivedRecover(tNet_contents *pContents);

// Offset: 2484
// Size: 0x75
//IDA: void __usercall CopyMechanics(tCar_spec *pCar@<EAX>, tNet_contents *pContents@<EDX>)
void CopyMechanics(tCar_spec *pCar, tNet_contents *pContents);

// Offset: 2604
// Size: 0x562
//IDA: void __usercall ReceivedMechanics(tNet_contents *pContents@<EAX>)
void ReceivedMechanics(tNet_contents *pContents);

// Offset: 3984
// Size: 0x240
//IDA: void __usercall ReceivedCopInfo(tNet_contents *pContents@<EAX>)
void ReceivedCopInfo(tNet_contents *pContents);

// Offset: 4560
// Size: 0xfa
//IDA: void __cdecl SendAllNonCarPositions()
void SendAllNonCarPositions();

// Offset: 4812
// Size: 0x76
//IDA: void __usercall ReceivedNonCarPosition(tNet_contents *pContents@<EAX>)
void ReceivedNonCarPosition(tNet_contents *pContents);

// Offset: 4932
// Size: 0x34a
//IDA: void __usercall ReceivedNonCar(tNet_contents *pContents@<EAX>)
void ReceivedNonCar(tNet_contents *pContents);

// Offset: 5776
// Size: 0x269
//IDA: void __usercall SignalToStartRace2(int pIndex@<EAX>)
void SignalToStartRace2(int pIndex);

// Offset: 6396
// Size: 0x38
//IDA: void __cdecl SignalToStartRace()
void SignalToStartRace();

// Offset: 6452
// Size: 0x308
//IDA: void __cdecl SetUpNetCarPositions()
void SetUpNetCarPositions();

// Offset: 7228
// Size: 0x5d
//IDA: void __usercall ReinitialiseCar(tCar_spec *pCar@<EAX>)
void ReinitialiseCar(tCar_spec *pCar);

// Offset: 7324
// Size: 0x11d
//IDA: void __usercall RepositionPlayer(int pIndex@<EAX>)
void RepositionPlayer(int pIndex);

// Offset: 7612
// Size: 0xc8
//IDA: void __usercall DisableCar(tCar_spec *pCar@<EAX>)
void DisableCar(tCar_spec *pCar);

// Offset: 7812
// Size: 0xde
//IDA: void __usercall EnableCar(tCar_spec *pCar@<EAX>)
void EnableCar(tCar_spec *pCar);

// Offset: 8036
// Size: 0x37d
//IDA: void __usercall DoNetworkHeadups(int pCredits@<EAX>)
void DoNetworkHeadups(int pCredits);

// Offset: 8932
// Size: 0xa7
//IDA: int __usercall SortNetHeadAscending@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortNetHeadAscending(void *pFirst_one, void *pSecond_one);

// Offset: 9100
// Size: 0xa7
//IDA: int __usercall SortNetHeadDescending@<EAX>(void *pFirst_one@<EAX>, void *pSecond_one@<EDX>)
int SortNetHeadDescending(void *pFirst_one, void *pSecond_one);

// Offset: 9268
// Size: 0x48
//IDA: void __usercall ClipName(char *pName@<EAX>, tDR_font *pFont@<EDX>, int pMax_width@<EBX>)
void ClipName(char *pName, tDR_font *pFont, int pMax_width);

// Offset: 9340
// Size: 0x8ab
//IDA: void __usercall DoNetScores2(int pOnly_sort_scores@<EAX>)
void DoNetScores2(int pOnly_sort_scores);

// Offset: 11560
// Size: 0x29
//IDA: void __cdecl DoNetScores()
void DoNetScores();

// Offset: 11604
// Size: 0x9c
//IDA: void __cdecl InitNetHeadups()
void InitNetHeadups();

// Offset: 11760
// Size: 0x92
//IDA: void __cdecl DisposeNetHeadups()
void DisposeNetHeadups();

// Offset: 11908
// Size: 0x82
//IDA: void __cdecl EverybodysLost()
void EverybodysLost();

// Offset: 12040
// Size: 0x2a4
//IDA: void __usercall DeclareWinner(int pWinner_index@<EAX>)
void DeclareWinner(int pWinner_index);

// Offset: 12716
// Size: 0x1dc
//IDA: void __usercall PlayerIsIt(tNet_game_player_info *pPlayer@<EAX>)
void PlayerIsIt(tNet_game_player_info *pPlayer);

// Offset: 13192
// Size: 0xc3
//IDA: int __usercall FarEnoughAway@<EAX>(tNet_game_player_info *pPlayer_1@<EAX>, tNet_game_player_info *pPlayer_2@<EDX>)
int FarEnoughAway(tNet_game_player_info *pPlayer_1, tNet_game_player_info *pPlayer_2);

// Offset: 13388
// Size: 0x90
//IDA: void __usercall CarInContactWithItOrFox(tNet_game_player_info *pPlayer@<EAX>)
void CarInContactWithItOrFox(tNet_game_player_info *pPlayer);

// Offset: 13532
// Size: 0x114
//IDA: void __usercall SelectRandomItOrFox(int pNot_this_one@<EAX>)
void SelectRandomItOrFox(int pNot_this_one);

// Offset: 13808
// Size: 0xa0a
//IDA: void __cdecl CalcPlayerScores()
void CalcPlayerScores();

// Offset: 16380
// Size: 0xb7
//IDA: void __cdecl SendPlayerScores()
void SendPlayerScores();

// Offset: 16564
// Size: 0x35
//IDA: void __cdecl DoNetGameManagement()
void DoNetGameManagement();

// Offset: 16620
// Size: 0xda
//IDA: void __usercall InitialisePlayerScore(tNet_game_player_info *pPlayer@<EAX>)
void InitialisePlayerScore(tNet_game_player_info *pPlayer);

// Offset: 16840
// Size: 0x8e
//IDA: void __cdecl InitPlayers()
void InitPlayers();

// Offset: 16984
// Size: 0x157
//IDA: void __usercall BuyPSPowerup(int pIndex@<EAX>)
void BuyPSPowerup(int pIndex);

// Offset: 17328
// Size: 0x29
//IDA: void __cdecl BuyArmour()
void BuyArmour();

// Offset: 17372
// Size: 0xbc
//IDA: void __cdecl BuyPower()
void BuyPower();

// Offset: 17560
// Size: 0x2c
//IDA: void __cdecl BuyOffense()
void BuyOffense();

// Offset: 17604
// Size: 0xf7
//IDA: void __usercall UseGeneralScore(int pScore@<EAX>)
void UseGeneralScore(int pScore);

// Offset: 17852
// Size: 0x35
//IDA: void __usercall NetSendEnvironmentChanges(tNet_game_player_info *pPlayer@<EAX>)
void NetSendEnvironmentChanges(tNet_game_player_info *pPlayer);

// Offset: 17908
// Size: 0x98
//IDA: void __cdecl UpdateEnvironments()
void UpdateEnvironments();

// Offset: 18060
// Size: 0x27b
//IDA: void __usercall ReceivedGameplay(tNet_contents *pContents@<EAX>, tNet_message *pMessage@<EDX>, tU32 pReceive_time@<EBX>)
void ReceivedGameplay(tNet_contents *pContents, tNet_message *pMessage, tU32 pReceive_time);

// Offset: 18696
// Size: 0x78
//IDA: void __usercall SendGameplay(tPlayer_ID pPlayer@<EAX>, tNet_gameplay_mess pMess@<EDX>, int pParam_1@<EBX>, int pParam_2@<ECX>, int pParam_3, int pParam_4)
void SendGameplay(tPlayer_ID pPlayer, tNet_gameplay_mess pMess, int pParam_1, int pParam_2, int pParam_3, int pParam_4);

// Offset: 18816
// Size: 0x75
//IDA: void __usercall SendGameplayToAllPlayers(tNet_gameplay_mess pMess@<EAX>, int pParam_1@<EDX>, int pParam_2@<EBX>, int pParam_3@<ECX>, int pParam_4)
void SendGameplayToAllPlayers(tNet_gameplay_mess pMess, int pParam_1, int pParam_2, int pParam_3, int pParam_4);

// Offset: 18936
// Size: 0x7e
//IDA: void __usercall SendGameplayToHost(tNet_gameplay_mess pMess@<EAX>, int pParam_1@<EDX>, int pParam_2@<EBX>, int pParam_3@<ECX>, int pParam_4)
void SendGameplayToHost(tNet_gameplay_mess pMess, int pParam_1, int pParam_2, int pParam_3, int pParam_4);

// Offset: 19064
// Size: 0x2a
//IDA: void __cdecl InitNetGameplayStuff()
void InitNetGameplayStuff();

// Offset: 19108
// Size: 0x31
//IDA: void __cdecl DefaultNetName()
void DefaultNetName();

// Offset: 19160
// Size: 0x74
//IDA: void __usercall NetSendPointCrush(tCar_spec *pCar@<EAX>, tU16 pCrush_point_index@<EDX>, br_vector3 *pEnergy_vector@<EBX>)
void NetSendPointCrush(tCar_spec *pCar, tU16 pCrush_point_index, br_vector3 *pEnergy_vector);

// Offset: 19276
// Size: 0x122
//IDA: void __usercall RecievedCrushPoint(tNet_contents *pContents@<EAX>)
void RecievedCrushPoint(tNet_contents *pContents);

// Offset: 19568
// Size: 0x90
//IDA: void __usercall GetReducedMatrix(tReduced_matrix *m1@<EAX>, br_matrix34 *m2@<EDX>)
void GetReducedMatrix(tReduced_matrix *m1, br_matrix34 *m2);

// Offset: 19712
// Size: 0xee
//IDA: void __usercall GetExpandedMatrix(br_matrix34 *m1@<EAX>, tReduced_matrix *m2@<EDX>)
void GetExpandedMatrix(br_matrix34 *m1, tReduced_matrix *m2);

// Offset: 19952
// Size: 0x26
//IDA: void __usercall NetEarnCredits(tNet_game_player_info *pPlayer@<EAX>, tS32 pCredits@<EDX>)
void NetEarnCredits(tNet_game_player_info *pPlayer, tS32 pCredits);

#endif
