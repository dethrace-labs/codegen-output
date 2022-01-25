#ifndef _CRUSH_H_
#define _CRUSH_H_

#include "dr_types.h"
#include "br_types.h"

extern float gWobble_spam_y[8]; // addr: 0000E788
extern float gWobble_spam_z[8]; // addr: 0000E7A8
extern br_scalar gWheel_circ_to_width; // addr: 0000E7C8
extern tU8 gSmoke_damage_step[12]; // addr: 0000E7CC
extern int gSteal_ranks[5]; // addr: 0000E7D8

// Offset: 0
// Size: 0x26c
//IDA: int __usercall ReadCrushData@<EAX>(FILE *pF@<EAX>, tCrush_data *pCrush_data@<EDX>)
int ReadCrushData(FILE *pF, tCrush_data *pCrush_data);

// Offset: 620
// Size: 0xe6
//IDA: float __usercall SkipCrushData@<ST0>(FILE *pF@<EAX>)
float SkipCrushData(FILE *pF);

// Offset: 852
// Size: 0x2be
//IDA: int __usercall WriteCrushData@<EAX>(FILE *pF@<EAX>, tCrush_data *pCrush_data@<EDX>)
int WriteCrushData(FILE *pF, tCrush_data *pCrush_data);

// Offset: 1556
// Size: 0x82
//IDA: void __usercall DisposeCrushData(tCrush_data *pCrush_data@<EAX>)
void DisposeCrushData(tCrush_data *pCrush_data);

// Offset: 1688
// Size: 0x678
//IDA: void __usercall CrushModelPoint(tCar_spec *pCar@<EAX>, int pModel_index@<EDX>, br_model *pModel@<EBX>, int pCrush_point_index@<ECX>, br_vector3 *pEnergy_vector, br_scalar total_energy, tCrush_data *pCrush_data)
void CrushModelPoint(tCar_spec *pCar, int pModel_index, br_model *pModel, int pCrush_point_index, br_vector3 *pEnergy_vector, br_scalar total_energy, tCrush_data *pCrush_data);

// Offset: 3344
// Size: 0x20f
//IDA: void __usercall CrushModel(tCar_spec *pCar@<EAX>, int pModel_index@<EDX>, br_actor *pActor@<EBX>, br_vector3 *pImpact_point@<ECX>, br_vector3 *pEnergy_vector, tCrush_data *pCrush_data)
void CrushModel(tCar_spec *pCar, int pModel_index, br_actor *pActor, br_vector3 *pImpact_point, br_vector3 *pEnergy_vector, tCrush_data *pCrush_data);

// Offset: 3872
// Size: 0x63
//IDA: void __cdecl JitModelUpdate(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen)
void JitModelUpdate(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen);

// Offset: 3972
// Size: 0x83
//IDA: void __usercall SetModelForUpdate(br_model *pModel@<EAX>, tCar_spec *pCar@<EDX>, int crush_only@<EBX>)
void SetModelForUpdate(br_model *pModel, tCar_spec *pCar, int crush_only);

// Offset: 4104
// Size: 0x17c
//IDA: void __usercall TotallySpamTheModel(tCar_spec *pCar@<EAX>, int pModel_index@<EDX>, br_actor *pActor@<EBX>, tCrush_data *pCrush_data@<ECX>, br_scalar pMagnitude)
void TotallySpamTheModel(tCar_spec *pCar, int pModel_index, br_actor *pActor, tCrush_data *pCrush_data, br_scalar pMagnitude);

// Offset: 4484
// Size: 0x296
//IDA: br_scalar __usercall RepairModel@<ST0>(tCar_spec *pCar@<EAX>, int pModel_index@<EDX>, br_actor *pActor@<EBX>, br_vertex *pUndamaged_vertices@<ECX>, br_scalar pAmount, br_scalar *pTotal_deflection)
br_scalar RepairModel(tCar_spec *pCar, int pModel_index, br_actor *pActor, br_vertex *pUndamaged_vertices, br_scalar pAmount, br_scalar *pTotal_deflection);

// Offset: 5148
// Size: 0x12a
//IDA: float __usercall RepairCar2@<ST0>(tCar_spec *pCar@<EAX>, tU32 pFrame_period@<EDX>, br_scalar *pTotal_deflection@<EBX>)
float RepairCar2(tCar_spec *pCar, tU32 pFrame_period, br_scalar *pTotal_deflection);

// Offset: 5448
// Size: 0x78
//IDA: float __usercall RepairCar@<ST0>(tU16 pCar_ID@<EAX>, tU32 pFrame_period@<EDX>, br_scalar *pTotal_deflection@<EBX>)
float RepairCar(tU16 pCar_ID, tU32 pFrame_period, br_scalar *pTotal_deflection);

// Offset: 5568
// Size: 0x2c6
//IDA: void __usercall TotallyRepairACar(tCar_spec *pCar@<EAX>)
void TotallyRepairACar(tCar_spec *pCar);

// Offset: 6280
// Size: 0x35
//IDA: void __cdecl TotallyRepairCar()
void TotallyRepairCar();

// Offset: 6336
// Size: 0x6f
//IDA: void __cdecl CheckLastCar()
void CheckLastCar();

// Offset: 6448
// Size: 0x66
//IDA: void __usercall KnackerThisCar(tCar_spec *pCar@<EAX>)
void KnackerThisCar(tCar_spec *pCar);

// Offset: 6552
// Size: 0x116
//IDA: void __usercall SetKnackeredFlag(tCar_spec *pCar@<EAX>)
void SetKnackeredFlag(tCar_spec *pCar);

// Offset: 6832
// Size: 0x10e
//IDA: void __usercall DamageUnit2(tCar_spec *pCar@<EAX>, int pUnit_type@<EDX>, int pDamage_amount@<EBX>)
void DamageUnit2(tCar_spec *pCar, int pUnit_type, int pDamage_amount);

// Offset: 7104
// Size: 0xec
//IDA: void __usercall RecordLastDamage(tCar_spec *pCar@<EAX>)
void RecordLastDamage(tCar_spec *pCar);

// Offset: 7340
// Size: 0xf9
//IDA: void __usercall DoDamage(tCar_spec *pCar@<EAX>, tDamage_type pDamage_type@<EDX>, float pMagnitude, float pNastiness)
void DoDamage(tCar_spec *pCar, tDamage_type pDamage_type, float pMagnitude, float pNastiness);

// Offset: 7592
// Size: 0x28a
//IDA: void __usercall CheckPiledriverBonus(tCar_spec *pCar@<EAX>, br_vector3 *pImpact_point@<EDX>, br_vector3 *pEnergy@<EBX>)
void CheckPiledriverBonus(tCar_spec *pCar, br_vector3 *pImpact_point, br_vector3 *pEnergy);

// Offset: 8244
// Size: 0x98
//IDA: tImpact_location __usercall CalcModifiedLocation@<EAX>(tCar_spec *pCar@<EAX>)
tImpact_location CalcModifiedLocation(tCar_spec *pCar);

// Offset: 8396
// Size: 0xde
//IDA: void __usercall DoPratcamHit(br_vector3 *pHit_vector@<EAX>)
void DoPratcamHit(br_vector3 *pHit_vector);

// Offset: 8620
// Size: 0x8a9
//IDA: void __usercall DamageSystems(tCar_spec *pCar@<EAX>, br_vector3 *pImpact_point@<EDX>, br_vector3 *pEnergy_vector@<EBX>, int pWas_hitting_a_car@<ECX>)
void DamageSystems(tCar_spec *pCar, br_vector3 *pImpact_point, br_vector3 *pEnergy_vector, int pWas_hitting_a_car);

// Offset: 10840
// Size: 0xd2
//IDA: tImpact_location __usercall GetDirection@<EAX>(br_vector3 *pVelocity@<EAX>)
tImpact_location GetDirection(br_vector3 *pVelocity);

// Offset: 11052
// Size: 0x5c
//IDA: void __usercall SetSmokeLastDamageLevel(tCar_spec *pCar@<EAX>)
void SetSmokeLastDamageLevel(tCar_spec *pCar);

// Offset: 11144
// Size: 0x13e
//IDA: void __usercall SortOutSmoke(tCar_spec *pCar@<EAX>)
void SortOutSmoke(tCar_spec *pCar);

// Offset: 11464
// Size: 0x67
//IDA: void __usercall StealCar(tCar_spec *pCar@<EAX>)
void StealCar(tCar_spec *pCar);

// Offset: 11568
// Size: 0x14b2
//IDA: int __usercall DoCrashEarnings@<EAX>(tCar_spec *pCar1@<EAX>, tCar_spec *pCar2@<EDX>)
int DoCrashEarnings(tCar_spec *pCar1, tCar_spec *pCar2);

// Offset: 16868
// Size: 0x404
//IDA: void __usercall DoWheelDamage(tU32 pFrame_period@<EAX>)
void DoWheelDamage(tU32 pFrame_period);

// Offset: 17896
// Size: 0x45
//IDA: void __usercall CrashEarnings(tCar_spec *pCar1@<EAX>, tCar_spec *pCar2@<EDX>)
void CrashEarnings(tCar_spec *pCar1, tCar_spec *pCar2);

#endif
