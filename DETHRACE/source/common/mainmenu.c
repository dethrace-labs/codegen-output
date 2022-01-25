#include "mainmenu.h"

 // Suffix added to avoid duplicate symbol
char *gPalette_copy__mainmenu;
 // Suffix added to avoid duplicate symbol
int gPixel_buffer_size__mainmenu;
tInterface_spec *gMain_menu_spec;
 // Suffix added to avoid duplicate symbol
int gMouse_was_started__mainmenu;
int gReplace_background;
 // Suffix added to avoid duplicate symbol
char *gPixels_copy__mainmenu;

// Offset: 0
// Size: 0xc2
//IDA: int __usercall MainMenuDone1@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int MainMenuDone1(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 196
// Size: 0xa3
//IDA: int __usercall MainMenuDone2@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int MainMenuDone2(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 360
// Size: 0xfb
//IDA: void __cdecl StartMainMenu()
void StartMainMenu() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 612
// Size: 0x1c7
//IDA: int __usercall DoMainMenuInterface@<EAX>(tU32 pTime_out@<EAX>, int pContinue_allowed@<EDX>)
int DoMainMenuInterface(tU32 pTime_out, int pContinue_allowed) {
    static tFlicette flicker_on1[8];
    static tFlicette flicker_off1[8];
    static tFlicette push1[8];
    static tMouse_area mouse_areas1[8];
    static tInterface_spec interface_spec1;
    static tFlicette flicker_on2[5];
    static tFlicette flicker_off2[5];
    static tFlicette push2[5];
    static tMouse_area mouse_areas2[5];
    static tInterface_spec interface_spec2;
    int result;
    LOG_TRACE("(%d, %d)", pTime_out, pContinue_allowed);
    NOT_IMPLEMENTED();
}

// Offset: 1068
// Size: 0x100
//IDA: tMM_result __usercall GetMainMenuOption@<EAX>(tU32 pTime_out@<EAX>, int pContinue_allowed@<EDX>)
tMM_result GetMainMenuOption(tU32 pTime_out, int pContinue_allowed) {
    int result;
    LOG_TRACE("(%d, %d)", pTime_out, pContinue_allowed);
    NOT_IMPLEMENTED();
}

// Offset: 1324
// Size: 0xa9
//IDA: void __cdecl QuitVerifyStart()
void QuitVerifyStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1496
// Size: 0xdc
//IDA: int __usercall QuitVerifyDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int QuitVerifyDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 1716
// Size: 0x14d
//IDA: int __usercall DoVerifyQuit@<EAX>(int pReplace_background@<EAX>)
int DoVerifyQuit(int pReplace_background) {
    static tFlicette flicker_on[2];
    static tFlicette flicker_off[2];
    static tFlicette push[2];
    static tMouse_area mouse_areas[2];
    static tInterface_spec interface_spec;
    int result;
    int switched_res;
    int woz_in_race;
    LOG_TRACE("(%d)", pReplace_background);
    NOT_IMPLEMENTED();
}

// Offset: 2052
// Size: 0x16e
//IDA: tMM_result __usercall DoMainMenu@<EAX>(tU32 pTime_out@<EAX>, int pSave_allowed@<EDX>, int pContinue_allowed@<EBX>)
tMM_result DoMainMenu(tU32 pTime_out, int pSave_allowed, int pContinue_allowed) {
    tMM_result the_result;
    LOG_TRACE("(%d, %d, %d)", pTime_out, pSave_allowed, pContinue_allowed);
    NOT_IMPLEMENTED();
}

// Offset: 2420
// Size: 0x130
//IDA: void __usercall DoMainMenuScreen(tU32 pTime_out@<EAX>, int pSave_allowed@<EDX>, int pContinue_allowed@<EBX>)
void DoMainMenuScreen(tU32 pTime_out, int pSave_allowed, int pContinue_allowed) {
    tPlayer_status old_status;
    LOG_TRACE("(%d, %d, %d)", pTime_out, pSave_allowed, pContinue_allowed);
    NOT_IMPLEMENTED();
}

