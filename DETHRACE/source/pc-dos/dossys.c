#include "dossys.h"

int gDOSGfx_initialized;
int gExtra_mem;
int gReplay_override;
tGraf_spec gGraf_specs[2];
int gASCII_table[128];
tU32 gKeyboard_bits[8];
int gASCII_shift_table[128];
char gNetwork_profile_fname[256];
tS32 gJoystick_min1y;
tS32 gJoystick_min2y;
tS32 gJoystick_min2x;
tS32 gRaw_joystick2y;
tS32 gRaw_joystick2x;
tS32 gRaw_joystick1y;
tS32 gRaw_joystick1x;
tS32 gJoystick_range2y;
tS32 gJoystick_range2x;
tS32 gJoystick_range1y;
tS32 gJoystick_range1x;
int gNo_voodoo;
int gSwitched_resolution;
br_pixelmap *gReal_back_screen;
tS32 gJoystick_min1x;
br_pixelmap *gTemp_screen;
tU32 gUpper_loop_limit;
int gReal_back_screen_locked;
void (*gPrev_keyboard_handler)();
tU8 gScan_code[123][2];

// Offset: 0
// Size: 0x123
//IDA: void __cdecl KeyboardHandler()
void KeyboardHandler() {
    tU8 scan_code;
    tU8 up;
    static tU8 extended;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 292
// Size: 0x47
//IDA: int __usercall KeyDown@<EAX>(tU8 pScan_code@<EAX>)
int KeyDown(tU8 pScan_code) {
    LOG_TRACE("(%d)", pScan_code);
    NOT_IMPLEMENTED();
}

// Offset: 364
// Size: 0x47
//IDA: void __usercall KeyTranslation(tU8 pKey_index@<EAX>, tU8 pScan_code_1@<EDX>, tU8 pScan_code_2@<EBX>)
void KeyTranslation(tU8 pKey_index, tU8 pScan_code_1, tU8 pScan_code_2) {
    LOG_TRACE("(%d, %d, %d)", pKey_index, pScan_code_1, pScan_code_2);
    NOT_IMPLEMENTED();
}

// Offset: 436
// Size: 0x769
//IDA: void __cdecl KeyBegin()
void KeyBegin() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2336
// Size: 0x34
//IDA: void __cdecl KeyEnd()
void KeyEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2388
// Size: 0x4f
//IDA: int __usercall KeyDown22@<EAX>(int pKey_index@<EAX>)
int KeyDown22(int pKey_index) {
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 2468
// Size: 0x8d
//IDA: void __usercall PDSetKeyArray(int *pKeys@<EAX>, int pMark@<EDX>)
void PDSetKeyArray(int *pKeys, int pMark) {
    int i;
    tS32 joyX;
    tS32 joyY;
    LOG_TRACE("(%p, %d)", pKeys, pMark);
    NOT_IMPLEMENTED();
}

// Offset: 2612
// Size: 0x49
//IDA: int __usercall PDGetASCIIFromKey@<EAX>(int pKey@<EAX>)
int PDGetASCIIFromKey(int pKey) {
    LOG_TRACE("(%d)", pKey);
    NOT_IMPLEMENTED();
}

// Offset: 2688
// Size: 0xae
//IDA: void __usercall PDFatalError(char *pThe_str@<EAX>)
void PDFatalError(char *pThe_str) {
    static int been_here;
    LOG_TRACE("(\"%s\")", pThe_str);
    NOT_IMPLEMENTED();
}

// Offset: 2864
// Size: 0x37
//IDA: void __usercall PDNonFatalError(char *pThe_str@<EAX>)
void PDNonFatalError(char *pThe_str) {
    LOG_TRACE("(\"%s\")", pThe_str);
    NOT_IMPLEMENTED();
}

// Offset: 2920
// Size: 0xbe
//IDA: void __cdecl PDInitialiseSystem()
void PDInitialiseSystem() {
    tPath_name the_path;
    FILE *f;
    int len;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3112
// Size: 0x30
//IDA: void __cdecl PDShutdownSystem()
void PDShutdownSystem() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3160
// Size: 0x18
//IDA: void __cdecl PDSaveOriginalPalette()
void PDSaveOriginalPalette() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3184
// Size: 0x18
//IDA: void __cdecl PDRevertPalette()
void PDRevertPalette() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3208
// Size: 0x5a
//IDA: int __usercall PDInitScreenVars@<EAX>(int pArgc@<EAX>, char **pArgv@<EDX>)
int PDInitScreenVars(int pArgc, char **pArgv) {
    LOG_TRACE("(%d, %p)", pArgc, pArgv);
    NOT_IMPLEMENTED();
}

// Offset: 3300
// Size: 0x18
//IDA: void __cdecl PDInitScreen()
void PDInitScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3324
// Size: 0x71
//IDA: void __cdecl PDLockRealBackScreen()
void PDLockRealBackScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3440
// Size: 0x30
//IDA: void __cdecl PDUnlockRealBackScreen()
void PDUnlockRealBackScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3488
// Size: 0x1af
//IDA: void __cdecl PDAllocateScreenAndBack()
void PDAllocateScreenAndBack() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3920
// Size: 0xd1
//IDA: void __usercall Copy8BitTo16BitPixelmap(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, br_pixelmap *pPalette@<EBX>)
void Copy8BitTo16BitPixelmap(br_pixelmap *pDst, br_pixelmap *pSrc, br_pixelmap *pPalette) {
    int x;
    int y;
    tU8 *src;
    tU8 value;
    tU8 red;
    tU8 green;
    tU8 blue;
    tU16 *dst;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %p, %p)", pDst, pSrc, pPalette);
    NOT_IMPLEMENTED();
}

// Offset: 4132
// Size: 0x133
//IDA: void __usercall Double8BitTo16BitPixelmap(br_pixelmap *pDst@<EAX>, br_pixelmap *pSrc@<EDX>, br_pixelmap *pPalette@<EBX>, tU16 pOff@<ECX>, tU16 pSrc_width, tU16 pSrc_height)
void Double8BitTo16BitPixelmap(br_pixelmap *pDst, br_pixelmap *pSrc, br_pixelmap *pPalette, tU16 pOff, tU16 pSrc_width, tU16 pSrc_height) {
    int x;
    int y;
    tU8 *src;
    tU8 value;
    tU8 red;
    tU8 green;
    tU8 blue;
    tU16 *dst0;
    tU16 *dst1;
    tU16 sixteen;
    tU16 *palette_entry;
    LOG_TRACE("(%p, %p, %p, %d, %d, %d)", pDst, pSrc, pPalette, pOff, pSrc_width, pSrc_height);
    NOT_IMPLEMENTED();
}

// Offset: 4440
// Size: 0x23
//IDA: br_pixelmap* __cdecl PDInterfacePixelmap()
br_pixelmap* PDInterfacePixelmap() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4476
// Size: 0x9a
//IDA: void __cdecl SwapBackScreen()
void SwapBackScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4632
// Size: 0xfd
//IDA: void __usercall ReallyCopyBackScreen(int pRendering_area_only@<EAX>, int pClear_top_and_bottom@<EDX>)
void ReallyCopyBackScreen(int pRendering_area_only, int pClear_top_and_bottom) {
    LOG_TRACE("(%d, %d)", pRendering_area_only, pClear_top_and_bottom);
    NOT_IMPLEMENTED();
}

// Offset: 4888
// Size: 0x28
//IDA: void __usercall CopyBackScreen(int pRendering_area_only@<EAX>)
void CopyBackScreen(int pRendering_area_only) {
    LOG_TRACE("(%d)", pRendering_area_only);
    NOT_IMPLEMENTED();
}

// Offset: 4928
// Size: 0x5c
//IDA: void __usercall PDScreenBufferSwap(int pRendering_area_only@<EAX>)
void PDScreenBufferSwap(int pRendering_area_only) {
    LOG_TRACE("(%d)", pRendering_area_only);
    NOT_IMPLEMENTED();
}

// Offset: 5020
// Size: 0x52
//IDA: void __usercall PDPixelmapToScreenRectangleCopy(br_pixelmap *dst@<EAX>, br_int_16 dx@<EDX>, br_int_16 dy@<EBX>, br_pixelmap *src@<ECX>, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h)
void PDPixelmapToScreenRectangleCopy(br_pixelmap *dst, br_int_16 dx, br_int_16 dy, br_pixelmap *src, br_int_16 sx, br_int_16 sy, br_uint_16 w, br_uint_16 h) {
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", dst, dx, dy, src, sx, sy, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 5104
// Size: 0x44
//IDA: void __usercall PDPixelmapHLineOnScreen(br_pixelmap *dst@<EAX>, br_int_16 x1@<EDX>, br_int_16 y1@<EBX>, br_int_16 x2@<ECX>, br_int_16 y2, br_uint_32 colour)
void PDPixelmapHLineOnScreen(br_pixelmap *dst, br_int_16 x1, br_int_16 y1, br_int_16 x2, br_int_16 y2, br_uint_32 colour) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x1, y1, x2, y2, colour);
    NOT_IMPLEMENTED();
}

// Offset: 5172
// Size: 0x44
//IDA: void __usercall PDPixelmapVLineOnScreen(br_pixelmap *dst@<EAX>, br_int_16 x1@<EDX>, br_int_16 y1@<EBX>, br_int_16 x2@<ECX>, br_int_16 y2, br_uint_32 colour)
void PDPixelmapVLineOnScreen(br_pixelmap *dst, br_int_16 x1, br_int_16 y1, br_int_16 x2, br_int_16 y2, br_uint_32 colour) {
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x1, y1, x2, y2, colour);
    NOT_IMPLEMENTED();
}

// Offset: 5240
// Size: 0x18
//IDA: void __cdecl PDInstallErrorHandlers()
void PDInstallErrorHandlers() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5264
// Size: 0x27
//IDA: void __cdecl PDSetFileVariables()
void PDSetFileVariables() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5304
// Size: 0x62
//IDA: void __usercall PDBuildAppPath(char *pThe_path@<EAX>)
void PDBuildAppPath(char *pThe_path) {
    int pos;
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 5404
// Size: 0x85
//IDA: void __usercall PDForEveryFile(char *pThe_path@<EAX>, void (*pAction_routine)(char*)@<EDX>)
void PDForEveryFile(char *pThe_path, void (*pAction_routine)(char*)) {
    char find_path[256];
    char found_path[256];
    find_t the_find_buffer;
    LOG_TRACE("(\"%s\", %p)", pThe_path, pAction_routine);
    NOT_IMPLEMENTED();
}

// Offset: 5540
// Size: 0x27
//IDA: void __usercall PDSetPalette(br_pixelmap *pThe_palette@<EAX>)
void PDSetPalette(br_pixelmap *pThe_palette) {
    LOG_TRACE("(%p)", pThe_palette);
    NOT_IMPLEMENTED();
}

// Offset: 5580
// Size: 0x88
//IDA: void __usercall PDSetPaletteEntries(br_pixelmap *pPalette@<EAX>, int pFirst_colour@<EDX>, int pCount@<EBX>)
void PDSetPaletteEntries(br_pixelmap *pPalette, int pFirst_colour, int pCount) {
    int i;
    tU8 *p;
    LOG_TRACE("(%p, %d, %d)", pPalette, pFirst_colour, pCount);
    NOT_IMPLEMENTED();
}

// Offset: 5716
// Size: 0x2c
//IDA: void __cdecl PDSwitchToRealResolution()
void PDSwitchToRealResolution() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5760
// Size: 0x2c
//IDA: void __cdecl PDSwitchToLoresMode()
void PDSwitchToLoresMode() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5804
// Size: 0x56
//IDA: void __usercall PDMouseButtons(int *pButton_1@<EAX>, int *pButton_2@<EDX>)
void PDMouseButtons(int *pButton_1, int *pButton_2) {
    br_uint_32 mouse_buttons;
    br_int_32 mouse_x;
    br_int_32 mouse_y;
    LOG_TRACE("(%p, %p)", pButton_1, pButton_2);
    NOT_IMPLEMENTED();
}

// Offset: 5892
// Size: 0x17c
//IDA: void __usercall PDGetMousePosition(int *pX_coord@<EAX>, int *pY_coord@<EDX>)
void PDGetMousePosition(int *pX_coord, int *pY_coord) {
    br_uint_32 mouse_buttons;
    br_int_32 mouse_x2;
    br_int_32 mouse_y2;
    int delta_x;
    int delta_y;
    static br_int_32 mouse_x;
    static br_int_32 mouse_y;
    LOG_TRACE("(%p, %p)", pX_coord, pY_coord);
    NOT_IMPLEMENTED();
}

// Offset: 6272
// Size: 0x26
//IDA: int __cdecl PDGetTotalTime()
int PDGetTotalTime() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6312
// Size: 0x25
//IDA: int __usercall PDServiceSystem@<EAX>(tU32 pTime_since_last_call@<EAX>)
int PDServiceSystem(tU32 pTime_since_last_call) {
    LOG_TRACE("(%d)", pTime_since_last_call);
    NOT_IMPLEMENTED();
}

// Offset: 6352
// Size: 0x79
//IDA: tU32 __cdecl LargestBlockAvail()
tU32 LargestBlockAvail() {
    REGS regs;
    SREGS sregs;
    tMem_info mem_info;
    size_t memmax;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6476
// Size: 0x6f
//IDA: void* __usercall PDGrabLargestMammaryWeCanPlayWith@<EAX>(tU32 pMaximum_required@<EAX>, tU32 *pAmount_allocated@<EDX>)
void* PDGrabLargestMammaryWeCanPlayWith(tU32 pMaximum_required, tU32 *pAmount_allocated) {
    void *result;
    LOG_TRACE("(%d, %p)", pMaximum_required, pAmount_allocated);
    NOT_IMPLEMENTED();
}

// Offset: 6588
// Size: 0xc8
//IDA: void __usercall PDAllocateActionReplayBuffer(char **pBuffer@<EAX>, tU32 *pBuffer_size@<EDX>)
void PDAllocateActionReplayBuffer(char **pBuffer, tU32 *pBuffer_size) {
    tU32 lba;
    tU32 required;
    LOG_TRACE("(%p, %p)", pBuffer, pBuffer_size);
    NOT_IMPLEMENTED();
}

// Offset: 6788
// Size: 0x23
//IDA: void __usercall PDDisposeActionReplayBuffer(char *pBuffer@<EAX>)
void PDDisposeActionReplayBuffer(char *pBuffer) {
    LOG_TRACE("(\"%s\")", pBuffer);
    NOT_IMPLEMENTED();
}

// Offset: 6824
// Size: 0x92
//IDA: void __usercall Usage(char *pProgpath@<EAX>)
void Usage(char *pProgpath) {
    char basename[9];
    LOG_TRACE("(\"%s\")", pProgpath);
    NOT_IMPLEMENTED();
}

// Offset: 6972
// Size: 0x2d2
//IDA: int __usercall main@<EAX>(int pArgc@<EAX>, char **pArgv@<EDX>)
int main(int pArgc, char **pArgv) {
    int arg;
    int i;
    float f;
    LOG_TRACE("(%d, %p)", pArgc, pArgv);
    NOT_IMPLEMENTED();
}

// Offset: 7696
// Size: 0x3e
//IDA: int __cdecl OurGetChar()
int OurGetChar() {
    int key;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7760
// Size: 0x22
//IDA: int __cdecl PDGetGorePassword()
int PDGetGorePassword() {
    int ch;
    int len;
    int chances;
    char password[17];
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7796
// Size: 0x49
//IDA: void __usercall PDDisplayGoreworthiness(int pGory@<EAX>)
void PDDisplayGoreworthiness(int pGory) {
    tU32 delay_start;
    LOG_TRACE("(%d)", pGory);
    NOT_IMPLEMENTED();
}

// Offset: 7872
// Size: 0x23
//IDA: void __usercall PDEnterDebugger(char *pStr@<EAX>)
void PDEnterDebugger(char *pStr) {
    static unsigned char *save_it;
    LOG_TRACE("(\"%s\")", pStr);
    NOT_IMPLEMENTED();
}

// Offset: 7908
// Size: 0x18
//IDA: void __cdecl PDEndItAllAndReRunTheBastard()
void PDEndItAllAndReRunTheBastard() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7932
// Size: 0x39
//IDA: int __usercall matherr@<EAX>(exception *err@<EAX>)
int matherr(exception *err) {
    LOG_TRACE("(%p)", err);
    NOT_IMPLEMENTED();
}

// Offset: 7992
// Size: 0x7f
//IDA: int __usercall LoopLimitTooLow@<EAX>(tU32 limit@<EAX>)
int LoopLimitTooLow(tU32 limit) {
    clock_t start;
    tU32 count;
    tU32 val;
    LOG_TRACE("(%d)", limit);
    NOT_IMPLEMENTED();
}

// Offset: 8120
// Size: 0x83
//IDA: tS32 __cdecl UpperLoopLimit()
tS32 UpperLoopLimit() {
    tU32 limit;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8252
// Size: 0x41
//IDA: int __cdecl InitJoysticks()
int InitJoysticks() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8320
// Size: 0xb6
//IDA: tU32 __usercall ReadJoystickAxis@<EAX>(int pBit@<EAX>)
tU32 ReadJoystickAxis(int pBit) {
    tU32 val;
    tU32 count;
    LOG_TRACE("(%d)", pBit);
    NOT_IMPLEMENTED();
}

// Offset: 8504
// Size: 0x196
//IDA: void __cdecl PDReadJoySticks()
void PDReadJoySticks() {
    tU32 temp1x;
    tU32 temp1y;
    tU32 temp2x;
    tU32 temp2y;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8912
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy1X()
tS32 PDGetJoy1X() {
    tS32 joy;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9036
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy1Y()
tS32 PDGetJoy1Y() {
    tS32 joy;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9160
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy2X()
tS32 PDGetJoy2X() {
    tS32 joy;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9284
// Size: 0x7b
//IDA: tS32 __cdecl PDGetJoy2Y()
tS32 PDGetJoy2Y() {
    tS32 joy;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9408
// Size: 0x42
//IDA: int __cdecl PDGetJoy1Button1()
int PDGetJoy1Button1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9476
// Size: 0x42
//IDA: int __cdecl PDGetJoy1Button2()
int PDGetJoy1Button2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9544
// Size: 0x22
//IDA: int __cdecl PDGetJoy1Button3()
int PDGetJoy1Button3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9580
// Size: 0x22
//IDA: int __cdecl PDGetJoy1Button4()
int PDGetJoy1Button4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9616
// Size: 0x42
//IDA: int __cdecl PDGetJoy2Button1()
int PDGetJoy2Button1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9684
// Size: 0x42
//IDA: int __cdecl PDGetJoy2Button2()
int PDGetJoy2Button2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9752
// Size: 0x22
//IDA: int __cdecl PDGetJoy2Button3()
int PDGetJoy2Button3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9788
// Size: 0x22
//IDA: int __cdecl PDGetJoy2Button4()
int PDGetJoy2Button4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 9824
// Size: 0x33
//IDA: int __usercall PDFileUnlock@<EAX>(char *pThe_path@<EAX>)
int PDFileUnlock(char *pThe_path) {
    unsigned int attr;
    LOG_TRACE("(\"%s\")", pThe_path);
    NOT_IMPLEMENTED();
}

// Offset: 9876
// Size: 0x21
//IDA: void __cdecl CriticalISR(INTPACK pRegs)
void CriticalISR(INTPACK pRegs) {
    LOG_TRACE("(%d)", pRegs);
    NOT_IMPLEMENTED();
}

// Offset: 9912
// Size: 0x10d
//IDA: int __usercall PDCheckDriveExists2@<EAX>(char *pThe_path@<EAX>, char *pFile_name@<EDX>, tU32 pMin_size@<EBX>)
int PDCheckDriveExists2(char *pThe_path, char *pFile_name, tU32 pMin_size) {
    stat buf;
    void (*old_critical_isr)();
    int stat_failed;
    char slasher[4];
    char the_path[256];
    LOG_TRACE("(\"%s\", \"%s\", %d)", pThe_path, pFile_name, pMin_size);
    NOT_IMPLEMENTED();
}

// Offset: 10184
// Size: 0x6c
//IDA: int __cdecl PDDoWeLeadAnAustereExistance()
int PDDoWeLeadAnAustereExistance() {
    tU32 lba;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

