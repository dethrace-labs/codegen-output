#include "modrend.h"

fmt_vertex bounds_vertices[8];
v11face bounds_faces[12];
v11group bounds_face_groups[1];
v11model bounds_prepared;
br_model bounds_model;
void (*RenderStyleCalls[8])(br_actor*, br_model*, br_material*, void*, br_uint_8, int);
br_colour bounds_colours[12];

// Offset: 12
// Size: 0xe2
//IDA: void __usercall renderFaces(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderFaces(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 250
// Size: 0x8f
//IDA: void __usercall renderEdges(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderEdges(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 406
// Size: 0x8f
//IDA: void __usercall renderPoints(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void renderPoints(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 560
// Size: 0x2a
//IDA: void __usercall nullRender(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void nullRender(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 621
// Size: 0x1d3
//IDA: br_model* __usercall makeMeshFromBounds@<EAX>(br_bounds *b@<EAX>)
br_model* makeMeshFromBounds(br_bounds *b) {
    int i;
    LOG_TRACE("(%p)", b);
    NOT_IMPLEMENTED();
}

// Offset: 1112
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderPoints(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderPoints(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 1214
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderEdges(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderEdges(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

// Offset: 1316
// Size: 0x4f
//IDA: void __usercall boundingBoxRenderFaces(br_actor *actor@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, int on_screen)
void boundingBoxRenderFaces(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen) {
    LOG_TRACE("(%p, %p, %p, %p, %d, %d)", actor, model, material, render_data, style, on_screen);
    NOT_IMPLEMENTED();
}

