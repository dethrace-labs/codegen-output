#ifndef _OPTIONS_H_
#define _OPTIONS_H_

#include "dr_types.h"
#include "br_types.h"

extern int gKey_defns[18]; // addr: 000170E0
extern tRadio_bastards gRadio_bastards__options[13]; // addr: 00017128 // suffix added to avoid duplicate symbol
extern int gKey_count; // addr: 0003A9C0
extern int gLast_graph_sel__options; // addr: 0003A9C4 // suffix added to avoid duplicate symbol
extern char *gKey_names[125]; // addr: 0003A9C8
extern int gPending_entry; // addr: 0003ABBC
extern tInterface_spec *gThe_interface_spec__options; // addr: 0003ABC0 // suffix added to avoid duplicate symbol
extern int gOrig_key_mapping[67]; // addr: 0003ABC4
extern br_pixelmap *gDials_pix; // addr: 0003ACD0
extern int gCurrent_key; // addr: 0003ACD4

// Offset: 0
// Size: 0xa1
//IDA: void __usercall DrawDial(int pWhich_one@<EAX>, int pWhich_stage@<EDX>)
void DrawDial(int pWhich_one, int pWhich_stage);

// Offset: 164
// Size: 0x182
//IDA: void __usercall MoveDialFromTo(int pWhich_one@<EAX>, int pOld_stage@<EDX>, int pNew_stage@<EBX>)
void MoveDialFromTo(int pWhich_one, int pOld_stage, int pNew_stage);

// Offset: 552
// Size: 0x5e
//IDA: void __cdecl SoundOptionsStart()
void SoundOptionsStart();

// Offset: 648
// Size: 0x5a
//IDA: int __usercall SoundOptionsDone@<EAX>(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>, int pGo_ahead@<EBX>, int pEscaped@<ECX>, int pTimed_out)
int SoundOptionsDone(int pCurrent_choice, int pCurrent_mode, int pGo_ahead, int pEscaped, int pTimed_out);

// Offset: 740
// Size: 0x9a
//IDA: int __usercall SoundOptionsLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SoundOptionsLeft(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 896
// Size: 0x9a
//IDA: int __usercall SoundOptionsRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int SoundOptionsRight(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 1052
// Size: 0x180
//IDA: int __usercall SoundClick@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int SoundClick(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 1436
// Size: 0x4d
//IDA: void __cdecl DoSoundOptions()
void DoSoundOptions();

// Offset: 1516
// Size: 0x24a
//IDA: void __cdecl GetGraphicsOptions()
void GetGraphicsOptions();

// Offset: 2104
// Size: 0x201
//IDA: void __cdecl SetGraphicsOptions()
void SetGraphicsOptions();

// Offset: 2620
// Size: 0x50
//IDA: void __usercall PlayRadioOn2(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOn2(int pIndex, int pValue);

// Offset: 2700
// Size: 0x50
//IDA: void __usercall PlayRadioOff2(int pIndex@<EAX>, int pValue@<EDX>)
void PlayRadioOff2(int pIndex, int pValue);

// Offset: 2780
// Size: 0x4f
//IDA: void __usercall PlayRadioOn(int pIndex@<EAX>, int pValue@<EDX>)
// Suffix added to avoid duplicate symbol
void PlayRadioOn__options(int pIndex, int pValue);

// Offset: 2860
// Size: 0x4f
//IDA: void __usercall PlayRadioOff(int pIndex@<EAX>, int pValue@<EDX>)
// Suffix added to avoid duplicate symbol
void PlayRadioOff__options(int pIndex, int pValue);

// Offset: 2940
// Size: 0x6d
//IDA: void __cdecl DrawInitialRadios()
void DrawInitialRadios();

// Offset: 3052
// Size: 0x54
//IDA: void __usercall RadioChanged(int pIndex@<EAX>, int pNew_value@<EDX>)
void RadioChanged(int pIndex, int pNew_value);

// Offset: 3136
// Size: 0x79
//IDA: int __usercall GraphOptLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptLeft(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3260
// Size: 0x7d
//IDA: int __usercall GraphOptRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptRight(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3388
// Size: 0x94
//IDA: int __usercall GraphOptUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptUp(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3536
// Size: 0x94
//IDA: int __usercall GraphOptDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptDown(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3684
// Size: 0xaf
//IDA: int __usercall RadioClick@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int RadioClick(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 3860
// Size: 0x3b
//IDA: int __usercall GraphOptGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int GraphOptGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 3920
// Size: 0xc3
//IDA: void __usercall PlotAGraphBox(int pIndex@<EAX>, int pColour_value@<EDX>)
// Suffix added to avoid duplicate symbol
void PlotAGraphBox__options(int pIndex, int pColour_value);

// Offset: 4116
// Size: 0x32
//IDA: void __usercall DrawAGraphBox(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void DrawAGraphBox__options(int pIndex);

// Offset: 4168
// Size: 0x2f
//IDA: void __usercall EraseAGraphBox(int pIndex@<EAX>)
// Suffix added to avoid duplicate symbol
void EraseAGraphBox__options(int pIndex);

// Offset: 4216
// Size: 0x50
//IDA: void __usercall DrawGraphBox(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawGraphBox(int pCurrent_choice, int pCurrent_mode);

// Offset: 4296
// Size: 0x80
//IDA: void __cdecl DoGraphicsOptions()
void DoGraphicsOptions();

// Offset: 4424
// Size: 0x5f6
//IDA: void __cdecl CalibrateJoysticks()
void CalibrateJoysticks();

// Offset: 5952
// Size: 0x76
//IDA: void __usercall StripControls(unsigned char *pStr@<EAX>)
void StripControls(unsigned char *pStr);

// Offset: 6072
// Size: 0xd7
//IDA: void __cdecl LoadKeyNames()
void LoadKeyNames();

// Offset: 6288
// Size: 0x4f
//IDA: void __cdecl DisposeKeyNames()
void DisposeKeyNames();

// Offset: 6368
// Size: 0x36
//IDA: void __cdecl SaveOrigKeyMapping()
void SaveOrigKeyMapping();

// Offset: 6424
// Size: 0x180
//IDA: void __usercall GetKeyCoords(int pIndex@<EAX>, int *pY@<EDX>, int *pName_x@<EBX>, int *pKey_x@<ECX>, int *pEnd_box)
void GetKeyCoords(int pIndex, int *pY, int *pName_x, int *pKey_x, int *pEnd_box);

// Offset: 6808
// Size: 0xb6
//IDA: void __cdecl SetKeysToDefault()
void SetKeysToDefault();

// Offset: 6992
// Size: 0xd9
//IDA: void __cdecl SaveKeyMapping()
void SaveKeyMapping();

// Offset: 7212
// Size: 0x3c
//IDA: void __usercall ChangeKeyMapIndex(int pNew_one@<EAX>)
void ChangeKeyMapIndex(int pNew_one);

// Offset: 7272
// Size: 0x49a
//IDA: void __usercall DrawKeyAssignments(int pCurrent_choice@<EAX>, int pCurrent_mode@<EDX>)
void DrawKeyAssignments(int pCurrent_choice, int pCurrent_mode);

// Offset: 8452
// Size: 0xfc
//IDA: int __usercall KeyAssignLeft@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignLeft(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 8704
// Size: 0xfc
//IDA: int __usercall KeyAssignRight@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignRight(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 8956
// Size: 0x12b
//IDA: int __usercall KeyAssignUp@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignUp(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9256
// Size: 0x109
//IDA: int __usercall KeyAssignDown@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignDown(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 9524
// Size: 0x3f1
//IDA: int __usercall KeyAssignGoAhead@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>)
int KeyAssignGoAhead(int *pCurrent_choice, int *pCurrent_mode);

// Offset: 10536
// Size: 0xa8
//IDA: int __usercall MouseyClickBastard@<EAX>(int *pCurrent_choice@<EAX>, int *pCurrent_mode@<EDX>, int pX_offset@<EBX>, int pY_offset@<ECX>)
int MouseyClickBastard(int *pCurrent_choice, int *pCurrent_mode, int pX_offset, int pY_offset);

// Offset: 10704
// Size: 0x5a
//IDA: void __cdecl DrawInitialKMRadios()
void DrawInitialKMRadios();

// Offset: 10796
// Size: 0x16e
//IDA: void __cdecl DoControlOptions()
void DoControlOptions();

// Offset: 11164
// Size: 0x44
//IDA: void __cdecl LoadSoundOptionsData()
void LoadSoundOptionsData();

// Offset: 11232
// Size: 0x30
//IDA: void __cdecl FreeSoundOptionsData()
void FreeSoundOptionsData();

// Offset: 11280
// Size: 0xa5
//IDA: void __cdecl DrawDisabledOptions()
void DrawDisabledOptions();

// Offset: 11448
// Size: 0x92
//IDA: void __cdecl DoOptions()
void DoOptions();

#endif
