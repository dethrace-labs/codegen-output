#ifndef _INIT_H_
#define _INIT_H_

#include "dr_types.h"
#include "br_types.h"

extern int gGame_initialized; // addr: 00013A24
extern int gBr_initialized; // addr: 00013A28
extern int gBrZb_initialized; // addr: 00013A2C
extern int gInitialisation_finished; // addr: 00013A30
extern int gRender_indent; // addr: 00013A34
extern tU32 gAustere_time; // addr: 000373B0
extern int gInitial_rank; // addr: 000373B4
extern int gCredits_per_rank[3]; // addr: 000373B8
extern int gInitial_credits[3]; // addr: 000373C4
extern int gNet_mode_of_last_game; // addr: 000373D0
extern br_material *gDefault_track_material; // addr: 000373D4

// Offset: 0
// Size: 0x73
//IDA: void __cdecl AllocateSelf()
void AllocateSelf();

// Offset: 116
// Size: 0x202
//IDA: void __cdecl AllocateCamera()
void AllocateCamera();

// Offset: 632
// Size: 0x246
//IDA: void __cdecl ReinitialiseForwardCamera()
void ReinitialiseForwardCamera();

// Offset: 1216
// Size: 0xd9
//IDA: void __cdecl AllocateRearviewPixelmap()
void AllocateRearviewPixelmap();

// Offset: 1436
// Size: 0xa9
//IDA: void __cdecl ReinitialiseRearviewCamera()
void ReinitialiseRearviewCamera();

// Offset: 1608
// Size: 0x15b
//IDA: void __cdecl ReinitialiseRenderStuff()
void ReinitialiseRenderStuff();

// Offset: 1956
// Size: 0x22
//IDA: void __cdecl InstallFindFailedHooks()
void InstallFindFailedHooks();

// Offset: 1992
// Size: 0x9e
//IDA: void __cdecl AllocateStandardLamp()
void AllocateStandardLamp();

// Offset: 2152
// Size: 0x156
//IDA: void __cdecl InitializeBRenderEnvironment()
void InitializeBRenderEnvironment();

// Offset: 2496
// Size: 0x4f
//IDA: void __cdecl InitBRFonts()
void InitBRFonts();

// Offset: 2576
// Size: 0xc4
//IDA: void __cdecl AustereWarning()
void AustereWarning();

// Offset: 2772
// Size: 0x135
//IDA: void __cdecl InitLineStuff()
void InitLineStuff();

// Offset: 3084
// Size: 0x380
//IDA: void __cdecl InitSmokeStuff()
void InitSmokeStuff();

// Offset: 3980
// Size: 0x546
//IDA: void __cdecl Init2DStuff()
void Init2DStuff();

// Offset: 5332
// Size: 0x29f
//IDA: void __usercall InitialiseApplication(int pArgc@<EAX>, char **pArgv@<EDX>)
void InitialiseApplication(int pArgc, char **pArgv);

// Offset: 6004
// Size: 0x40
//IDA: void __usercall InitialiseDeathRace(int pArgc@<EAX>, char **pArgv@<EDX>)
void InitialiseDeathRace(int pArgc, char **pArgv);

// Offset: 6068
// Size: 0x1ab
//IDA: void __usercall InitGame(int pStart_race@<EAX>)
void InitGame(int pStart_race);

// Offset: 6496
// Size: 0xbf
//IDA: void __cdecl DisposeGameIfNecessary()
void DisposeGameIfNecessary();

// Offset: 6688
// Size: 0x36
//IDA: void __cdecl LoadInTrack()
void LoadInTrack();

// Offset: 6744
// Size: 0x2c
//IDA: void __cdecl DisposeTrack()
void DisposeTrack();

// Offset: 6788
// Size: 0x61
//IDA: void __usercall CopyMaterialColourFromIndex(br_material *pMaterial@<EAX>)
void CopyMaterialColourFromIndex(br_material *pMaterial);

// Offset: 6888
// Size: 0x4ce
//IDA: void __cdecl InitRace()
void InitRace();

// Offset: 8120
// Size: 0xd0
//IDA: void __cdecl DisposeRace()
void DisposeRace();

// Offset: 8328
// Size: 0x2d
//IDA: int __cdecl GetScreenSize()
int GetScreenSize();

// Offset: 8376
// Size: 0x2d
//IDA: void __usercall SetScreenSize(int pNew_size@<EAX>)
void SetScreenSize(int pNew_size);

#endif
