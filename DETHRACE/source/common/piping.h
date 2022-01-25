#ifndef _PIPING_H_
#define _PIPING_H_

#include "dr_types.h"
#include "br_types.h"

extern tU8 *gPipe_buffer_start; // addr: 000183F0
extern int gDisable_sound; // addr: 000183F4
extern int gDisable_advance; // addr: 000183F8
extern int gMax_rewind_chunks; // addr: 000183FC
extern float gWall_severity; // addr: 00018400
extern tPipe_reset_proc gReset_procs[32]; // addr: 00018404
extern tPiped_registration_snapshot gRegistration_snapshots[5]; // addr: 0003BB90
extern tPipe_smudge_data *gSmudge_space; // addr: 0003BBE0
extern tU32 gOldest_time; // addr: 0003BBE4
extern int gCurrent_snapshot_registration_index; // addr: 0003BBE8
extern tPipe_chunk *gMr_chunky; // addr: 0003BBEC
extern tCar_spec *gCar_ptr; // addr: 0003BBF0
extern br_vector3 gZero_vector; // addr: 0003BBF4
extern tPipe_chunk_type gReentrancy_array[5]; // addr: 0003BC00
extern tU32 gLast_time; // addr: 0003BC14
extern tPipe_model_geometry_data *gModel_geometry_space; // addr: 0003BC18
extern tU32 gEnd_time; // addr: 0003BC1C
extern tU32 gTrigger_time; // addr: 0003BC20
extern int gReentrancy_count; // addr: 0003BC24
extern br_vector3 gCar_pos; // addr: 0003BC28
extern br_vector3 gReference_pos; // addr: 0003BC34
extern br_scalar gMax_distance; // addr: 0003BC40
extern tU32 gLoop_abort_time; // addr: 0003BC44
extern br_vector3 gWall_impact_point; // addr: 0003BC48
extern tU8 *gPipe_buffer_working_end; // addr: 0003BC54
extern tU32 gYoungest_time; // addr: 0003BC58
extern tU8 *gPipe_buffer_phys_end; // addr: 0003BC5C
extern tU8 *gLocal_buffer_record_ptr; // addr: 0003BC60
extern tU8 *gPipe_play_ptr; // addr: 0003BC64
extern tU8 *gEnd_of_session; // addr: 0003BC68
extern tU8 *gPipe_record_ptr; // addr: 0003BC6C
extern tU8 *gPipe_buffer_oldest; // addr: 0003BC70
extern tU32 gPipe_buffer_size; // addr: 0003BC74
extern tU8 *gLocal_buffer; // addr: 0003BC78
extern tU32 gLocal_buffer_size; // addr: 0003BC7C

// Offset: 0
// Size: 0x8b
//IDA: void __usercall GetReducedPos(br_vector3 *v@<EAX>, tReduced_pos *p@<EDX>)
void GetReducedPos(br_vector3 *v, tReduced_pos *p);

// Offset: 140
// Size: 0xab
//IDA: void __usercall SaveReducedPos(tReduced_pos *p@<EAX>, br_vector3 *v@<EDX>)
void SaveReducedPos(tReduced_pos *p, br_vector3 *v);

// Offset: 312
// Size: 0xb9
//IDA: int __cdecl PipeSearchForwards()
int PipeSearchForwards();

// Offset: 500
// Size: 0x44
//IDA: int __cdecl IsActionReplayAvailable()
int IsActionReplayAvailable();

// Offset: 568
// Size: 0x69
//IDA: int __cdecl SomeReplayLeft()
int SomeReplayLeft();

// Offset: 676
// Size: 0x2c
//IDA: void __cdecl DisablePipedSounds()
void DisablePipedSounds();

// Offset: 720
// Size: 0x2c
//IDA: void __cdecl EnablePipedSounds()
void EnablePipedSounds();

// Offset: 764
// Size: 0x48d
//IDA: tU32 __usercall LengthOfSession@<EAX>(tPipe_session *pSession@<EAX>)
tU32 LengthOfSession(tPipe_session *pSession);

// Offset: 1932
// Size: 0xc4
//IDA: void __usercall StartPipingSession2(tPipe_chunk_type pThe_type@<EAX>, int pMunge_reentrancy@<EDX>)
void StartPipingSession2(tPipe_chunk_type pThe_type, int pMunge_reentrancy);

// Offset: 2128
// Size: 0x32
//IDA: void __usercall StartPipingSession(tPipe_chunk_type pThe_type@<EAX>)
void StartPipingSession(tPipe_chunk_type pThe_type);

// Offset: 2180
// Size: 0x186
//IDA: void __usercall EndPipingSession2(int pMunge_reentrancy@<EAX>)
void EndPipingSession2(int pMunge_reentrancy);

// Offset: 2572
// Size: 0x2c
//IDA: void __cdecl EndPipingSession()
void EndPipingSession();

// Offset: 2616
// Size: 0xa8
//IDA: void __usercall AddDataToSession(int pSubject_index@<EAX>, void *pData@<EDX>, tU32 pData_length@<EBX>)
void AddDataToSession(int pSubject_index, void *pData, tU32 pData_length);

// Offset: 2784
// Size: 0x8c
//IDA: void __usercall AddModelGeometryToPipingSession(tU16 pCar_ID@<EAX>, int pModel_index@<EDX>, int pVertex_count@<EBX>, tChanged_vertex *pCoordinates@<ECX>)
void AddModelGeometryToPipingSession(tU16 pCar_ID, int pModel_index, int pVertex_count, tChanged_vertex *pCoordinates);

// Offset: 2924
// Size: 0x8c
//IDA: void __usercall AddSmudgeToPipingSession(tU16 pCar_ID@<EAX>, int pModel_index@<EDX>, int pVertex_count@<EBX>, tSmudged_vertex *pCoordinates@<ECX>)
void AddSmudgeToPipingSession(tU16 pCar_ID, int pModel_index, int pVertex_count, tSmudged_vertex *pCoordinates);

// Offset: 3064
// Size: 0xd0
//IDA: void __usercall AddPedestrianToPipingSession(int pPedestrian_index@<EAX>, br_matrix34 *pTrans@<EDX>, tU8 pAction_index@<EBX>, tU8 pFrame_index@<ECX>, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset)
void AddPedestrianToPipingSession(int pPedestrian_index, br_matrix34 *pTrans, tU8 pAction_index, tU8 pFrame_index, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset);

// Offset: 3272
// Size: 0x6b
//IDA: void __usercall AddSparkToPipingSession(int pSpark_index@<EAX>, br_vector3 *pPos@<EDX>, br_vector3 *pV@<EBX>)
void AddSparkToPipingSession(int pSpark_index, br_vector3 *pPos, br_vector3 *pV);

// Offset: 3380
// Size: 0x76
//IDA: void __usercall AddShrapnelToPipingSession(int pShrapnel_index@<EAX>, br_vector3 *pPos@<EDX>, tU16 pAge@<EBX>, br_material *pMaterial@<ECX>)
void AddShrapnelToPipingSession(int pShrapnel_index, br_vector3 *pPos, tU16 pAge, br_material *pMaterial);

// Offset: 3500
// Size: 0x41
//IDA: void __usercall AddScreenWobbleToPipingSession(int pWobble_x@<EAX>, int pWobble_y@<EDX>)
void AddScreenWobbleToPipingSession(int pWobble_x, int pWobble_y);

// Offset: 3568
// Size: 0x62
//IDA: void __usercall AddGrooveStopToPipingSession(int pGroove_index@<EAX>, br_matrix34 *pMatrix@<EDX>, int pPath_interrupt@<EBX>, int pObject_interrupt@<ECX>, float pPath_resumption, float pObject_resumption)
void AddGrooveStopToPipingSession(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption);

// Offset: 3668
// Size: 0x4f
//IDA: void __usercall AddNonCarToPipingSession(int pIndex@<EAX>, br_actor *pActor@<EDX>)
void AddNonCarToPipingSession(int pIndex, br_actor *pActor);

// Offset: 3748
// Size: 0x7f
//IDA: void __usercall AddSmokeToPipingSession(int pIndex@<EAX>, tU8 pType@<EDX>, br_vector3 *pPos@<EBX>, br_scalar pRadius, br_scalar pStrength)
void AddSmokeToPipingSession(int pIndex, tU8 pType, br_vector3 *pPos, br_scalar pRadius, br_scalar pStrength);

// Offset: 3876
// Size: 0x57
//IDA: void __usercall AddSmokeColumnToPipingSession(int pIndex@<EAX>, tCar_spec *pCar@<EDX>, int pVertex@<EBX>, int pColour@<ECX>)
void AddSmokeColumnToPipingSession(int pIndex, tCar_spec *pCar, int pVertex, int pColour);

// Offset: 3964
// Size: 0x57
//IDA: void __usercall AddFlameToPipingSession(int pIndex@<EAX>, int pFrame_count@<EDX>, br_scalar pScale_x, br_scalar pScale_y, br_scalar pOffset_x, br_scalar pOffset_z)
void AddFlameToPipingSession(int pIndex, int pFrame_count, br_scalar pScale_x, br_scalar pScale_y, br_scalar pOffset_x, br_scalar pOffset_z);

// Offset: 4052
// Size: 0x7a
//IDA: void __usercall AddSplashToPipingSession(tCollision_info *pCar@<EAX>)
void AddSplashToPipingSession(tCollision_info *pCar);

// Offset: 4176
// Size: 0x86
//IDA: void __usercall AddOilSpillToPipingSession(int pIndex@<EAX>, br_matrix34 *pMat@<EDX>, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap)
void AddOilSpillToPipingSession(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap);

// Offset: 4312
// Size: 0x3a
//IDA: void __usercall AddFrameFinishToPipingSession(tU32 pThe_time@<EAX>)
void AddFrameFinishToPipingSession(tU32 pThe_time);

// Offset: 4372
// Size: 0x165
//IDA: void __usercall AddCarToPipingSession(int pCar_ID@<EAX>, br_matrix34 *pCar_mat@<EDX>, br_vector3 *pCar_velocity@<EBX>, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag)
void AddCarToPipingSession(int pCar_ID, br_matrix34 *pCar_mat, br_vector3 *pCar_velocity, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag);

// Offset: 4732
// Size: 0x81
//IDA: void __usercall AddSoundToPipingSession(tS3_outlet_ptr pOutlet@<EAX>, int pSound_index@<EDX>, tS3_volume pL_volume@<EBX>, tS3_volume pR_volume@<ECX>, tS3_pitch pPitch, br_vector3 *pPos)
void AddSoundToPipingSession(tS3_outlet_ptr pOutlet, int pSound_index, tS3_volume pL_volume, tS3_volume pR_volume, tS3_pitch pPitch, br_vector3 *pPos);

// Offset: 4864
// Size: 0x5e
//IDA: void __usercall AddDamageToPipingSession(int pCar_ID@<EAX>, tS8 *pDifferences@<EDX>)
void AddDamageToPipingSession(int pCar_ID, tS8 *pDifferences);

// Offset: 4960
// Size: 0x35
//IDA: void __usercall AddSpecialToPipingSession(tSpecial_type pType@<EAX>)
void AddSpecialToPipingSession(tSpecial_type pType);

// Offset: 5016
// Size: 0x5a
//IDA: void __usercall AddPedGibToPipingSession(int pIndex@<EAX>, br_matrix34 *pTrans@<EDX>, int pSize@<EBX>, int pGib_index@<ECX>, int pPed_index)
void AddPedGibToPipingSession(int pIndex, br_matrix34 *pTrans, int pSize, int pGib_index, int pPed_index);

// Offset: 5108
// Size: 0x53
//IDA: void __cdecl AddCarIncidentToPipingSession(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point)
void AddCarIncidentToPipingSession(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point);

// Offset: 5192
// Size: 0x49
//IDA: void __usercall AddPedIncidentToPipingSession(int pPed_index@<EAX>, br_actor *pActor@<EDX>)
void AddPedIncidentToPipingSession(int pPed_index, br_actor *pActor);

// Offset: 5268
// Size: 0x45
//IDA: void __cdecl AddWallIncidentToPipingSession(float pSeverity, br_vector3 *pImpact_point)
void AddWallIncidentToPipingSession(float pSeverity, br_vector3 *pImpact_point);

// Offset: 5340
// Size: 0x53
//IDA: void __usercall AddProxRayToPipingSession(int pRay_index@<EAX>, tCar_spec *pCar@<EDX>, tU16 pPed_index@<EBX>, tU32 pTime@<ECX>)
void AddProxRayToPipingSession(int pRay_index, tCar_spec *pCar, tU16 pPed_index, tU32 pTime);

// Offset: 5424
// Size: 0x4a
//IDA: void __usercall AddSkidAdjustmentToPipingSession(int pSkid_num@<EAX>, br_matrix34 *pMatrix@<EDX>, int pMaterial_index@<EBX>)
void AddSkidAdjustmentToPipingSession(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index);

// Offset: 5500
// Size: 0x4b
//IDA: void __usercall PipeSingleModelGeometry(tU16 pCar_ID@<EAX>, int pModel_index@<EDX>, int pVertex_count@<EBX>, tChanged_vertex *pCoordinates@<ECX>)
void PipeSingleModelGeometry(tU16 pCar_ID, int pModel_index, int pVertex_count, tChanged_vertex *pCoordinates);

// Offset: 5576
// Size: 0x74
//IDA: void __usercall PipeSinglePedestrian(int pPedestrian_index@<EAX>, br_matrix34 *pTrans@<EDX>, tU8 pAction_index@<EBX>, tU8 pFrame_index@<ECX>, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset)
void PipeSinglePedestrian(int pPedestrian_index, br_matrix34 *pTrans, tU8 pAction_index, tU8 pFrame_index, tS8 pHit_points, int pDone_initial, tU16 pParent_ID, float pSpin_period, br_scalar pJump_magnitude, br_vector3 *pOffset);

// Offset: 5692
// Size: 0x8d
//IDA: void __usercall PipeSingleCar(int pCar_ID@<EAX>, br_matrix34 *pCar_mat@<EDX>, br_vector3 *pCar_velocity@<EBX>, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag)
void PipeSingleCar(int pCar_ID, br_matrix34 *pCar_mat, br_vector3 *pCar_velocity, float pSpeedo_speed, float pLf_sus_position, float pRf_sus_position, float pLr_sus_position, float pRr_sus_position, float pSteering_angle, br_scalar pRevs, int pGear, int pFrame_coll_flag);

// Offset: 5836
// Size: 0x66
//IDA: void __usercall PipeSingleSound(tS3_outlet_ptr pOutlet@<EAX>, int pSound_index@<EDX>, tS3_volume pL_volume@<EBX>, tS3_volume pR_volume@<ECX>, tS3_pitch pPitch, br_vector3 *pPos)
void PipeSingleSound(tS3_outlet_ptr pOutlet, int pSound_index, tS3_volume pL_volume, tS3_volume pR_volume, tS3_pitch pPitch, br_vector3 *pPos);

// Offset: 5940
// Size: 0x68
//IDA: void __usercall PipeSingleOilSpill(int pIndex@<EAX>, br_matrix34 *pMat@<EDX>, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap)
void PipeSingleOilSpill(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap);

// Offset: 6044
// Size: 0x40
//IDA: void __usercall PipeSingleDamage(int pCar_ID@<EAX>, tS8 *pDifferences@<EDX>)
void PipeSingleDamage(int pCar_ID, tS8 *pDifferences);

// Offset: 6108
// Size: 0x3c
//IDA: void __usercall PipeSingleSpecial(tSpecial_type pType@<EAX>)
void PipeSingleSpecial(tSpecial_type pType);

// Offset: 6168
// Size: 0x4e
//IDA: void __usercall PipeSinglePedGib(int pIndex@<EAX>, br_matrix34 *pTrans@<EDX>, int pSize@<EBX>, int pGib_index@<ECX>, int pPed_index)
void PipeSinglePedGib(int pIndex, br_matrix34 *pTrans, int pSize, int pGib_index, int pPed_index);

// Offset: 6248
// Size: 0x49
//IDA: void __cdecl PipeSingleCarIncident(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point)
void PipeSingleCarIncident(float pSeverity, tCar_spec *pCar, br_vector3 *pImpact_point);

// Offset: 6324
// Size: 0x4a
//IDA: void __usercall PipeSinglePedIncident(int pPed_index@<EAX>, br_actor *pActor@<EDX>)
void PipeSinglePedIncident(int pPed_index, br_actor *pActor);

// Offset: 6400
// Size: 0x45
//IDA: void __cdecl PipeSingleWallIncident(float pSeverity, br_vector3 *pImpact_point)
void PipeSingleWallIncident(float pSeverity, br_vector3 *pImpact_point);

// Offset: 6472
// Size: 0x40
//IDA: void __usercall PipeSingleScreenShake(int pWobble_x@<EAX>, int pWobble_y@<EDX>)
void PipeSingleScreenShake(int pWobble_x, int pWobble_y);

// Offset: 6536
// Size: 0x5c
//IDA: void __usercall PipeSingleGrooveStop(int pGroove_index@<EAX>, br_matrix34 *pMatrix@<EDX>, int pPath_interrupt@<EBX>, int pObject_interrupt@<ECX>, float pPath_resumption, float pObject_resumption)
void PipeSingleGrooveStop(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption);

// Offset: 6628
// Size: 0x71
//IDA: void __cdecl PipeFrameFinish()
void PipeFrameFinish();

// Offset: 6744
// Size: 0x56
//IDA: void __cdecl PipingFrameReset()
void PipingFrameReset();

// Offset: 6832
// Size: 0x44
//IDA: void __usercall PipeSingleSkidAdjustment(int pSkid_num@<EAX>, br_matrix34 *pMatrix@<EDX>, int pMaterial_index@<EBX>)
void PipeSingleSkidAdjustment(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index);

// Offset: 6900
// Size: 0x54
//IDA: void __cdecl ResetPiping()
void ResetPiping();

// Offset: 6984
// Size: 0xea
//IDA: void __cdecl InitialisePiping()
void InitialisePiping();

// Offset: 7220
// Size: 0x81
//IDA: void __cdecl DisposePiping()
void DisposePiping();

// Offset: 7352
// Size: 0xe3
//IDA: void __cdecl InitLastDamageArrayEtc()
void InitLastDamageArrayEtc();

// Offset: 7580
// Size: 0xa9
//IDA: void __cdecl ResetCars()
void ResetCars();

// Offset: 7752
// Size: 0x259
//IDA: void __cdecl PipeCarPositions()
void PipeCarPositions();

// Offset: 8356
// Size: 0x2c
//IDA: void __cdecl ResetPipePlayToEnd()
void ResetPipePlayToEnd();

// Offset: 8400
// Size: 0x2c
//IDA: void __cdecl ResetPipePlayToStart()
void ResetPipePlayToStart();

// Offset: 8444
// Size: 0x2d
//IDA: tU8* __cdecl GetPipePlayPtr()
tU8* GetPipePlayPtr();

// Offset: 8492
// Size: 0x2d
//IDA: void __usercall SetPipePlayPtr(tU8 *pPtr@<EAX>)
void SetPipePlayPtr(tU8 *pPtr);

// Offset: 8540
// Size: 0x21a
//IDA: void __usercall AdvanceChunkPtr(tPipe_chunk **pChunk@<EAX>, tChunk_subject_index pType@<EDX>)
void AdvanceChunkPtr(tPipe_chunk **pChunk, tChunk_subject_index pType);

// Offset: 9080
// Size: 0x170
//IDA: void __usercall ApplyModelGeometry(tPipe_chunk **pChunk@<EAX>)
void ApplyModelGeometry(tPipe_chunk **pChunk);

// Offset: 9448
// Size: 0x1a6
//IDA: void __usercall DoSmudge(tPipe_chunk **pChunk@<EAX>, int pDir@<EDX>)
void DoSmudge(tPipe_chunk **pChunk, int pDir);

// Offset: 9872
// Size: 0x3f
//IDA: void __usercall ApplySmudge(tPipe_chunk **pChunk@<EAX>)
void ApplySmudge(tPipe_chunk **pChunk);

// Offset: 9936
// Size: 0xb8
//IDA: void __usercall ApplyPedestrian(tPipe_chunk **pChunk@<EAX>)
void ApplyPedestrian(tPipe_chunk **pChunk);

// Offset: 10120
// Size: 0x54
//IDA: void __usercall ApplySpark(tPipe_chunk **pChunk@<EAX>)
void ApplySpark(tPipe_chunk **pChunk);

// Offset: 10204
// Size: 0x63
//IDA: void __usercall ApplyShrapnel(tPipe_chunk **pChunk@<EAX>)
void ApplyShrapnel(tPipe_chunk **pChunk);

// Offset: 10304
// Size: 0x4d
//IDA: void __usercall ApplyScreenWobble(tPipe_chunk **pChunk@<EAX>)
void ApplyScreenWobble(tPipe_chunk **pChunk);

// Offset: 10384
// Size: 0x6c
//IDA: void __usercall ApplyGrooveStop(tPipe_chunk **pChunk@<EAX>)
void ApplyGrooveStop(tPipe_chunk **pChunk);

// Offset: 10492
// Size: 0x47
//IDA: void __usercall ApplyNonCar(tPipe_chunk **pChunk@<EAX>)
void ApplyNonCar(tPipe_chunk **pChunk);

// Offset: 10564
// Size: 0x9e
//IDA: void __usercall ApplySmoke(tPipe_chunk **pChunk@<EAX>)
void ApplySmoke(tPipe_chunk **pChunk);

// Offset: 10724
// Size: 0xaa
//IDA: void __usercall ApplySmokeColumn(tPipe_chunk **pChunk@<EAX>)
void ApplySmokeColumn(tPipe_chunk **pChunk);

// Offset: 10896
// Size: 0x6f
//IDA: void __usercall ApplyFlame(tPipe_chunk **pChunk@<EAX>)
void ApplyFlame(tPipe_chunk **pChunk);

// Offset: 11008
// Size: 0xc0
//IDA: void __usercall ApplySplash(tPipe_chunk **pChunk@<EAX>)
void ApplySplash(tPipe_chunk **pChunk);

// Offset: 11200
// Size: 0x82
//IDA: void __usercall ApplyOilSpill(tPipe_chunk **pChunk@<EAX>, tU32 pStop_time@<EDX>)
void ApplyOilSpill(tPipe_chunk **pChunk, tU32 pStop_time);

// Offset: 11332
// Size: 0x4f
//IDA: void __usercall ApplyFrameBoundary(tPipe_chunk **pChunk@<EAX>)
void ApplyFrameBoundary(tPipe_chunk **pChunk);

// Offset: 11412
// Size: 0x1b9
//IDA: void __usercall ApplySound(tPipe_chunk **pChunk@<EAX>)
void ApplySound(tPipe_chunk **pChunk);

// Offset: 11856
// Size: 0x3c2
//IDA: void __usercall ApplyCar(tPipe_chunk **pChunk@<EAX>)
void ApplyCar(tPipe_chunk **pChunk);

// Offset: 12820
// Size: 0xb0
//IDA: void __usercall ApplyDamage(tPipe_chunk **pChunk@<EAX>)
void ApplyDamage(tPipe_chunk **pChunk);

// Offset: 12996
// Size: 0xa6
//IDA: void __usercall ApplySpecial(tPipe_chunk **pChunk@<EAX>)
void ApplySpecial(tPipe_chunk **pChunk);

// Offset: 13164
// Size: 0x78
//IDA: void __usercall ApplyPedGib(tPipe_chunk **pChunk@<EAX>)
void ApplyPedGib(tPipe_chunk **pChunk);

// Offset: 13284
// Size: 0x6a
//IDA: void __usercall ApplyProxRay(tPipe_chunk **pChunk@<EAX>)
void ApplyProxRay(tPipe_chunk **pChunk);

// Offset: 13392
// Size: 0x54
//IDA: void __usercall ApplySkidAdjustment(tPipe_chunk **pChunk@<EAX>)
void ApplySkidAdjustment(tPipe_chunk **pChunk);

// Offset: 13476
// Size: 0x262
//IDA: int __usercall ApplyPipedSession@<EAX>(tU8 **pPtr@<EAX>)
int ApplyPipedSession(tU8 **pPtr);

// Offset: 14088
// Size: 0x81
//IDA: int __usercall MoveSessionPointerBackOne@<EAX>(tU8 **pPtr@<EAX>)
int MoveSessionPointerBackOne(tU8 **pPtr);

// Offset: 14220
// Size: 0x81
//IDA: int __usercall MoveSessionPointerForwardOne@<EAX>(tU8 **pPtr@<EAX>)
int MoveSessionPointerForwardOne(tU8 **pPtr);

// Offset: 14352
// Size: 0x106
//IDA: tPipe_chunk* __usercall FindPreviousChunk@<EAX>(tU8 *pPtr@<EAX>, tPipe_chunk_type pType@<EDX>, tChunk_subject_index pIndex@<EBX>)
tPipe_chunk* FindPreviousChunk(tU8 *pPtr, tPipe_chunk_type pType, tChunk_subject_index pIndex);

// Offset: 14616
// Size: 0x1d1
//IDA: void __usercall UndoModelGeometry(tPipe_chunk **pChunk@<EAX>)
void UndoModelGeometry(tPipe_chunk **pChunk);

// Offset: 15084
// Size: 0x3f
//IDA: void __usercall UndoSmudge(tPipe_chunk **pChunk@<EAX>)
void UndoSmudge(tPipe_chunk **pChunk);

// Offset: 15148
// Size: 0x65
//IDA: void __usercall UndoPedestrian(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoPedestrian(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 15252
// Size: 0x41
//IDA: void __usercall UndoFrameBoundary(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoFrameBoundary(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 15320
// Size: 0x65
//IDA: void __usercall UndoCar(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoCar(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 15424
// Size: 0x32
//IDA: void __usercall UndoSound(tPipe_chunk **pChunk@<EAX>)
void UndoSound(tPipe_chunk **pChunk);

// Offset: 15476
// Size: 0xb0
//IDA: void __usercall UndoDamage(tPipe_chunk **pChunk@<EAX>)
void UndoDamage(tPipe_chunk **pChunk);

// Offset: 15652
// Size: 0x9c
//IDA: void __usercall UndoSpecial(tPipe_chunk **pChunk@<EAX>)
void UndoSpecial(tPipe_chunk **pChunk);

// Offset: 15808
// Size: 0x5b
//IDA: void __usercall UndoPedGib(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoPedGib(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 15900
// Size: 0x5b
//IDA: void __usercall UndoSpark(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoSpark(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 15992
// Size: 0x5b
//IDA: void __usercall UndoShrapnel(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoShrapnel(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16084
// Size: 0x66
//IDA: void __usercall UndoScreenWobble(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoScreenWobble(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16188
// Size: 0x5b
//IDA: void __usercall UndoGrooveStop(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoGrooveStop(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16280
// Size: 0x5b
//IDA: void __usercall UndoNonCar(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoNonCar(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16372
// Size: 0x5b
//IDA: void __usercall UndoSmoke(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoSmoke(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16464
// Size: 0x34
//IDA: void __usercall UndoSmokeColumn(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoSmokeColumn(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16516
// Size: 0x2e
//IDA: void __usercall UndoFlame(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoFlame(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16564
// Size: 0xae
//IDA: void __usercall UndoSplash(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoSplash(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16740
// Size: 0x63
//IDA: void __usercall UndoOilSpill(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoOilSpill(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16840
// Size: 0x2d
//IDA: void __usercall UndoProxRay(tPipe_chunk **pChunk@<EAX>)
void UndoProxRay(tPipe_chunk **pChunk);

// Offset: 16888
// Size: 0x69
//IDA: void __usercall UndoSkidAdjustment(tPipe_chunk **pChunk@<EAX>, tPipe_chunk *pPrev_chunk@<EDX>)
void UndoSkidAdjustment(tPipe_chunk **pChunk, tPipe_chunk *pPrev_chunk);

// Offset: 16996
// Size: 0x2ec
//IDA: int __usercall UndoPipedSession@<EAX>(tU8 **pPtr@<EAX>)
int UndoPipedSession(tU8 **pPtr);

// Offset: 17744
// Size: 0x54
//IDA: tU32 __usercall FindPrevFrameTime@<EAX>(tU8 *pPtr@<EAX>)
tU32 FindPrevFrameTime(tU8 *pPtr);

// Offset: 17828
// Size: 0x157
//IDA: void __usercall ScanBuffer(tU8 **pPtr@<EAX>, tPipe_chunk_type pType@<EDX>, tU32 pDefault_time@<EBX>, int (*pCall_back)(tPipe_chunk*, int, tU32)@<ECX>, int (*pTime_check)(tU32))
void ScanBuffer(tU8 **pPtr, tPipe_chunk_type pType, tU32 pDefault_time, int (*pCall_back)(tPipe_chunk*, int, tU32), int (*pTime_check)(tU32));

// Offset: 18172
// Size: 0xbf
//IDA: int __usercall CheckSound@<EAX>(tPipe_chunk *pChunk_ptr@<EAX>, int pChunk_count@<EDX>, tU32 pTime@<EBX>)
int CheckSound(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime);

// Offset: 18364
// Size: 0x58
//IDA: int __usercall SoundTimeout@<EAX>(tU32 pTime@<EAX>)
int SoundTimeout(tU32 pTime);

// Offset: 18452
// Size: 0x7e
//IDA: void __usercall ScanAndPlaySoundsToBe(tU8 *pPtr@<EAX>, tU32 pOldest_time@<EDX>, tU32 pYoungest_time@<EBX>)
void ScanAndPlaySoundsToBe(tU8 *pPtr, tU32 pOldest_time, tU32 pYoungest_time);

// Offset: 18580
// Size: 0x27b
//IDA: int __usercall CheckCar@<EAX>(tPipe_chunk *pChunk_ptr@<EAX>, int pChunk_count@<EDX>, tU32 pTime@<EBX>)
int CheckCar(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime);

// Offset: 19216
// Size: 0xed
//IDA: int __usercall CarTimeout@<EAX>(tU32 pTime@<EAX>)
int CarTimeout(tU32 pTime);

// Offset: 19456
// Size: 0x18d
//IDA: void __usercall ScanCarsPositions(tCar_spec *pCar@<EAX>, br_vector3 *pSource_pos@<EDX>, br_scalar pMax_distance_sqr, tU32 pOffset_time, tU32 pTime_period, br_vector3 *pCar_pos, tU32 *pTime_returned)
void ScanCarsPositions(tCar_spec *pCar, br_vector3 *pSource_pos, br_scalar pMax_distance_sqr, tU32 pOffset_time, tU32 pTime_period, br_vector3 *pCar_pos, tU32 *pTime_returned);

// Offset: 19856
// Size: 0xff
//IDA: int __usercall CheckIncident@<EAX>(tPipe_chunk *pChunk_ptr@<EAX>, int pChunk_count@<EDX>, tU32 pTime@<EBX>)
int CheckIncident(tPipe_chunk *pChunk_ptr, int pChunk_count, tU32 pTime);

// Offset: 20112
// Size: 0x253
//IDA: int __usercall GetNextIncident@<EAX>(tU32 pOffset_time@<EAX>, tIncident_type *pIncident_type@<EDX>, float *pSeverity@<EBX>, tIncident_info *pInfo@<ECX>, tU32 *pTime_away)
int GetNextIncident(tU32 pOffset_time, tIncident_type *pIncident_type, float *pSeverity, tIncident_info *pInfo, tU32 *pTime_away);

// Offset: 20708
// Size: 0x57
//IDA: tU32 __cdecl GetARStartTime()
tU32 GetARStartTime();

#endif
