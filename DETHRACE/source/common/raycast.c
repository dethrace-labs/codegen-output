#include "raycast.h"

 // Suffix added to avoid duplicate symbol
br_matrix34 gPick_model_to_view__raycast;
int gBelow_face_index;
br_scalar gCurrent_y;
int gAbove_face_index;
br_model *gAbove_model;
br_model *gBelow_model;
br_scalar gHighest_y_below;
br_actor *gY_picking_camera;
br_scalar gLowest_y_above;

// Offset: 0
// Size: 0xbe
//IDA: int __usercall DRActorToRoot@<EAX>(br_actor *a@<EAX>, br_actor *world@<EDX>, br_matrix34 *m@<EBX>)
int DRActorToRoot(br_actor *a, br_actor *world, br_matrix34 *m) {
    LOG_TRACE("(%p, %p, %p)", a, world, m);
    NOT_IMPLEMENTED();
}

// Offset: 192
// Size: 0xdc
//IDA: void __cdecl InitRayCasting()
void InitRayCasting() {
    br_camera *camera_ptr;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 412
// Size: 0x68
//IDA: int __cdecl BadDiv(br_scalar a, br_scalar b)
// Suffix added to avoid duplicate symbol
int BadDiv__raycast(br_scalar a, br_scalar b) {
    LOG_TRACE("(%f, %f)", a, b);
    NOT_IMPLEMENTED();
}

// Offset: 516
// Size: 0x49
//IDA: void __usercall DRVector2AccumulateScale(br_vector2 *a@<EAX>, br_vector2 *b@<EDX>, br_scalar s)
// Suffix added to avoid duplicate symbol
void DRVector2AccumulateScale__raycast(br_vector2 *a, br_vector2 *b, br_scalar s) {
    LOG_TRACE("(%p, %p, %f)", a, b, s);
    NOT_IMPLEMENTED();
}

// Offset: 592
// Size: 0x220
//IDA: int __usercall PickBoundsTestRay@<EAX>(br_bounds *b@<EAX>, br_vector3 *rp@<EDX>, br_vector3 *rd@<EBX>, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far)
// Suffix added to avoid duplicate symbol
int PickBoundsTestRay__raycast(br_bounds *b, br_vector3 *rp, br_vector3 *rd, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far) {
    int i;
    float s;
    float t;
    LOG_TRACE("(%p, %p, %p, %f, %f, %p, %p)", b, rp, rd, t_near, t_far, new_t_near, new_t_far);
    NOT_IMPLEMENTED();
}

// Offset: 1136
// Size: 0x26b
//IDA: int __usercall ActorPick2D@<EAX>(br_actor *ap@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, dr_pick2d_cbfn *callback@<ECX>, void *arg)
int ActorPick2D(br_actor *ap, br_model *model, br_material *material, dr_pick2d_cbfn *callback, void *arg) {
    br_actor *a;
    br_model *this_model;
    br_material *this_material;
    br_matrix34 m_to_v;
    br_matrix34 v_to_m;
    br_scalar t_near;
    br_scalar t_far;
    int r;
    br_vector3 __block0__dir;
    LOG_TRACE("(%p, %p, %p, %p, %p)", ap, model, material, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 1756
// Size: 0x156
//IDA: int __usercall DRScenePick2DXY@<EAX>(br_actor *world@<EAX>, br_actor *camera@<EDX>, br_pixelmap *viewport@<EBX>, int pick_x@<ECX>, int pick_y, dr_pick2d_cbfn *callback, void *arg)
int DRScenePick2DXY(br_actor *world, br_actor *camera, br_pixelmap *viewport, int pick_x, int pick_y, dr_pick2d_cbfn *callback, void *arg) {
    br_matrix34 camera_tfm;
    br_scalar scale;
    br_scalar cos_angle;
    br_scalar sin_angle;
    br_camera *camera_data;
    br_angle view_over_2;
    LOG_TRACE("(%p, %p, %p, %d, %d, %p, %p)", world, camera, viewport, pick_x, pick_y, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 2100
// Size: 0x10a
//IDA: int __usercall DRScenePick2D@<EAX>(br_actor *world@<EAX>, br_actor *camera@<EDX>, dr_pick2d_cbfn *callback@<EBX>, void *arg@<ECX>)
int DRScenePick2D(br_actor *world, br_actor *camera, dr_pick2d_cbfn *callback, void *arg) {
    br_matrix34 camera_tfm;
    br_scalar scale;
    br_camera *camera_data;
    LOG_TRACE("(%p, %p, %p, %p)", world, camera, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 2368
// Size: 0x6f1
//IDA: int __usercall DRModelPick2D@<EAX>(br_model *model@<EAX>, br_material *material@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg)
// Suffix added to avoid duplicate symbol
int DRModelPick2D__raycast(br_model *model, br_material *material, br_vector3 *ray_pos, br_vector3 *ray_dir, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg) {
    DR_FACE *fp;
    int f;
    int axis_m;
    int axis_0;
    int axis_1;
    int group;
    br_scalar t;
    br_scalar n;
    br_scalar d;
    br_vector3 p;
    double u0;
    double u1;
    double u2;
    double v0;
    double v1;
    double v2;
    br_scalar v0i1;
    br_scalar v0i2;
    double alpha;
    double beta;
    double f_d;
    double f_n;
    br_scalar s_alpha;
    br_scalar s_beta;
    br_vector2 map;
    int v;
    int e;
    int r;
    br_material *this_material;
    br_scalar numerator;
    double f_numerator;
    LOG_TRACE("(%p, %p, %p, %p, %f, %f, %p, %p)", model, material, ray_pos, ray_dir, t_near, t_far, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 4148
// Size: 0x8d
//IDA: int __cdecl FindHighestPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestPolyCallBack__raycast(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg) {
    br_scalar the_y;
    LOG_TRACE("(%p, %p, %p, %p, %f, %d, %d, %d, %p, %p, %p)", pModel, pMaterial, pRay_pos, pRay_dir, pT, pF, pE, pV, pPoint, pMap, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 4292
// Size: 0x70
//IDA: int __cdecl FindHighestCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestCallBack__raycast(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg) {
    LOG_TRACE("(%p, %p, %p, %p, %p, %f, %f, %p)", pActor, pModel, pMaterial, pRay_pos, pRay_dir, pT_near, pT_far, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 4404
// Size: 0xc2
//IDA: void __usercall FindBestY(br_vector3 *pPosition@<EAX>, br_actor *gWorld@<EDX>, br_scalar pStarting_height, br_scalar *pNearest_y_above, br_scalar *pNearest_y_below, br_model **pNearest_above_model, br_model **pNearest_below_model, int *pNearest_above_face_index, int *pNearest_below_face_index)
void FindBestY(br_vector3 *pPosition, br_actor *gWorld, br_scalar pStarting_height, br_scalar *pNearest_y_above, br_scalar *pNearest_y_below, br_model **pNearest_above_model, br_model **pNearest_below_model, int *pNearest_above_face_index, int *pNearest_below_face_index) {
    LOG_TRACE("(%p, %p, %f, %p, %p, %p, %p, %p, %p)", pPosition, gWorld, pStarting_height, pNearest_y_above, pNearest_y_below, pNearest_above_model, pNearest_below_model, pNearest_above_face_index, pNearest_below_face_index);
    NOT_IMPLEMENTED();
}

// Offset: 4600
// Size: 0x66
//IDA: int __cdecl FindYVerticallyBelowPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
int FindYVerticallyBelowPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg) {
    br_scalar the_y;
    LOG_TRACE("(%p, %p, %p, %p, %f, %d, %d, %d, %p, %p, %p)", pModel, pMaterial, pRay_pos, pRay_dir, pT, pF, pE, pV, pPoint, pMap, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 4704
// Size: 0x70
//IDA: int __cdecl FindYVerticallyBelowCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
int FindYVerticallyBelowCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg) {
    LOG_TRACE("(%p, %p, %p, %p, %p, %f, %f, %p)", pActor, pModel, pMaterial, pRay_pos, pRay_dir, pT_near, pT_far, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 4816
// Size: 0x22e
//IDA: br_scalar __usercall FindYVerticallyBelow@<ST0>(br_vector3 *pPosition@<EAX>)
br_scalar FindYVerticallyBelow(br_vector3 *pPosition) {
    tU8 cx;
    tU8 cz;
    tU8 x;
    tU8 z;
    tTrack_spec *track_spec;
    LOG_TRACE("(%p)", pPosition);
    NOT_IMPLEMENTED();
}

// Offset: 5376
// Size: 0x6e
//IDA: br_scalar __usercall FindYVerticallyBelow2@<ST0>(br_vector3 *pCast_point@<EAX>)
br_scalar FindYVerticallyBelow2(br_vector3 *pCast_point) {
    br_scalar result;
    int number_of_attempts;
    br_vector3 cast_point;
    LOG_TRACE("(%p)", pCast_point);
    NOT_IMPLEMENTED();
}

