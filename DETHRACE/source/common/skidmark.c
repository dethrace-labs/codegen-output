#include "skidmark.h"

char *gBoring_material_names[2];
char *gMaterial_names[2];
tSkid gSkids[100];

// Offset: 0
// Size: 0x258
//IDA: void __usercall StretchMark(tSkid *pMark@<EAX>, br_vector3 *pFrom@<EDX>, br_vector3 *pTo@<EBX>, br_scalar pTexture_start)
void StretchMark(tSkid *pMark, br_vector3 *pFrom, br_vector3 *pTo, br_scalar pTexture_start) {
    br_vector3 temp;
    br_vector3 *rows;
    br_scalar len;
    br_model *model;
    LOG_TRACE("(%p, %p, %p, %f)", pMark, pFrom, pTo, pTexture_start);
    NOT_IMPLEMENTED();
}

// Offset: 600
// Size: 0x51
//IDA: br_material* __usercall MaterialFromIndex@<EAX>(int pIndex@<EAX>)
br_material* MaterialFromIndex(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 684
// Size: 0x74
//IDA: void __usercall AdjustSkid(int pSkid_num@<EAX>, br_matrix34 *pMatrix@<EDX>, int pMaterial_index@<EBX>)
void AdjustSkid(int pSkid_num, br_matrix34 *pMatrix, int pMaterial_index) {
    LOG_TRACE("(%d, %p, %d)", pSkid_num, pMatrix, pMaterial_index);
    NOT_IMPLEMENTED();
}

// Offset: 800
// Size: 0xb6
//IDA: int __usercall FarFromLine2D@<EAX>(br_vector3 *pPt@<EAX>, br_vector3 *pL1@<EDX>, br_vector3 *pL2@<EBX>)
int FarFromLine2D(br_vector3 *pPt, br_vector3 *pL1, br_vector3 *pL2) {
    br_vector2 line;
    br_vector2 to_pt;
    br_scalar line_len;
    br_scalar cross;
    LOG_TRACE("(%p, %p, %p)", pPt, pL1, pL2);
    NOT_IMPLEMENTED();
}

// Offset: 984
// Size: 0x89
//IDA: int __usercall Reflex2D@<EAX>(br_vector3 *pPt@<EAX>, br_vector3 *pL1@<EDX>, br_vector3 *pL2@<EBX>)
int Reflex2D(br_vector3 *pPt, br_vector3 *pL1, br_vector3 *pL2) {
    br_vector2 line;
    br_vector2 to_pt;
    LOG_TRACE("(%p, %p, %p)", pPt, pL1, pL2);
    NOT_IMPLEMENTED();
}

// Offset: 1124
// Size: 0x375
//IDA: void __cdecl InitSkids()
void InitSkids() {
    int skid;
    int mat;
    int sl;
    br_model *square;
    char *str;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2012
// Size: 0x33
//IDA: void __usercall HideSkid(int pSkid_num@<EAX>)
void HideSkid(int pSkid_num) {
    LOG_TRACE("(%d)", pSkid_num);
    NOT_IMPLEMENTED();
}

// Offset: 2064
// Size: 0x43
//IDA: void __cdecl HideSkids()
void HideSkids() {
    int skid;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 2132
// Size: 0x88
//IDA: br_scalar __usercall SkidLen@<ST0>(int pSkid@<EAX>)
br_scalar SkidLen(int pSkid) {
    LOG_TRACE("(%d)", pSkid);
    NOT_IMPLEMENTED();
}

// Offset: 2268
// Size: 0x3b5
//IDA: void __usercall SkidSection(tCar_spec *pCar@<EAX>, int pWheel_num@<EDX>, br_vector3 *pPos@<EBX>, int pMaterial_index@<ECX>)
void SkidSection(tCar_spec *pCar, int pWheel_num, br_vector3 *pPos, int pMaterial_index) {
    static tU16 skid;
    br_material *material;
    LOG_TRACE("(%p, %d, %p, %d)", pCar, pWheel_num, pPos, pMaterial_index);
    NOT_IMPLEMENTED();
}

// Offset: 3220
// Size: 0x497
//IDA: void __usercall SkidMark(tCar_spec *pCar@<EAX>, int pWheel_num@<EDX>)
void SkidMark(tCar_spec *pCar, int pWheel_num) {
    br_vector3 pos;
    br_vector3 world_pos;
    br_vector3 disp;
    br_vector3 spesh_to_wheel;
    int material_index;
    br_scalar dist;
    br_scalar dist2;
    int on_ground;
    br_material *material;
    LOG_TRACE("(%p, %d)", pCar, pWheel_num);
    NOT_IMPLEMENTED();
}

// Offset: 4396
// Size: 0x82
//IDA: void __usercall InitCarSkidStuff(tCar_spec *pCar@<EAX>)
void InitCarSkidStuff(tCar_spec *pCar) {
    int wheel;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 4528
// Size: 0x79
//IDA: void __cdecl SkidsPerFrame()
void SkidsPerFrame() {
    int skid;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4652
// Size: 0x4c
//IDA: void __cdecl RemoveMaterialsFromSkidmarks()
void RemoveMaterialsFromSkidmarks() {
    int skid;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

