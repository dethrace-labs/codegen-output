#ifndef _OPPOPROC_H_
#define _OPPOPROC_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 0
// Size: 0x2d4
//IDA: int __usercall StraightestArcForCorner2D@<EAX>(br_vector2 *pCent@<EAX>, br_scalar *pRadius@<EDX>, br_scalar *pEntry_length@<EBX>, int *pLeft_not_right@<ECX>, br_vector2 *p1, br_vector2 *p2, br_vector2 *p3, br_scalar pWidth12, br_scalar pWidth23)
int StraightestArcForCorner2D(br_vector2 *pCent, br_scalar *pRadius, br_scalar *pEntry_length, int *pLeft_not_right, br_vector2 *p1, br_vector2 *p2, br_vector2 *p3, br_scalar pWidth12, br_scalar pWidth23);

// Offset: 724
// Size: 0x2f
//IDA: br_scalar __usercall CornerFudge@<ST0>(tCar_spec *pCar_spec@<EAX>)
br_scalar CornerFudge(tCar_spec *pCar_spec);

// Offset: 772
// Size: 0x5c
//IDA: br_scalar __usercall MaxCurvatureForCarSpeed@<ST0>(tCar_spec *pCar@<EAX>, br_scalar pSpeed)
br_scalar MaxCurvatureForCarSpeed(tCar_spec *pCar, br_scalar pSpeed);

// Offset: 864
// Size: 0x46
//IDA: br_scalar __usercall Vector2Cross@<ST0>(br_vector2 *pA@<EAX>, br_vector2 *pB@<EDX>)
br_scalar Vector2Cross(br_vector2 *pA, br_vector2 *pB);

// Offset: 936
// Size: 0x6c
//IDA: tFollow_path_result __usercall EndOfPath@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
tFollow_path_result EndOfPath(tOpponent_spec *pOpponent_spec);

// Offset: 1044
// Size: 0xeb
//IDA: int __usercall RoughlyColinear@<EAX>(br_vector2 *p1@<EAX>, br_vector2 *p2@<EDX>, br_vector2 *p3@<EBX>)
int RoughlyColinear(br_vector2 *p1, br_vector2 *p2, br_vector2 *p3);

// Offset: 1280
// Size: 0x128
//IDA: int __usercall GetStraight@<EAX>(br_vector2 *pStart@<EAX>, br_vector2 *pFinish@<EDX>, br_scalar *pWidth@<EBX>, int section1@<ECX>, tOpponent_spec *pOpponent_spec, tFollow_path_data *data)
int GetStraight(br_vector2 *pStart, br_vector2 *pFinish, br_scalar *pWidth, int section1, tOpponent_spec *pOpponent_spec, tFollow_path_data *data);

// Offset: 1576
// Size: 0x1721
//IDA: tFollow_path_result __usercall ProcessFollowPath@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>, tProcess_objective_command pCommand@<EDX>, int pPursuit_mode@<EBX>, int pIgnore_end@<ECX>, int pNever_struggle)
tFollow_path_result ProcessFollowPath(tOpponent_spec *pOpponent_spec, tProcess_objective_command pCommand, int pPursuit_mode, int pIgnore_end, int pNever_struggle);

// Offset: 7500
// Size: 0xbca
//IDA: tFollow_path_result __usercall FollowCheatyPath@<EAX>(tOpponent_spec *pOpponent_spec@<EAX>)
tFollow_path_result FollowCheatyPath(tOpponent_spec *pOpponent_spec);

#endif
