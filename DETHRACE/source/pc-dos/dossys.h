#ifndef _DOSSYS_H_
#define _DOSSYS_H_

#include "dr_types.h"
#include "br_types.h"

extern int gDOSGfx_initialized; // addr: 0001AE58
extern int gExtra_mem; // addr: 0001AE5C
extern int gReplay_override; // addr: 0001AE60
extern tGraf_spec gGraf_specs[2]; // addr: 0001AE64
extern int gASCII_table[128]; // addr: 000445C0
extern tU32 gKeyboard_bits[8]; // addr: 000447C0
extern int gASCII_shift_table[128]; // addr: 000447E0
extern char gNetwork_profile_fname[256]; // addr: 000449E0
extern tS32 gJoystick_min1y; // addr: 00044AE0
extern tS32 gJoystick_min2y; // addr: 00044AE4
extern tS32 gJoystick_min2x; // addr: 00044AE8
extern tS32 gRaw_joystick2y; // addr: 00044AEC
extern tS32 gRaw_joystick2x; // addr: 00044AF0
extern tS32 gRaw_joystick1y; // addr: 00044AF4
extern tS32 gRaw_joystick1x; // addr: 00044AF8
extern tS32 gJoystick_range2y; // addr: 00044AFC
extern tS32 gJoystick_range2x; // addr: 00044B00
extern tS32 gJoystick_range1y; // addr: 00044B04
extern tS32 gJoystick_range1x; // addr: 00044B08
extern int gNo_voodoo; // addr: 00044B0C
extern int gSwitched_resolution; // addr: 00044B10
extern br_pixelmap *gReal_back_screen; // addr: 00044B14
extern tS32 gJoystick_min1x; // addr: 00044B18
extern br_pixelmap *gTemp_screen; // addr: 00044B1C
extern tU32 gUpper_loop_limit; // addr: 00044B20
extern int gReal_back_screen_locked; // addr: 00044B24
extern void (*gPrev_keyboard_handler)(); // addr: 00044B2A
extern tU8 gScan_code[123][2]; // addr: 00044B30

// Offset: 0
// Size: 0x123
//IDA: void __cdecl KeyboardHandler()
void KeyboardHandler();

// Offset: 292
// Size: 0x47
//IDA: int __usercall KeyDown@<EAX>(tU8 pScan_code@<EAX>)
int KeyDown(tU8 pScan_code);

// Offset: 364
// Size: 0x47
//IDA: void __usercall KeyTranslation(tU8 pKey_index@<EAX>, tU8 pScan_code_1@<EDX>, tU8 pScan_code_2@<EBX>)
void KeyTranslation(tU8 pKey_index, tU8 pScan_code_1, tU8 pScan_code_2);

// Offset: 436
// Size: 0x769
//IDA: void __cdecl KeyBegin()
void KeyBegin();

// Offset: 2336
// Size: 0x34
//IDA: void __cdecl KeyEnd()
void KeyEnd();

// Offset: 2388
// Size: 0x4f
//IDA: int __usercall KeyDown22@<EAX>(int pKey_index@<EAX>)
int KeyDown22(int pKey_index);

// Offset: 2468
// Size: 0x8d
//IDA: void __usercall PDSetKeyArray(int *pKeys@<EAX>, int pMark@<EDX>)
void PDSetKeyArray(int *pKeys, int pMark);

// Offset: 2612
// Size: 0x49
//IDA: int __usercall PDGetASCIIFromKey@<EAX>(int pKey@<EAX>)
int PDGetASCIIFromKey(int pKey);

// Offset: 2688
// Size: 0xae
//IDA: void __usercall PDFatalError(char *pThe_str@<EAX>)
void PDFatalError(char *pThe_str);

// Offset: 2864
// Size: 0x37
//IDA: void __usercall PDNonFatalError(char *pThe_str@<EAX>)
void PDNonFatalError(char *pThe_str);

// Offset: 2920
// Size: 0xbe
//IDA: void __cdecl PDInitialiseSystem()
void PDInitialiseSystem();

// Offset: 3112
// Size: 0x30
//IDA: void __cdecl PDShutdownSystem()
void PDShutdownSystem();

// Offset: 3160
// Size: 0x18
//IDA: void __cdecl PDSaveOriginalPalette()
void PDSaveOriginalPalette();

// Offset: 3184
// Size: 0x18
//IDA: void __cdecl PDRevertPalette()
void PDRevertPalette();

// Offset: 3208
// Size: 0x5a
//IDA: int __usercall PDInitScreenVars@<EAX>(int pArgc@<EAX>, char **pArgv@<EDX>)
int PDInitScreenVars(int pArgc, char **pArgv);

// Offset: 3300
// Size: 0x18
//IDA: void __cdecl PDInitScreen()
void PDInitScreen();

// Offset: 3324
// Size: 0x71
//IDA: void __cdecl PDLockRealBackScreen()
void PDLockRealBackScreen();

// Offset: 3440
// Size: 0x30
//IDA: void __cdecl PDUnlockRealBackScreen()
void PDUnlockRealBackScreen();

// Offset: 3488
// Size: 0x1af
//IDA: void __cdecl PDAllocateScreenAndBack()
void PDAllocateScreenAndBack();

// Offset: 3920
// Size: 0xd1
//IDA: void __usercall Copy8BitTo16BitPixelmap(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, br_pixelmap *pPalette@<EBX>)
void Copy8BitTo16BitPixelmap(br_pixelmap *pDst, br_pixelmap *pSrc, br_pixelmap *pPalette);

// Offset: 4132
// Size: 0x133
//IDA: void __usercall Double8BitTo16BitPixelmap(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, br_pixelmap *pPalette@<EBX>, tU16 pOff@<ECX>, tU16 pSrc_width, tU16 pSrc_height)
void Double8BitTo16BitPixelmap(br_pixelmap *pDst, br_pixelmap *pSrc, br_pixelmap *pPalette, tU16 pOff, tU16 pSrc_width, tU16 pSrc_height);

// Offset: 4440
// Size: 0x23
//IDA: br_pixelmap* __cdecl PDInterfacePixelmap()
br_pixelmap* PDInterfacePixelmap();

// Offset: 4476
// Size: 0x9a
//IDA: void __cdecl SwapBackScreen()
void SwapBackScreen();

// Offset: 4632
// Size: 0xfd
//IDA: void __usercall ReallyCopyBackScreen(int pRendering_area_only@<EAX>, int pClear_top_and_bottom@<EDX>)
void ReallyCopyBackScreen(int pRendering_area_only, int pClear_top_and_bottom);

// Offset: 4888
// Size: 0x28
//IDA: void __usercall CopyBackScreen(int pRendering_area_only@<EAX>)
void CopyBackScreen(int pRendering_area_only);

// Offset: 4928
// Size: 0x5c
//IDA: void __usercall PDScreenBufferSwap(int pRendering_area_only@<EAX>)
void PDScreenBufferSwap(int pRendering_area_only);

// Offset: 5020
// Size: 0x52
//IDA: void __usercall PDPixelmapToScreenRectangleCopy(br_pixelmap *dst@<EAX>, br_int_16 dx@<EDX>, br_int_16 dy@<EBX>, br_pixelmap *src@<ECX>, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h)
void PDPixelmapToScreenRectangleCopy(br_pixelmap *dst, br_int_16 dx, br_int_16 dy, br_pixelmap *src, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h);

// Offset: 5104
// Size: 0x44
//IDA: void __usercall PDPixelmapHLineOnScreen(br_pixelmap *dst@<EAX>, br_int_16 x1@<EDX>, br_int_16 y1@<EBX>, br_int_16 x2@<ECX>, br_int_16 y2, br_uint_32 colour)
void PDPixelmapHLineOnScreen(br_pixelmap *dst, br_int_16 x1, br_int_16 y1, br_int_16 x2, br_int_16 y2, br_uint_32 colour);

// Offset: 5172
// Size: 0x44
//IDA: void __usercall PDPixelmapVLineOnScreen(br_pixelmap *dst@<EAX>, br_int_16 x1@<EDX>, br_int_16 y1@<EBX>, br_int_16 x2@<ECX>, br_int_16 y2, br_uint_32 colour)
void PDPixelmapVLineOnScreen(br_pixelmap *dst, br_int_16 x1, br_int_16 y1, br_int_16 x2, br_int_16 y2, br_uint_32 colour);

// Offset: 5240
// Size: 0x18
//IDA: void __cdecl PDInstallErrorHandlers()
void PDInstallErrorHandlers();

// Offset: 5264
// Size: 0x27
//IDA: void __cdecl PDSetFileVariables()
void PDSetFileVariables();

// Offset: 5304
// Size: 0x62
//IDA: void __usercall PDBuildAppPath(char *pThe_path@<EAX>)
void PDBuildAppPath(char *pThe_path);

// Offset: 5404
// Size: 0x85
//IDA: void __usercall PDForEveryFile(char *pThe_path@<EAX>, void (*pAction_routine)(char*)@<EDX>)
void PDForEveryFile(char *pThe_path, void (*pAction_routine)(char*));

// Offset: 5540
// Size: 0x27
//IDA: void __usercall PDSetPalette(br_pixelmap *pThe_palette@<EAX>)
void PDSetPalette(br_pixelmap *pThe_palette);

// Offset: 5580
// Size: 0x88
//IDA: void __usercall PDSetPaletteEntries(br_pixelmap *pPalette@<EAX>, int pFirst_colour@<EDX>, int pCount@<EBX>)
void PDSetPaletteEntries(br_pixelmap *pPalette, int pFirst_colour, int pCount);

// Offset: 5716
// Size: 0x2c
//IDA: void __cdecl PDSwitchToRealResolution()
void PDSwitchToRealResolution();

// Offset: 5760
// Size: 0x2c
//IDA: void __cdecl PDSwitchToLoresMode()
void PDSwitchToLoresMode();

// Offset: 5804
// Size: 0x56
//IDA: void __usercall PDMouseButtons(int *pButton_1@<EAX>, int *pButton_2@<EDX>)
void PDMouseButtons(int *pButton_1, int *pButton_2);

// Offset: 5892
// Size: 0x17c
//IDA: void __usercall PDGetMousePosition(int *pX_coord@<EAX>, int *pY_coord@<EDX>)
void PDGetMousePosition(int *pX_coord, int *pY_coord);

// Offset: 6272
// Size: 0x26
//IDA: int __cdecl PDGetTotalTime()
int PDGetTotalTime();

// Offset: 6312
// Size: 0x25
//IDA: int __usercall PDServiceSystem@<EAX>(tU32 pTime_since_last_call@<EAX>)
int PDServiceSystem(tU32 pTime_since_last_call);

// Offset: 6352
// Size: 0x79
//IDA: tU32 __cdecl LargestBlockAvail()
tU32 LargestBlockAvail();

// Offset: 6476
// Size: 0x6f
//IDA: void* __usercall PDGrabLargestMammaryWeCanPlayWith@<EAX>(tU32 pMaximum_required@<EAX>, tU32 *pAmount_allocated@<EDX>)
void* PDGrabLargestMammaryWeCanPlayWith(tU32 pMaximum_required, tU32 *pAmount_allocated);

// Offset: 6588
// Size: 0xc8
//IDA: void __usercall PDAllocateActionReplayBuffer(char **pBuffer@<EAX>, tU32 *pBuffer_size@<EDX>)
void PDAllocateActionReplayBuffer(char **pBuffer, tU32 *pBuffer_size);

// Offset: 6788
// Size: 0x23
//IDA: void __usercall PDDisposeActionReplayBuffer(char *pBuffer@<EAX>)
void PDDisposeActionReplayBuffer(char *pBuffer);

// Offset: 6824
// Size: 0x92
//IDA: void __usercall Usage(char *pProgpath@<EAX>)
void Usage(char *pProgpath);

// Offset: 6972
// Size: 0x2d2
//IDA: int __usercall main@<EAX>(int pArgc@<EAX>, char **pArgv@<EDX>)
int main(int pArgc, char **pArgv);

// Offset: 7696
// Size: 0x3e
//IDA: int __cdecl OurGetChar()
int OurGetChar();

// Offset: 7760
// Size: 0x22
//IDA: int __cdecl PDGetGorePassword()
int PDGetGorePassword();

// Offset: 7796
// Size: 0x49
//IDA: void __usercall PDDisplayGoreworthiness(int pGory@<EAX>)
void PDDisplayGoreworthiness(int pGory);

// Offset: 7872
// Size: 0x23
//IDA: void __usercall PDEnterDebugger(char *pStr@<EAX>)
void PDEnterDebugger(char *pStr);

// Offset: 7908
// Size: 0x18
//IDA: void __cdecl PDEndItAllAndReRunTheBastard()
void PDEndItAllAndReRunTheBastard();

// Offset: 7932
// Size: 0x39
//IDA: int __usercall matherr@<EAX>(exception *err@<EAX>)
int matherr(exception *err);

// Offset: 7992
// Size: 0x7f
//IDA: int __usercall LoopLimitTooLow@<EAX>(tU32 limit@<EAX>)
int LoopLimitTooLow(tU32 limit);

// Offset: 8120
// Size: 0x83
//IDA: tS32 __cdecl UpperLoopLimit()
tS32 UpperLoopLimit();

// Offset: 8252
// Size: 0x41
//IDA: int __cdecl InitJoysticks()
int InitJoysticks();

// Offset: 8320
// Size: 0xb6
//IDA: tU32 __usercall ReadJoystickAxis@<EAX>(int pBit@<EAX>)
tU32 ReadJoystickAxis(int pBit);

// Offset: 8504
// Size: 0x196
//IDA: void __cdecl PDReadJoySticks()
void PDReadJoySticks();

// Offset: 8912
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy1X()
tS32 PDGetJoy1X();

// Offset: 9036
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy1Y()
tS32 PDGetJoy1Y();

// Offset: 9160
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy2X()
tS32 PDGetJoy2X();

// Offset: 9284
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy2Y()
tS32 PDGetJoy2Y();

// Offset: 9408
// Size: 0x42
//IDA: int __cdecl PDGetJoy1Button1()
int PDGetJoy1Button1();

// Offset: 9476
// Size: 0x42
//IDA: int __cdecl PDGetJoy1Button2()
int PDGetJoy1Button2();

// Offset: 9544
// Size: 0x22
//IDA: int __cdecl PDGetJoy1Button3()
int PDGetJoy1Button3();

// Offset: 9580
// Size: 0x22
//IDA: int __cdecl PDGetJoy1Button4()
int PDGetJoy1Button4();

// Offset: 9616
// Size: 0x42
//IDA: int __cdecl PDGetJoy2Button1()
int PDGetJoy2Button1();

// Offset: 9684
// Size: 0x42
//IDA: int __cdecl PDGetJoy2Button2()
int PDGetJoy2Button2();

// Offset: 9752
// Size: 0x22
//IDA: int __cdecl PDGetJoy2Button3()
int PDGetJoy2Button3();

// Offset: 9788
// Size: 0x22
//IDA: int __cdecl PDGetJoy2Button4()
int PDGetJoy2Button4();

// Offset: 9824
// Size: 0x33
//IDA: int __usercall PDFileUnlock@<EAX>(char *pThe_path@<EAX>)
int PDFileUnlock(char *pThe_path);

// Offset: 9876
// Size: 0x21
//IDA: void __cdecl CriticalISR(INTPACK pRegs)
void CriticalISR(INTPACK pRegs);

// Offset: 9912
// Size: 0x10d
//IDA: int __usercall PDCheckDriveExists2@<EAX>(char *pThe_path@<EAX>, char *pFile_name@<EDX>, tU32 pMin_size@<EBX>)
int PDCheckDriveExists2(char *pThe_path, char *pFile_name, tU32 pMin_size);

// Offset: 10184
// Size: 0x6c
//IDA: int __cdecl PDDoWeLeadAnAustereExistance()
int PDDoWeLeadAnAustereExistance();

#endif
