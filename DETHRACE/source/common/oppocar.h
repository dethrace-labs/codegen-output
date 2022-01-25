#ifndef _OPPOCAR_H_
#define _OPPOCAR_H_

#include "dr_types.h"
#include "br_types.h"

extern int gCollision_detection_on__oppocar; // addr: 00016FDC // suffix added to avoid duplicate symbol
extern br_vector3 gGround_normal__oppocar; // addr: 00016FE0 // suffix added to avoid duplicate symbol
extern void (*ControlCar__oppocar[6])(tCar_spec*, br_scalar); // addr: 00016FEC // suffix added to avoid duplicate symbol
extern int gControl__oppocar; // addr: 00017004 // suffix added to avoid duplicate symbol
extern int gFace_num__oppocar; // addr: 00017008 // suffix added to avoid duplicate symbol
extern br_angle gOld_yaw__oppocar; // addr: 0001700C // suffix added to avoid duplicate symbol
extern int gMetal_crunch_sound_id__oppocar[5]; // addr: 00017010 // suffix added to avoid duplicate symbol
extern int gMetal_scrape_sound_id__oppocar[3]; // addr: 00017024 // suffix added to avoid duplicate symbol
extern tFace_ref gFace_list__oppocar[32]; // addr: 00039F30 // suffix added to avoid duplicate symbol
extern br_scalar gOur_yaw__oppocar; // addr: 0003A830 // suffix added to avoid duplicate symbol
extern br_scalar gGravity__oppocar; // addr: 0003A834 // suffix added to avoid duplicate symbol
extern br_vector3 gNew_ground_normal__oppocar; // addr: 0003A838 // suffix added to avoid duplicate symbol

// Offset: 0
// Size: 0x59
//IDA: void __usercall MakeCarStationary(tCar_spec *pCar_spec@<EAX>)
void MakeCarStationary(tCar_spec *pCar_spec);

// Offset: 92
// Size: 0x52b
//IDA: void __usercall MoveThisCar(tU32 pTime_difference@<EAX>, tCar_spec *car@<EDX>)
void MoveThisCar(tU32 pTime_difference, tCar_spec *car);

#endif
