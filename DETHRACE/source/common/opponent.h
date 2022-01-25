#ifndef _OPPONENT_H_
#define _OPPONENT_H_

#include "dr_types.h"
#include "br_types.h"

extern br_actor *gOppo_path_actor; // addr: 00017030
extern br_model *gOppo_path_model; // addr: 00017034
extern br_material *gMat_dk_yel; // addr: 00017038
extern br_material *gMat_md_yel; // addr: 0001703C
extern br_material *gMat_lt_yel; // addr: 00017040
extern br_material *gMat_dk_red; // addr: 00017044
extern br_material *gMat_lt_red; // addr: 00017048
extern br_material *gMat_dk_grn; // addr: 0001704C
extern br_material *gMat_lt_grn; // addr: 00017050
extern br_material *gMat_dk_blu; // addr: 00017054
extern br_material *gMat_lt_blu; // addr: 00017058
extern br_material *gMat_dk_turq; // addr: 0001705C
extern br_material *gMat_lt_turq; // addr: 00017060
extern br_material *gMat_dk_gry; // addr: 00017064
extern br_material *gMat_md_gry; // addr: 00017068
extern br_material *gMat_lt_gry; // addr: 0001706C
extern int gMellow_opponents; // addr: 00017070
extern int gTest_toggle; // addr: 00017074
extern int gAlready_elasticating; // addr: 00017078
extern int gVertices_used_in_non_edit_paths; // addr: 0001707C
extern int gFaces_used_in_non_edit_paths; // addr: 00017080
extern int gMats_allocated; // addr: 00017084
extern int gOppo_paths_shown; // addr: 00017088
extern int gMade_path_filename; // addr: 0001708C
extern int gBIG_APC_index; // addr: 00017090
extern char *gPath_section_type_names[3]; // addr: 00017094
extern int gMin_bangness; // addr: 000170A0
extern int gMax_bangness; // addr: 000170A4
extern tU32 gNext_elastication; // addr: 000170A8
extern tU32 gNext_write_during_elastication; // addr: 000170AC
extern char *gCop_name; // addr: 000170B0
extern char *gDrone_name; // addr: 000170B4
extern int gChallenger_index__opponent; // addr: 000170B8 // suffix added to avoid duplicate symbol
extern int gSFS_count; // addr: 000170BC
extern int gSFS_total_cycles; // addr: 000170C0
extern int gSFS_max_cycles; // addr: 000170C4
extern float gOpponent_nastyness_frigger; // addr: 000170C8
extern char gOppo_path_filename[256]; // addr: 0003A850
extern br_scalar gIn_view_distance; // addr: 0003A950
extern tU8 *gBit_per_node; // addr: 0003A954
extern int gGrudge_reduction_per_period; // addr: 0003A958
extern int gSFS_cycles_this_time; // addr: 0003A95C
extern br_scalar gMinimum_yness_before_knackerisation; // addr: 0003A960
extern int gWanky_arse_tit_fuck; // addr: 0003A964
extern br_scalar gHead_on_cos_value; // addr: 0003A968
extern tU32 gNext_grudge_reduction; // addr: 0003A96C
extern br_scalar gCop_pursuit_speed_percentage_multiplier; // addr: 0003A970
extern br_scalar gDefinite_cop_pursuit_speed; // addr: 0003A974
extern int gAcknowledged_start; // addr: 0003A978
extern int gStart_jumped; // addr: 0003A97C
extern int gNum_of_opponents_getting_near; // addr: 0003A980
extern int gNumber_of_cops_before_faffage; // addr: 0003A984
extern int gFirst_frame; // addr: 0003A988
extern tU32 gAcme_frame_count; // addr: 0003A98C
extern br_scalar gDefinite_no_cop_pursuit_speed; // addr: 0003A990
extern int gNum_of_opponents_completing_race; // addr: 0003A994
extern int gNum_of_opponents_pursuing; // addr: 0003A998
extern int gActive_car_list_rebuild_required; // addr: 0003A99C
extern br_scalar gFrame_period_for_this_munging_in_secs; // addr: 0003A9A0
extern int gBig_bang; // addr: 0003A9A4
extern int gProcessing_opponents; // addr: 0003A9A8
extern tU32 gFrame_period_for_this_munging; // addr: 0003A9AC
extern tU32 gTime_stamp_for_this_munging; // addr: 0003A9B0
extern tS16 gMobile_section; // addr: 0003A9B4

// Offset: 0
// Size: 0x89
//IDA: void __usercall PointActorAlongThisBloodyVector(br_actor *pThe_actor@<EAX>, br_vector3 *pThe_vector@<EDX>)
void PointActorAlongThisBloodyVector(br_actor *pThe_actor, br_vector3 *pThe_vector);

// Offset: 140
// Size: 0x12d
//IDA: void __usercall ProcessCurrentObjective(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessCurrentObjective(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 444
// Size: 0xbe
//IDA: tS16 __usercall ReallocExtraPathNodes@<AX>(int pHow_many_then@<EAX>)
tS16 ReallocExtraPathNodes(int pHow_many_then);

// Offset: 636
// Size: 0xbc
//IDA: tS16 __usercall ReallocExtraPathSections@<AX>(int pHow_many_then@<EAX>)
tS16 ReallocExtraPathSections(int pHow_many_then);

// Offset: 824
// Size: 0xba
//IDA: int __usercall PointVisibleFromHere@<EAX>(br_vector3 *pFrom@<EAX>, br_vector3 *pTo@<EDX>)
int PointVisibleFromHere(br_vector3 *pFrom, br_vector3 *pTo);

// Offset: 1012
// Size: 0x114
//IDA: tS16 __usercall FindNearestPathNode@<AX>(br_vector3 *pActor_coords@<EAX>, br_scalar *pDistance@<EDX>)
tS16 FindNearestPathNode(br_vector3 *pActor_coords, br_scalar *pDistance);

// Offset: 1288
// Size: 0x42
//IDA: tS16 __usercall FindNearestPathSection@<AX>(br_vector3 *pActor_coords@<EAX>, br_vector3 *pPath_direction@<EDX>, br_vector3 *pIntersect@<EBX>, br_scalar *pDistance@<ECX>)
tS16 FindNearestPathSection(br_vector3 *pActor_coords, br_vector3 *pPath_direction, br_vector3 *pIntersect, br_scalar *pDistance);

// Offset: 1356
// Size: 0x4a3
//IDA: tS16 __usercall FindNearestGeneralSection@<AX>(tCar_spec *pPursuee@<EAX>, br_vector3 *pActor_coords@<EDX>, br_vector3 *pPath_direction@<EBX>, br_vector3 *pIntersect@<ECX>, br_scalar *pDistance)
tS16 FindNearestGeneralSection(tCar_spec *pPursuee, br_vector3 *pActor_coords, br_vector3 *pPath_direction, br_vector3 *pIntersect, br_scalar *pDistance);

// Offset: 2544
// Size: 0xab
//IDA: void __usercall DeadStopCar(tCar_spec *pCar_spec@<EAX>)
void DeadStopCar(tCar_spec *pCar_spec);

// Offset: 2716
// Size: 0x45
//IDA: void __usercall TurnOpponentPhysicsOn(tOpponent_spec *pOpponent_spec@<EAX>)
void TurnOpponentPhysicsOn(tOpponent_spec *pOpponent_spec);

// Offset: 2788
// Size: 0x50
//IDA: void __usercall TurnOpponentPhysicsOff(tOpponent_spec *pOpponent_spec@<EAX>)
void TurnOpponentPhysicsOff(tOpponent_spec *pOpponent_spec);

// Offset: 2868
// Size: 0xf7
//IDA: void __cdecl NewObjective(tOpponent_spec *pOpponent_spec, tOpponent_objective_type pObjective_type, ...)
void NewObjective(tOpponent_spec *pOpponent_spec, tOpponent_objective_type pObjective_type, ...);

// Offset: 3116
// Size: 0x3a1
//IDA: void __usercall CalcRaceRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcRaceRoute(tOpponent_spec *pOpponent_spec);

// Offset: 4048
// Size: 0x316
//IDA: void __usercall TopUpRandomRoute(tOpponent_spec *pOpponent_spec@<EAX>, int pSections_to_add@<EDX>)
void TopUpRandomRoute(tOpponent_spec *pOpponent_spec, int pSections_to_add);

// Offset: 4840
// Size: 0x3ae
//IDA: int __usercall SearchForSection@<EAX>(tRoute_section *pTemp_store@<EAX>, tRoute_section *pPerm_store@<EDX>, int *pNum_of_perm_store_sections@<EBX>, tS16 pTarget_section@<ECX>, int pDepth, br_scalar pDistance_so_far, tOpponent_spec *pOpponent_spec)
int SearchForSection(tRoute_section *pTemp_store, tRoute_section *pPerm_store, int *pNum_of_perm_store_sections, tS16 pTarget_section, int pDepth, br_scalar pDistance_so_far, tOpponent_spec *pOpponent_spec);

// Offset: 5784
// Size: 0x31c
//IDA: void __usercall CalcGetNearPlayerRoute(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPlayer@<EDX>)
void CalcGetNearPlayerRoute(tOpponent_spec *pOpponent_spec, tCar_spec *pPlayer);

// Offset: 6580
// Size: 0x23f
//IDA: void __usercall CalcReturnToStartPointRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcReturnToStartPointRoute(tOpponent_spec *pOpponent_spec);

// Offset: 7156
// Size: 0x2f
//IDA: void __usercall ClearOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec@<EAX>)
void ClearOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec);

// Offset: 7204
// Size: 0x72
//IDA: int __usercall AddToOpponentsProjectedRoute@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection_no@<EDX>, int pDirection@<EBX>)
int AddToOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec, tS16 pSection_no, int pDirection);

// Offset: 7320
// Size: 0xb1
//IDA: int __usercall ShiftOpponentsProjectedRoute@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pPlaces@<EDX>)
int ShiftOpponentsProjectedRoute(tOpponent_spec *pOpponent_spec, int pPlaces);

// Offset: 7500
// Size: 0x86
//IDA: void __usercall StunTheBugger(tOpponent_spec *pOpponent_spec@<EAX>, int pMilliseconds@<EDX>)
void StunTheBugger(tOpponent_spec *pOpponent_spec, int pMilliseconds);

// Offset: 7636
// Size: 0x2f
//IDA: void __usercall UnStunTheBugger(tOpponent_spec *pOpponent_spec@<EAX>)
void UnStunTheBugger(tOpponent_spec *pOpponent_spec);

// Offset: 7684
// Size: 0x1b4
//IDA: void __usercall ProcessCompleteRace(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessCompleteRace(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 8120
// Size: 0x151
//IDA: void __usercall StartRecordingTrail(tCar_spec *pPursuee@<EAX>)
void StartRecordingTrail(tCar_spec *pPursuee);

// Offset: 8460
// Size: 0x40f
//IDA: void __usercall RecordNextTrailNode(tCar_spec *pPursuee@<EAX>)
void RecordNextTrailNode(tCar_spec *pPursuee);

// Offset: 9500
// Size: 0x4e
//IDA: tS16 __usercall FindNearestTrailSection@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPursuee@<EDX>, br_vector3 *pSection_v@<EBX>, br_vector3 *pIntersect@<ECX>, br_scalar *pDistance)
tS16 FindNearestTrailSection(tOpponent_spec *pOpponent_spec, tCar_spec *pPursuee, br_vector3 *pSection_v, br_vector3 *pIntersect, br_scalar *pDistance);

// Offset: 9580
// Size: 0x6f
//IDA: tS16 __usercall CalcNextTrailSection@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, int pSection@<EDX>)
tS16 CalcNextTrailSection(tOpponent_spec *pOpponent_spec, int pSection);

// Offset: 9692
// Size: 0x9d3
//IDA: void __usercall ProcessPursueAndTwat(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessPursueAndTwat(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 12208
// Size: 0x27e
//IDA: void __usercall ProcessRunAway(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessRunAway(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 12848
// Size: 0x7e
//IDA: void __usercall ProcessWaitForSomeHaplessSod(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessWaitForSomeHaplessSod(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 12976
// Size: 0x275
//IDA: void __usercall ProcessReturnToStart(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessReturnToStart(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 13608
// Size: 0x399
//IDA: void __usercall ProcessLevitate(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessLevitate(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 14532
// Size: 0x21f
//IDA: void __usercall ProcessGetNearPlayer(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessGetNearPlayer(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 15076
// Size: 0xe6
//IDA: void __usercall ProcessFrozen(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>)
void ProcessFrozen(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand);

// Offset: 15308
// Size: 0x163
//IDA: int __usercall HeadOnWithPlayerPossible@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int HeadOnWithPlayerPossible(tOpponent_spec *pOpponent_spec);

// Offset: 15664
// Size: 0x58
//IDA: int __usercall AlreadyPursuingCar@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tCar_spec *pPursuee@<EDX>)
int AlreadyPursuingCar(tOpponent_spec *pOpponent_spec, tCar_spec *pPursuee);

// Offset: 15752
// Size: 0x61
//IDA: int __usercall LastTwatteeAPlayer@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int LastTwatteeAPlayer(tOpponent_spec *pOpponent_spec);

// Offset: 15852
// Size: 0x61
//IDA: int __usercall LastTwatterAPlayer@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int LastTwatterAPlayer(tOpponent_spec *pOpponent_spec);

// Offset: 15952
// Size: 0x82
//IDA: void __usercall ObjectiveComplete(tOpponent_spec *pOpponent_spec@<EAX>)
void ObjectiveComplete(tOpponent_spec *pOpponent_spec);

// Offset: 16084
// Size: 0x21e
//IDA: void __usercall TeleportOpponentToNearestSafeLocation(tOpponent_spec *pOpponent_spec@<EAX>)
void TeleportOpponentToNearestSafeLocation(tOpponent_spec *pOpponent_spec);

// Offset: 16628
// Size: 0xfd9
//IDA: void __usercall ChooseNewObjective(tOpponent_spec *pOpponent_spec@<EAX>, int pMust_choose_one@<EDX>)
void ChooseNewObjective(tOpponent_spec *pOpponent_spec, int pMust_choose_one);

// Offset: 20688
// Size: 0x16d
//IDA: void __usercall ProcessThisOpponent(tOpponent_spec *pOpponent_spec@<EAX>)
void ProcessThisOpponent(tOpponent_spec *pOpponent_spec);

// Offset: 21056
// Size: 0x100
//IDA: int __usercall IsNetCarActive@<EAX>(br_vector3 *pPoint@<EAX>)
int IsNetCarActive(br_vector3 *pPoint);

// Offset: 21312
// Size: 0x2b4
//IDA: void __cdecl RebuildActiveCarList()
void RebuildActiveCarList();

// Offset: 22004
// Size: 0x3a
//IDA: void __cdecl ForceRebuildActiveCarList()
void ForceRebuildActiveCarList();

// Offset: 22064
// Size: 0x8a
//IDA: void __usercall StartToCheat(tOpponent_spec *pOpponent_spec@<EAX>)
void StartToCheat(tOpponent_spec *pOpponent_spec);

// Offset: 22204
// Size: 0x8a
//IDA: void __usercall OiStopCheating(tOpponent_spec *pOpponent_spec@<EAX>)
void OiStopCheating(tOpponent_spec *pOpponent_spec);

// Offset: 22344
// Size: 0x146
//IDA: int __usercall TeleportCopToStart@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int TeleportCopToStart(tOpponent_spec *pOpponent_spec);

// Offset: 22672
// Size: 0x8b
//IDA: void __usercall CalcDistanceFromHome(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcDistanceFromHome(tOpponent_spec *pOpponent_spec);

// Offset: 22812
// Size: 0x2ff
//IDA: int __usercall MassageOpponentPosition@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pMassage_count@<EDX>)
int MassageOpponentPosition(tOpponent_spec *pOpponent_spec, int pMassage_count);

// Offset: 23580
// Size: 0x335
//IDA: int __usercall RematerialiseOpponentOnThisSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed, tS16 pSection_no)
int RematerialiseOpponentOnThisSection(tOpponent_spec *pOpponent_spec, br_scalar pSpeed, tS16 pSection_no);

// Offset: 24404
// Size: 0x1e2
//IDA: int __usercall RematerialiseOpponentOnNearestSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed)
int RematerialiseOpponentOnNearestSection(tOpponent_spec *pOpponent_spec, br_scalar pSpeed);

// Offset: 24888
// Size: 0x93d
//IDA: int __usercall RematerialiseOpponent@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, br_scalar pSpeed)
int RematerialiseOpponent(tOpponent_spec *pOpponent_spec, br_scalar pSpeed);

// Offset: 27256
// Size: 0x1b2
//IDA: void __usercall CalcPlayerConspicuousness(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcPlayerConspicuousness(tOpponent_spec *pOpponent_spec);

// Offset: 27692
// Size: 0xc0
//IDA: void __usercall CalcOpponentConspicuousnessWithAViewToCheatingLikeFuck(tOpponent_spec *pOpponent_spec@<EAX>)
void CalcOpponentConspicuousnessWithAViewToCheatingLikeFuck(tOpponent_spec *pOpponent_spec);

// Offset: 27884
// Size: 0x34
//IDA: void __usercall ChallengeOccurred(int pChallenger_index@<EAX>, int pAccepted@<EDX>)
void ChallengeOccurred(int pChallenger_index, int pAccepted);

// Offset: 27936
// Size: 0xe8
//IDA: void __cdecl LoadCopCars()
void LoadCopCars();

// Offset: 28168
// Size: 0x99c
//IDA: void __usercall LoadInOppoPaths(FILE *pF@<EAX>)
void LoadInOppoPaths(FILE *pF);

// Offset: 30628
// Size: 0x99
//IDA: void __cdecl DisposeOpponentPaths()
void DisposeOpponentPaths();

// Offset: 30784
// Size: 0x3b6
//IDA: void __usercall MungeOpponents(tU32 pFrame_period@<EAX>)
void MungeOpponents(tU32 pFrame_period);

// Offset: 31736
// Size: 0xfb
//IDA: void __cdecl SetInitialCopPositions()
void SetInitialCopPositions();

// Offset: 31988
// Size: 0x9f1
//IDA: void __usercall InitOpponents(tRace_info *pRace_info@<EAX>)
void InitOpponents(tRace_info *pRace_info);

// Offset: 34536
// Size: 0x8e
//IDA: void __cdecl DisposeOpponents()
void DisposeOpponents();

// Offset: 34680
// Size: 0x137
//IDA: void __usercall WakeUpOpponentsToTheFactThatTheStartHasBeenJumped(int pWhat_the_countdown_was@<EAX>)
void WakeUpOpponentsToTheFactThatTheStartHasBeenJumped(int pWhat_the_countdown_was);

// Offset: 34992
// Size: 0x5b
//IDA: void __usercall ReportMurderToPoliceDepartment(tCar_spec *pCar_spec@<EAX>)
void ReportMurderToPoliceDepartment(tCar_spec *pCar_spec);

// Offset: 35084
// Size: 0xb2
//IDA: int __usercall GetCarCount@<EAX>(tVehicle_type pCategory@<EAX>)
int GetCarCount(tVehicle_type pCategory);

// Offset: 35264
// Size: 0xee
//IDA: tCar_spec* __usercall GetCarSpec@<EAX>(tVehicle_type pCategory@<EAX>, int pIndex@<EDX>)
tCar_spec* GetCarSpec(tVehicle_type pCategory, int pIndex);

// Offset: 35504
// Size: 0xac
//IDA: char* __usercall GetDriverName@<EAX>(tVehicle_type pCategory@<EAX>, int pIndex@<EDX>)
char* GetDriverName(tVehicle_type pCategory, int pIndex);

// Offset: 35676
// Size: 0xf0
//IDA: tOpponent_spec* __usercall GetOpponentSpecFromCarSpec@<EAX>(tCar_spec *pCar_spec@<EAX>)
tOpponent_spec* GetOpponentSpecFromCarSpec(tCar_spec *pCar_spec);

// Offset: 35916
// Size: 0x71
//IDA: tCar_spec* __usercall GetCarSpecFromGlobalOppoIndex@<EAX>(int pIndex@<EAX>)
tCar_spec* GetCarSpecFromGlobalOppoIndex(int pIndex);

// Offset: 36032
// Size: 0x5f
//IDA: int __usercall GetOpponentsRealSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, int pSection_no@<EDX>)
int GetOpponentsRealSection(tOpponent_spec *pOpponent_spec, int pSection_no);

// Offset: 36128
// Size: 0x6a
//IDA: int __usercall GetOpponentsFirstSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
int GetOpponentsFirstSection(tOpponent_spec *pOpponent_spec);

// Offset: 36236
// Size: 0xb9
//IDA: int __usercall GetOpponentsNextSection@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pCurrent_section@<EDX>)
int GetOpponentsNextSection(tOpponent_spec *pOpponent_spec, tS16 pCurrent_section);

// Offset: 36424
// Size: 0xef
//IDA: tS16 __usercall GetOpponentsSectionStartNode@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
tS16 GetOpponentsSectionStartNode(tOpponent_spec *pOpponent_spec, tS16 pSection);

// Offset: 36664
// Size: 0xb9
//IDA: tS16 __usercall GetOpponentsSectionFinishNode@<AX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
tS16 GetOpponentsSectionFinishNode(tOpponent_spec *pOpponent_spec, tS16 pSection);

// Offset: 36852
// Size: 0x11c
//IDA: br_vector3* __usercall GetOpponentsSectionStartNodePoint@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_vector3* GetOpponentsSectionStartNodePoint(tOpponent_spec *pOpponent_spec, tS16 pSection);

// Offset: 37136
// Size: 0x10a
//IDA: br_vector3* __usercall GetOpponentsSectionFinishNodePoint@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_vector3* GetOpponentsSectionFinishNodePoint(tOpponent_spec *pOpponent_spec, tS16 pSection);

// Offset: 37404
// Size: 0xa5
//IDA: br_scalar __usercall GetOpponentsSectionWidth@<ST0>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>)
br_scalar GetOpponentsSectionWidth(tOpponent_spec *pOpponent_spec, tS16 pSection);

// Offset: 37572
// Size: 0x106
//IDA: int __usercall GetOpponentsSectionMinSpeed@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>, int pTowards_finish@<EBX>)
int GetOpponentsSectionMinSpeed(tOpponent_spec *pOpponent_spec, tS16 pSection, int pTowards_finish);

// Offset: 37836
// Size: 0x106
//IDA: int __usercall GetOpponentsSectionMaxSpeed@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tS16 pSection@<EDX>, int pTowards_finish@<EBX>)
int GetOpponentsSectionMaxSpeed(tOpponent_spec *pOpponent_spec, tS16 pSection, int pTowards_finish);

// Offset: 38100
// Size: 0x3b
//IDA: void __usercall InitOpponentPsyche(int pOpponent_index@<EAX>)
void InitOpponentPsyche(int pOpponent_index);

// Offset: 38160
// Size: 0x6c
//IDA: void __usercall ClearTwattageOccurrenceVariables(tOpponent_spec *pOpponent_spec@<EAX>)
void ClearTwattageOccurrenceVariables(tOpponent_spec *pOpponent_spec);

// Offset: 38268
// Size: 0x56
//IDA: void __usercall TwoCarsHitEachOther(tCar_spec *pA_car@<EAX>, tCar_spec *pAnother_car@<EDX>)
void TwoCarsHitEachOther(tCar_spec *pA_car, tCar_spec *pAnother_car);

// Offset: 38356
// Size: 0x48e
//IDA: void __usercall RecordOpponentTwattageOccurrence(tCar_spec *pTwatter@<EAX>, tCar_spec *pTwattee@<EDX>)
void RecordOpponentTwattageOccurrence(tCar_spec *pTwatter, tCar_spec *pTwattee);

// Offset: 39524
// Size: 0x43
//IDA: void __cdecl ToggleOpponentTest()
void ToggleOpponentTest();

// Offset: 39592
// Size: 0x156
//IDA: void __cdecl ToggleOpponentProcessing()
void ToggleOpponentProcessing();

// Offset: 39936
// Size: 0xb7
//IDA: void __cdecl ToggleMellowOpponents()
void ToggleMellowOpponents();

// Offset: 40120
// Size: 0xb8
//IDA: void __cdecl RepairOpponentsSystems()
void RepairOpponentsSystems();

// Offset: 40304
// Size: 0x90
//IDA: void __usercall CopyVertex(br_vertex *pDest_vertex@<EAX>, br_vertex *pSrc_vertex@<EDX>)
// Suffix added to avoid duplicate symbol
void CopyVertex__opponent(br_vertex *pDest_vertex, br_vertex *pSrc_vertex);

// Offset: 40448
// Size: 0x74
//IDA: void __usercall CopyFace(br_face *pDest_face@<EAX>, br_face *pSrc_face@<EDX>)
// Suffix added to avoid duplicate symbol
void CopyFace__opponent(br_face *pDest_face, br_face *pSrc_face);

// Offset: 40564
// Size: 0x212
//IDA: void __usercall DeleteSection(tS16 pSection_to_delete@<EAX>)
void DeleteSection(tS16 pSection_to_delete);

// Offset: 41096
// Size: 0x338
//IDA: void __usercall DeleteNode(tS16 pNode_to_delete@<EAX>, int pAnd_sections@<EDX>)
void DeleteNode(tS16 pNode_to_delete, int pAnd_sections);

// Offset: 41920
// Size: 0x74
//IDA: void __cdecl DeleteOrphanNodes()
void DeleteOrphanNodes();

// Offset: 42036
// Size: 0x2cc
//IDA: void __usercall InsertThisNodeInThisSectionHere(tS16 pInserted_node@<EAX>, tS16 pSection_no@<EDX>, br_vector3 *pWhere@<EBX>)
void InsertThisNodeInThisSectionHere(tS16 pInserted_node, tS16 pSection_no, br_vector3 *pWhere);

// Offset: 42752
// Size: 0xfe
//IDA: void __cdecl TrackElasticateyPath()
void TrackElasticateyPath();

// Offset: 43008
// Size: 0x413
//IDA: void __usercall RecalcNearestPathSectionSpeed(int pMax_not_min@<EAX>, int pAdjustment@<EDX>)
void RecalcNearestPathSectionSpeed(int pMax_not_min, int pAdjustment);

// Offset: 44052
// Size: 0x140
//IDA: void __cdecl RecalcNearestPathSectionWidth(br_scalar pAdjustment)
void RecalcNearestPathSectionWidth(br_scalar pAdjustment);

// Offset: 44372
// Size: 0x145
//IDA: void __usercall CalcNegativeXVector(br_vector3 *pNegative_x_vector@<EAX>, br_vector3 *pStart@<EDX>, br_vector3 *pFinish@<EBX>, br_scalar pLength)
void CalcNegativeXVector(br_vector3 *pNegative_x_vector, br_vector3 *pStart, br_vector3 *pFinish, br_scalar pLength);

// Offset: 44700
// Size: 0xa2
//IDA: void __usercall MakeVertexAndOffsetIt(br_model *pModel@<EAX>, int pVertex_num@<EDX>, br_scalar pX, br_scalar pY, br_scalar pZ, br_vector3 *pOffset)
void MakeVertexAndOffsetIt(br_model *pModel, int pVertex_num, br_scalar pX, br_scalar pY, br_scalar pZ, br_vector3 *pOffset);

// Offset: 44864
// Size: 0x86
//IDA: void __usercall MakeFaceAndTextureIt(br_model *pModel@<EAX>, int pFace_num@<EDX>, int pV0@<EBX>, int pV1@<ECX>, int pV2, br_material *pMaterial)
void MakeFaceAndTextureIt(br_model *pModel, int pFace_num, int pV0, int pV1, int pV2, br_material *pMaterial);

// Offset: 45000
// Size: 0x3ae
//IDA: void __usercall MakeSection(br_uint_16 pFirst_vertex@<EAX>, br_uint_16 pFirst_face@<EDX>, br_vector3 *pStart@<EBX>, br_vector3 *pFinish@<ECX>, br_scalar pWidth, br_material *pMaterial_centre_lt, br_material *pMaterial_centre_dk, br_material *pMaterial_edges_start_lt, br_material *pMaterial_edges_start_dk, br_material *pMaterial_edges_finish_lt, br_material *pMaterial_edges_finish_dk)
void MakeSection(br_uint_16 pFirst_vertex, br_uint_16 pFirst_face, br_vector3 *pStart, br_vector3 *pFinish, br_scalar pWidth, br_material *pMaterial_centre_lt, br_material *pMaterial_centre_dk, br_material *pMaterial_edges_start_lt, br_material *pMaterial_edges_start_dk, br_material *pMaterial_edges_finish_lt, br_material *pMaterial_edges_finish_dk);

// Offset: 45944
// Size: 0x4d3
//IDA: void __usercall MakeCube(br_uint_16 pFirst_vertex@<EAX>, br_uint_16 pFirst_face@<EDX>, br_vector3 *pPoint@<EBX>, br_material *pMaterial_1@<ECX>, br_material *pMaterial_2, br_material *pMaterial_3)
void MakeCube(br_uint_16 pFirst_vertex, br_uint_16 pFirst_face, br_vector3 *pPoint, br_material *pMaterial_1, br_material *pMaterial_2, br_material *pMaterial_3);

// Offset: 47180
// Size: 0x58
//IDA: void __usercall CalcNumberOfFacesAndVerticesForOppoPathModel(br_uint_16 *pFace_index_ptr@<EAX>, br_uint_16 *pVertex_index_ptr@<EDX>)
void CalcNumberOfFacesAndVerticesForOppoPathModel(br_uint_16 *pFace_index_ptr, br_uint_16 *pVertex_index_ptr);

// Offset: 47268
// Size: 0x1b1
//IDA: void __usercall ReallocModelFacesAndVertices(br_model *pModel@<EAX>, int pNum_faces@<EDX>, int pNum_vertices@<EBX>)
void ReallocModelFacesAndVertices(br_model *pModel, int pNum_faces, int pNum_vertices);

// Offset: 47704
// Size: 0x7f
//IDA: br_material* __usercall CreateSimpleMaterial@<EAX>(int pColour_index@<EAX>)
br_material* CreateSimpleMaterial(int pColour_index);

// Offset: 47832
// Size: 0xfe
//IDA: void __cdecl AllocateMatsForOppoPathModel()
void AllocateMatsForOppoPathModel();

// Offset: 48088
// Size: 0x445
//IDA: void __cdecl RebuildOppoPathModel()
void RebuildOppoPathModel();

// Offset: 49184
// Size: 0x527
//IDA: int __cdecl ConsistencyCheck()
int ConsistencyCheck();

// Offset: 50504
// Size: 0xac
//IDA: void __cdecl ShowOppoPaths()
void ShowOppoPaths();

// Offset: 50676
// Size: 0x340
//IDA: void __cdecl WriteOutOppoPaths()
void WriteOutOppoPaths();

// Offset: 51508
// Size: 0x152
//IDA: int __cdecl NewNodeOKHere()
int NewNodeOKHere();

// Offset: 51848
// Size: 0x51
//IDA: void __cdecl ShowHideOppoPaths()
void ShowHideOppoPaths();

// Offset: 51932
// Size: 0x47c
//IDA: void __cdecl DropElasticateyNode()
void DropElasticateyNode();

// Offset: 53080
// Size: 0x4c0
//IDA: void __cdecl InsertAndElasticate()
void InsertAndElasticate();

// Offset: 54296
// Size: 0x26f
//IDA: void __cdecl InsertAndDontElasticate()
void InsertAndDontElasticate();

// Offset: 54920
// Size: 0x12c
//IDA: void __cdecl DropDeadEndNode()
void DropDeadEndNode();

// Offset: 55220
// Size: 0x194
//IDA: void __cdecl DropNodeOnNodeAndStopElasticating()
void DropNodeOnNodeAndStopElasticating();

// Offset: 55624
// Size: 0x35
//IDA: void __cdecl WidenOppoPathSection()
void WidenOppoPathSection();

// Offset: 55680
// Size: 0x35
//IDA: void __cdecl NarrowOppoPathSection()
void NarrowOppoPathSection();

// Offset: 55736
// Size: 0x37
//IDA: void __cdecl IncreaseSectionMinSpeed()
void IncreaseSectionMinSpeed();

// Offset: 55792
// Size: 0x37
//IDA: void __cdecl DecreaseSectionMinSpeed()
void DecreaseSectionMinSpeed();

// Offset: 55848
// Size: 0x3a
//IDA: void __cdecl IncreaseSectionMaxSpeed()
void IncreaseSectionMaxSpeed();

// Offset: 55908
// Size: 0x3a
//IDA: void __cdecl DecreaseSectionMaxSpeed()
void DecreaseSectionMaxSpeed();

// Offset: 55968
// Size: 0x104
//IDA: void __cdecl PullOppoPoint()
void PullOppoPoint();

// Offset: 56228
// Size: 0x12d
//IDA: void __cdecl ShowNodeInfo()
void ShowNodeInfo();

// Offset: 56532
// Size: 0x16c
//IDA: void __cdecl ShowSectionInfo1()
void ShowSectionInfo1();

// Offset: 56896
// Size: 0x2cd
//IDA: void __cdecl ShowSectionInfo2()
void ShowSectionInfo2();

// Offset: 57616
// Size: 0xe2
//IDA: void __cdecl DeleteOppoPathSection()
void DeleteOppoPathSection();

// Offset: 57844
// Size: 0xe1
//IDA: void __cdecl DeleteOppoPathNodeAndSections()
void DeleteOppoPathNodeAndSections();

// Offset: 58072
// Size: 0x217
//IDA: void __cdecl DeleteOppoPathNodeAndJoin()
void DeleteOppoPathNodeAndJoin();

// Offset: 58608
// Size: 0x1a8
//IDA: void __cdecl ReverseSectionDirection()
void ReverseSectionDirection();

// Offset: 59032
// Size: 0x145
//IDA: void __cdecl CycleSectionType()
void CycleSectionType();

// Offset: 59360
// Size: 0x141
//IDA: void __cdecl ToggleOneWayNess()
void ToggleOneWayNess();

// Offset: 59684
// Size: 0x15e
//IDA: void __cdecl CopStartPointInfo()
void CopStartPointInfo();

// Offset: 60036
// Size: 0x13e
//IDA: void __cdecl DropCopStartPoint()
void DropCopStartPoint();

// Offset: 60356
// Size: 0x1f8
//IDA: void __cdecl DeleteCopStartPoint()
void DeleteCopStartPoint();

// Offset: 60860
// Size: 0x22
//IDA: void __cdecl CycleCopStartPointType()
void CycleCopStartPointType();

#endif
