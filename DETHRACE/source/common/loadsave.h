#ifndef _LOADSAVE_H_
#define _LOADSAVE_H_

#include "dr_types.h"
#include "br_types.h"

extern tSave_game *gSaved_games[8]; // addr: 00037A30
extern int gStarted_typing; // addr: 00037A50
extern int gSave_allowed; // addr: 00037A54

// Offset: 0
// Size: 0x287
//IDA: void __usercall CorrectLoadByteOrdering(int pIndex@<EAX>)
void CorrectLoadByteOrdering(int pIndex);

// Offset: 648
// Size: 0x80
//IDA: tU32 __usercall CalcLSChecksum@<EAX>(tSave_game *pSaved_game@<EAX>)
tU32 CalcLSChecksum(tSave_game *pSaved_game);

// Offset: 776
// Size: 0x187
//IDA: void __cdecl LoadSavedGames()
void LoadSavedGames();

// Offset: 1168
// Size: 0x5e
//IDA: void __cdecl DisposeSavedGames()
void DisposeSavedGames();

// Offset: 1264
// Size: 0x2bd
//IDA: void __usercall LoadTheGame(int pSlot_index@<EAX>)
void LoadTheGame(int pSlot_index);

// Offset: 1968
// Size: 0x14b
//IDA: void __cdecl StartRollingSaveNamesIn()
void StartRollingSaveNamesIn();

// Offset: 2300
// Size: 0x27
//IDA: void __cdecl LoadStart()
void LoadStart();

// Offset: 2340
// Size: 0x19f
//IDA: int __usercall DoLoadGame@<EAX>(int pSave_allowed@<EAX>)
int DoLoadGame(int pSave_allowed);

// Offset: 2756
// Size: 0x287
//IDA: void __usercall CorrectSaveByteOrdering(int pIndex@<EAX>)
void CorrectSaveByteOrdering(int pIndex);

// Offset: 3404
// Size: 0xe5
//IDA: void __usercall SaveTheGame(int pSlot_number@<EAX>)
void SaveTheGame(int pSlot_number);

// Offset: 3636
// Size: 0x4d
//IDA: int __cdecl ConfirmMidGameSave()
int ConfirmMidGameSave();

// Offset: 3716
// Size: 0x1ec
//IDA: void __usercall MakeSavedGame(tSave_game **pSave_record@<EAX>)
void MakeSavedGame(tSave_game **pSave_record);

// Offset: 4208
// Size: 0x27
//IDA: void __cdecl SaveStart()
void SaveStart();

// Offset: 4248
// Size: 0x98
//IDA: void __usercall GetSaveName(int pStarting_to_type@<EAX>, int pCurrent_choice@<EDX>, char *pString@<EBX>, int *pMax_length@<ECX>)
void GetSaveName(int pStarting_to_type, int pCurrent_choice, char *pString, int *pMax_length);

// Offset: 4400
// Size: 0xbc
//IDA: int __usercall SaveDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SaveDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 4588
// Size: 0x170
//IDA: int __usercall SaveGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SaveGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 4956
// Size: 0x170
//IDA: int __usercall SaveEscape@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SaveEscape(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 5324
// Size: 0x5c
//IDA: int __usercall SaveGameInterface@<EAX>(int pDefault_choice@<EAX>)
int SaveGameInterface(int pDefault_choice);

// Offset: 5416
// Size: 0xb5
//IDA: void __usercall DoSaveGame(int pSave_allowed@<EAX>)
void DoSaveGame(int pSave_allowed);

#endif
