#include "finteray.h"

int gPling_materials;
br_material *gSub_material;
br_material *gReal_material;
int gNfaces;
 // Suffix added to avoid duplicate symbol
br_matrix34 gPick_model_to_view__finteray;
int gTemp_group;
br_model *gNearest_model;
br_model *gSelected_model;
int gNearest_face_group;
int gNearest_face;
br_scalar gNearest_T;
tFace_ref *gPling_face;

// Offset: 0
// Size: 0x68
//IDA: int __cdecl BadDiv(br_scalar a, br_scalar b)
// Suffix added to avoid duplicate symbol
int BadDiv__finteray(br_scalar a, br_scalar b) {
    LOG_TRACE("(%f, %f)", a, b);
    NOT_IMPLEMENTED();
}

// Offset: 104
// Size: 0x49
//IDA: void __usercall DRVector2AccumulateScale(br_vector2 *a@<EAX>, br_vector2 *b@<EDX>, br_scalar s)
// Suffix added to avoid duplicate symbol
void DRVector2AccumulateScale__finteray(br_vector2 *a, br_vector2 *b, br_scalar s) {
    LOG_TRACE("(%p, %p, %f)", a, b, s);
    NOT_IMPLEMENTED();
}

// Offset: 180
// Size: 0x228
//IDA: int __usercall PickBoundsTestRay@<EAX>(br_bounds *b@<EAX>, br_vector3 *rp@<EDX>, br_vector3 *rd@<EBX>, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far)
// Suffix added to avoid duplicate symbol
int PickBoundsTestRay__finteray(br_bounds *b, br_vector3 *rp, br_vector3 *rd, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far) {
    int i;
    float s;
    float t;
    LOG_TRACE("(%p, %p, %p, %f, %f, %p, %p)", b, rp, rd, t_near, t_far, new_t_near, new_t_far);
    NOT_IMPLEMENTED();
}

// Offset: 732
// Size: 0x2c6
//IDA: int __usercall ActorRayPick2D@<EAX>(br_actor *ap@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pDir@<EBX>, br_model *model@<ECX>, br_material *material, dr_pick2d_cbfn *callback)
int ActorRayPick2D(br_actor *ap, br_vector3 *pPosition, br_vector3 *pDir, br_model *model, br_material *material, dr_pick2d_cbfn *callback) {
    br_actor *a;
    br_model *this_model;
    br_material *this_material;
    br_scalar t_near;
    br_scalar t_far;
    int r;
    br_matrix34 mat;
    br_matrix34 invmat;
    br_vector3 pos;
    br_vector3 dir;
    void *arg;
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", ap, pPosition, pDir, model, material, callback);
    NOT_IMPLEMENTED();
}

// Offset: 1444
// Size: 0x61
//IDA: int __usercall DRSceneRayPick2D@<EAX>(br_actor *world@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pDir@<EBX>, dr_pick2d_cbfn *callback@<ECX>)
int DRSceneRayPick2D(br_actor *world, br_vector3 *pPosition, br_vector3 *pDir, dr_pick2d_cbfn *callback) {
    LOG_TRACE("(%p, %p, %p, %p)", world, pPosition, pDir, callback);
    NOT_IMPLEMENTED();
}

// Offset: 1544
// Size: 0x80b
//IDA: int __usercall DRModelPick2D@<EAX>(br_model *model@<EAX>, br_material *material@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg)
// Suffix added to avoid duplicate symbol
int DRModelPick2D__finteray(br_model *model, br_material *material, br_vector3 *ray_pos, br_vector3 *ray_dir, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg) {
    DR_FACE *fp;
    int f;
    int axis_m;
    int axis_0;
    int axis_1;
    br_scalar t;
    br_scalar n;
    br_scalar d;
    br_vector3 p;
    float u0;
    float u1;
    float u2;
    float v0;
    float v1;
    float v2;
    br_scalar v0i1;
    br_scalar v0i2;
    float alpha;
    float beta;
    float f_d;
    float f_n;
    br_scalar s_alpha;
    br_scalar s_beta;
    br_vector2 map;
    int v;
    int e;
    int r;
    br_material *this_material;
    br_scalar numerator;
    float f_numerator;
    int group;
    LOG_TRACE("(%p, %p, %p, %p, %f, %f, %p, %p)", model, material, ray_pos, ray_dir, t_near, t_far, callback, arg);
    NOT_IMPLEMENTED();
}

// Offset: 3604
// Size: 0x58
//IDA: int __cdecl FindHighestPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestPolyCallBack__finteray(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg) {
    LOG_TRACE("(%p, %p, %p, %p, %f, %d, %d, %d, %p, %p, %p)", pModel, pMaterial, pRay_pos, pRay_dir, pT, pF, pE, pV, pPoint, pMap, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 3692
// Size: 0x70
//IDA: int __cdecl FindHighestCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestCallBack__finteray(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg) {
    LOG_TRACE("(%p, %p, %p, %p, %p, %f, %f, %p)", pActor, pModel, pMaterial, pRay_pos, pRay_dir, pT_near, pT_far, pArg);
    NOT_IMPLEMENTED();
}

// Offset: 3804
// Size: 0xf7
//IDA: void __usercall FindFace(br_vector3 *pPosition@<EAX>, br_vector3 *pDir@<EDX>, br_vector3 *nor@<EBX>, br_scalar *t@<ECX>, br_material **material)
void FindFace(br_vector3 *pPosition, br_vector3 *pDir, br_vector3 *nor, br_scalar *t, br_material **material) {
    int group;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pPosition, pDir, nor, t, material);
    NOT_IMPLEMENTED();
}

// Offset: 4052
// Size: 0x2c
//IDA: void __cdecl EnablePlingMaterials()
void EnablePlingMaterials() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4096
// Size: 0x2c
//IDA: void __cdecl DisablePlingMaterials()
void DisablePlingMaterials() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 4140
// Size: 0x47c
//IDA: void __usercall CheckSingleFace(tFace_ref *pFace@<EAX>, br_vector3 *ray_pos@<EDX>, br_vector3 *ray_dir@<EBX>, br_vector3 *normal@<ECX>, br_scalar *rt)
void CheckSingleFace(tFace_ref *pFace, br_vector3 *ray_pos, br_vector3 *ray_dir, br_vector3 *normal, br_scalar *rt) {
    br_scalar t;
    br_scalar numerator;
    br_scalar d;
    br_vector3 p;
    br_vector3 tv;
    int axis_m;
    int axis_0;
    int axis_1;
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
    double f_numerator;
    br_material *this_material;
    LOG_TRACE("(%p, %p, %p, %p, %p)", pFace, ray_pos, ray_dir, normal, rt);
    NOT_IMPLEMENTED();
}

// Offset: 5288
// Size: 0x5ef
//IDA: void __usercall MultiRayCheckSingleFace(int pNum_rays@<EAX>, tFace_ref *pFace@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_vector3 *normal, br_scalar *rt)
void MultiRayCheckSingleFace(int pNum_rays, tFace_ref *pFace, br_vector3 *ray_pos, br_vector3 *ray_dir, br_vector3 *normal, br_scalar *rt) {
    int i;
    br_scalar t[4];
    br_scalar numerator;
    br_scalar d;
    br_vector3 p[4];
    br_vector3 tv;
    int axis_m;
    int axis_0;
    int axis_1;
    double u0[4];
    double u1;
    double u2;
    double v0[4];
    double v1;
    double v2;
    br_scalar v0i1;
    br_scalar v0i2;
    double alpha;
    double beta;
    double f_d;
    double f_n;
    double f_numerator;
    br_material *this_material;
    LOG_TRACE("(%d, %p, %p, %p, %p, %p)", pNum_rays, pFace, ray_pos, ray_dir, normal, rt);
    NOT_IMPLEMENTED();
}

// Offset: 6808
// Size: 0x296
//IDA: void __usercall GetNewBoundingBox(br_bounds *b2@<EAX>, br_bounds *b1@<EDX>, br_matrix34 *m@<EBX>)
void GetNewBoundingBox(br_bounds *b2, br_bounds *b1, br_matrix34 *m) {
    br_vector3 a;
    br_vector3 c[3];
    int j;
    LOG_TRACE("(%p, %p, %p)", b2, b1, m);
    NOT_IMPLEMENTED();
}

// Offset: 7472
// Size: 0x5d5
//IDA: int __usercall FindFacesInBox@<EAX>(tBounds *bnds@<EAX>, tFace_ref *face_list@<EDX>, int max_face@<EBX>)
int FindFacesInBox(tBounds *bnds, tFace_ref *face_list, int max_face) {
    br_vector3 a;
    br_vector3 b;
    br_vector3 c[3];
    int i;
    int j;
    int x;
    int z;
    tU8 cx_min;
    tU8 cx_max;
    tU8 cz_min;
    tU8 cz_max;
    tTrack_spec *track_spec;
    LOG_TRACE("(%p, %p, %d)", bnds, face_list, max_face);
    NOT_IMPLEMENTED();
}

// Offset: 8968
// Size: 0x3b1
//IDA: int __usercall FindFacesInBox2@<EAX>(tBounds *bnds@<EAX>, tFace_ref *face_list@<EDX>, int max_face@<EBX>)
int FindFacesInBox2(tBounds *bnds, tFace_ref *face_list, int max_face) {
    br_vector3 a;
    br_vector3 b;
    br_vector3 c[3];
    int i;
    int j;
    LOG_TRACE("(%p, %p, %d)", bnds, face_list, max_face);
    NOT_IMPLEMENTED();
}

// Offset: 9916
// Size: 0x3e9
//IDA: int __usercall ActorBoxPick@<EAX>(tBounds *bnds@<EAX>, br_actor *ap@<EDX>, br_model *model@<EBX>, br_material *material@<ECX>, tFace_ref *face_list, int max_face, br_matrix34 *pMat)
int ActorBoxPick(tBounds *bnds, br_actor *ap, br_model *model, br_material *material, tFace_ref *face_list, int max_face, br_matrix34 *pMat) {
    br_model *this_model;
    br_material *this_material;
    int i;
    int n;
    int test_children;
    br_actor *a;
    br_actor *next_a;
    br_matrix34 mat;
    br_matrix34 mat2;
    br_matrix34 invmat;
    br_matrix34 box_to_actor;
    tBounds new_bounds;
    br_bounds br_bnds;
    LOG_TRACE("(%p, %p, %p, %p, %p, %d, %p)", bnds, ap, model, material, face_list, max_face, pMat);
    NOT_IMPLEMENTED();
}

// Offset: 10920
// Size: 0xaf3
//IDA: int __usercall ModelPickBox@<EAX>(br_actor *actor@<EAX>, tBounds *bnds@<EDX>, br_model *model@<EBX>, br_material *model_material@<ECX>, tFace_ref *face_list, int max_face, br_matrix34 *pMat)
int ModelPickBox(br_actor *actor, tBounds *bnds, br_model *model, br_material *model_material, tFace_ref *face_list, int max_face, br_matrix34 *pMat) {
    int f;
    int i;
    int n;
    int group;
    DR_FACE *fp;
    int v1;
    int v2;
    int v3;
    br_vector3 polygon[12];
    br_vector3 a;
    br_vector3 tv;
    br_scalar t;
    v11model *prepared;
    LOG_TRACE("(%p, %p, %p, %p, %p, %d, %p)", actor, bnds, model, model_material, face_list, max_face, pMat);
    NOT_IMPLEMENTED();
}

// Offset: 13724
// Size: 0x265
//IDA: void __usercall ClipToPlaneGE(br_vector3 *p@<EAX>, int *nv@<EDX>, int i@<EBX>, br_scalar limit)
void ClipToPlaneGE(br_vector3 *p, int *nv, int i, br_scalar limit) {
    int last_vertex;
    int j;
    int vertex;
    int k;
    br_vector3 p2[12];
    LOG_TRACE("(%p, %p, %d, %f)", p, nv, i, limit);
    NOT_IMPLEMENTED();
}

// Offset: 14340
// Size: 0x265
//IDA: void __usercall ClipToPlaneLE(br_vector3 *p@<EAX>, int *nv@<EDX>, int i@<EBX>, br_scalar limit)
void ClipToPlaneLE(br_vector3 *p, int *nv, int i, br_scalar limit) {
    int last_vertex;
    int j;
    int vertex;
    int k;
    br_vector3 p2[12];
    LOG_TRACE("(%p, %p, %d, %f)", p, nv, i, limit);
    NOT_IMPLEMENTED();
}

// Offset: 14956
// Size: 0xa5
//IDA: int __usercall BoundsOverlapTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>)
// Suffix added to avoid duplicate symbol
int BoundsOverlapTest__finteray(br_bounds *b1, br_bounds *b2) {
    LOG_TRACE("(%p, %p)", b1, b2);
    NOT_IMPLEMENTED();
}

// Offset: 15124
// Size: 0x48c
//IDA: int __usercall BoundsTransformTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>, br_matrix34 *M@<EBX>)
int BoundsTransformTest(br_bounds *b1, br_bounds *b2, br_matrix34 *M) {
    br_scalar val;
    br_vector3 o;
    LOG_TRACE("(%p, %p, %p)", b1, b2, M);
    NOT_IMPLEMENTED();
}

// Offset: 16288
// Size: 0x2f5
//IDA: int __usercall LineBoxColl@<EAX>(br_vector3 *o@<EAX>, br_vector3 *p@<EDX>, br_bounds *pB@<EBX>, br_vector3 *pHit_point@<ECX>)
int LineBoxColl(br_vector3 *o, br_vector3 *p, br_bounds *pB, br_vector3 *pHit_point) {
    br_vector3 dir;
    int inside;
    int quad[3];
    int i;
    int which_plane;
    br_scalar max_t[3];
    br_scalar cp[3];
    LOG_TRACE("(%p, %p, %p, %p)", o, p, pB, pHit_point);
    NOT_IMPLEMENTED();
}

// Offset: 17048
// Size: 0x12a
//IDA: int __usercall SphereBoxIntersection@<EAX>(br_bounds *pB@<EAX>, br_vector3 *pC@<EDX>, br_scalar pR_squared, br_vector3 *pHit_point)
int SphereBoxIntersection(br_bounds *pB, br_vector3 *pC, br_scalar pR_squared, br_vector3 *pHit_point) {
    int i;
    br_scalar d;
    LOG_TRACE("(%p, %p, %f, %p)", pB, pC, pR_squared, pHit_point);
    NOT_IMPLEMENTED();
}

// Offset: 17348
// Size: 0x128
//IDA: int __usercall LineBoxCollWithSphere@<EAX>(br_vector3 *o@<EAX>, br_vector3 *p@<EDX>, br_bounds *pB@<EBX>, br_vector3 *pHit_point@<ECX>)
int LineBoxCollWithSphere(br_vector3 *o, br_vector3 *p, br_bounds *pB, br_vector3 *pHit_point) {
    int i;
    int plane;
    LOG_TRACE("(%p, %p, %p, %p)", o, p, pB, pHit_point);
    NOT_IMPLEMENTED();
}

// Offset: 17644
// Size: 0x116
//IDA: int __usercall CompVert@<EAX>(int v1@<EAX>, int v2@<EDX>)
int CompVert(int v1, int v2) {
    br_vertex *vl;
    br_vector3 tv;
    br_vector2 tv2;
    LOG_TRACE("(%d, %d)", v1, v2);
    NOT_IMPLEMENTED();
}

// Offset: 17924
// Size: 0x131
//IDA: void __usercall SetFacesGroup(int pFace@<EAX>)
void SetFacesGroup(int pFace) {
    int f;
    int v;
    int i;
    LOG_TRACE("(%d)", pFace);
    NOT_IMPLEMENTED();
}

// Offset: 18232
// Size: 0x1cf
//IDA: void __usercall SelectFace(br_vector3 *pDir@<EAX>)
void SelectFace(br_vector3 *pDir) {
    tCar_spec *c;
    br_vector3 dir;
    br_vector3 normal;
    br_scalar t;
    br_model *old_model;
    int i;
    LOG_TRACE("(%p)", pDir);
    NOT_IMPLEMENTED();
}

// Offset: 18696
// Size: 0x1c0
//IDA: void __usercall GetTilingLimits(br_vector2 *min@<EAX>, br_vector2 *max@<EDX>)
void GetTilingLimits(br_vector2 *min, br_vector2 *max) {
    int f;
    int i;
    int j;
    br_vertex *verts;
    br_face *faces;
    LOG_TRACE("(%p, %p)", min, max);
    NOT_IMPLEMENTED();
}

// Offset: 19144
// Size: 0x17b
//IDA: void __usercall Scale(int pD@<EAX>, int factor@<EDX>)
void Scale(int pD, int factor) {
    br_vector2 min;
    br_vector2 max;
    int f;
    int v;
    br_scalar d;
    br_vertex *verts;
    br_face *faces;
    LOG_TRACE("(%d, %d)", pD, factor);
    NOT_IMPLEMENTED();
}

// Offset: 19524
// Size: 0x2e
//IDA: void __cdecl ScaleUpX()
void ScaleUpX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19572
// Size: 0x2e
//IDA: void __cdecl ScaleDnX()
void ScaleDnX() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19620
// Size: 0x31
//IDA: void __cdecl ScaleUpY()
void ScaleUpY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19672
// Size: 0x31
//IDA: void __cdecl ScaleDnY()
void ScaleDnY() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19724
// Size: 0x5d
//IDA: void __cdecl SelectFaceForward()
void SelectFaceForward() {
    br_vector3 dir;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 19820
// Size: 0x5d
//IDA: void __cdecl SelectFaceDown()
void SelectFaceDown() {
    br_vector3 dir;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

