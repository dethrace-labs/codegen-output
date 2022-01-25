#ifndef _SOUND_H_
#define _SOUND_H_

#include "dr_types.h"
#include "br_types.h"

extern int gSound_detail_level; // addr: 0001A828
extern int gVirgin_pass; // addr: 0001A82C
extern int gOld_sound_detail_level; // addr: 0001A830
extern int gLast_tune; // addr: 0001A834
extern int gRandom_MIDI_tunes[3]; // addr: 0001A838
extern int gRandom_Rockin_MIDI_tunes[3]; // addr: 0001A844
extern int gRandom_CDA_tunes[7]; // addr: 0001A850
extern int gCDA_is_playing; // addr: 0001A86C
extern int gServicing_sound; // addr: 0001A870
extern int gSong_repeat_count; // addr: 0001A874
extern int gSound_sources_inited; // addr: 0001A878
extern int gMusic_available; // addr: 0001A87C
extern tS3_sound_tag gCDA_tag; // addr: 0001A880
extern int gCD_fully_installed; // addr: 0001A884
extern tS3_outlet_ptr gEffects_outlet; // addr: 0001A888
extern tS3_outlet_ptr gCar_outlet; // addr: 0001A88C
extern tS3_outlet_ptr gEngine_outlet; // addr: 0001A890
extern tS3_outlet_ptr gDriver_outlet; // addr: 0001A894
extern tS3_outlet_ptr gPedestrians_outlet; // addr: 0001A898
extern tS3_outlet_ptr gMusic_outlet; // addr: 0001A89C
extern tS3_sound_id gMIDI_id; // addr: 0001A8A0
extern tS3_outlet_ptr gIndexed_outlets[6]; // addr: 0003DA70
extern tU32 gLast_sound_service; // addr: 0003DA88
extern int gCD_is_disabled; // addr: 0003DA8C
extern br_vector3 gCamera_left; // addr: 0003DA90
extern br_vector3 gCamera_position; // addr: 0003DA9C
extern br_vector3 gOld_camera_position; // addr: 0003DAA8
extern br_vector3 gCamera_velocity; // addr: 0003DAB4

// Offset: 0
// Size: 0xe0
//IDA: void __cdecl UsePathFileToDetermineIfFullInstallation()
void UsePathFileToDetermineIfFullInstallation();

// Offset: 224
// Size: 0x3d0
//IDA: void __cdecl InitSound()
void InitSound();

// Offset: 1200
// Size: 0x91
//IDA: tS3_sound_tag __usercall DRS3StartSound@<EAX>(tS3_outlet_ptr pOutlet@<EAX>, tS3_sound_id pSound@<EDX>)
tS3_sound_tag DRS3StartSound(tS3_outlet_ptr pOutlet, tS3_sound_id pSound);

// Offset: 1348
// Size: 0x49
//IDA: tS3_sound_tag __usercall DRS3StartSoundNoPiping@<EAX>(tS3_outlet_ptr pOutlet@<EAX>, tS3_sound_id pSound@<EDX>)
tS3_sound_tag DRS3StartSoundNoPiping(tS3_outlet_ptr pOutlet, tS3_sound_id pSound);

// Offset: 1424
// Size: 0xce
//IDA: tS3_sound_tag __usercall DRS3StartSound2@<EAX>(tS3_outlet_ptr pOutlet@<EAX>, tS3_sound_id pSound@<EDX>, tS3_repeats pRepeats@<EBX>, tS3_volume pLVolume@<ECX>, tS3_volume pRVolume, tS3_pitch pPitch, tS3_speed pSpeed)
tS3_sound_tag DRS3StartSound2(tS3_outlet_ptr pOutlet, tS3_sound_id pSound, tS3_repeats pRepeats, tS3_volume pLVolume, tS3_volume pRVolume, tS3_pitch pPitch, tS3_speed pSpeed);

// Offset: 1632
// Size: 0x49
//IDA: int __usercall DRS3ChangeVolume@<EAX>(tS3_sound_tag pSound_tag@<EAX>, tS3_volume pNew_volume@<EDX>)
int DRS3ChangeVolume(tS3_sound_tag pSound_tag, tS3_volume pNew_volume);

// Offset: 1708
// Size: 0x4d
//IDA: int __usercall DRS3ChangeLRVolume@<EAX>(tS3_sound_tag pSound_tag@<EAX>, tS3_volume pNew_Lvolume@<EDX>, tS3_volume pNew_Rvolume@<EBX>)
int DRS3ChangeLRVolume(tS3_sound_tag pSound_tag, tS3_volume pNew_Lvolume, tS3_volume pNew_Rvolume);

// Offset: 1788
// Size: 0x49
//IDA: int __usercall DRS3ChangePitch@<EAX>(tS3_sound_tag pTag@<EAX>, tS3_pitch pNew_pitch@<EDX>)
int DRS3ChangePitch(tS3_sound_tag pTag, tS3_pitch pNew_pitch);

// Offset: 1864
// Size: 0x49
//IDA: int __usercall DRS3ChangeSpeed@<EAX>(tS3_sound_tag pTag@<EAX>, tS3_pitch pNew_speed@<EDX>)
int DRS3ChangeSpeed(tS3_sound_tag pTag, tS3_pitch pNew_speed);

// Offset: 1940
// Size: 0x49
//IDA: int __usercall DRS3ChangePitchSpeed@<EAX>(tS3_sound_tag pTag@<EAX>, tS3_pitch pNew_pitch@<EDX>)
int DRS3ChangePitchSpeed(tS3_sound_tag pTag, tS3_pitch pNew_pitch);

// Offset: 2016
// Size: 0x45
//IDA: int __usercall DRS3StopSound@<EAX>(tS3_sound_tag pSound_tag@<EAX>)
int DRS3StopSound(tS3_sound_tag pSound_tag);

// Offset: 2088
// Size: 0x45
//IDA: int __usercall DRS3LoadSound@<EAX>(tS3_sound_id pThe_sound@<EAX>)
int DRS3LoadSound(tS3_sound_id pThe_sound);

// Offset: 2160
// Size: 0x45
//IDA: int __usercall DRS3ReleaseSound@<EAX>(tS3_sound_id pThe_sound@<EAX>)
int DRS3ReleaseSound(tS3_sound_id pThe_sound);

// Offset: 2232
// Size: 0x61
//IDA: void __cdecl DRS3Service()
void DRS3Service();

// Offset: 2332
// Size: 0x45
//IDA: int __usercall DRS3OutletSoundsPlaying@<EAX>(tS3_outlet_ptr pOutlet@<EAX>)
int DRS3OutletSoundsPlaying(tS3_outlet_ptr pOutlet);

// Offset: 2404
// Size: 0x45
//IDA: int __usercall DRS3SoundStillPlaying@<EAX>(tS3_sound_tag pSound_tag@<EAX>)
int DRS3SoundStillPlaying(tS3_sound_tag pSound_tag);

// Offset: 2476
// Size: 0x3a
//IDA: void __cdecl DRS3ShutDown()
void DRS3ShutDown();

// Offset: 2536
// Size: 0x49
//IDA: int __usercall DRS3SetOutletVolume@<EAX>(tS3_outlet_ptr pOutlet@<EAX>, tS3_volume pVolume@<EDX>)
int DRS3SetOutletVolume(tS3_outlet_ptr pOutlet, tS3_volume pVolume);

// Offset: 2612
// Size: 0x45
//IDA: int __usercall DRS3OverallVolume@<EAX>(tS3_volume pVolume@<EAX>)
int DRS3OverallVolume(tS3_volume pVolume);

// Offset: 2684
// Size: 0x45
//IDA: int __usercall DRS3StopOutletSound@<EAX>(tS3_outlet_ptr pOutlet@<EAX>)
int DRS3StopOutletSound(tS3_outlet_ptr pOutlet);

// Offset: 2756
// Size: 0x3f
//IDA: int __cdecl DRS3StopAllOutletSounds()
int DRS3StopAllOutletSounds();

// Offset: 2820
// Size: 0x50
//IDA: void __cdecl ToggleSoundEnable()
void ToggleSoundEnable();

// Offset: 2900
// Size: 0x7d
//IDA: void __cdecl SoundService()
void SoundService();

// Offset: 3028
// Size: 0x209
//IDA: void __cdecl InitSoundSources()
void InitSoundSources();

// Offset: 3552
// Size: 0x19b
//IDA: void __cdecl DisposeSoundSources()
void DisposeSoundSources();

// Offset: 3964
// Size: 0xc0
//IDA: tS3_sound_tag __usercall DRS3StartSound3D@<EAX>(tS3_outlet_ptr pOutlet@<EAX>, tS3_sound_id pSound@<EDX>, br_vector3 *pInitial_position@<EBX>, br_vector3 *pInitial_velocity@<ECX>, tS3_repeats pRepeats, tS3_volume pVolume, tS3_pitch pPitch, tS3_speed pSpeed)
tS3_sound_tag DRS3StartSound3D(tS3_outlet_ptr pOutlet, tS3_sound_id pSound, br_vector3 *pInitial_position, br_vector3 *pInitial_velocity, tS3_repeats pRepeats, tS3_volume pVolume, tS3_pitch pPitch, tS3_speed pSpeed);

// Offset: 4156
// Size: 0x61
//IDA: tS3_sound_tag __usercall DRS3StartSoundFromSource3@<EAX>(tS3_sound_source_ptr pSource@<EAX>, tS3_sound_id pSound@<EDX>, tS3_repeats pRepeats@<EBX>, tS3_volume pVolume@<ECX>, tS3_pitch pPitch, tS3_speed pSpeed)
tS3_sound_tag DRS3StartSoundFromSource3(tS3_sound_source_ptr pSource, tS3_sound_id pSound, tS3_repeats pRepeats, tS3_volume pVolume, tS3_pitch pPitch, tS3_speed pSpeed);

// Offset: 4256
// Size: 0x4f
//IDA: tS3_sound_tag __usercall DRS3StartSoundFromSource@<EAX>(tS3_sound_source_ptr pSource@<EAX>, tS3_sound_id pSound@<EDX>)
tS3_sound_tag DRS3StartSoundFromSource(tS3_sound_source_ptr pSource, tS3_sound_id pSound);

// Offset: 4336
// Size: 0x561
//IDA: void __cdecl MungeEngineNoise()
void MungeEngineNoise();

// Offset: 5716
// Size: 0x9a
//IDA: void __cdecl SetSoundVolumes()
void SetSoundVolumes();

// Offset: 5872
// Size: 0x37
//IDA: tS3_outlet_ptr __usercall GetOutletFromIndex@<EAX>(int pIndex@<EAX>)
tS3_outlet_ptr GetOutletFromIndex(int pIndex);

// Offset: 5928
// Size: 0x61
//IDA: int __usercall GetIndexFromOutlet@<EAX>(tS3_outlet_ptr pOutlet@<EAX>)
int GetIndexFromOutlet(tS3_outlet_ptr pOutlet);

// Offset: 6028
// Size: 0x127
//IDA: int __usercall DRS3StartCDA@<EAX>(tS3_sound_id pCDA_id@<EAX>)
int DRS3StartCDA(tS3_sound_id pCDA_id);

// Offset: 6324
// Size: 0x5f
//IDA: int __cdecl DRS3StopCDA()
int DRS3StopCDA();

// Offset: 6420
// Size: 0x4b
//IDA: void __cdecl StartMusic()
void StartMusic();

// Offset: 6496
// Size: 0x30
//IDA: void __cdecl StopMusic()
void StopMusic();

#endif
