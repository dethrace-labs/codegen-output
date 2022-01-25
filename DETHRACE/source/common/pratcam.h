#ifndef _PRATCAM_H_
#define _PRATCAM_H_

#include "dr_types.h"
#include "br_types.h"

extern tS3_sound_tag gWhirr_noise; // addr: 00018648
extern tFlic_descriptor gPrat_flic; // addr: 0003BDE0
extern tPrat_sequence *gPratcam_sequences; // addr: 0003BE50
extern tPrat_flic_spec *gPratcam_flics; // addr: 0003BE54
extern int gCurrent_pratcam_chunk; // addr: 0003BE58
extern int gPending_ambient_prat; // addr: 0003BE5C
extern int gCurrent_pratcam_index; // addr: 0003BE60
extern br_pixelmap *gPrat_buffer; // addr: 0003BE64
extern int gNumber_of_prat_sequences; // addr: 0003BE68
extern int gNumber_of_prat_flics; // addr: 0003BE6C
extern tU32 gLast_pratcam_frame_time; // addr: 0003BE70
extern int gCurrent_pratcam_precedence; // addr: 0003BE74
extern int gCurrent_ambient_prat_sequence; // addr: 0003BE78
extern int gCurrent_pratcam_alternative; // addr: 0003BE7C

// Offset: 0
// Size: 0x2d
//IDA: int __cdecl PratcamGetCurrent()
int PratcamGetCurrent();

// Offset: 48
// Size: 0x2d
//IDA: int __cdecl PratcamGetAmbient()
int PratcamGetAmbient();

// Offset: 96
// Size: 0x2d
//IDA: int __cdecl PratcamGetPending()
int PratcamGetPending();

// Offset: 144
// Size: 0xf0
//IDA: void __cdecl TogglePratcam()
void TogglePratcam();

// Offset: 384
// Size: 0x72c
//IDA: void __usercall LoadPratcam(char *pFolder_name@<EAX>)
void LoadPratcam(char *pFolder_name);

// Offset: 2220
// Size: 0x1ef
//IDA: void __cdecl NextPratcamChunk()
void NextPratcamChunk();

// Offset: 2716
// Size: 0x53
//IDA: void __usercall NewPratcamSequence(int pSequence_index@<EAX>, int pStart_chunk@<EDX>)
void NewPratcamSequence(int pSequence_index, int pStart_chunk);

// Offset: 2800
// Size: 0x43
//IDA: void __usercall ChangeAmbientPratcamNow(int pIndex@<EAX>, int pStart_chunk@<EDX>)
void ChangeAmbientPratcamNow(int pIndex, int pStart_chunk);

// Offset: 2868
// Size: 0x76
//IDA: void __usercall ChangeAmbientPratcam(int pIndex@<EAX>)
void ChangeAmbientPratcam(int pIndex);

// Offset: 2988
// Size: 0x39
//IDA: void __usercall PratcamEventNow(int pIndex@<EAX>)
void PratcamEventNow(int pIndex);

// Offset: 3048
// Size: 0x71
//IDA: void __usercall PratcamEvent(int pIndex@<EAX>)
void PratcamEvent(int pIndex);

// Offset: 3164
// Size: 0x5e
//IDA: int __cdecl HighResPratBufferWidth()
int HighResPratBufferWidth();

// Offset: 3260
// Size: 0x5e
//IDA: int __cdecl HighResPratBufferHeight()
int HighResPratBufferHeight();

// Offset: 3356
// Size: 0x1a3
//IDA: void __cdecl InitPratcam()
void InitPratcam();

// Offset: 3776
// Size: 0x1bf
//IDA: void __cdecl DisposePratcam()
void DisposePratcam();

// Offset: 4224
// Size: 0x4e4
//IDA: void __usercall DoPratcam(tU32 pThe_time@<EAX>)
void DoPratcam(tU32 pThe_time);

// Offset: 5476
// Size: 0x60
//IDA: void __usercall TestPratCam(int pIndex@<EAX>)
void TestPratCam(int pIndex);

// Offset: 5572
// Size: 0x29
//IDA: void __cdecl PratCam0()
void PratCam0();

// Offset: 5616
// Size: 0x2c
//IDA: void __cdecl PratCam1()
void PratCam1();

// Offset: 5660
// Size: 0x2c
//IDA: void __cdecl PratCam2()
void PratCam2();

// Offset: 5704
// Size: 0x2c
//IDA: void __cdecl PratCam3()
void PratCam3();

// Offset: 5748
// Size: 0x2c
//IDA: void __cdecl PratCam4()
void PratCam4();

// Offset: 5792
// Size: 0x2c
//IDA: void __cdecl PratCam5()
void PratCam5();

// Offset: 5836
// Size: 0x2c
//IDA: void __cdecl PratCam6()
void PratCam6();

// Offset: 5880
// Size: 0x2c
//IDA: void __cdecl PratCam7()
void PratCam7();

// Offset: 5924
// Size: 0x2c
//IDA: void __cdecl PratCam8()
void PratCam8();

// Offset: 5968
// Size: 0x2c
//IDA: void __cdecl PratCam9()
void PratCam9();

#endif
