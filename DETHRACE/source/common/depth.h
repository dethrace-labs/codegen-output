#ifndef _DEPTH_H_
#define _DEPTH_H_

#include "dr_types.h"
#include "br_types.h"

extern tDepth_effect gDistance_depth_effects[4]; // addr: 0000E808
extern int gSky_on; // addr: 0000E848
extern int gDepth_cueing_on; // addr: 0000E84C
extern tDepth_effect_type gSwap_depth_effect_type; // addr: 0000E850
extern br_scalar gSky_height; // addr: 00028350
extern br_scalar gSky_x_multiplier; // addr: 00028354
extern br_scalar gSky_width; // addr: 00028358
extern br_scalar gSky_y_multiplier; // addr: 0002835C
extern tU32 gLast_depth_change; // addr: 00028360
extern br_scalar gOld_yon; // addr: 00028364
extern br_pixelmap *gWater_shade_table; // addr: 00028368
extern br_material *gHorizon_material; // addr: 0002836C
extern br_model *gRearview_sky_model; // addr: 00028370
extern int gFog_shade_table_power; // addr: 00028374
extern br_actor *gRearview_sky_actor; // addr: 00028378
extern int gAcid_shade_table_power; // addr: 0002837C
extern int gWater_shade_table_power; // addr: 00028380
extern br_model *gForward_sky_model; // addr: 00028384
extern br_actor *gForward_sky_actor; // addr: 00028388
extern int gDepth_shade_table_power; // addr: 0002838C
extern br_pixelmap *gFog_shade_table; // addr: 00028390
extern int gSwap_depth_effect_start; // addr: 00028394
extern br_pixelmap *gDepth_shade_table; // addr: 00028398
extern tSpecial_volume *gLast_camera_special_volume; // addr: 0002839C
extern br_pixelmap *gAcid_shade_table; // addr: 000283A0
extern int gSwap_depth_effect_end; // addr: 000283A4
extern br_pixelmap *gSwap_sky_texture; // addr: 000283A8
extern br_angle gOld_fov; // addr: 000283AC
extern br_angle gSky_image_width; // addr: 000283AE
extern br_angle gSky_image_height; // addr: 000283B0
extern br_angle gSky_image_underground; // addr: 000283B2

// Offset: 0
// Size: 0x6e
//IDA: int __usercall Log2@<EAX>(int pNumber@<EAX>)
int Log2(int pNumber);

// Offset: 112
// Size: 0x82
//IDA: br_scalar __cdecl CalculateWrappingMultiplier(br_scalar pValue, br_scalar pYon)
br_scalar CalculateWrappingMultiplier(br_scalar pValue, br_scalar pYon);

// Offset: 244
// Size: 0x4e
//IDA: br_scalar __usercall DepthCueingShiftToDistance@<ST0>(int pShift@<EAX>)
br_scalar DepthCueingShiftToDistance(int pShift);

// Offset: 324
// Size: 0xd2
//IDA: void __usercall FogAccordingToGPSCDE(br_material *pMaterial@<EAX>)
void FogAccordingToGPSCDE(br_material *pMaterial);

// Offset: 536
// Size: 0xce
//IDA: void __cdecl FrobFog()
void FrobFog();

// Offset: 744
// Size: 0xaa
//IDA: void __usercall InstantDepthChange(tDepth_effect_type pType@<EAX>, br_pixelmap *pSky_texture@<EDX>, int pStart@<EBX>, int pEnd@<ECX>)
void InstantDepthChange(tDepth_effect_type pType, br_pixelmap *pSky_texture, int pStart, int pEnd);

// Offset: 916
// Size: 0x5a
//IDA: br_scalar __cdecl Tan(br_scalar pAngle)
br_scalar Tan(br_scalar pAngle);

// Offset: 1008
// Size: 0xd5
//IDA: br_scalar __usercall EdgeU@<ST0>(br_angle pSky@<EAX>, br_angle pView@<EDX>, br_angle pPerfect@<EBX>)
br_scalar EdgeU(br_angle pSky, br_angle pView, br_angle pPerfect);

// Offset: 1224
// Size: 0x642
//IDA: void __usercall MungeSkyModel(br_actor *pCamera@<EAX>, br_model *pModel@<EDX>)
void MungeSkyModel(br_actor *pCamera, br_model *pModel);

// Offset: 2828
// Size: 0x372
//IDA: br_model* __usercall CreateHorizonModel@<EAX>(br_actor *pCamera@<EAX>)
br_model* CreateHorizonModel(br_actor *pCamera);

// Offset: 3712
// Size: 0x198
//IDA: void __usercall LoadDepthTable(char *pName@<EAX>, br_pixelmap **pTable@<EDX>, int *pPower@<EBX>)
void LoadDepthTable(char *pName, br_pixelmap **pTable, int *pPower);

// Offset: 4120
// Size: 0x263
//IDA: void __cdecl InitDepthEffects()
void InitDepthEffects();

// Offset: 4732
// Size: 0x301
//IDA: void __usercall DoDepthByShadeTable(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_pixelmap *pShade_table@<EBX>, int pShade_table_power@<ECX>, int pStart, int pEnd)
void DoDepthByShadeTable(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_pixelmap *pShade_table, int pShade_table_power, int pStart, int pEnd);

// Offset: 5504
// Size: 0x3f1
//IDA: void __usercall ExternalSky(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>)
void ExternalSky(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world);

// Offset: 6516
// Size: 0x1cf
//IDA: void __usercall DoHorizon(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>)
void DoHorizon(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world);

// Offset: 6980
// Size: 0x49
//IDA: void __usercall DoDepthCue(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>)
void DoDepthCue(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer);

// Offset: 7056
// Size: 0x49
//IDA: void __usercall DoFog(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>)
void DoFog(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer);

// Offset: 7132
// Size: 0x5b
//IDA: void __usercall DepthEffect(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>)
void DepthEffect(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world);

// Offset: 7224
// Size: 0x5d
//IDA: void __usercall DepthEffectSky(br_pixelmap *pRender_buffer@<EAX>, br_pixelmap *pDepth_buffer@<EDX>, br_actor *pCamera@<EBX>, br_matrix34 *pCamera_to_world@<ECX>)
void DepthEffectSky(br_pixelmap *pRender_buffer, br_pixelmap *pDepth_buffer, br_actor *pCamera, br_matrix34 *pCamera_to_world);

// Offset: 7320
// Size: 0x273
//IDA: void __usercall DoWobbleCamera(br_actor *pCamera@<EAX>)
void DoWobbleCamera(br_actor *pCamera);

// Offset: 7948
// Size: 0x273
//IDA: void __usercall DoDrugWobbleCamera(br_actor *pCamera@<EAX>)
void DoDrugWobbleCamera(br_actor *pCamera);

// Offset: 8576
// Size: 0x74
//IDA: void __usercall DoSpecialCameraEffect(br_actor *pCamera@<EAX>, br_matrix34 *pCamera_to_world@<EDX>)
void DoSpecialCameraEffect(br_actor *pCamera, br_matrix34 *pCamera_to_world);

// Offset: 8692
// Size: 0x73
//IDA: void __cdecl LessDepthFactor()
void LessDepthFactor();

// Offset: 8808
// Size: 0x73
//IDA: void __cdecl MoreDepthFactor()
void MoreDepthFactor();

// Offset: 8924
// Size: 0x73
//IDA: void __cdecl LessDepthFactor2()
void LessDepthFactor2();

// Offset: 9040
// Size: 0x73
//IDA: void __cdecl MoreDepthFactor2()
void MoreDepthFactor2();

// Offset: 9156
// Size: 0x5f
//IDA: void __cdecl AssertYons()
void AssertYons();

// Offset: 9252
// Size: 0x8c
//IDA: void __cdecl IncreaseYon()
void IncreaseYon();

// Offset: 9392
// Size: 0xa2
//IDA: void __cdecl DecreaseYon()
void DecreaseYon();

// Offset: 9556
// Size: 0x7f
//IDA: void __cdecl SetYon(br_scalar pYon)
void SetYon(br_scalar pYon);

// Offset: 9684
// Size: 0x2f
//IDA: br_scalar __cdecl GetYon()
br_scalar GetYon();

// Offset: 9732
// Size: 0xa2
//IDA: void __cdecl IncreaseAngle()
void IncreaseAngle();

// Offset: 9896
// Size: 0xa2
//IDA: void __cdecl DecreaseAngle()
void DecreaseAngle();

// Offset: 10060
// Size: 0x105
//IDA: void __cdecl ToggleDepthMode()
void ToggleDepthMode();

// Offset: 10324
// Size: 0x2d
//IDA: int __cdecl GetSkyTextureOn()
int GetSkyTextureOn();

// Offset: 10372
// Size: 0x3c
//IDA: void __usercall SetSkyTextureOn(int pOn@<EAX>)
void SetSkyTextureOn(int pOn);

// Offset: 10432
// Size: 0x7c
//IDA: void __cdecl ToggleSkyQuietly()
void ToggleSkyQuietly();

// Offset: 10556
// Size: 0xbc
//IDA: void __cdecl ToggleSky()
void ToggleSky();

// Offset: 10744
// Size: 0x2d
//IDA: int __cdecl GetDepthCueingOn()
int GetDepthCueingOn();

// Offset: 10792
// Size: 0x47
//IDA: void __usercall SetDepthCueingOn(int pOn@<EAX>)
void SetDepthCueingOn(int pOn);

// Offset: 10864
// Size: 0x6e
//IDA: void __cdecl ToggleDepthCueingQuietly()
void ToggleDepthCueingQuietly();

// Offset: 10976
// Size: 0xbc
//IDA: void __cdecl ToggleDepthCueing()
void ToggleDepthCueing();

// Offset: 11164
// Size: 0x4a
//IDA: void __cdecl ChangeDepthEffect()
void ChangeDepthEffect();

// Offset: 11240
// Size: 0x22
//IDA: void __cdecl MungeForwardSky()
void MungeForwardSky();

// Offset: 11276
// Size: 0x3c
//IDA: void __cdecl MungeRearviewSky()
void MungeRearviewSky();

#endif
