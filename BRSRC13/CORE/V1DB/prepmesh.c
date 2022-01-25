#include "prepmesh.h"

int num_edges;
br_model *compareModel;
char *pm_edge_scratch;
pm_temp_edge **pm_edge_hash;
pm_temp_edge *pm_edge_table;

// Offset: 8
// Size: 0xf6
//IDA: int __usercall addEdge@<EAX>(br_uint_16 first@<EAX>, br_uint_16 last@<EDX>)
int addEdge(br_uint_16 first, br_uint_16 last) {
    pm_temp_edge *tep;
    LOG_TRACE("(%d, %d)", first, last);
    NOT_IMPLEMENTED();
}

// Offset: 267
// Size: 0x1cd
//IDA: void __usercall prepareEdges(v11group *group@<EAX>, br_model *model@<EDX>)
void prepareEdges(v11group *group, br_model *model) {
    br_size_t scratch_size;
    br_face *mfp;
    v11face *fp;
    int f;
    LOG_TRACE("(%p, %p)", group, model);
    NOT_IMPLEMENTED();
}

// Offset: 743
// Size: 0x73
//IDA: void __usercall BrPrepareEdges(br_model *model@<EAX>)
void BrPrepareEdges(br_model *model) {
    int g;
    v11model *v11m;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 871
// Size: 0x66
//IDA: int __cdecl FacesCompare(void *p1, void *p2)
int FacesCompare(void *p1, void *p2) {
    br_face *f1;
    br_face *f2;
    LOG_TRACE("(%p, %p)", p1, p2);
    NOT_IMPLEMENTED();
}

// Offset: 987
// Size: 0x10c
//IDA: int __cdecl TVCompare_XYZ(void *p1, void *p2)
int TVCompare_XYZ(void *p1, void *p2) {
    prep_vertex *tv1;
    prep_vertex *tv2;
    br_vertex *v1;
    br_vertex *v2;
    int i;
    LOG_TRACE("(%p, %p)", p1, p2);
    NOT_IMPLEMENTED();
}

// Offset: 1273
// Size: 0x262
//IDA: int __cdecl TVCompare_MXYZUVN(void *p1, void *p2)
int TVCompare_MXYZUVN(void *p1, void *p2) {
    prep_vertex *tv1;
    prep_vertex *tv2;
    br_vertex *v1;
    br_vertex *v2;
    int i;
    LOG_TRACE("(%p, %p)", p1, p2);
    NOT_IMPLEMENTED();
}

// Offset: 1897
// Size: 0x17f
//IDA: int __cdecl TVCompare_MVN(void *p1, void *p2)
int TVCompare_MVN(void *p1, void *p2) {
    prep_vertex *tv1;
    prep_vertex *tv2;
    int i;
    LOG_TRACE("(%p, %p)", p1, p2);
    NOT_IMPLEMENTED();
}

// Offset: 2304
// Size: 0x58
//IDA: br_fraction __cdecl BrScalarToFractionClamp(br_scalar s)
br_fraction BrScalarToFractionClamp(br_scalar s) {
    LOG_TRACE("(%f)", s);
    NOT_IMPLEMENTED();
}

// Offset: 2411
// Size: 0x11c
//IDA: void __usercall PrepareFaceNormals(br_model *model@<EAX>)
void PrepareFaceNormals(br_model *model) {
    br_vertex *vertices;
    br_vector4 v4;
    br_face *fp;
    int f;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 2705
// Size: 0x128
//IDA: void __usercall Smoothing(br_model *model@<EAX>, br_scalar crease_limit, prep_vertex **start, prep_vertex **end)
void Smoothing(br_model *model, br_scalar crease_limit, prep_vertex **start, prep_vertex **end) {
    prep_vertex **outer;
    prep_vertex **inner;
    LOG_TRACE("(%p, %f, %p, %p)", model, crease_limit, start, end);
    NOT_IMPLEMENTED();
}

// Offset: 3018
// Size: 0x1f4
//IDA: void __usercall SmoothingCreased(br_model *model@<EAX>, br_scalar crease_limit, prep_vertex **start, prep_vertex **end)
void SmoothingCreased(br_model *model, br_scalar crease_limit, prep_vertex **start, prep_vertex **end) {
    br_vector3 o_n;
    prep_vertex **outer;
    prep_vertex **inner;
    LOG_TRACE("(%p, %f, %p, %p)", model, crease_limit, start, end);
    NOT_IMPLEMENTED();
}

// Offset: 3529
// Size: 0x1df
//IDA: void __usercall CopyVertex(v11group *group@<EAX>, int v@<EDX>, prep_vertex *src@<EBX>, br_model *model@<ECX>)
// Suffix added to avoid duplicate symbol
void CopyVertex__prepmesh(v11group *group, int v, prep_vertex *src, br_model *model) {
    br_vertex *srcv;
    br_vector3 n;
    br_scalar __block0___scale;
    LOG_TRACE("(%p, %d, %p, %p)", group, v, src, model);
    NOT_IMPLEMENTED();
}

// Offset: 4017
// Size: 0x125
//IDA: void __usercall CopyFace(v11group *group@<EAX>, int f@<EDX>, br_face *src@<EBX>, br_model *model@<ECX>)
// Suffix added to avoid duplicate symbol
void CopyFace__prepmesh(v11group *group, int f, br_face *src, br_model *model) {
    LOG_TRACE("(%p, %d, %p, %p)", group, f, src, model);
    NOT_IMPLEMENTED();
}

// Offset: 4324
// Size: 0x9d4
//IDA: void __usercall PrepareGroups(br_model *model@<EAX>)
void PrepareGroups(br_model *model) {
    br_qsort_cbfn *vertex_compare_smoothing;
    br_qsort_cbfn *vertex_compare_groups;
    void (*smoothing_fn)(br_model*, br_scalar, prep_vertex**, prep_vertex**);
    void *vp;
    br_size_t block_size;
    prep_vertex *temp_verts;
    prep_vertex *gtvp;
    prep_vertex **sorted_vertices;
    br_face *fp;
    int g;
    int f;
    int v;
    int i;
    int ntemps;
    int count;
    int nf;
    int nv;
    int ng;
    int old_count;
    br_scalar crease_limit;
    v11model *v11m;
    v11group *v11g;
    v11face *v11f;
    fmt_vertex *v11v;
    br_colour *v11fcolours;
    br_colour *v11vcolours;
    br_uint_16 *v11fuser;
    br_uint_16 *v11vuser;
    br_face **sorted_faces;
    char *cp;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 6862
// Size: 0xaa
//IDA: void __usercall PrepareBoundingRadius(br_model *model@<EAX>)
// Suffix added to avoid duplicate symbol
void PrepareBoundingRadius__prepmesh(br_model *model) {
    float d;
    float max;
    int v;
    br_vertex *vp;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 7051
// Size: 0x110
//IDA: void __usercall PrepareBoundingBox(br_model *model@<EAX>)
void PrepareBoundingBox(br_model *model) {
    int axis;
    int v;
    br_vertex *vp;
    br_scalar x;
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

// Offset: 7345
// Size: 0x10c
//IDA: void __usercall RegenerateFaceNormals(v11model *v11m@<EAX>)
void RegenerateFaceNormals(v11model *v11m) {
    int g;
    int f;
    v11face *fp;
    LOG_TRACE("(%p)", v11m);
    NOT_IMPLEMENTED();
}

// Offset: 7637
// Size: 0x2fa
//IDA: void __usercall RegenerateVertexNormals(v11model *v11m@<EAX>)
void RegenerateVertexNormals(v11model *v11m) {
    int g;
    int v;
    int f;
    v11face *fp;
    fmt_vertex *vp;
    br_vector3 *normals;
    br_scalar __block0___scale;
    LOG_TRACE("(%p)", v11m);
    NOT_IMPLEMENTED();
}

// Offset: 8413
// Size: 0x631
//IDA: void __cdecl BrModelUpdate(br_model *model, br_uint_16 flags)
void BrModelUpdate(br_model *model, br_uint_16 flags) {
    int g;
    int f;
    int v;
    v11model *v11m;
    fmt_vertex *fvp;
    v11face *ffp;
    br_vertex *vp;
    br_face *fp;
    br_error __block0__r;
    br_geometry_stored *__block0__sg;
    br_boolean __block0__b;
    br_token_value __block0__tv[2];
    LOG_TRACE("(%p, %d)", model, flags);
    NOT_IMPLEMENTED();
}

// Offset: 10011
// Size: 0x6d
//IDA: void __usercall BrModelClear(br_model *model@<EAX>)
void BrModelClear(br_model *model) {
    LOG_TRACE("(%p)", model);
    NOT_IMPLEMENTED();
}

