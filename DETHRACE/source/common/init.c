#include "init.h"

int gGame_initialized;
int gBr_initialized;
int gBrZb_initialized;
int gInitialisation_finished;
int gRender_indent;
tU32 gAustere_time;
int gInitial_rank;
int gCredits_per_rank[3];
int gInitial_credits[3];
int gNet_mode_of_last_game;
br_material *gDefault_track_material;

// Offset: 0
// Size: 0x73
//IDA: void __cdecl AllocateSelf()
void AllocateSelf() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 116
// Size: 0x202
//IDA: void __cdecl AllocateCamera()
void AllocateCamera() {
    br_camera *camera_ptr;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 632
// Size: 0x246
//IDA: void __cdecl ReinitialiseForwardCamera()
void ReinitialiseForwardCamera() {
    br_camera *camera_ptr;
    float the_angle;
    float d;
    float w;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1216
// Size: 0xd9
//IDA: void __cdecl AllocateRearviewPixelmap()
void AllocateRearviewPixelmap() {
    char *rear_screen_pixels;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1436
// Size: 0xa9
//IDA: void __cdecl ReinitialiseRearviewCamera()
void ReinitialiseRearviewCamera() {
    br_camera *camera_ptr;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1608
// Size: 0x15b
//IDA: void __cdecl ReinitialiseRenderStuff()
void ReinitialiseRenderStuff() {
    int x_diff;
    int y_diff;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1956
// Size: 0x22
//IDA: void __cdecl InstallFindFailedHooks()
void InstallFindFailedHooks() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1992
// Size: 0x9e
//IDA: void __cdecl AllocateStandardLamp()
void AllocateStandardLamp() {
    br_actor *the_child;
    br_actor *lamp;
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2152
// Size: 0x156
//IDA: void __cdecl InitializeBRenderEnvironment()
void InitializeBRenderEnvironment() {
    br_model *arrow_model;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2496
// Size: 0x4f
//IDA: void __cdecl InitBRFonts()
void InitBRFonts() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2576
// Size: 0xc4
//IDA: void __cdecl AustereWarning()
void AustereWarning() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2772
// Size: 0x135
//IDA: void __cdecl InitLineStuff()
void InitLineStuff() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3084
// Size: 0x380
//IDA: void __cdecl InitSmokeStuff()
void InitSmokeStuff() {
    static br_token_value fadealpha[3];
    tPath_name path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3980
// Size: 0x546
//IDA: void __cdecl Init2DStuff()
void Init2DStuff() {
    br_camera *camera;
    static br_token_value fadealpha[3];
    tPath_name path;
    br_scalar prat_u;
    br_scalar prat_v;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5332
// Size: 0x29f
//IDA: void __usercall InitialiseApplication(int pArgc@<EAX>, char **pArgv@<EDX>)
void InitialiseApplication(int pArgc, char **pArgv) {
    LOG_TRACE("(%d, %p)", pArgc, pArgv);
    NOT_IMPLEMENTED();
}

// Offset: 6004
// Size: 0x40
//IDA: void __usercall InitialiseDeathRace(int pArgc@<EAX>, char **pArgv@<EDX>)
void InitialiseDeathRace(int pArgc, char **pArgv) {
    tPath_name the_path;
    LOG_TRACE("(%d, %p)", pArgc, pArgv);
    NOT_IMPLEMENTED();
}

// Offset: 6068
// Size: 0x1ab
//IDA: void __usercall InitGame(int pStart_race@<EAX>)
void InitGame(int pStart_race) {
    int i;
    LOG_TRACE("(%d)", pStart_race);
    NOT_IMPLEMENTED();
}

// Offset: 6496
// Size: 0xbf
//IDA: void __cdecl DisposeGameIfNecessary()
void DisposeGameIfNecessary() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6688
// Size: 0x36
//IDA: void __cdecl LoadInTrack()
void LoadInTrack() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6744
// Size: 0x2c
//IDA: void __cdecl DisposeTrack()
void DisposeTrack() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 6788
// Size: 0x61
//IDA: void __usercall CopyMaterialColourFromIndex(br_material *pMaterial@<EAX>)
void CopyMaterialColourFromIndex(br_material *pMaterial) {
    LOG_TRACE("(%p)", pMaterial);
    NOT_IMPLEMENTED();
}

// Offset: 6888
// Size: 0x4ce
//IDA: void __cdecl InitRace()
void InitRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8120
// Size: 0xd0
//IDA: void __cdecl DisposeRace()
void DisposeRace() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8328
// Size: 0x2d
//IDA: int __cdecl GetScreenSize()
int GetScreenSize() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 8376
// Size: 0x2d
//IDA: void __usercall SetScreenSize(int pNew_size@<EAX>)
void SetScreenSize(int pNew_size) {
    LOG_TRACE("(%d)", pNew_size);
    NOT_IMPLEMENTED();
}

