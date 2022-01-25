#include "input.h"

int gEdge_trigger_mode;
tU32 gLast_poll_keys;
int gInsert_mode;
int gGo_ahead_keys[3];
tJoy_array gJoy_array;
tKey_array gKey_array;
int gKey_poll_counter;
tRolling_letter *gRolling_letters;
int gCurrent_cursor;
int gCurrent_position;
int gLetter_x_coords[15];
int gVisible_length;
int gLetter_y_coords[15];
int gThe_key;
tU32 gLast_key_down_time;
int gThe_length;
tU32 gLast_roll;
int gLast_key_down;
int gKey_mapping[67];
char gCurrent_typing[110];

// Offset: 0
// Size: 0x3e4
//IDA: void __usercall SetJoystickArrays(int *pKeys@<EAX>, int pMark@<EDX>)
void SetJoystickArrays(int *pKeys, int pMark) {
    int i;
    tS32 joyX;
    tS32 joyY;
    static tS32 old_joy1X;
    static tS32 old_joy1Y;
    static tS32 old_joy2X;
    static tS32 old_joy2Y;
    LOG_TRACE("(%p, %d)", pKeys, pMark);
    NOT_IMPLEMENTED();
}

// Offset: 996
// Size: 0x52
//IDA: void __cdecl PollKeys()
void PollKeys() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1080
// Size: 0x7f
//IDA: void __cdecl CyclePollKeys()
void CyclePollKeys() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1208
// Size: 0x74
//IDA: void __cdecl ResetPollKeys()
void ResetPollKeys() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1324
// Size: 0x4c
//IDA: void __cdecl CheckKeysForMouldiness()
void CheckKeysForMouldiness() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1400
// Size: 0x52
//IDA: int __cdecl EitherMouseButtonDown()
int EitherMouseButtonDown() {
    int but_1;
    int but_2;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1484
// Size: 0xd6
//IDA: tKey_down_result __usercall PDKeyDown2@<EAX>(int pKey_index@<EAX>)
tKey_down_result PDKeyDown2(int pKey_index) {
    tU32 the_time;
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 1700
// Size: 0x82
//IDA: int __usercall PDKeyDown@<EAX>(int pKey_index@<EAX>)
int PDKeyDown(int pKey_index) {
    tKey_down_result result;
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 1832
// Size: 0x75
//IDA: int __usercall PDKeyDown3@<EAX>(int pKey_index@<EAX>)
int PDKeyDown3(int pKey_index) {
    int last_key_down_time;
    int last_key_down;
    tKey_down_result result;
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 1952
// Size: 0xd0
//IDA: int __cdecl PDAnyKeyDown()
int PDAnyKeyDown() {
    int i;
    tKey_down_result result;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2160
// Size: 0x58
//IDA: int __cdecl AnyKeyDown()
int AnyKeyDown() {
    int the_key;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2248
// Size: 0x1c3
//IDA: tU32* __cdecl KevKeyService()
tU32* KevKeyService() {
    static tU32 sum;
    static tU32 code;
    static tU32 code2;
    static int last_key;
    static int last_single_key;
    static tU32 last_time;
    static tU32 return_val[2];
    tU32 keys;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2700
// Size: 0x91
//IDA: int __usercall OldKeyIsDown@<EAX>(int pKey_index@<EAX>)
int OldKeyIsDown(int pKey_index) {
    int i;
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 2848
// Size: 0x9d
//IDA: int __usercall KeyIsDown@<EAX>(int pKey_index@<EAX>)
int KeyIsDown(int pKey_index) {
    int i;
    LOG_TRACE("(%d)", pKey_index);
    NOT_IMPLEMENTED();
}

// Offset: 3008
// Size: 0x40
//IDA: void __cdecl WaitForNoKeys()
void WaitForNoKeys() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3072
// Size: 0x43
//IDA: void __cdecl WaitForAKey()
void WaitForAKey() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3140
// Size: 0x67
//IDA: int __usercall CmdKeyDown@<EAX>(int pFKey_ID@<EAX>, int pCmd_key_ID@<EDX>)
int CmdKeyDown(int pFKey_ID, int pCmd_key_ID) {
    LOG_TRACE("(%d, %d)", pFKey_ID, pCmd_key_ID);
    NOT_IMPLEMENTED();
}

// Offset: 3244
// Size: 0xce
//IDA: void __usercall GetMousePosition(int *pX_coord@<EAX>, int *pY_coord@<EDX>)
void GetMousePosition(int *pX_coord, int *pY_coord) {
    int x_left_margin;
    int x_right_margin;
    int y_top_margin;
    int y_bottom_margin;
    LOG_TRACE("(%p, %p)", pX_coord, pY_coord);
    NOT_IMPLEMENTED();
}

// Offset: 3452
// Size: 0x7d
//IDA: void __cdecl InitRollingLetters()
void InitRollingLetters() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3580
// Size: 0x30
//IDA: void __cdecl EndRollingLetters()
void EndRollingLetters() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3628
// Size: 0x180
//IDA: int __usercall AddRollingLetter@<EAX>(char pChar@<EAX>, int pX@<EDX>, int pY@<EBX>, tRolling_type rolling_type@<ECX>)
int AddRollingLetter(char pChar, int pX, int pY, tRolling_type rolling_type) {
    tRolling_letter *let;
    int i;
    int number_of_letters;
    LOG_TRACE("(%d, %d, %d, %d)", pChar, pX, pY, rolling_type);
    NOT_IMPLEMENTED();
}

// Offset: 4012
// Size: 0x6f
//IDA: void __usercall AddRollingString(char *pStr@<EAX>, int pX@<EDX>, int pY@<EBX>, tRolling_type rolling_type@<ECX>)
void AddRollingString(char *pStr, int pX, int pY, tRolling_type rolling_type) {
    int i;
    LOG_TRACE("(\"%s\", %d, %d, %d)", pStr, pX, pY, rolling_type);
    NOT_IMPLEMENTED();
}

// Offset: 4124
// Size: 0x55
//IDA: void __usercall AddRollingNumber(tU32 pNumber@<EAX>, int pWidth@<EDX>, int pX@<EBX>, int pY@<ECX>)
void AddRollingNumber(tU32 pNumber, int pWidth, int pX, int pY) {
    char the_string[32];
    LOG_TRACE("(%d, %d, %d, %d)", pNumber, pWidth, pX, pY);
    NOT_IMPLEMENTED();
}

// Offset: 4212
// Size: 0x28b
//IDA: void __cdecl RollLettersIn()
void RollLettersIn() {
    tU32 new_time;
    tU32 period;
    tRolling_letter *let;
    int i;
    int j;
    int k;
    int offset;
    int which_letter;
    int font_width;
    int letter_offset;
    int font_height;
    int the_row_bytes;
    tU8 *char_ptr;
    tU8 *saved_char_ptr;
    tU8 *source_ptr;
    tU8 the_byte;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4864
// Size: 0x159
//IDA: int __usercall ChangeCharTo@<EAX>(int pSlot_index@<EAX>, int pChar_index@<EDX>, char pNew_char@<EBX>)
int ChangeCharTo(int pSlot_index, int pChar_index, char pNew_char) {
    int x_coord;
    int y_coord;
    int i;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    LOG_TRACE("(%d, %d, %d)", pSlot_index, pChar_index, pNew_char);
    NOT_IMPLEMENTED();
}

// Offset: 5212
// Size: 0x19d
//IDA: void __usercall ChangeTextTo(int pXcoord@<EAX>, int pYcoord@<EDX>, char *pNew_str@<EBX>, char *pOld_str@<ECX>)
void ChangeTextTo(int pXcoord, int pYcoord, char *pNew_str, char *pOld_str) {
    int x_coord;
    int i;
    int len;
    int len2;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    char new_char;
    LOG_TRACE("(%d, %d, \"%s\", \"%s\")", pXcoord, pYcoord, pNew_str, pOld_str);
    NOT_IMPLEMENTED();
}

// Offset: 5628
// Size: 0x3d
//IDA: void __usercall SetRollingCursor(int pSlot_index@<EAX>)
void SetRollingCursor(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 5692
// Size: 0x5a
//IDA: void __usercall BlankSlot(int pIndex@<EAX>, int pName_length@<EDX>, int pVisible_length@<EBX>)
void BlankSlot(int pIndex, int pName_length, int pVisible_length) {
    int i;
    LOG_TRACE("(%d, %d, %d)", pIndex, pName_length, pVisible_length);
    NOT_IMPLEMENTED();
}

// Offset: 5784
// Size: 0xe8
//IDA: void __usercall DoRLBackspace(int pSlot_index@<EAX>)
void DoRLBackspace(int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6016
// Size: 0xbe
//IDA: void __usercall DoRLDelete(int pSlot_index@<EAX>)
void DoRLDelete(int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6208
// Size: 0x46
//IDA: void __usercall DoRLInsert(int pSlot_index@<EAX>)
void DoRLInsert(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6280
// Size: 0x89
//IDA: void __usercall DoRLCursorLeft(int pSlot_index@<EAX>)
void DoRLCursorLeft(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6420
// Size: 0x65
//IDA: void __usercall DoRLCursorRight(int pSlot_index@<EAX>)
void DoRLCursorRight(int pSlot_index) {
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6524
// Size: 0x143
//IDA: void __usercall DoRLTypeLetter(int pChar@<EAX>, int pSlot_index@<EDX>)
void DoRLTypeLetter(int pChar, int pSlot_index) {
    int i;
    int new_len;
    LOG_TRACE("(%d, %d)", pChar, pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6848
// Size: 0x7b
//IDA: void __usercall StopTyping(int pSlot_index@<EAX>)
void StopTyping(int pSlot_index) {
    int i;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 6972
// Size: 0x79
//IDA: void __usercall RevertTyping(int pSlot_index@<EAX>, char *pRevert_str@<EDX>)
void RevertTyping(int pSlot_index, char *pRevert_str) {
    int i;
    LOG_TRACE("(%d, \"%s\")", pSlot_index, pRevert_str);
    NOT_IMPLEMENTED();
}

// Offset: 7096
// Size: 0x5b
//IDA: void __usercall StartTyping(int pSlot_index@<EAX>, char *pText@<EDX>, int pVisible_length@<EBX>)
void StartTyping(int pSlot_index, char *pText, int pVisible_length) {
    LOG_TRACE("(%d, \"%s\", %d)", pSlot_index, pText, pVisible_length);
    NOT_IMPLEMENTED();
}

// Offset: 7188
// Size: 0xb0
//IDA: void __usercall TypeKey(int pSlot_index@<EAX>, char pKey@<EDX>)
void TypeKey(int pSlot_index, char pKey) {
    LOG_TRACE("(%d, %d)", pSlot_index, pKey);
    NOT_IMPLEMENTED();
}

// Offset: 7364
// Size: 0x45
//IDA: void __usercall SetSlotXY(int pSlot_index@<EAX>, int pX_coord@<EDX>, int pY_coord@<EBX>)
void SetSlotXY(int pSlot_index, int pX_coord, int pY_coord) {
    LOG_TRACE("(%d, %d, %d)", pSlot_index, pX_coord, pY_coord);
    NOT_IMPLEMENTED();
}

// Offset: 7436
// Size: 0x5d
//IDA: void __usercall GetTypedName(char *pDestn@<EAX>, int pMax_length@<EDX>)
void GetTypedName(char *pDestn, int pMax_length) {
    LOG_TRACE("(\"%s\", %d)", pDestn, pMax_length);
    NOT_IMPLEMENTED();
}

// Offset: 7532
// Size: 0xd4
//IDA: void __usercall KillCursor(int pSlot_index@<EAX>)
void KillCursor(int pSlot_index) {
    int x_coord;
    int y_coord;
    int i;
    int j;
    tRolling_letter *let;
    tRolling_type new_type;
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 7744
// Size: 0x2c
//IDA: void __cdecl EdgeTriggerModeOn()
void EdgeTriggerModeOn() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 7788
// Size: 0x2c
//IDA: void __cdecl EdgeTriggerModeOff()
void EdgeTriggerModeOff() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

