#include "intrface.h"

int gDisabled_choices[10];
int gCurrent_mode;
tU32 gStart_time;
int gCurrent_choice;
tInterface_spec *gSpec;
int gAlways_typing;
int gDisabled_count;

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl SetAlwaysTyping()
void SetAlwaysTyping() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl ClearAlwaysTyping()
void ClearAlwaysTyping() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 88
// Size: 0x67
//IDA: int __usercall ChoiceDisabled@<EAX>(int pChoice@<EAX>)
int ChoiceDisabled(int pChoice) {
    int i;
    LOG_TRACE("(%d)", pChoice);
    NOT_IMPLEMENTED();
}

// Offset: 192
// Size: 0x2c
//IDA: void __cdecl ResetInterfaceTimeout()
void ResetInterfaceTimeout() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 236
// Size: 0x273
//IDA: void __usercall ChangeSelection(tInterface_spec *pSpec@<EAX>, int *pOld_selection@<EDX>, int *pNew_selection@<EBX>, int pMode@<ECX>, int pSkip_disabled)
void ChangeSelection(tInterface_spec *pSpec, int *pOld_selection, int *pNew_selection, int pMode, int pSkip_disabled) {
    int i;
    LOG_TRACE("(%p, %p, %p, %d, %d)", pSpec, pOld_selection, pNew_selection, pMode, pSkip_disabled);
    NOT_IMPLEMENTED();
}

// Offset: 864
// Size: 0x124
//IDA: void __usercall RecopyAreas(tInterface_spec *pSpec@<EAX>, br_pixelmap **pCopy_areas@<EDX>)
void RecopyAreas(tInterface_spec *pSpec, br_pixelmap **pCopy_areas) {
    int i;
    LOG_TRACE("(%p, %p)", pSpec, pCopy_areas);
    NOT_IMPLEMENTED();
}

// Offset: 1156
// Size: 0x6f
//IDA: void __usercall DisableChoice(int pChoice@<EAX>)
void DisableChoice(int pChoice) {
    int i;
    LOG_TRACE("(%d)", pChoice);
    NOT_IMPLEMENTED();
}

// Offset: 1268
// Size: 0x8c
//IDA: void __usercall EnableChoice(int pChoice@<EAX>)
void EnableChoice(int pChoice) {
    int i;
    LOG_TRACE("(%d)", pChoice);
    NOT_IMPLEMENTED();
}

// Offset: 1408
// Size: 0x14ea
//IDA: int __usercall DoInterfaceScreen@<EAX>(tInterface_spec *pSpec@<EAX>, int pOptions@<EDX>, int pCurrent_choice@<EBX>)
int DoInterfaceScreen(tInterface_spec *pSpec, int pOptions, int pCurrent_choice) {
    tProg_status entry_status;
    int x_coord;
    int y_coord;
    int mouse_in_somewhere;
    int i;
    int key2;
    int mouse_was_started;
    int last_choice;
    int escaped;
    int timed_out;
    int go_ahead;
    int last_mode;
    int result;
    int the_key;
    int the_max;
    int mouse_down;
    int new_mouse_down;
    int last_mouse_down;
    int defeat_mode_change;
    int selection_changed;
    char the_str[256];
    tU32 last_press;
    tU32 last_left_press;
    tU32 last_right_press;
    tU32 last_up_press;
    tU32 last_down_press;
    br_pixelmap **copy_areas;
    br_pixelmap *old_current_splash;
    void *pixels_copy;
    void *palette_copy;
    LOG_TRACE("(%p, %d, %d)", pSpec, pOptions, pCurrent_choice);
    NOT_IMPLEMENTED();
}

// Offset: 6764
// Size: 0x58
//IDA: void __usercall ChangeSelectionTo(int pNew_choice@<EAX>, int pNew_mode@<EDX>)
void ChangeSelectionTo(int pNew_choice, int pNew_mode) {
    int last_choice;
    LOG_TRACE("(%d, %d)", pNew_choice, pNew_mode);
    NOT_IMPLEMENTED();
}

