#include "oppocar.h"

 // Suffix added to avoid duplicate symbol
int gCollision_detection_on__oppocar;
 // Suffix added to avoid duplicate symbol
br_vector3 gGround_normal__oppocar;
 // Suffix added to avoid duplicate symbol
void (*ControlCar__oppocar[6])(tCar_spec*, br_scalar);
 // Suffix added to avoid duplicate symbol
int gControl__oppocar;
 // Suffix added to avoid duplicate symbol
int gFace_num__oppocar;
 // Suffix added to avoid duplicate symbol
br_angle gOld_yaw__oppocar;
 // Suffix added to avoid duplicate symbol
int gMetal_crunch_sound_id__oppocar[5];
 // Suffix added to avoid duplicate symbol
int gMetal_scrape_sound_id__oppocar[3];
 // Suffix added to avoid duplicate symbol
tFace_ref gFace_list__oppocar[32];
 // Suffix added to avoid duplicate symbol
br_scalar gOur_yaw__oppocar;
 // Suffix added to avoid duplicate symbol
br_scalar gGravity__oppocar;
 // Suffix added to avoid duplicate symbol
br_vector3 gNew_ground_normal__oppocar;

// Offset: 0
// Size: 0x59
//IDA: void __usercall MakeCarStationary(tCar_spec *pCar_spec@<EAX>)
void MakeCarStationary(tCar_spec *pCar_spec) {
    LOG_TRACE("(%p)", pCar_spec);
    NOT_IMPLEMENTED();
}

// Offset: 92
// Size: 0x52b
//IDA: void __usercall MoveThisCar(tU32 pTime_difference@<EAX>, tCar_spec *car@<EDX>)
void MoveThisCar(tU32 pTime_difference, tCar_spec *car) {
    br_scalar dt;
    br_scalar ts;
    br_vector3 r;
    br_vector3 minus_k;
    int i;
    int j;
    br_angle phi;
    br_scalar __block0___scale;
    LOG_TRACE("(%d, %p)", pTime_difference, car);
    NOT_IMPLEMENTED();
}

