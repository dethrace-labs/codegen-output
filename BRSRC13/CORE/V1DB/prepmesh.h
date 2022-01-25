#ifndef _PREPMESH_H_
#define _PREPMESH_H_

#include "dr_types.h"
#include "br_types.h"

extern int num_edges; // addr: 0001AF30
extern br_model *compareModel; // addr: 00044C30
extern char *pm_edge_scratch; // addr: 00044C34
extern pm_temp_edge **pm_edge_hash; // addr: 00044C38
extern pm_temp_edge *pm_edge_table; // addr: 00044C3C

// Offset: 8
// Size: 0xf6
//IDA: int __usercall addEdge@<EAX>(br_uint_16 first@<EAX>, br_uint_16 last@<EDX>)
int addEdge(br_uint_16 first, br_uint_16 last);

// Offset: 267
// Size: 0x1cd
//IDA: void __usercall prepareEdges(v11group *group@<EAX>, br_model *model@<EDX>)
void prepareEdges(v11group *group, br_model *model);

// Offset: 743
// Size: 0x73
//IDA: void __usercall BrPrepareEdges(br_model *model@<EAX>)
void BrPrepareEdges(br_model *model);

// Offset: 871
// Size: 0x66
//IDA: int __cdecl FacesCompare(void *p1, void *p2)
int FacesCompare(void *p1, void *p2);

// Offset: 987
// Size: 0x10c
//IDA: int __cdecl TVCompare_XYZ(void *p1, void *p2)
int TVCompare_XYZ(void *p1, void *p2);

// Offset: 1273
// Size: 0x262
//IDA: int __cdecl TVCompare_MXYZUVN(void *p1, void *p2)
int TVCompare_MXYZUVN(void *p1, void *p2);

// Offset: 1897
// Size: 0x17f
//IDA: int __cdecl TVCompare_MVN(void *p1, void *p2)
int TVCompare_MVN(void *p1, void *p2);

// Offset: 2304
// Size: 0x58
//IDA: br_fraction __cdecl BrScalarToFractionClamp(br_scalar s)
br_fraction BrScalarToFractionClamp(br_scalar s);

// Offset: 2411
// Size: 0x11c
//IDA: void __usercall PrepareFaceNormals(br_model *model@<EAX>)
void PrepareFaceNormals(br_model *model);

// Offset: 2705
// Size: 0x128
//IDA: void __usercall Smoothing(br_model *model@<EAX>, br_scalar crease_limit, prep_vertex **start, prep_vertex **end)
void Smoothing(br_model *model, br_scalar crease_limit, prep_vertex **start, prep_vertex **end);

// Offset: 3018
// Size: 0x1f4
//IDA: void __usercall SmoothingCreased(br_model *model@<EAX>, br_scalar crease_limit, prep_vertex **start, prep_vertex **end)
void SmoothingCreased(br_model *model, br_scalar crease_limit, prep_vertex **start, prep_vertex **end);

// Offset: 3529
// Size: 0x1df
//IDA: void __usercall CopyVertex(v11group *group@<EAX>, int v@<EDX>, prep_vertex *src@<EBX>, br_model *model@<ECX>)
// Suffix added to avoid duplicate symbol
void CopyVertex__prepmesh(v11group *group, int v, prep_vertex *src, br_model *model);

// Offset: 4017
// Size: 0x125
//IDA: void __usercall CopyFace(v11group *group@<EAX>, int f@<EDX>, br_face *src@<EBX>, br_model *model@<ECX>)
// Suffix added to avoid duplicate symbol
void CopyFace__prepmesh(v11group *group, int f, br_face *src, br_model *model);

// Offset: 4324
// Size: 0x9d4
//IDA: void __usercall PrepareGroups(br_model *model@<EAX>)
void PrepareGroups(br_model *model);

// Offset: 6862
// Size: 0xaa
//IDA: void __usercall PrepareBoundingRadius(br_model *model@<EAX>)
// Suffix added to avoid duplicate symbol
void PrepareBoundingRadius__prepmesh(br_model *model);

// Offset: 7051
// Size: 0x110
//IDA: void __usercall PrepareBoundingBox(br_model *model@<EAX>)
void PrepareBoundingBox(br_model *model);

// Offset: 7345
// Size: 0x10c
//IDA: void __usercall RegenerateFaceNormals(v11model *v11m@<EAX>)
void RegenerateFaceNormals(v11model *v11m);

// Offset: 7637
// Size: 0x2fa
//IDA: void __usercall RegenerateVertexNormals(v11model *v11m@<EAX>)
void RegenerateVertexNormals(v11model *v11m);

// Offset: 8413
// Size: 0x631
//IDA: void __cdecl BrModelUpdate(br_model *model, br_uint_16 flags)
void BrModelUpdate(br_model *model, br_uint_16 flags);

// Offset: 10011
// Size: 0x6d
//IDA: void __usercall BrModelClear(br_model *model@<EAX>)
void BrModelClear(br_model *model);

#endif
