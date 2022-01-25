#include "replay.h"

char *gReplay_pixie_names[10];
int gSingle_frame_mode;
tU32 gCam_change_time;
int gSave_file;
int gProgress_line_left[2];
int gProgress_line_right[2];
int gProgress_line_top[2];
br_pixelmap *gReplay_pixies[10];
int gKey_down;
int gNo_cursor;
int gSave_frame_number;
int gCam_change_button_down;
tU32 gAction_replay_start_time;
tU32 gLast_replay_zappy_screen;
tS32 gStopped_time;
float gPending_replay_rate;
tU32 gAction_replay_end_time;
float gReplay_rate;
int gSave_bunch_ID;
int gPlay_direction;
int gPaused;
tAction_replay_camera_type gAction_replay_camera_mode;

// Offset: 0
// Size: 0x47
//IDA: int __cdecl ReplayIsPaused()
int ReplayIsPaused() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 72
// Size: 0x2f
//IDA: float __cdecl GetReplayRate()
float GetReplayRate() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 120
// Size: 0x2d
//IDA: int __cdecl GetReplayDirection()
int GetReplayDirection() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 168
// Size: 0x36
//IDA: void __cdecl StopSaving()
void StopSaving() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 224
// Size: 0x63d
//IDA: void __usercall ActualActionReplayHeadups(int pSpecial_zappy_bastard@<EAX>)
void ActualActionReplayHeadups(int pSpecial_zappy_bastard) {
    tU32 the_time;
    int x;
    tU16 played_col1;
    tU16 played_col2;
    tU16 to_play_col1;
    tU16 to_play_col2;
    LOG_TRACE("(%d)", pSpecial_zappy_bastard);
    NOT_IMPLEMENTED();
}

// Offset: 1824
// Size: 0x2c
//IDA: void __cdecl DoActionReplayPostSwap()
void DoActionReplayPostSwap() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1868
// Size: 0x6d
//IDA: void __usercall DoZappyActionReplayHeadups(int pSpecial_zappy_bastard@<EAX>)
void DoZappyActionReplayHeadups(int pSpecial_zappy_bastard) {
    tU32 the_time;
    LOG_TRACE("(%d)", pSpecial_zappy_bastard);
    NOT_IMPLEMENTED();
}

// Offset: 1980
// Size: 0x29
//IDA: void __cdecl DoActionReplayHeadups()
void DoActionReplayHeadups() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2024
// Size: 0x13e
//IDA: void __usercall MoveReplayBuffer(tS32 pMove_amount@<EAX>)
void MoveReplayBuffer(tS32 pMove_amount) {
    tU8 *play_ptr;
    tU8 *old_play_ptr;
    tU8 *old_play_ptr2;
    int i;
    int a;
    tU32 old_time;
    LOG_TRACE("(%d)", pMove_amount);
    NOT_IMPLEMENTED();
}

// Offset: 2344
// Size: 0x76
//IDA: void __cdecl MoveToEndOfReplay()
void MoveToEndOfReplay() {
    float old_replay_rate;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2464
// Size: 0x76
//IDA: void __cdecl MoveToStartOfReplay()
void MoveToStartOfReplay() {
    float old_replay_rate;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2584
// Size: 0x18b
//IDA: void __cdecl ToggleReplay()
void ToggleReplay() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2980
// Size: 0x31
//IDA: void __usercall ReverseSound(tS3_effect_tag pEffect_index@<EAX>, tS3_sound_tag pSound_tag@<EDX>)
void ReverseSound(tS3_effect_tag pEffect_index, tS3_sound_tag pSound_tag) {
    LOG_TRACE("(%d, %d)", pEffect_index, pSound_tag);
    NOT_IMPLEMENTED();
}

// Offset: 3032
// Size: 0xdf
//IDA: int __cdecl FindUniqueFile()
int FindUniqueFile() {
    int index;
    FILE *f;
    tPath_name the_path;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3256
// Size: 0x628
//IDA: void __usercall PollActionReplayControls(tU32 pFrame_period@<EAX>)
void PollActionReplayControls(tU32 pFrame_period) {
    float old_replay_rate;
    int old_key_down;
    int x_coord;
    int y_coord;
    int i;
    tU32 real_time;
    static tU32 last_real_time;
    static int psuedo_mouse_keys[8];
    static tRectangle mouse_areas[2][8];
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 4832
// Size: 0x5e
//IDA: void __cdecl CheckReplayTurnOn()
void CheckReplayTurnOn() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4928
// Size: 0x62
//IDA: void __cdecl InitializeActionReplay()
void InitializeActionReplay() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 5028
// Size: 0x47
//IDA: void __usercall DoActionReplay(tU32 pFrame_period@<EAX>)
void DoActionReplay(tU32 pFrame_period) {
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 5100
// Size: 0x14a
//IDA: void __cdecl SynchronizeActionReplay()
void SynchronizeActionReplay() {
    FILE *f;
    tPath_name the_path;
    static tU32 gLast_synch_time;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

