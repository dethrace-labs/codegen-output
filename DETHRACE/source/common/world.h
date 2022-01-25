#ifndef _WORLD_H_
#define _WORLD_H_

#include "dr_types.h"
#include "br_types.h"

extern int gFunkotronics_array_size; // addr: 0001AD48
extern int gGroovidelics_array_size; // addr: 0001AD4C
extern int gSpec_vol_mode; // addr: 0001AD50
extern tFunkotronic_spec *gFunkotronics_array; // addr: 0001AD54
extern tGroovidelic_spec *gGroovidelics_array; // addr: 0001AD58
extern char *gFunk_type_names[5]; // addr: 0001AD5C
extern char *gFunk_anim_names[2]; // addr: 0001AD70
extern char *gTime_mode_names[2]; // addr: 0001AD78
extern char *gFunk_move_names[6]; // addr: 0001AD80
extern char *gFunk_nature_names[4]; // addr: 0001AD98
extern char *gGroove_nature_names[2]; // addr: 0001ADA8
extern char *gAxis_names[3]; // addr: 0001ADB0
extern char *gLollipop_names[3]; // addr: 0001ADBC
extern char *gGroove_path_names[2]; // addr: 0001ADC8
extern char *gGroove_object_names[4]; // addr: 0001ADD0
extern char *gDepth_effect_names[2]; // addr: 0001ADE0
extern br_actor *gGroove_by_proxy_actor; // addr: 0001ADE8
extern tRotate_mode gCurrent_rotate_mode; // addr: 0001ADEC
extern tScale_mode gCurrent_scale_mode; // addr: 0001ADF0
extern int gNumber_of_additional_models; // addr: 0001ADF4
extern tRoad_texturing_level gRoad_texturing_level; // addr: 0001ADF8
extern tWall_texturing_level gWall_texturing_level; // addr: 0001ADFC
extern tCar_texturing_level gCar_texturing_level; // addr: 0001AE00
extern int gRendering_accessories; // addr: 0001AE04
extern int gNumber_of_actors; // addr: 0001AE08
extern int gNumber_of_lights; // addr: 0001AE0C
extern br_actor *gActor_array[500]; // addr: 000401B0
extern float *gGroove_funk_bindings[960]; // addr: 00040980
extern br_actor *gDelete_list[500]; // addr: 00041880
extern br_actor *gLight_array[50]; // addr: 00042050
extern br_model *gAdditional_models[1000]; // addr: 00042118
extern br_actor *gSpec_vol_actors[100]; // addr: 000430B8
extern tPath_name gAdditional_actor_path; // addr: 00043248
extern tPath_name gAdditional_model_path; // addr: 00043348
extern tU32 gPrevious_groove_times[2]; // addr: 00043448
extern int gRace_file_version; // addr: 00043450
extern br_vector3 gActor_centre; // addr: 00043454
extern float gTemp; // addr: 00043460
extern br_actor *gLast_actor; // addr: 00043464
extern br_actor *gKnown_actor; // addr: 00043468
extern br_actor *gAdditional_actors; // addr: 0004346C
extern int gDelete_count; // addr: 00043470
extern br_scalar gNearest_distance; // addr: 00043474
extern br_actor *gNearest_actor; // addr: 00043478
extern br_actor *gStandard_lamp; // addr: 0004347C
extern br_scalar gSight_distance_squared; // addr: 00043480

// Offset: 0
// Size: 0x58
//IDA: float __cdecl MapSawToTriangle(float pNumber)
float MapSawToTriangle(float pNumber);

// Offset: 88
// Size: 0x3e
//IDA: void __cdecl SetSightDistance(br_scalar pYon)
void SetSightDistance(br_scalar pYon);

// Offset: 152
// Size: 0x79
//IDA: br_actor* __usercall FindActorInArray@<EAX>(char *pThe_name@<EAX>)
br_actor* FindActorInArray(char *pThe_name);

// Offset: 276
// Size: 0x79
//IDA: br_actor* __usercall FindLightInArray@<EAX>(char *pThe_name@<EAX>)
br_actor* FindLightInArray(char *pThe_name);

// Offset: 400
// Size: 0xdf
//IDA: br_actor* __usercall CloneActor@<EAX>(br_actor *pSource_actor@<EAX>)
br_actor* CloneActor(br_actor *pSource_actor);

// Offset: 624
// Size: 0xf7
//IDA: void __usercall InitialiseStorageSpace(tBrender_storage *pStorage_space@<EAX>, int pMax_pixelmaps@<EDX>, int pMax_shade_tables@<EBX>, int pMax_materials@<ECX>, int pMax_models)
void InitialiseStorageSpace(tBrender_storage *pStorage_space, int pMax_pixelmaps, int pMax_shade_tables, int pMax_materials, int pMax_models);

// Offset: 872
// Size: 0x6b
//IDA: void __usercall DisposeStorageSpace(tBrender_storage *pStorage_space@<EAX>)
void DisposeStorageSpace(tBrender_storage *pStorage_space);

// Offset: 980
// Size: 0x1cf
//IDA: void __usercall ClearOutStorageSpace(tBrender_storage *pStorage_space@<EAX>)
void ClearOutStorageSpace(tBrender_storage *pStorage_space);

// Offset: 1444
// Size: 0xe8
//IDA: tAdd_to_storage_result __usercall AddPixelmapToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_pixelmap **pThe_pm@<EDX>)
tAdd_to_storage_result AddPixelmapToStorage(tBrender_storage *pStorage_space, br_pixelmap **pThe_pm);

// Offset: 1676
// Size: 0xd3
//IDA: tAdd_to_storage_result __usercall AddShadeTableToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_pixelmap *pThe_st@<EDX>)
tAdd_to_storage_result AddShadeTableToStorage(tBrender_storage *pStorage_space, br_pixelmap *pThe_st);

// Offset: 1888
// Size: 0xea
//IDA: tAdd_to_storage_result __usercall AddMaterialToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_material *pThe_mat@<EDX>)
tAdd_to_storage_result AddMaterialToStorage(tBrender_storage *pStorage_space, br_material *pThe_mat);

// Offset: 2124
// Size: 0xe7
//IDA: tAdd_to_storage_result __usercall AddModelToStorage@<EAX>(tBrender_storage *pStorage_space@<EAX>, br_model *pThe_mod@<EDX>)
tAdd_to_storage_result AddModelToStorage(tBrender_storage *pStorage_space, br_model *pThe_mod);

// Offset: 2356
// Size: 0x1fb
//IDA: int __usercall LoadNPixelmaps@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNPixelmaps(tBrender_storage *pStorage_space, FILE *pF, int pCount);

// Offset: 2864
// Size: 0xc3
//IDA: br_pixelmap* __usercall LoadSinglePixelmap@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_pixelmap* LoadSinglePixelmap(tBrender_storage *pStorage_space, char *pName);

// Offset: 3060
// Size: 0xc3
//IDA: br_material* __usercall LoadSingleMaterial@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_material* LoadSingleMaterial(tBrender_storage *pStorage_space, char *pName);

// Offset: 3256
// Size: 0x18a
//IDA: int __usercall LoadNShadeTables@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNShadeTables(tBrender_storage *pStorage_space, FILE *pF, int pCount);

// Offset: 3652
// Size: 0xc3
//IDA: br_pixelmap* __usercall LoadSingleShadeTable@<EAX>(tBrender_storage *pStorage_space@<EAX>, char *pName@<EDX>)
br_pixelmap* LoadSingleShadeTable(tBrender_storage *pStorage_space, char *pName);

// Offset: 3848
// Size: 0x19e
//IDA: int __usercall LoadNMaterials@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNMaterials(tBrender_storage *pStorage_space, FILE *pF, int pCount);

// Offset: 4264
// Size: 0x1c1
//IDA: int __usercall LoadNModels@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNModels(tBrender_storage *pStorage_space, FILE *pF, int pCount);

// Offset: 4716
// Size: 0x67
//IDA: void __usercall DodgyModelUpdate(br_model *pM@<EAX>)
void DodgyModelUpdate(br_model *pM);

// Offset: 4820
// Size: 0xc5
//IDA: br_material* __usercall SuffixedMaterial@<EAX>(br_material *pOld@<EAX>, char *pSuffix@<EDX>)
br_material* SuffixedMaterial(br_material *pOld, char *pSuffix);

// Offset: 5020
// Size: 0x290
//IDA: int __usercall FaceIsRoad@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
int FaceIsRoad(br_model *pModel, tU16 pFace);

// Offset: 5676
// Size: 0xa1
//IDA: br_material* __usercall RoadPerspToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* RoadPerspToUntex(br_model *pModel, tU16 pFace);

// Offset: 5840
// Size: 0xa9
//IDA: br_material* __usercall WallPerspToLinear@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallPerspToLinear(br_model *pModel, tU16 pFace);

// Offset: 6012
// Size: 0xbc
//IDA: br_material* __usercall WallPerspToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallPerspToUntex(br_model *pModel, tU16 pFace);

// Offset: 6200
// Size: 0x104
//IDA: void __usercall ProcessModelFaceMaterials2(br_model *pModel@<EAX>, tPMFM2CB pCallback@<EDX>)
void ProcessModelFaceMaterials2(br_model *pModel, tPMFM2CB pCallback);

// Offset: 6460
// Size: 0xad
//IDA: void __usercall ProcessModelFaceMaterials(br_model *pModel@<EAX>, tPMFMCB pCallback@<EDX>)
void ProcessModelFaceMaterials(br_model *pModel, tPMFMCB pCallback);

// Offset: 6636
// Size: 0x22a
//IDA: int __usercall LoadNTrackModels@<EAX>(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>, int pCount@<EBX>)
int LoadNTrackModels(tBrender_storage *pStorage_space, FILE *pF, int pCount);

// Offset: 7192
// Size: 0x6b
//IDA: void __usercall LoadSomePixelmaps(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomePixelmaps(tBrender_storage *pStorage_space, FILE *pF);

// Offset: 7300
// Size: 0x6b
//IDA: void __usercall LoadSomeShadeTables(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeShadeTables(tBrender_storage *pStorage_space, FILE *pF);

// Offset: 7408
// Size: 0x6b
//IDA: void __usercall LoadSomeMaterials(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeMaterials(tBrender_storage *pStorage_space, FILE *pF);

// Offset: 7516
// Size: 0x6b
//IDA: void __usercall LoadSomeModels(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeModels(tBrender_storage *pStorage_space, FILE *pF);

// Offset: 7624
// Size: 0x6b
//IDA: void __usercall LoadSomeTrackModels(tBrender_storage *pStorage_space@<EAX>, FILE *pF@<EDX>)
void LoadSomeTrackModels(tBrender_storage *pStorage_space, FILE *pF);

// Offset: 7732
// Size: 0x57
//IDA: void __usercall AddFunkGrooveBinding(int pSlot_number@<EAX>, float *pPeriod_address@<EDX>)
void AddFunkGrooveBinding(int pSlot_number, float *pPeriod_address);

// Offset: 7820
// Size: 0x51
//IDA: void __usercall ControlBoundFunkGroove(int pSlot_number@<EAX>, float pValue)
void ControlBoundFunkGroove(int pSlot_number, float pValue);

// Offset: 7904
// Size: 0x82
//IDA: float __usercall ControlBoundFunkGroovePlus@<ST0>(int pSlot_number@<EAX>, float pValue)
float ControlBoundFunkGroovePlus(int pSlot_number, float pValue);

// Offset: 8036
// Size: 0x7c
//IDA: void __usercall ShiftBoundGrooveFunks(char *pStart@<EAX>, char *pEnd@<EDX>, int pDelta@<EBX>)
void ShiftBoundGrooveFunks(char *pStart, char *pEnd, int pDelta);

// Offset: 8160
// Size: 0x169
//IDA: tFunkotronic_spec* __cdecl AddNewFunkotronic()
tFunkotronic_spec* AddNewFunkotronic();

// Offset: 8524
// Size: 0x105
//IDA: void __usercall DisposeFunkotronics(int pOwner@<EAX>)
void DisposeFunkotronics(int pOwner);

// Offset: 8788
// Size: 0x4c
//IDA: void __usercall AddProximityVertex(br_vector3 *pV@<EAX>, tFunkotronic_spec *pThe_funk@<EDX>)
void AddProximityVertex(br_vector3 *pV, tFunkotronic_spec *pThe_funk);

// Offset: 8864
// Size: 0x41
//IDA: void __cdecl AddProximityVertexXYZ(br_scalar pX, br_scalar pY, br_scalar pZ, tFunkotronic_spec *pThe_funk)
void AddProximityVertexXYZ(br_scalar pX, br_scalar pY, br_scalar pZ, tFunkotronic_spec *pThe_funk);

// Offset: 8932
// Size: 0xa7
//IDA: br_uint_32 __usercall CalcProximities@<EAX>(br_actor *pActor@<EAX>, br_material *pMat@<EDX>, tFunkotronic_spec *pThe_funk@<EBX>)
br_uint_32 CalcProximities(br_actor *pActor, br_material *pMat, tFunkotronic_spec *pThe_funk);

// Offset: 9100
// Size: 0x226
//IDA: br_uint_32 __usercall AddProximities@<EAX>(br_actor *pActor@<EAX>, br_material *pMat@<EDX>, tFunkotronic_spec *pThe_funk@<EBX>)
br_uint_32 AddProximities(br_actor *pActor, br_material *pMat, tFunkotronic_spec *pThe_funk);

// Offset: 9652
// Size: 0x98
//IDA: void __usercall Adjust2FloatsForExceptions(float *pVictim1@<EAX>, float *pVictim2@<EDX>, br_pixelmap *pCulprit@<EBX>)
void Adjust2FloatsForExceptions(float *pVictim1, float *pVictim2, br_pixelmap *pCulprit);

// Offset: 9804
// Size: 0xcb8
//IDA: void __usercall AddFunkotronics(FILE *pF@<EAX>, int pOwner@<EDX>, int pRef_offset@<EBX>)
void AddFunkotronics(FILE *pF, int pOwner, int pRef_offset);

// Offset: 13060
// Size: 0x76
//IDA: void __usercall DisposeGroovidelics(int pOwner@<EAX>)
void DisposeGroovidelics(int pOwner);

// Offset: 13180
// Size: 0x15d
//IDA: tGroovidelic_spec* __cdecl AddNewGroovidelic()
tGroovidelic_spec* AddNewGroovidelic();

// Offset: 13532
// Size: 0xa36
//IDA: void __usercall AddGroovidelics(FILE *pF@<EAX>, int pOwner@<EDX>, br_actor *pParent_actor@<EBX>, int pRef_offset@<ECX>, int pAllowed_to_be_absent)
void AddGroovidelics(FILE *pF, int pOwner, br_actor *pParent_actor, int pRef_offset, int pAllowed_to_be_absent);

// Offset: 16148
// Size: 0xa1
//IDA: void __usercall KillGroovadelic(int pOwner@<EAX>)
void KillGroovadelic(int pOwner);

// Offset: 16312
// Size: 0xba
//IDA: void __usercall KillFunkotronic(int pOwner@<EAX>)
void KillFunkotronic(int pOwner);

// Offset: 16500
// Size: 0xec
//IDA: br_uint_32 __usercall DeleteBastards@<EAX>(br_actor *pActor@<EAX>, br_matrix34 *pMatrix@<EDX>, void *pArg@<EBX>)
br_uint_32 DeleteBastards(br_actor *pActor, br_matrix34 *pMatrix, void *pArg);

// Offset: 16736
// Size: 0x6e
//IDA: void __cdecl DeleteAnyZeroBastards()
void DeleteAnyZeroBastards();

// Offset: 16848
// Size: 0xdb
//IDA: br_uint_32 __usercall ApplyTransToModels@<EAX>(br_actor *pActor@<EAX>, br_matrix34 *pMatrix@<EDX>, void *pArg@<EBX>)
br_uint_32 ApplyTransToModels(br_actor *pActor, br_matrix34 *pMatrix, void *pArg);

// Offset: 17068
// Size: 0x78
//IDA: int __usercall FindSpecVolIndex@<EAX>(br_actor *pActor@<EAX>)
int FindSpecVolIndex(br_actor *pActor);

// Offset: 17188
// Size: 0xf4
//IDA: void __usercall MungeMaterial(br_matrix34 *pMat@<EAX>, br_material *pMat_1@<EDX>, br_material *pMat_2@<EBX>, int pAxis_0@<ECX>, int pAxis_1)
void MungeMaterial(br_matrix34 *pMat, br_material *pMat_1, br_material *pMat_2, int pAxis_0, int pAxis_1);

// Offset: 17432
// Size: 0xa6
//IDA: void __usercall SetSpecVolMatSize(br_actor *pActor@<EAX>)
void SetSpecVolMatSize(br_actor *pActor);

// Offset: 17600
// Size: 0x73
//IDA: void __usercall FindInverseAndWorldBox(tSpecial_volume *pSpec@<EAX>)
void FindInverseAndWorldBox(tSpecial_volume *pSpec);

// Offset: 17716
// Size: 0x6d
//IDA: void __cdecl UpdateSpecVol()
void UpdateSpecVol();

// Offset: 17828
// Size: 0x342
//IDA: void __cdecl SaveSpecialVolumes()
void SaveSpecialVolumes();

// Offset: 18664
// Size: 0x89
//IDA: void __cdecl SaveAdditionalStuff()
void SaveAdditionalStuff();

// Offset: 18804
// Size: 0x6e
//IDA: br_uint_32 __cdecl ProcessMaterials(br_actor *pActor, tPMFM2CB pCallback)
br_uint_32 ProcessMaterials(br_actor *pActor, tPMFM2CB pCallback);

// Offset: 18916
// Size: 0x7b
//IDA: br_uint_32 __cdecl ProcessFaceMaterials2(br_actor *pActor, tPMFM2CB pCallback)
br_uint_32 ProcessFaceMaterials2(br_actor *pActor, tPMFM2CB pCallback);

// Offset: 19040
// Size: 0x5b
//IDA: void __usercall ChangePerspToSubdivCB(br_material *pMaterial@<EAX>)
void ChangePerspToSubdivCB(br_material *pMaterial);

// Offset: 19132
// Size: 0x36
//IDA: void __cdecl ChangePerspToSubdiv()
void ChangePerspToSubdiv();

// Offset: 19188
// Size: 0x4e
//IDA: void __usercall ChangeSubdivToPerspCB(br_material *pMaterial@<EAX>)
void ChangeSubdivToPerspCB(br_material *pMaterial);

// Offset: 19268
// Size: 0x36
//IDA: void __cdecl ChangeSubdivToPersp()
void ChangeSubdivToPersp();

// Offset: 19324
// Size: 0x7b
//IDA: br_uint_32 __cdecl ProcessFaceMaterials(br_actor *pActor, tPMFMCB pCallback)
br_uint_32 ProcessFaceMaterials(br_actor *pActor, tPMFMCB pCallback);

// Offset: 19448
// Size: 0xec
//IDA: int __usercall DRPixelmapHasZeros@<EAX>(br_pixelmap *pm@<EAX>)
int DRPixelmapHasZeros(br_pixelmap *pm);

// Offset: 19684
// Size: 0x7d
//IDA: int __usercall StorageContainsPixelmap@<EAX>(tBrender_storage *pStorage@<EAX>, br_pixelmap *pMap@<EDX>)
int StorageContainsPixelmap(tBrender_storage *pStorage, br_pixelmap *pMap);

// Offset: 19812
// Size: 0x10a
//IDA: void __usercall HideStoredOpaqueTextures(tBrender_storage *pStorage@<EAX>)
void HideStoredOpaqueTextures(tBrender_storage *pStorage);

// Offset: 20080
// Size: 0xe0
//IDA: void __usercall RevealStoredTransparentTextures(tBrender_storage *pStorage@<EAX>)
void RevealStoredTransparentTextures(tBrender_storage *pStorage);

// Offset: 20304
// Size: 0xec
//IDA: void __usercall HideStoredTextures(tBrender_storage *pStorage@<EAX>)
void HideStoredTextures(tBrender_storage *pStorage);

// Offset: 20540
// Size: 0xc5
//IDA: void __usercall RevealStoredTextures(tBrender_storage *pStorage@<EAX>)
void RevealStoredTextures(tBrender_storage *pStorage);

// Offset: 20740
// Size: 0x79
//IDA: void __usercall SetCarStorageTexturingLevel(tBrender_storage *pStorage@<EAX>, tCar_texturing_level pNew@<EDX>, tCar_texturing_level pOld@<EBX>)
void SetCarStorageTexturingLevel(tBrender_storage *pStorage, tCar_texturing_level pNew, tCar_texturing_level pOld);

// Offset: 20864
// Size: 0x2d
//IDA: tCar_texturing_level __cdecl GetCarTexturingLevel()
tCar_texturing_level GetCarTexturingLevel();

// Offset: 20912
// Size: 0x8b
//IDA: void __usercall SetCarTexturingLevel(tCar_texturing_level pLevel@<EAX>)
void SetCarTexturingLevel(tCar_texturing_level pLevel);

// Offset: 21052
// Size: 0x8a
//IDA: int __usercall HasThisSuffix@<EAX>(char *pIdent@<EAX>, char *pSuffix@<EDX>)
int HasThisSuffix(char *pIdent, char *pSuffix);

// Offset: 21192
// Size: 0x91
//IDA: br_material* __usercall UnsuffixedMaterial@<EAX>(char *pOld_ident@<EAX>, char *pSuffix@<EDX>)
br_material* UnsuffixedMaterial(char *pOld_ident, char *pSuffix);

// Offset: 21340
// Size: 0x76
//IDA: br_material* __usercall RoadUntexToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* RoadUntexToPersp(br_model *pModel, tU16 pFace);

// Offset: 21460
// Size: 0xf0
//IDA: br_material* __usercall WallLinearToUntex@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallLinearToUntex(br_model *pModel, tU16 pFace);

// Offset: 21700
// Size: 0xcb
//IDA: br_material* __usercall WallUntexToLinear@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallUntexToLinear(br_model *pModel, tU16 pFace);

// Offset: 21904
// Size: 0x99
//IDA: br_material* __usercall WallUntexToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallUntexToPersp(br_model *pModel, tU16 pFace);

// Offset: 22060
// Size: 0x70
//IDA: br_material* __usercall WallLinearToPersp@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* WallLinearToPersp(br_model *pModel, tU16 pFace);

// Offset: 22172
// Size: 0x2d
//IDA: tRoad_texturing_level __cdecl GetRoadTexturingLevel()
tRoad_texturing_level GetRoadTexturingLevel();

// Offset: 22220
// Size: 0x2d
//IDA: void __usercall SetRoadTexturingLevel(tRoad_texturing_level pLevel@<EAX>)
void SetRoadTexturingLevel(tRoad_texturing_level pLevel);

// Offset: 22268
// Size: 0x56
//IDA: void __usercall ReallySetRoadTexturingLevel(tRoad_texturing_level pLevel@<EAX>)
void ReallySetRoadTexturingLevel(tRoad_texturing_level pLevel);

// Offset: 22356
// Size: 0x2d
//IDA: tWall_texturing_level __cdecl GetWallTexturingLevel()
tWall_texturing_level GetWallTexturingLevel();

// Offset: 22404
// Size: 0x2d
//IDA: void __usercall SetWallTexturingLevel(tWall_texturing_level pLevel@<EAX>)
void SetWallTexturingLevel(tWall_texturing_level pLevel);

// Offset: 22452
// Size: 0x52
//IDA: void __usercall ReallySetWallTexturingLevel(tWall_texturing_level pLevel@<EAX>)
void ReallySetWallTexturingLevel(tWall_texturing_level pLevel);

// Offset: 22536
// Size: 0x129
//IDA: br_material* __usercall DisposeSuffixedMaterials@<EAX>(br_model *pModel@<EAX>, tU16 pFace@<EDX>)
br_material* DisposeSuffixedMaterials(br_model *pModel, tU16 pFace);

// Offset: 22836
// Size: 0xa1
//IDA: void __cdecl DisposeTexturingMaterials()
void DisposeTexturingMaterials();

// Offset: 23000
// Size: 0x49
//IDA: br_uint_32 __cdecl SetAccessoryRenderingCB(br_actor *pActor, void *pFlag)
br_uint_32 SetAccessoryRenderingCB(br_actor *pActor, void *pFlag);

// Offset: 23076
// Size: 0x64
//IDA: void __usercall SetAccessoryRendering(int pOn@<EAX>)
void SetAccessoryRendering(int pOn);

// Offset: 23176
// Size: 0x2d
//IDA: int __cdecl GetAccessoryRendering()
int GetAccessoryRendering();

// Offset: 23224
// Size: 0x2d
//IDA: void __usercall SetCarSimplificationLevel(int pLevel@<EAX>)
void SetCarSimplificationLevel(int pLevel);

// Offset: 23272
// Size: 0x2d
//IDA: int __cdecl GetCarSimplificationLevel()
int GetCarSimplificationLevel();

// Offset: 23320
// Size: 0x107
//IDA: void __usercall ParseSpecialVolume(FILE *pF@<EAX>, tSpecial_volume *pSpec@<EDX>, char *pScreen_name_str@<EBX>)
void ParseSpecialVolume(FILE *pF, tSpecial_volume *pSpec, char *pScreen_name_str);

// Offset: 23584
// Size: 0x38
//IDA: void __usercall AddExceptionToList(tException_list *pDst@<EAX>, tException_list pNew@<EDX>)
void AddExceptionToList(tException_list *pDst, tException_list pNew);

// Offset: 23640
// Size: 0x20f
//IDA: void __usercall LoadExceptionsFile(char *pName@<EAX>)
void LoadExceptionsFile(char *pName);

// Offset: 24168
// Size: 0x5b
//IDA: void __usercall LoadExceptionsFileForTrack(char *pTrack_file_name@<EAX>)
void LoadExceptionsFileForTrack(char *pTrack_file_name);

// Offset: 24260
// Size: 0x68
//IDA: void __cdecl FreeExceptions()
void FreeExceptions();

// Offset: 24364
// Size: 0x1c8e
//IDA: void __usercall LoadTrack(char *pFile_name@<EAX>, tTrack_spec *pTrack_spec@<EDX>, tRace_info *pRace_info@<EBX>)
void LoadTrack(char *pFile_name, tTrack_spec *pTrack_spec, tRace_info *pRace_info);

// Offset: 31676
// Size: 0x52
//IDA: br_uint_32 __cdecl RemoveBounds(br_actor *pActor, void *pArg)
br_uint_32 RemoveBounds(br_actor *pActor, void *pArg);

// Offset: 31760
// Size: 0x34
//IDA: void __usercall RemoveBoundsStructures(br_actor *pActor@<EAX>)
void RemoveBoundsStructures(br_actor *pActor);

// Offset: 31812
// Size: 0x1b7
//IDA: void __usercall FreeTrack(tTrack_spec *pTrack_spec@<EAX>)
void FreeTrack(tTrack_spec *pTrack_spec);

// Offset: 32252
// Size: 0x5e
//IDA: void __usercall ProcessTrack(br_actor *pWorld@<EAX>, tTrack_spec *pTrack_spec@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world_transform@<ECX>, int pRender_blends)
void ProcessTrack(br_actor *pWorld, tTrack_spec *pTrack_spec, br_actor *pCamera, br_matrix34 *pCamera_to_world_transform, int pRender_blends);

// Offset: 32348
// Size: 0x47
//IDA: br_scalar __cdecl NormaliseDegreeAngle(br_scalar pAngle)
br_scalar NormaliseDegreeAngle(br_scalar pAngle);

// Offset: 32420
// Size: 0x249d
//IDA: void __cdecl FunkThoseTronics()
void FunkThoseTronics();

// Offset: 41796
// Size: 0x323
//IDA: void __usercall LollipopizeActor(br_actor *pSubject_actor@<EAX>, br_matrix34 *ref_to_world@<EDX>, tLollipop_mode pWhich_axis@<EBX>)
void LollipopizeActor(br_actor *pSubject_actor, br_matrix34 *ref_to_world, tLollipop_mode pWhich_axis);

// Offset: 42600
// Size: 0x8c
//IDA: void __usercall CalcActorGlobalPos(br_vector3 *pResult@<EAX>, br_actor *pActor@<EDX>)
void CalcActorGlobalPos(br_vector3 *pResult, br_actor *pActor);

// Offset: 42740
// Size: 0x140
//IDA: int __usercall PointOutOfSight@<EAX>(br_vector3 *pPoint@<EAX>, br_scalar pMax_distance)
int PointOutOfSight(br_vector3 *pPoint, br_scalar pMax_distance);

// Offset: 43060
// Size: 0xe70
//IDA: void __usercall PathGrooveBastard(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pMat@<EBX>, int pInterrupt_it@<ECX>)
void PathGrooveBastard(tGroovidelic_spec *pGroove, tU32 pTime, br_matrix34 *pMat, int pInterrupt_it);

// Offset: 46756
// Size: 0x24ca
//IDA: void __usercall ObjectGrooveBastard(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, br_matrix34 *pMat@<EBX>, int pInterrupt_it@<ECX>)
void ObjectGrooveBastard(tGroovidelic_spec *pGroove, tU32 pTime, br_matrix34 *pMat, int pInterrupt_it);

// Offset: 56176
// Size: 0x263
//IDA: void __usercall GrooveThisDelic(tGroovidelic_spec *pGroove@<EAX>, tU32 pTime@<EDX>, int pInterrupt_it@<EBX>)
void GrooveThisDelic(tGroovidelic_spec *pGroove, tU32 pTime, int pInterrupt_it);

// Offset: 56788
// Size: 0xbf
//IDA: void __cdecl GrooveThoseDelics()
void GrooveThoseDelics();

// Offset: 56980
// Size: 0x89
//IDA: void __usercall StopGroovidelic(br_actor *pActor@<EAX>)
void StopGroovidelic(br_actor *pActor);

// Offset: 57120
// Size: 0x75
//IDA: void __usercall SetGrooveInterrupt(int pGroove_index@<EAX>, br_matrix34 *pMatrix@<EDX>, int pPath_interrupt@<EBX>, int pObject_interrupt@<ECX>, float pPath_resumption, float pObject_resumption)
void SetGrooveInterrupt(int pGroove_index, br_matrix34 *pMatrix, int pPath_interrupt, int pObject_interrupt, float pPath_resumption, float pObject_resumption);

// Offset: 57240
// Size: 0x5c
//IDA: void __cdecl ResetGrooveFlags()
void ResetGrooveFlags();

// Offset: 57332
// Size: 0x2d
//IDA: tSpecial_volume* __cdecl GetDefaultSpecialVolumeForWater()
tSpecial_volume* GetDefaultSpecialVolumeForWater();

// Offset: 57380
// Size: 0x156
//IDA: tSpecial_volume* __usercall FindSpecialVolume@<EAX>(br_vector3 *pP@<EAX>, tSpecial_volume *pLast_vol@<EDX>)
tSpecial_volume* FindSpecialVolume(br_vector3 *pP, tSpecial_volume *pLast_vol);

// Offset: 57724
// Size: 0x30
//IDA: void __cdecl SaveAdditionalActors()
void SaveAdditionalActors();

// Offset: 57772
// Size: 0x59
//IDA: br_scalar __usercall DistanceFromFace@<ST0>(br_vector3 *pPos@<EAX>, tFace_ref *pFace@<EDX>)
br_scalar DistanceFromFace(br_vector3 *pPos, tFace_ref *pFace);

// Offset: 57864
// Size: 0xa6
//IDA: br_uint_32 __cdecl CalcHighestID(br_actor *pActor, int *pHighest)
br_uint_32 CalcHighestID(br_actor *pActor, int *pHighest);

// Offset: 58032
// Size: 0xb6
//IDA: br_uint_32 __cdecl SetID(br_actor *pActor, void *pArg)
br_uint_32 SetID(br_actor *pActor, void *pArg);

// Offset: 58216
// Size: 0x64
//IDA: void __usercall UniquificateActorsName(br_actor *pUniverse_actor@<EAX>, br_actor *pActor@<EDX>)
void UniquificateActorsName(br_actor *pUniverse_actor, br_actor *pActor);

// Offset: 58316
// Size: 0x6b
//IDA: void __usercall AccessoryHeadup(br_actor *pActor@<EAX>, char *pPrefix@<EDX>)
void AccessoryHeadup(br_actor *pActor, char *pPrefix);

// Offset: 58424
// Size: 0x84
//IDA: br_uint_32 __cdecl CalcHighestNonAmID(br_actor *pActor, int *pHighest)
br_uint_32 CalcHighestNonAmID(br_actor *pActor, int *pHighest);

// Offset: 58556
// Size: 0x1bb
//IDA: br_uint_32 __cdecl SetIDAndDupModel(br_actor *pActor, void *pArg)
br_uint_32 SetIDAndDupModel(br_actor *pActor, void *pArg);

// Offset: 59000
// Size: 0x64
//IDA: void __usercall DuplicateIfNotAmpersand(br_actor *pActor@<EAX>)
void DuplicateIfNotAmpersand(br_actor *pActor);

// Offset: 59100
// Size: 0x4de
//IDA: void __usercall DropActor(int pIndex@<EAX>)
void DropActor(int pIndex);

// Offset: 60348
// Size: 0x29
//IDA: void __cdecl DropActor0()
void DropActor0();

// Offset: 60392
// Size: 0x2c
//IDA: void __cdecl DropActor1()
void DropActor1();

// Offset: 60436
// Size: 0x2c
//IDA: void __cdecl DropActor2()
void DropActor2();

// Offset: 60480
// Size: 0x2c
//IDA: void __cdecl DropActor3()
void DropActor3();

// Offset: 60524
// Size: 0x2c
//IDA: void __cdecl DropActor4()
void DropActor4();

// Offset: 60568
// Size: 0x2c
//IDA: void __cdecl DropActor5()
void DropActor5();

// Offset: 60612
// Size: 0x2c
//IDA: void __cdecl DropActor6()
void DropActor6();

// Offset: 60656
// Size: 0x2c
//IDA: void __cdecl DropActor7()
void DropActor7();

// Offset: 60700
// Size: 0x2c
//IDA: void __cdecl DropActor8()
void DropActor8();

// Offset: 60744
// Size: 0x2c
//IDA: void __cdecl DropActor9()
void DropActor9();

// Offset: 60788
// Size: 0x111
//IDA: br_uint_32 __cdecl IdentifyAccCB(br_actor *pActor, void *pArg)
br_uint_32 IdentifyAccCB(br_actor *pActor, void *pArg);

// Offset: 61064
// Size: 0x69
//IDA: void __cdecl IdentifyAcc()
void IdentifyAcc();

// Offset: 61172
// Size: 0x6c
//IDA: br_uint_32 __cdecl DelGrooveRef(br_actor *pActor, void *pArg)
br_uint_32 DelGrooveRef(br_actor *pActor, void *pArg);

// Offset: 61280
// Size: 0xb1
//IDA: br_uint_32 __cdecl DelReferencedModels(br_actor *pActor, void *pArg)
br_uint_32 DelReferencedModels(br_actor *pActor, void *pArg);

// Offset: 61460
// Size: 0x87
//IDA: void __cdecl DeleteAcc()
void DeleteAcc();

// Offset: 61596
// Size: 0xaa
//IDA: br_uint_32 __cdecl OffsetModel(br_actor *pActor, void *pArg)
br_uint_32 OffsetModel(br_actor *pActor, void *pArg);

// Offset: 61768
// Size: 0x36
//IDA: void __usercall OffsetActor(br_actor *pActor@<EAX>, br_vector3 *pOffset@<EDX>)
void OffsetActor(br_actor *pActor, br_vector3 *pOffset);

// Offset: 61824
// Size: 0x11e
//IDA: void __usercall CentreActor(br_actor *pActor@<EAX>, br_vector3 *pOffset@<EDX>)
void CentreActor(br_actor *pActor, br_vector3 *pOffset);

// Offset: 62112
// Size: 0x9c
//IDA: void __cdecl SnapAccToVertical()
void SnapAccToVertical();

// Offset: 62268
// Size: 0x118
//IDA: void __usercall RotateAccessory(br_angle pAngle@<EAX>)
void RotateAccessory(br_angle pAngle);

// Offset: 62548
// Size: 0x179
//IDA: void __cdecl ScaleAccessory(float pScaling_factor)
void ScaleAccessory(float pScaling_factor);

// Offset: 62928
// Size: 0x6e
//IDA: void __cdecl MoveAccessory(br_scalar pX_shift, br_scalar pY_shift, br_scalar pZ_shift)
void MoveAccessory(br_scalar pX_shift, br_scalar pY_shift, br_scalar pZ_shift);

// Offset: 63040
// Size: 0x2c
//IDA: void __cdecl RotateAccL()
void RotateAccL();

// Offset: 63084
// Size: 0x2c
//IDA: void __cdecl RotateAccL2()
void RotateAccL2();

// Offset: 63128
// Size: 0x2c
//IDA: void __cdecl RotateAccL3()
void RotateAccL3();

// Offset: 63172
// Size: 0x2c
//IDA: void __cdecl RotateAccL4()
void RotateAccL4();

// Offset: 63216
// Size: 0x2c
//IDA: void __cdecl RotateAccR()
void RotateAccR();

// Offset: 63260
// Size: 0x2c
//IDA: void __cdecl RotateAccR2()
void RotateAccR2();

// Offset: 63304
// Size: 0x2c
//IDA: void __cdecl RotateAccR3()
void RotateAccR3();

// Offset: 63348
// Size: 0x2c
//IDA: void __cdecl RotateAccR4()
void RotateAccR4();

// Offset: 63392
// Size: 0xb5
//IDA: void __cdecl CycleAccRotate()
void CycleAccRotate();

// Offset: 63576
// Size: 0xe3
//IDA: void __cdecl CycleAccScale()
void CycleAccScale();

// Offset: 63804
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp2()
void ScaleAccUp2();

// Offset: 63848
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp3()
void ScaleAccUp3();

// Offset: 63892
// Size: 0x2c
//IDA: void __cdecl ScaleAccUp4()
void ScaleAccUp4();

// Offset: 63936
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown2()
void ScaleAccDown2();

// Offset: 63980
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown3()
void ScaleAccDown3();

// Offset: 64024
// Size: 0x2c
//IDA: void __cdecl ScaleAccDown4()
void ScaleAccDown4();

// Offset: 64068
// Size: 0x30
//IDA: void __cdecl MoveXAccL()
void MoveXAccL();

// Offset: 64116
// Size: 0x30
//IDA: void __cdecl MoveXAccL2()
void MoveXAccL2();

// Offset: 64164
// Size: 0x30
//IDA: void __cdecl MoveXAccL3()
void MoveXAccL3();

// Offset: 64212
// Size: 0x30
//IDA: void __cdecl MoveXAccL4()
void MoveXAccL4();

// Offset: 64260
// Size: 0x30
//IDA: void __cdecl MoveXAccR()
void MoveXAccR();

// Offset: 64308
// Size: 0x30
//IDA: void __cdecl MoveXAccR2()
void MoveXAccR2();

// Offset: 64356
// Size: 0x30
//IDA: void __cdecl MoveXAccR3()
void MoveXAccR3();

// Offset: 64404
// Size: 0x30
//IDA: void __cdecl MoveXAccR4()
void MoveXAccR4();

// Offset: 64452
// Size: 0x30
//IDA: void __cdecl MoveYAccL()
void MoveYAccL();

// Offset: 64500
// Size: 0x30
//IDA: void __cdecl MoveYAccL2()
void MoveYAccL2();

// Offset: 64548
// Size: 0x30
//IDA: void __cdecl MoveYAccL3()
void MoveYAccL3();

// Offset: 64596
// Size: 0x30
//IDA: void __cdecl MoveYAccL4()
void MoveYAccL4();

// Offset: 64644
// Size: 0x30
//IDA: void __cdecl MoveYAccR()
void MoveYAccR();

// Offset: 64692
// Size: 0x30
//IDA: void __cdecl MoveYAccR2()
void MoveYAccR2();

// Offset: 64740
// Size: 0x30
//IDA: void __cdecl MoveYAccR3()
void MoveYAccR3();

// Offset: 64788
// Size: 0x30
//IDA: void __cdecl MoveYAccR4()
void MoveYAccR4();

// Offset: 64836
// Size: 0x30
//IDA: void __cdecl MoveZAccL()
void MoveZAccL();

// Offset: 64884
// Size: 0x30
//IDA: void __cdecl MoveZAccL2()
void MoveZAccL2();

// Offset: 64932
// Size: 0x30
//IDA: void __cdecl MoveZAccL3()
void MoveZAccL3();

// Offset: 64980
// Size: 0x30
//IDA: void __cdecl MoveZAccL4()
void MoveZAccL4();

// Offset: 65028
// Size: 0x30
//IDA: void __cdecl MoveZAccR()
void MoveZAccR();

// Offset: 65076
// Size: 0x30
//IDA: void __cdecl MoveZAccR2()
void MoveZAccR2();

// Offset: 65124
// Size: 0x30
//IDA: void __cdecl MoveZAccR3()
void MoveZAccR3();

// Offset: 65172
// Size: 0x30
//IDA: void __cdecl MoveZAccR4()
void MoveZAccR4();

// Offset: 65220
// Size: 0x36
//IDA: br_material* __cdecl GetInternalMat()
br_material* GetInternalMat();

// Offset: 65276
// Size: 0x36
//IDA: br_material* __cdecl GetExternalMat()
br_material* GetExternalMat();

// Offset: 65332
// Size: 0x865
//IDA: void __usercall BuildSpecVolModel(tSpecial_volume *pSpec@<EAX>, int pIndex@<EDX>, br_material *pInt_mat@<EBX>, br_material *pExt_mat@<ECX>)
void BuildSpecVolModel(tSpecial_volume *pSpec, int pIndex, br_material *pInt_mat, br_material *pExt_mat);

// Offset: 67484
// Size: 0x1ab
//IDA: void __usercall DropSpecVol(int pIndex@<EAX>)
void DropSpecVol(int pIndex);

// Offset: 67912
// Size: 0x22
//IDA: void __cdecl DropSpecVol0()
void DropSpecVol0();

// Offset: 67948
// Size: 0x2c
//IDA: void __cdecl DropSpecVol1()
void DropSpecVol1();

// Offset: 67992
// Size: 0x2c
//IDA: void __cdecl DropSpecVol2()
void DropSpecVol2();

// Offset: 68036
// Size: 0x2c
//IDA: void __cdecl DropSpecVol3()
void DropSpecVol3();

// Offset: 68080
// Size: 0x2c
//IDA: void __cdecl DropSpecVol4()
void DropSpecVol4();

// Offset: 68124
// Size: 0x2c
//IDA: void __cdecl DropSpecVol5()
void DropSpecVol5();

// Offset: 68168
// Size: 0x2c
//IDA: void __cdecl DropSpecVol6()
void DropSpecVol6();

// Offset: 68212
// Size: 0x2c
//IDA: void __cdecl DropSpecVol7()
void DropSpecVol7();

// Offset: 68256
// Size: 0x2c
//IDA: void __cdecl DropSpecVol8()
void DropSpecVol8();

// Offset: 68300
// Size: 0x2c
//IDA: void __cdecl DropSpecVol9()
void DropSpecVol9();

// Offset: 68344
// Size: 0x158
//IDA: void __cdecl IdentifySpecVol()
void IdentifySpecVol();

// Offset: 68688
// Size: 0x15d
//IDA: void __usercall DelSpecVolumeGraph(int pIndex@<EAX>)
void DelSpecVolumeGraph(int pIndex);

// Offset: 69040
// Size: 0xfa
//IDA: void __cdecl DeleteSpecVol()
void DeleteSpecVol();

// Offset: 69292
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL()
void RotateSpecVolL();

// Offset: 69332
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL2()
void RotateSpecVolL2();

// Offset: 69372
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL3()
void RotateSpecVolL3();

// Offset: 69412
// Size: 0x27
//IDA: void __cdecl RotateSpecVolL4()
void RotateSpecVolL4();

// Offset: 69452
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR()
void RotateSpecVolR();

// Offset: 69492
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR2()
void RotateSpecVolR2();

// Offset: 69532
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR3()
void RotateSpecVolR3();

// Offset: 69572
// Size: 0x27
//IDA: void __cdecl RotateSpecVolR4()
void RotateSpecVolR4();

// Offset: 69612
// Size: 0x27
//IDA: void __cdecl CycleSpecVolRotate()
void CycleSpecVolRotate();

// Offset: 69652
// Size: 0x27
//IDA: void __cdecl CycleSpecVolScale()
void CycleSpecVolScale();

// Offset: 69692
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp2()
void ScaleSpecVolUp2();

// Offset: 69732
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp3()
void ScaleSpecVolUp3();

// Offset: 69772
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolUp4()
void ScaleSpecVolUp4();

// Offset: 69812
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown2()
void ScaleSpecVolDown2();

// Offset: 69852
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown3()
void ScaleSpecVolDown3();

// Offset: 69892
// Size: 0x27
//IDA: void __cdecl ScaleSpecVolDown4()
void ScaleSpecVolDown4();

// Offset: 69932
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL()
void MoveXSpecVolL();

// Offset: 69972
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL2()
void MoveXSpecVolL2();

// Offset: 70012
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL3()
void MoveXSpecVolL3();

// Offset: 70052
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolL4()
void MoveXSpecVolL4();

// Offset: 70092
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR()
void MoveXSpecVolR();

// Offset: 70132
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR2()
void MoveXSpecVolR2();

// Offset: 70172
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR3()
void MoveXSpecVolR3();

// Offset: 70212
// Size: 0x27
//IDA: void __cdecl MoveXSpecVolR4()
void MoveXSpecVolR4();

// Offset: 70252
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL()
void MoveYSpecVolL();

// Offset: 70292
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL2()
void MoveYSpecVolL2();

// Offset: 70332
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL3()
void MoveYSpecVolL3();

// Offset: 70372
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolL4()
void MoveYSpecVolL4();

// Offset: 70412
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR()
void MoveYSpecVolR();

// Offset: 70452
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR2()
void MoveYSpecVolR2();

// Offset: 70492
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR3()
void MoveYSpecVolR3();

// Offset: 70532
// Size: 0x27
//IDA: void __cdecl MoveYSpecVolR4()
void MoveYSpecVolR4();

// Offset: 70572
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL()
void MoveZSpecVolL();

// Offset: 70612
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL2()
void MoveZSpecVolL2();

// Offset: 70652
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL3()
void MoveZSpecVolL3();

// Offset: 70692
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolL4()
void MoveZSpecVolL4();

// Offset: 70732
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR()
void MoveZSpecVolR();

// Offset: 70772
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR2()
void MoveZSpecVolR2();

// Offset: 70812
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR3()
void MoveZSpecVolR3();

// Offset: 70852
// Size: 0x27
//IDA: void __cdecl MoveZSpecVolR4()
void MoveZSpecVolR4();

// Offset: 70892
// Size: 0x27
//IDA: void __cdecl SnapSpecVolToVertical()
void SnapSpecVolToVertical();

// Offset: 70932
// Size: 0xa5
//IDA: void __cdecl ShowSpecialVolumes()
void ShowSpecialVolumes();

// Offset: 71100
// Size: 0x70
//IDA: void __cdecl HideSpecialVolumes()
void HideSpecialVolumes();

#endif
