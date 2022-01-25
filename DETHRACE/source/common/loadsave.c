#include "loadsave.h"

tSave_game *gSaved_games[8];
int gStarted_typing;
int gSave_allowed;

// Offset: 0
// Size: 0x287
//IDA: void __usercall CorrectLoadByteOrdering(int pIndex@<EAX>)
void CorrectLoadByteOrdering(int pIndex) {
    int i;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 648
// Size: 0x80
//IDA: tU32 __usercall CalcLSChecksum@<EAX>(tSave_game *pSaved_game@<EAX>)
tU32 CalcLSChecksum(tSave_game *pSaved_game) {
    tU32 checksum;
    tU32 checksum2;
    int i;
    tU8 *ptr;
    LOG_TRACE("(%p)", pSaved_game);
    NOT_IMPLEMENTED();
}

// Offset: 776
// Size: 0x187
//IDA: void __cdecl LoadSavedGames()
void LoadSavedGames() {
    tPath_name the_path;
    int i;
    FILE *f;
    tU32 the_size;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1168
// Size: 0x5e
//IDA: void __cdecl DisposeSavedGames()
void DisposeSavedGames() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 1264
// Size: 0x2bd
//IDA: void __usercall LoadTheGame(int pSlot_index@<EAX>)
void LoadTheGame(int pSlot_index) {
    int i;
    char the_car_name[14];
    LOG_TRACE("(%d)", pSlot_index);
    NOT_IMPLEMENTED();
}

// Offset: 1968
// Size: 0x14b
//IDA: void __cdecl StartRollingSaveNamesIn()
void StartRollingSaveNamesIn() {
    int i;
    int save_slot_height;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2300
// Size: 0x27
//IDA: void __cdecl LoadStart()
void LoadStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2340
// Size: 0x19f
//IDA: int __usercall DoLoadGame@<EAX>(int pSave_allowed@<EAX>)
int DoLoadGame(int pSave_allowed) {
    static tFlicette flicker_on[9];
    static tFlicette flicker_off[9];
    static tFlicette push[9];
    static tMouse_area mouse_areas[9];
    static tRectile recopy_areas[24];
    static tInterface_spec interface_spec;
    int result;
    LOG_TRACE("(%d)", pSave_allowed);
    NOT_IMPLEMENTED();
}

// Offset: 2756
// Size: 0x287
//IDA: void __usercall CorrectSaveByteOrdering(int pIndex@<EAX>)
void CorrectSaveByteOrdering(int pIndex) {
    int i;
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 3404
// Size: 0xe5
//IDA: void __usercall SaveTheGame(int pSlot_number@<EAX>)
void SaveTheGame(int pSlot_number) {
    tPath_name the_path;
    FILE *f;
    LOG_TRACE("(%d)", pSlot_number);
    NOT_IMPLEMENTED();
}

// Offset: 3636
// Size: 0x4d
//IDA: int __cdecl ConfirmMidGameSave()
int ConfirmMidGameSave() {
    static tFlicette flicker_on[2];
    static tFlicette flicker_off[2];
    static tFlicette push[2];
    static tMouse_area mouse_areas[2];
    static tInterface_spec interface_spec;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 3716
// Size: 0x1ec
//IDA: void __usercall MakeSavedGame(tSave_game **pSave_record@<EAX>)
void MakeSavedGame(tSave_game **pSave_record) {
    int i;
    LOG_TRACE("(%p)", pSave_record);
    NOT_IMPLEMENTED();
}

// Offset: 4208
// Size: 0x27
//IDA: void __cdecl SaveStart()
void SaveStart() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4248
// Size: 0x98
//IDA: void __usercall GetSaveName(int pStarting_to_type@<EAX>, int pCurrent_choice@<EDX>, char *pString@<EBX>, int *pMax_length@<ECX>)
void GetSaveName(int pStarting_to_type, int pCurrent_choice, char *pString, int *pMax_length) {
    LOG_TRACE("(%d, %d, \"%s\", %p)", pStarting_to_type, pCurrent_choice, pString, pMax_length);
    NOT_IMPLEMENTED();
}

// Offset: 4400
// Size: 0xbc
//IDA: int __usercall SaveDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SaveDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out) {
    LOG_TRACE("(%d, %d, %d, %d, %d)", pCurrent_choice, pCurrent_mode, pGo_ahead, pEscaped, pTimed_out);
    NOT_IMPLEMENTED();
}

// Offset: 4588
// Size: 0x170
//IDA: int __usercall SaveGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SaveGoAhead(int *pCurrent_choice, int *pCurrent_mode) {
    char s1[256];
    char s2[256];
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 4956
// Size: 0x170
//IDA: int __usercall SaveEscape@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SaveEscape(int *pCurrent_choice, int *pCurrent_mode) {
    char s1[256];
    char s2[256];
    LOG_TRACE("(%p, %p)", pCurrent_choice, pCurrent_mode);
    NOT_IMPLEMENTED();
}

// Offset: 5324
// Size: 0x5c
//IDA: int __usercall SaveGameInterface@<EAX>(int pDefault_choice@<EAX>)
int SaveGameInterface(int pDefault_choice) {
    static tFlicette flicker_on[9];
    static tFlicette flicker_off[9];
    static tFlicette push[9];
    static tMouse_area mouse_areas[9];
    static tRectile recopy_areas[24];
    static tInterface_spec interface_spec;
    LOG_TRACE("(%d)", pDefault_choice);
    NOT_IMPLEMENTED();
}

// Offset: 5416
// Size: 0xb5
//IDA: void __usercall DoSaveGame(int pSave_allowed@<EAX>)
void DoSaveGame(int pSave_allowed) {
    LOG_TRACE("(%d)", pSave_allowed);
    NOT_IMPLEMENTED();
}

