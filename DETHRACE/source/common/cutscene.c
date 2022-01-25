#include "cutscene.h"

tS32 gLast_demo_end_anim;

// Offset: 0
// Size: 0x76
//IDA: void* __cdecl radmalloc(unsigned long numbytes)
void* radmalloc(unsigned long numbytes) {
    unsigned char *temp;
    unsigned char i;
    LOG_TRACE("(%d)", numbytes);
    NOT_IMPLEMENTED();
}

// Offset: 120
// Size: 0x3b
//IDA: void __cdecl radfree(void *ptr)
void radfree(void *ptr) {
    LOG_TRACE("(%p)", ptr);
    NOT_IMPLEMENTED();
}

// Offset: 180
// Size: 0xb3
//IDA: void __usercall ShowCutScene(int pIndex@<EAX>, int pWait_end@<EDX>, int pSound_ID@<EBX>, br_scalar pDelay)
void ShowCutScene(int pIndex, int pWait_end, int pSound_ID, br_scalar pDelay) {
    LOG_TRACE("(%d, %d, %d, %f)", pIndex, pWait_end, pSound_ID, pDelay);
    NOT_IMPLEMENTED();
}

// Offset: 360
// Size: 0x22
//IDA: void __cdecl DoSCILogo()
void DoSCILogo() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 396
// Size: 0x22
//IDA: void __cdecl DoStainlessLogo()
void DoStainlessLogo() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 432
// Size: 0x34c
//IDA: void __usercall PlaySmackerFile(char *pSmack_name@<EAX>)
void PlaySmackerFile(char *pSmack_name) {
    tPath_name the_path;
    br_colour *br_colours_ptr;
    tU8 *smack_colours_ptr;
    Smack *smk;
    int i;
    int j;
    int len;
    int fuck_off;
    LOG_TRACE("(\"%s\")", pSmack_name);
    NOT_IMPLEMENTED();
}

// Offset: 1276
// Size: 0x3b
//IDA: void __cdecl DoOpeningAnimation()
void DoOpeningAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1336
// Size: 0x4f
//IDA: void __cdecl DoNewGameAnimation()
void DoNewGameAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1416
// Size: 0x22
//IDA: void __cdecl DoGoToRaceAnimation()
void DoGoToRaceAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1452
// Size: 0xd7
//IDA: void __cdecl DoEndRaceAnimation()
void DoEndRaceAnimation() {
    int made_a_profit;
    int went_up_a_rank;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1668
// Size: 0x36
//IDA: void __cdecl DoGameOverAnimation()
void DoGameOverAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1724
// Size: 0x36
//IDA: void __cdecl DoGameCompletedAnimation()
void DoGameCompletedAnimation() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1780
// Size: 0x46
//IDA: void __cdecl StartLoadingScreen()
void StartLoadingScreen() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

