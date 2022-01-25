#ifndef _MAINMENU_H_
#define _MAINMENU_H_

#include "dr_types.h"
#include "br_types.h"

extern char *gPalette_copy__mainmenu; // addr: 00037B30 // suffix added to avoid duplicate symbol
extern int gPixel_buffer_size__mainmenu; // addr: 00037B34 // suffix added to avoid duplicate symbol
extern tInterface_spec *gMain_menu_spec; // addr: 00037B38
extern int gMouse_was_started__mainmenu; // addr: 00037B3C // suffix added to avoid duplicate symbol
extern int gReplace_background; // addr: 00037B40
extern char *gPixels_copy__mainmenu; // addr: 00037B44 // suffix added to avoid duplicate symbol

// Offset: 0
// Size: 0xc2
//IDA: int __usercall MainMenuDone1@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int MainMenuDone1(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 196
// Size: 0xa3
//IDA: int __usercall MainMenuDone2@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int MainMenuDone2(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 360
// Size: 0xfb
//IDA: void __cdecl StartMainMenu()
void StartMainMenu();

// Offset: 612
// Size: 0x1c7
//IDA: int __usercall DoMainMenuInterface@<EAX>(tU32 pTime_out@<EAX>, int pContinue_allowed@<EDX>)
int DoMainMenuInterface(tU32 pTime_out, int pContinue_allowed);

// Offset: 1068
// Size: 0x100
//IDA: tMM_result __usercall GetMainMenuOption@<EAX>(tU32 pTime_out@<EAX>, int pContinue_allowed@<EDX>)
tMM_result GetMainMenuOption(tU32 pTime_out, int pContinue_allowed);

// Offset: 1324
// Size: 0xa9
//IDA: void __cdecl QuitVerifyStart()
void QuitVerifyStart();

// Offset: 1496
// Size: 0xdc
//IDA: int __usercall QuitVerifyDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int QuitVerifyDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 1716
// Size: 0x14d
//IDA: int __usercall DoVerifyQuit@<EAX>(int pReplace_background@<EAX>)
int DoVerifyQuit(int pReplace_background);

// Offset: 2052
// Size: 0x16e
//IDA: tMM_result __usercall DoMainMenu@<EAX>(tU32 pTime_out@<EAX>, int pSave_allowed@<EDX>, int pContinue_allowed@<EBX>)
tMM_result DoMainMenu(tU32 pTime_out, int pSave_allowed, int pContinue_allowed);

// Offset: 2420
// Size: 0x130
//IDA: void __usercall DoMainMenuScreen(tU32 pTime_out@<EAX>, int pSave_allowed@<EDX>, int pContinue_allowed@<EBX>)
void DoMainMenuScreen(tU32 pTime_out, int pSave_allowed, int pContinue_allowed);

#endif
