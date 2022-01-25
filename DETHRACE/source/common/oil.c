#include "oil.h"

char *gOil_pixie_names[1];
int gNext_oil_pixie;
br_scalar gZ_buffer_diff;
br_scalar gMin_z_diff;
br_pixelmap *gOil_pixies[1];
tOil_spill_info gOily_spills[15];

// Offset: 0
// Size: 0x32b
//IDA: void __cdecl InitOilSpills()
void InitOilSpills() {
    int i;
    br_model *the_model;
    br_material *the_material;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 812
// Size: 0x65
//IDA: void __cdecl ResetOilSpills()
void ResetOilSpills() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 916
// Size: 0x14f
//IDA: void __usercall QueueOilSpill(tCar_spec *pCar@<EAX>)
void QueueOilSpill(tCar_spec *pCar) {
    int i;
    int oily_index;
    int oldest_one;
    tU32 the_time;
    tU32 oldest_time;
    LOG_TRACE("(%p)", pCar);
    NOT_IMPLEMENTED();
}

// Offset: 1252
// Size: 0x3c7
//IDA: int __usercall OKToSpillOil@<EAX>(tOil_spill_info *pOil@<EAX>)
int OKToSpillOil(tOil_spill_info *pOil) {
    br_scalar temp;
    br_scalar size_with_margin;
    br_scalar distance;
    br_scalar mr_dotty;
    br_vector3 v;
    br_vector3 ray_pos;
    br_vector3 ray_dir;
    br_vector3 normal;
    tCar_spec *car;
    int i;
    int face_count;
    int found_one;
    br_angle angle_to_rotate_by;
    tBounds kev_bounds;
    tFace_ref the_list[10];
    tFace_ref *face_ref;
    LOG_TRACE("(%p)", pOil);
    NOT_IMPLEMENTED();
}

// Offset: 2220
// Size: 0x7c
//IDA: void __usercall Vector3Interpolate(br_vector3 *pDst@<EAX>, br_vector3 *pFrom@<EDX>, br_vector3 *pTo@<EBX>, br_scalar pP)
void Vector3Interpolate(br_vector3 *pDst, br_vector3 *pFrom, br_vector3 *pTo, br_scalar pP) {
    LOG_TRACE("(%p, %p, %p, %f)", pDst, pFrom, pTo, pP);
    NOT_IMPLEMENTED();
}

// Offset: 2344
// Size: 0xfc
//IDA: void __usercall EnsureGroundDetailVisible(br_vector3 *pNew_pos@<EAX>, br_vector3 *pGround_normal@<EDX>, br_vector3 *pOld_pos@<EBX>)
void EnsureGroundDetailVisible(br_vector3 *pNew_pos, br_vector3 *pGround_normal, br_vector3 *pOld_pos) {
    br_scalar factor;
    br_scalar s;
    br_scalar dist;
    br_vector3 to_camera;
    LOG_TRACE("(%p, %p, %p)", pNew_pos, pGround_normal, pOld_pos);
    NOT_IMPLEMENTED();
}

// Offset: 2596
// Size: 0x40
//IDA: void __usercall MungeOilsHeightAboveGround(tOil_spill_info *pOil@<EAX>)
void MungeOilsHeightAboveGround(tOil_spill_info *pOil) {
    LOG_TRACE("(%p)", pOil);
    NOT_IMPLEMENTED();
}

// Offset: 2660
// Size: 0x35
//IDA: void __usercall MungeIndexedOilsHeightAboveGround(int pIndex@<EAX>)
void MungeIndexedOilsHeightAboveGround(int pIndex) {
    LOG_TRACE("(%d)", pIndex);
    NOT_IMPLEMENTED();
}

// Offset: 2716
// Size: 0xc1
//IDA: void __usercall SetInitialOilStuff(tOil_spill_info *pOil@<EAX>, br_model *pModel@<EDX>)
void SetInitialOilStuff(tOil_spill_info *pOil, br_model *pModel) {
    LOG_TRACE("(%p, %p)", pOil, pModel);
    NOT_IMPLEMENTED();
}

// Offset: 2912
// Size: 0x531
//IDA: void __usercall ProcessOilSpills(tU32 pFrame_period@<EAX>)
void ProcessOilSpills(tU32 pFrame_period) {
    int i;
    tU32 time;
    br_model *the_model;
    br_scalar grow_amount;
    br_scalar initial_size;
    br_scalar this_size;
    br_vector3 v;
    tNet_message *message;
    LOG_TRACE("(%d)", pFrame_period);
    NOT_IMPLEMENTED();
}

// Offset: 4244
// Size: 0x2c
//IDA: int __cdecl GetOilSpillCount()
int GetOilSpillCount() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4288
// Size: 0x5d
//IDA: void __usercall GetOilSpillDetails(int pIndex@<EAX>, br_actor **pActor@<EDX>, br_scalar *pSize@<EBX>)
void GetOilSpillDetails(int pIndex, br_actor **pActor, br_scalar *pSize) {
    LOG_TRACE("(%d, %p, %p)", pIndex, pActor, pSize);
    NOT_IMPLEMENTED();
}

// Offset: 4384
// Size: 0x111
//IDA: int __usercall PointInSpill@<EAX>(br_vector3 *pV@<EAX>, int pSpill@<EDX>)
int PointInSpill(br_vector3 *pV, int pSpill) {
    LOG_TRACE("(%p, %d)", pV, pSpill);
    NOT_IMPLEMENTED();
}

// Offset: 4660
// Size: 0x255
//IDA: void __usercall GetOilFrictionFactors(tCar_spec *pCar@<EAX>, br_scalar *pFl_factor@<EDX>, br_scalar *pFr_factor@<EBX>, br_scalar *pRl_factor@<ECX>, br_scalar *pRr_factor)
void GetOilFrictionFactors(tCar_spec *pCar, br_scalar *pFl_factor, br_scalar *pFr_factor, br_scalar *pRl_factor, br_scalar *pRr_factor) {
    int i;
    br_vector3 wheel_world;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pCar, pFl_factor, pFr_factor, pRl_factor, pRr_factor);
    NOT_IMPLEMENTED();
}

// Offset: 5260
// Size: 0xd3
//IDA: void __usercall AdjustOilSpill(int pIndex@<EAX>, br_matrix34 *pMat@<EDX>, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap)
void AdjustOilSpill(int pIndex, br_matrix34 *pMat, br_scalar pFull_size, br_scalar pGrow_rate, tU32 pSpill_time, tU32 pStop_time, tCar_spec *pCar, br_vector3 *pOriginal_pos, br_pixelmap *pPixelmap) {
    LOG_TRACE("(%d, %p, %f, %f, %d, %d, %p, %p, %p)", pIndex, pMat, pFull_size, pGrow_rate, pSpill_time, pStop_time, pCar, pOriginal_pos, pPixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 5472
// Size: 0x152
//IDA: void __usercall ReceivedOilSpill(tNet_contents *pContents@<EAX>)
void ReceivedOilSpill(tNet_contents *pContents) {
    int i;
    int oily_index;
    int oldest_one;
    tU32 the_time;
    tU32 oldest_time;
    tCar_spec *car;
    LOG_TRACE("(%p)", pContents);
    NOT_IMPLEMENTED();
}

