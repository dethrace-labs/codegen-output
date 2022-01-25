#ifndef _RENDER_H_
#define _RENDER_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 16
// Size: 0x3ed
//IDA: void __cdecl BrDbModelRender(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen, int use_custom)
void BrDbModelRender(br_actor *actor, br_model *model, br_material *material, void *render_data, br_uint_8 style, int on_screen, int use_custom);

// Offset: 1037
// Size: 0x64
//IDA: br_uint_32 __cdecl BrOnScreenCheck(br_bounds3 *bounds)
br_uint_32 BrOnScreenCheck(br_bounds3 *bounds);

// Offset: 1159
// Size: 0x105
//IDA: br_uint_16 __usercall prependActorTransform@<AX>(br_actor *ap@<EAX>, br_uint_16 t@<EDX>)
br_uint_16 prependActorTransform(br_actor *ap, br_uint_16 t);

// Offset: 1434
// Size: 0xc4
//IDA: br_uint_16 __usercall prependMatrix@<AX>(br_matrix34 *mat@<EAX>, br_uint_16 mat_t@<EDX>, br_uint_16 t@<EBX>)
br_uint_16 prependMatrix(br_matrix34 *mat, br_uint_16 mat_t, br_uint_16 t);

// Offset: 1642
// Size: 0x3f1
//IDA: void __usercall actorRender(br_actor *ap@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, br_uint_16 t)
void actorRender(br_actor *ap, br_model *model, br_material *material, void *render_data, br_uint_8 style, br_uint_16 t);

// Offset: 2671
// Size: 0x20a
//IDA: void __usercall actorRenderOnScreen(br_actor *ap@<EAX>, br_model *model@<EDX>, br_material *material@<EBX>, void *render_data@<ECX>, br_uint_8 style, br_uint_16 t)
void actorRenderOnScreen(br_actor *ap, br_model *model, br_material *material, void *render_data, br_uint_8 style, br_uint_16 t);

// Offset: 3210
// Size: 0xc6
//IDA: void __usercall sceneRenderWorld(br_actor *world@<EAX>)
void sceneRenderWorld(br_actor *world);

// Offset: 3423
// Size: 0x20a
//IDA: void __usercall sceneRenderAdd(br_actor *tree@<EAX>)
void sceneRenderAdd(br_actor *tree);

// Offset: 3966
// Size: 0x320
//IDA: void __cdecl BrDbSceneRenderBegin(br_actor *world, br_actor *camera)
void BrDbSceneRenderBegin(br_actor *world, br_actor *camera);

// Offset: 4794
// Size: 0xa0
//IDA: br_renderbounds_cbfn* __cdecl BrDbSetRenderBoundsCallback(br_renderbounds_cbfn *new_cbfn)
br_renderbounds_cbfn* BrDbSetRenderBoundsCallback(br_renderbounds_cbfn *new_cbfn);

// Offset: 4964
// Size: 0x158
//IDA: void __usercall SetOrigin(br_pixelmap *buffer@<EAX>)
void SetOrigin(br_pixelmap *buffer);

// Offset: 5320
// Size: 0xe9
//IDA: void __usercall SetViewport(br_pixelmap *buffer@<EAX>)
void SetViewport(br_pixelmap *buffer);

// Offset: 5574
// Size: 0x189
//IDA: void __cdecl BrZbSceneRenderBegin(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer, br_pixelmap *depth_buffer)
void BrZbSceneRenderBegin(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer, br_pixelmap *depth_buffer);

// Offset: 5986
// Size: 0x67
//IDA: void __cdecl BrZbSceneRenderAdd(br_actor *tree)
void BrZbSceneRenderAdd(br_actor *tree);

// Offset: 6108
// Size: 0x6c
//IDA: void __cdecl BrZbSceneRenderEnd()
void BrZbSceneRenderEnd();

// Offset: 6232
// Size: 0xea
//IDA: void __cdecl BrZbSceneRender(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer, br_pixelmap *depth_buffer)
void BrZbSceneRender(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer, br_pixelmap *depth_buffer);

// Offset: 6487
// Size: 0x1fb
//IDA: void __cdecl BrZsSceneRenderBegin(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer)
void BrZsSceneRenderBegin(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer);

// Offset: 7013
// Size: 0x67
//IDA: void __cdecl BrZsSceneRenderAdd(br_actor *tree)
void BrZsSceneRenderAdd(br_actor *tree);

// Offset: 7135
// Size: 0xbd
//IDA: void __cdecl BrZsSceneRenderEnd()
void BrZsSceneRenderEnd();

// Offset: 7340
// Size: 0xc7
//IDA: void __cdecl BrZsSceneRender(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer)
void BrZsSceneRender(br_actor *world, br_actor *camera, br_pixelmap *colour_buffer);

// Offset: 7564
// Size: 0x37
//IDA: br_primitive_cbfn* __cdecl BrZsPrimitiveCallbackSet(br_primitive_cbfn *new_cbfn)
br_primitive_cbfn* BrZsPrimitiveCallbackSet(br_primitive_cbfn *new_cbfn);

// Offset: 7635
// Size: 0x9f
//IDA: void __cdecl BrZbModelRender(br_actor *actor, br_model *model, br_material *material, br_uint_8 style, int on_screen, int use_custom)
void BrZbModelRender(br_actor *actor, br_model *model, br_material *material, br_uint_8 style, int on_screen, int use_custom);

// Offset: 7810
// Size: 0xc0
//IDA: void __cdecl BrZsModelRender(br_actor *actor, br_model *model, br_material *material, br_order_table *order_table, br_uint_8 style, int on_screen, int use_custom)
void BrZsModelRender(br_actor *actor, br_model *model, br_material *material, br_order_table *order_table, br_uint_8 style, int on_screen, int use_custom);

// Offset: 8030
// Size: 0x6f
//IDA: br_renderbounds_cbfn* __cdecl BrZbRenderBoundsCallbackSet(br_renderbounds_cbfn *new_cbfn)
br_renderbounds_cbfn* BrZbRenderBoundsCallbackSet(br_renderbounds_cbfn *new_cbfn);

// Offset: 8169
// Size: 0x6f
//IDA: br_renderbounds_cbfn* __cdecl BrZsRenderBoundsCallbackSet(br_renderbounds_cbfn *new_cbfn)
br_renderbounds_cbfn* BrZsRenderBoundsCallbackSet(br_renderbounds_cbfn *new_cbfn);

#endif
