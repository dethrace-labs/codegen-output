#ifndef _CUTSCENE_H_
#define _CUTSCENE_H_

#include "dr_types.h"
#include "br_types.h"

extern tS32 gLast_demo_end_anim; // addr: 0000E800

// Offset: 0
// Size: 0x76
//IDA: void* __cdecl radmalloc(unsigned long numbytes)
void* radmalloc(unsigned long numbytes);

// Offset: 120
// Size: 0x3b
//IDA: void __cdecl radfree(void *ptr)
void radfree(void *ptr);

// Offset: 180
// Size: 0xb3
//IDA: void __usercall ShowCutScene(int pIndex@<EAX>, int pWait_end@<EDX>, int pSound_ID@<EBX>, br_scalar pDelay)
void ShowCutScene(int pIndex, int pWait_end, int pSound_ID, br_scalar pDelay);

// Offset: 360
// Size: 0x22
//IDA: void __cdecl DoSCILogo()
void DoSCILogo();

// Offset: 396
// Size: 0x22
//IDA: void __cdecl DoStainlessLogo()
void DoStainlessLogo();

// Offset: 432
// Size: 0x34c
//IDA: void __usercall PlaySmackerFile(char *pSmack_name@<EAX>)
void PlaySmackerFile(char *pSmack_name);

// Offset: 1276
// Size: 0x3b
//IDA: void __cdecl DoOpeningAnimation()
void DoOpeningAnimation();

// Offset: 1336
// Size: 0x4f
//IDA: void __cdecl DoNewGameAnimation()
void DoNewGameAnimation();

// Offset: 1416
// Size: 0x22
//IDA: void __cdecl DoGoToRaceAnimation()
void DoGoToRaceAnimation();

// Offset: 1452
// Size: 0xd7
//IDA: void __cdecl DoEndRaceAnimation()
void DoEndRaceAnimation();

// Offset: 1668
// Size: 0x36
//IDA: void __cdecl DoGameOverAnimation()
void DoGameOverAnimation();

// Offset: 1724
// Size: 0x36
//IDA: void __cdecl DoGameCompletedAnimation()
void DoGameCompletedAnimation();

// Offset: 1780
// Size: 0x46
//IDA: void __cdecl StartLoadingScreen()
void StartLoadingScreen();

#endif
