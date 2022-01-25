#ifndef _MAIN_H_
#define _MAIN_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 0
// Size: 0xa1
//IDA: void __cdecl QuitGame()
void QuitGame();

// Offset: 164
// Size: 0x61
//IDA: tU32 __cdecl TrackCount(br_actor *pActor, tU32 *pCount)
tU32 TrackCount(br_actor *pActor, tU32 *pCount);

// Offset: 264
// Size: 0x5f
//IDA: void __cdecl CheckNumberOfTracks()
void CheckNumberOfTracks();

// Offset: 360
// Size: 0xad
//IDA: void __usercall ServiceTheGame(int pRacing@<EAX>)
void ServiceTheGame(int pRacing);

// Offset: 536
// Size: 0x29
//IDA: void __cdecl ServiceGame()
void ServiceGame();

// Offset: 580
// Size: 0x31
//IDA: void __cdecl ServiceGameInRace()
void ServiceGameInRace();

// Offset: 632
// Size: 0xb1
//IDA: void __usercall GameMain(int pArgc@<EAX>, char **pArgv@<EDX>)
void GameMain(int pArgc, char **pArgv);

#endif
