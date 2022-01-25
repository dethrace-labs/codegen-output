#ifndef _FINTERAY_H_
#define _FINTERAY_H_

#include "dr_types.h"
#include "br_types.h"

extern int gPling_materials; // addr: 0000EF14
extern br_material *gSub_material; // addr: 0000EF18
extern br_material *gReal_material; // addr: 0000EF1C
extern int gNfaces; // addr: 0000EF20
extern br_matrix34 gPick_model_to_view__finteray; // addr: 0002A5D0 // suffix added to avoid duplicate symbol
extern int gTemp_group; // addr: 0002A600
extern br_model *gNearest_model; // addr: 0002A604
extern br_model *gSelected_model; // addr: 0002A608
extern int gNearest_face_group; // addr: 0002A60C
extern int gNearest_face; // addr: 0002A610
extern br_scalar gNearest_T; // addr: 0002A614
extern tFace_ref *gPling_face; // addr: 0002A618

// Offset: 0
// Size: 0x68
//IDA: int __cdecl BadDiv(br_scalar a, br_scalar b)
// Suffix added to avoid duplicate symbol
int BadDiv__finteray(br_scalar a, br_scalar b);

// Offset: 104
// Size: 0x49
//IDA: void __usercall DRVector2AccumulateScale(br_vector2 *a@<EAX>, br_vector2 *b@<EDX>, br_scalar s)
// Suffix added to avoid duplicate symbol
void DRVector2AccumulateScale__finteray(br_vector2 *a, br_vector2 *b, br_scalar s);

// Offset: 180
// Size: 0x228
//IDA: int __usercall PickBoundsTestRay@<EAX>(br_bounds *b@<EAX>, br_vector3 *rp@<EDX>, br_vector3 *rd@<EBX>, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far)
// Suffix added to avoid duplicate symbol
int PickBoundsTestRay__finteray(br_bounds *b, br_vector3 *rp, br_vector3 *rd, br_scalar t_near, br_scalar t_far, br_scalar *new_t_near, br_scalar *new_t_far);

// Offset: 732
// Size: 0x2c6
//IDA: int __usercall ActorRayPick2D@<EAX>(br_actor *ap@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pDir@<EBX>, br_model *model@<ECX>, br_material *material, dr_pick2d_cbfn *callback)
int ActorRayPick2D(br_actor *ap, br_vector3 *pPosition, br_vector3 *pDir, br_model *model, br_material *material, dr_pick2d_cbfn *callback);

// Offset: 1444
// Size: 0x61
//IDA: int __usercall DRSceneRayPick2D@<EAX>(br_actor *world@<EAX>, br_vector3 *pPosition@<EDX>, br_vector3 *pDir@<EBX>, dr_pick2d_cbfn *callback@<ECX>)
int DRSceneRayPick2D(br_actor *world, br_vector3 *pPosition, br_vector3 *pDir, dr_pick2d_cbfn *callback);

// Offset: 1544
// Size: 0x80b
//IDA: int __usercall DRModelPick2D@<EAX>(br_model *model@<EAX>, br_material *material@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg)
// Suffix added to avoid duplicate symbol
int DRModelPick2D__finteray(br_model *model, br_material *material, br_vector3 *ray_pos, br_vector3 *ray_dir, br_scalar t_near, br_scalar t_far, dr_modelpick2d_cbfn *callback, void *arg);

// Offset: 3604
// Size: 0x58
//IDA: int __cdecl FindHighestPolyCallBack(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestPolyCallBack__finteray(br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT, int pF, int pE, int pV, br_vector3 *pPoint, br_vector2 *pMap, void *pArg);

// Offset: 3692
// Size: 0x70
//IDA: int __cdecl FindHighestCallBack(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg)
// Suffix added to avoid duplicate symbol
int FindHighestCallBack__finteray(br_actor *pActor, br_model *pModel, br_material *pMaterial, br_vector3 *pRay_pos, br_vector3 *pRay_dir, br_scalar pT_near, br_scalar pT_far, void *pArg);

// Offset: 3804
// Size: 0xf7
//IDA: void __usercall FindFace(br_vector3 *pPosition@<EAX>, br_vector3 *pDir@<EDX>, br_vector3 *nor@<EBX>, br_scalar *t@<ECX>, br_material **material)
void FindFace(br_vector3 *pPosition, br_vector3 *pDir, br_vector3 *nor, br_scalar *t, br_material **material);

// Offset: 4052
// Size: 0x2c
//IDA: void __cdecl EnablePlingMaterials()
void EnablePlingMaterials();

// Offset: 4096
// Size: 0x2c
//IDA: void __cdecl DisablePlingMaterials()
void DisablePlingMaterials();

// Offset: 4140
// Size: 0x47c
//IDA: void __usercall CheckSingleFace(tFace_ref *pFace@<EAX>, br_vector3 *ray_pos@<EDX>, br_vector3 *ray_dir@<EBX>, br_vector3 *normal@<ECX>, br_scalar *rt)
void CheckSingleFace(tFace_ref *pFace, br_vector3 *ray_pos, br_vector3 *ray_dir, br_vector3 *normal, br_scalar *rt);

// Offset: 5288
// Size: 0x5ef
//IDA: void __usercall MultiRayCheckSingleFace(int pNum_rays@<EAX>, tFace_ref *pFace@<EDX>, br_vector3 *ray_pos@<EBX>, br_vector3 *ray_dir@<ECX>, br_vector3 *normal, br_scalar *rt)
void MultiRayCheckSingleFace(int pNum_rays, tFace_ref *pFace, br_vector3 *ray_pos, br_vector3 *ray_dir, br_vector3 *normal, br_scalar *rt);

// Offset: 6808
// Size: 0x296
//IDA: void __usercall GetNewBoundingBox(br_bounds *b2@<EAX>, br_bounds *b1@<EDX>, br_matrix34 *m@<EBX>)
void GetNewBoundingBox(br_bounds *b2, br_bounds *b1, br_matrix34 *m);

// Offset: 7472
// Size: 0x5d5
//IDA: int __usercall FindFacesInBox@<EAX>(tBounds *bnds@<EAX>, tFace_ref *face_list@<EDX>, int max_face@<EBX>)
int FindFacesInBox(tBounds *bnds, tFace_ref *face_list, int max_face);

// Offset: 8968
// Size: 0x3b1
//IDA: int __usercall FindFacesInBox2@<EAX>(tBounds *bnds@<EAX>, tFace_ref *face_list@<EDX>, int max_face@<EBX>)
int FindFacesInBox2(tBounds *bnds, tFace_ref *face_list, int max_face);

// Offset: 9916
// Size: 0x3e9
//IDA: int __usercall ActorBoxPick@<EAX>(tBounds *bnds@<EAX>, br_actor *ap@<EDX>, br_model *model@<EBX>, br_material *material@<ECX>, tFace_ref *face_list, int max_face, br_matrix34 *pMat)
int ActorBoxPick(tBounds *bnds, br_actor *ap, br_model *model, br_material *material, tFace_ref *face_list, int max_face, br_matrix34 *pMat);

// Offset: 10920
// Size: 0xaf3
//IDA: int __usercall ModelPickBox@<EAX>(br_actor *actor@<EAX>, tBounds *bnds@<EDX>, br_model *model@<EBX>, br_material *model_material@<ECX>, tFace_ref *face_list, int max_face, br_matrix34 *pMat)
int ModelPickBox(br_actor *actor, tBounds *bnds, br_model *model, br_material *model_material, tFace_ref *face_list, int max_face, br_matrix34 *pMat);

// Offset: 13724
// Size: 0x265
//IDA: void __usercall ClipToPlaneGE(br_vector3 *p@<EAX>, int *nv@<EDX>, int i@<EBX>, br_scalar limit)
void ClipToPlaneGE(br_vector3 *p, int *nv, int i, br_scalar limit);

// Offset: 14340
// Size: 0x265
//IDA: void __usercall ClipToPlaneLE(br_vector3 *p@<EAX>, int *nv@<EDX>, int i@<EBX>, br_scalar limit)
void ClipToPlaneLE(br_vector3 *p, int *nv, int i, br_scalar limit);

// Offset: 14956
// Size: 0xa5
//IDA: int __usercall BoundsOverlapTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>)
// Suffix added to avoid duplicate symbol
int BoundsOverlapTest__finteray(br_bounds *b1, br_bounds *b2);

// Offset: 15124
// Size: 0x48c
//IDA: int __usercall BoundsTransformTest@<EAX>(br_bounds *b1@<EAX>, br_bounds *b2@<EDX>, br_matrix34 *M@<EBX>)
int BoundsTransformTest(br_bounds *b1, br_bounds *b2, br_matrix34 *M);

// Offset: 16288
// Size: 0x2f5
//IDA: int __usercall LineBoxColl@<EAX>(br_vector3 *o@<EAX>, br_vector3 *p@<EDX>, br_bounds *pB@<EBX>, br_vector3 *pHit_point@<ECX>)
int LineBoxColl(br_vector3 *o, br_vector3 *p, br_bounds *pB, br_vector3 *pHit_point);

// Offset: 17048
// Size: 0x12a
//IDA: int __usercall SphereBoxIntersection@<EAX>(br_bounds *pB@<EAX>, br_vector3 *pC@<EDX>, br_scalar pR_squared, br_vector3 *pHit_point)
int SphereBoxIntersection(br_bounds *pB, br_vector3 *pC, br_scalar pR_squared, br_vector3 *pHit_point);

// Offset: 17348
// Size: 0x128
//IDA: int __usercall LineBoxCollWithSphere@<EAX>(br_vector3 *o@<EAX>, br_vector3 *p@<EDX>, br_bounds *pB@<EBX>, br_vector3 *pHit_point@<ECX>)
int LineBoxCollWithSphere(br_vector3 *o, br_vector3 *p, br_bounds *pB, br_vector3 *pHit_point);

// Offset: 17644
// Size: 0x116
//IDA: int __usercall CompVert@<EAX>(int v1@<EAX>, int v2@<EDX>)
int CompVert(int v1, int v2);

// Offset: 17924
// Size: 0x131
//IDA: void __usercall SetFacesGroup(int pFace@<EAX>)
void SetFacesGroup(int pFace);

// Offset: 18232
// Size: 0x1cf
//IDA: void __usercall SelectFace(br_vector3 *pDir@<EAX>)
void SelectFace(br_vector3 *pDir);

// Offset: 18696
// Size: 0x1c0
//IDA: void __usercall GetTilingLimits(br_vector2 *min@<EAX>, br_vector2 *max@<EDX>)
void GetTilingLimits(br_vector2 *min, br_vector2 *max);

// Offset: 19144
// Size: 0x17b
//IDA: void __usercall Scale(int pD@<EAX>, int factor@<EDX>)
void Scale(int pD, int factor);

// Offset: 19524
// Size: 0x2e
//IDA: void __cdecl ScaleUpX()
void ScaleUpX();

// Offset: 19572
// Size: 0x2e
//IDA: void __cdecl ScaleDnX()
void ScaleDnX();

// Offset: 19620
// Size: 0x31
//IDA: void __cdecl ScaleUpY()
void ScaleUpY();

// Offset: 19672
// Size: 0x31
//IDA: void __cdecl ScaleDnY()
void ScaleDnY();

// Offset: 19724
// Size: 0x5d
//IDA: void __cdecl SelectFaceForward()
void SelectFaceForward();

// Offset: 19820
// Size: 0x5d
//IDA: void __cdecl SelectFaceDown()
void SelectFaceDown();

#endif
