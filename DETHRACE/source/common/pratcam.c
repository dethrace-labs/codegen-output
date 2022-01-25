#include "pratcam.h"

tS3_sound_tag gWhirr_noise;
tFlic_descriptor gPrat_flic;
tPrat_sequence *gPratcam_sequences;
tPrat_flic_spec *gPratcam_flics;
int gCurrent_pratcam_chunk;
int gPending_ambient_prat;
int gCurrent_pratcam_index;
br_pixelmap *gPrat_buffer;
int gNumber_of_prat_sequences;
int gNumber_of_prat_flics;
tU32 gLast_pratcam_frame_time;
int gCurrent_pratcam_precedence;
int gCurrent_ambient_prat_sequence;
int gCurrent_pratcam_alternative;

// Offset: 0
// Size: 0x2d
//IDA: int __cdecl PratcamGetCurrent()
int PratcamGetCurrent() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 48
// Size: 0x2d
//IDA: int __cdecl PratcamGetAmbient()
int PratcamGetAmbient() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 96
// Size: 0x2d
//IDA: int __cdecl PratcamGetPending()
int PratcamGetPending() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 144
// Size: 0xf0
//IDA: void __cdecl TogglePratcam()
void TogglePratcam() {
    tU32 the_time;
    tU32 time_diff;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 384
// Size: 0x72c
//IDA: void __usercall LoadPratcam(char *pFolder_name@<EAX>)
void LoadPratcam(char *pFolder_name) {
    FILE *f;
    FILE *g;
    tPath_name the_path;
    int i;
    int j;
    int k;
    int l;
    char s[256];
    char folder_path[256];
    char *str;
    char num_str[256];
    LOG_TRACE("(\"%s\")", pFolder_name);
    NOT_IMPLEMENTED();
}

// Offset: 2220
// Size: 0x1ef
//IDA: void __cdecl NextPratcamChunk()
void NextPratcamChunk() {
    int i;
    int random_number;
    int count;
    tPrat_alternative *current_alternative;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2716
// Size: 0x53
//IDA: void __usercall NewPratcamSequence(int pSequence_index@<EAX>, int pStart_chunk@<EDX>)
void NewPratcamSequence(int pSequence_index, int pStart_chunk) {
    LOG_TRACE("(%d, %d)", pSequence_index, pStart_chunk);
    NOT_IMPLEMENTED();
}

// Offset: 2800
// Size: 0x43
//IDA: void __usercall ChangeAmbientPratcamNow(int pIndex@<EAX>, int pStart_chunk@<EDX>)
void ChangeAmbientPratcamNow(int pIndex, int pStart_chunk) {
    LOG_TRACE("(%d, %d)", pIndex, pStart_chunk);
    NOT_IMPLEMENTED();
}

// Offset: 2868
// Size: 0x76
//IDA: void __usercall ChangeAmbientPratcam(int pIndex@<EAX>)
void ChangeAmbientPratcam(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 2988
// Size: 0x39
//IDA: void __usercall PratcamEventNow(int pIndex@<EAX>)
void PratcamEventNow(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 3048
// Size: 0x71
//IDA: void __usercall PratcamEvent(int pIndex@<EAX>)
void PratcamEvent(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 3164
// Size: 0x5e
//IDA: int __cdecl HighResPratBufferWidth()
int HighResPratBufferWidth() {
    int prat_width;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3260
// Size: 0x5e
//IDA: int __cdecl HighResPratBufferHeight()
int HighResPratBufferHeight() {
    int prat_height;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3356
// Size: 0x1a3
//IDA: void __cdecl InitPratcam()
void InitPratcam() {
    void *the_pixels;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3776
// Size: 0x1bf
//IDA: void __cdecl DisposePratcam()
void DisposePratcam() {
    int i;
    int j;
    int k;
    int l;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4224
// Size: 0x4e4
//IDA: void __usercall DoPratcam(tU32 pThe_time@<EAX>)
void DoPratcam(tU32 pThe_time) {
    int i;
    int offset;
    int y_offset;
    int top_border_height;
    int prat_cam_move_width;
    int right_hand;
    tU32 time_diff;
    tU32 old_last_time;
    br_pixelmap *the_image;
    br_pixelmap *left_image;
    br_pixelmap *right_image;
    LOG_TRACE("(%d)", pThe_time);
    NOT_IMPLEMENTED();
}

// Offset: 5476
// Size: 0x60
//IDA: void __usercall TestPratCam(int pIndex@<EAX>)
void TestPratCam(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 5572
// Size: 0x29
//IDA: void __cdecl PratCam0()
void PratCam0() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5616
// Size: 0x2c
//IDA: void __cdecl PratCam1()
void PratCam1() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5660
// Size: 0x2c
//IDA: void __cdecl PratCam2()
void PratCam2() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5704
// Size: 0x2c
//IDA: void __cdecl PratCam3()
void PratCam3() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5748
// Size: 0x2c
//IDA: void __cdecl PratCam4()
void PratCam4() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5792
// Size: 0x2c
//IDA: void __cdecl PratCam5()
void PratCam5() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5836
// Size: 0x2c
//IDA: void __cdecl PratCam6()
void PratCam6() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5880
// Size: 0x2c
//IDA: void __cdecl PratCam7()
void PratCam7() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5924
// Size: 0x2c
//IDA: void __cdecl PratCam8()
void PratCam8() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5968
// Size: 0x2c
//IDA: void __cdecl PratCam9()
void PratCam9() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

