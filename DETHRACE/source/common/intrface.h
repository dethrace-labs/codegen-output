#ifndef _INTRFACE_H_
#define _INTRFACE_H_

#include "dr_types.h"
#include "br_types.h"

extern int gDisabled_choices[10]; // addr: 00037820
extern int gCurrent_mode; // addr: 00037848
extern tU32 gStart_time; // addr: 0003784C
extern int gCurrent_choice; // addr: 00037850
extern tInterface_spec *gSpec; // addr: 00037854
extern int gAlways_typing; // addr: 00037858
extern int gDisabled_count; // addr: 0003785C

// Offset: 0
// Size: 0x2c
//IDA: void __cdecl SetAlwaysTyping()
void SetAlwaysTyping();

// Offset: 44
// Size: 0x2c
//IDA: void __cdecl ClearAlwaysTyping()
void ClearAlwaysTyping();

// Offset: 88
// Size: 0x67
//IDA: int __usercall ChoiceDisabled@<EAX>(int pChoice@<EAX>)
int ChoiceDisabled(int pChoice);

// Offset: 192
// Size: 0x2c
//IDA: void __cdecl ResetInterfaceTimeout()
void ResetInterfaceTimeout();

// Offset: 236
// Size: 0x273
//IDA: void __usercall ChangeSelection(tInterface_spec *pSpec@<EAX>, int *pOld_selection@<EDX>, int *pNew_selection@<EBX>, int pMode@<ECX>, int pSkip_disabled)
void ChangeSelection(tInterface_spec *pSpec, int *pOld_selection, int *pNew_selection, int pMode, int pSkip_disabled);

// Offset: 864
// Size: 0x124
//IDA: void __usercall RecopyAreas(tInterface_spec *pSpec@<EAX>, br_pixelmap **pCopy_areas@<EDX>)
void RecopyAreas(tInterface_spec *pSpec, br_pixelmap **pCopy_areas);

// Offset: 1156
// Size: 0x6f
//IDA: void __usercall DisableChoice(int pChoice@<EAX>)
void DisableChoice(int pChoice);

// Offset: 1268
// Size: 0x8c
//IDA: void __usercall EnableChoice(int pChoice@<EAX>)
void EnableChoice(int pChoice);

// Offset: 1408
// Size: 0x14ea
//IDA: int __usercall DoInterfaceScreen@<EAX>(tInterface_spec *pSpec@<EAX>, int pOptions@<EDX>, int pCurrent_choice@<EBX>)
int DoInterfaceScreen(tInterface_spec *pSpec, int pOptions, int pCurrent_choice);

// Offset: 6764
// Size: 0x58
//IDA: void __usercall ChangeSelectionTo(int pNew_choice@<EAX>, int pNew_mode@<EDX>)
void ChangeSelectionTo(int pNew_choice, int pNew_mode);

#endif
