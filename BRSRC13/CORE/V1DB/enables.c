#include "enables.h"


// Offset: 12
// Size: 0x127
//IDA: void __usercall actorEnable(br_v1db_enable *e@<EAX>, br_actor *a@<EDX>)
void actorEnable(br_v1db_enable *e, br_actor *a) {
    int i;
    LOG_TRACE("(%p, %p)", e, a);
    NOT_IMPLEMENTED();
}

// Offset: 320
// Size: 0xbf
//IDA: void __usercall actorDisable(br_v1db_enable *e@<EAX>, br_actor *a@<EDX>)
void actorDisable(br_v1db_enable *e, br_actor *a) {
    int i;
    LOG_TRACE("(%p, %p)", e, a);
    NOT_IMPLEMENTED();
}

// Offset: 525
// Size: 0x47
//IDA: void __cdecl BrLightEnable(br_actor *l)
void BrLightEnable(br_actor *l) {
    LOG_TRACE("(%p)", l);
    NOT_IMPLEMENTED();
}

// Offset: 611
// Size: 0x47
//IDA: void __cdecl BrLightDisable(br_actor *l)
void BrLightDisable(br_actor *l) {
    LOG_TRACE("(%p)", l);
    NOT_IMPLEMENTED();
}

// Offset: 700
// Size: 0x47
//IDA: void __cdecl BrClipPlaneEnable(br_actor *c)
void BrClipPlaneEnable(br_actor *c) {
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 790
// Size: 0x47
//IDA: void __cdecl BrClipPlaneDisable(br_actor *c)
void BrClipPlaneDisable(br_actor *c) {
    LOG_TRACE("(%p)", c);
    NOT_IMPLEMENTED();
}

// Offset: 882
// Size: 0x47
//IDA: void __cdecl BrHorizonPlaneEnable(br_actor *h)
void BrHorizonPlaneEnable(br_actor *h) {
    LOG_TRACE("(%p)", h);
    NOT_IMPLEMENTED();
}

// Offset: 975
// Size: 0x4a
//IDA: void __cdecl BrHorizonPlaneDisable(br_actor *h)
void BrHorizonPlaneDisable(br_actor *h) {
    LOG_TRACE("(%p)", h);
    NOT_IMPLEMENTED();
}

// Offset: 1066
// Size: 0x37
//IDA: br_actor* __cdecl BrEnvironmentSet(br_actor *a)
br_actor* BrEnvironmentSet(br_actor *a) {
    br_actor *old_a;
    LOG_TRACE("(%p)", a);
    NOT_IMPLEMENTED();
}

// Offset: 1131
// Size: 0x11c
//IDA: br_boolean __usercall setupView@<EAX>(br_matrix34 *view_to_this@<EAX>, br_matrix34 *this_to_view@<EDX>, br_matrix34 *world_to_view@<EBX>, br_int_32 w2vt@<ECX>, br_actor *world, br_actor *a)
br_boolean setupView(br_matrix34 *view_to_this, br_matrix34 *this_to_view, br_matrix34 *world_to_view, br_int_32 w2vt, br_actor *world, br_actor *a) {
    br_matrix34 this_to_world;
    br_int_32 root_t;
    br_int_32 t;
    LOG_TRACE("(%p, %p, %p, %d, %p, %p)", view_to_this, this_to_view, world_to_view, w2vt, world, a);
    NOT_IMPLEMENTED();
}

// Offset: 1429
// Size: 0x41b
//IDA: void __usercall BrSetupLights(br_actor *world@<EAX>, br_matrix34 *world_to_view@<EDX>, br_int_32 w2vt@<EBX>)
void BrSetupLights(br_actor *world, br_matrix34 *world_to_view, br_int_32 w2vt) {
    br_matrix34 this_to_view;
    br_matrix34 view_to_this;
    int light_part;
    int i;
    br_token_value tv[16];
    br_token_value *tvp;
    br_vector3 view_position;
    br_vector3 view_direction;
    br_light *light;
    LOG_TRACE("(%p, %p, %d)", world, world_to_view, w2vt);
    NOT_IMPLEMENTED();
}

// Offset: 2498
// Size: 0x217
//IDA: void __usercall BrSetupClipPlanes(br_actor *world@<EAX>, br_matrix34 *world_to_view@<EDX>, br_int_32 w2vt@<EBX>, br_matrix4 *view_to_screen@<ECX>)
void BrSetupClipPlanes(br_actor *world, br_matrix34 *world_to_view, br_int_32 w2vt, br_matrix4 *view_to_screen) {
    br_matrix34 this_to_view;
    br_matrix34 view_to_this;
    br_matrix4 screen_to_view;
    br_matrix4 tmp4;
    br_matrix4 screen_to_this;
    int light_part;
    int i;
    br_int_32 clip_part;
    br_token_value tv[3];
    br_vector4 sp;
    LOG_TRACE("(%p, %p, %d, %p)", world, world_to_view, w2vt, view_to_screen);
    NOT_IMPLEMENTED();
}

// Offset: 3052
// Size: 0x125
//IDA: void __usercall BrSetupEnvironment(br_actor *world@<EAX>, br_matrix34 *world_to_view@<EDX>, br_int_32 w2vt@<EBX>)
void BrSetupEnvironment(br_actor *world, br_matrix34 *world_to_view, br_int_32 w2vt) {
    br_matrix34 view_to_this;
    br_matrix34 this_to_view;
    br_token h;
    LOG_TRACE("(%p, %p, %d)", world, world_to_view, w2vt);
    NOT_IMPLEMENTED();
}

// Offset: 3361
// Size: 0x27
//IDA: void __usercall BrSetupHorizons(br_actor *world@<EAX>, br_matrix34 *world_to_view@<EDX>, br_int_32 w2vt@<EBX>)
void BrSetupHorizons(br_actor *world, br_matrix34 *world_to_view, br_int_32 w2vt) {
    LOG_TRACE("(%p, %p, %d)", world, world_to_view, w2vt);
    NOT_IMPLEMENTED();
}

// Offset: 3419
// Size: 0x88
//IDA: void __usercall BrActorEnableCheck(br_actor *a@<EAX>)
void BrActorEnableCheck(br_actor *a) {
    LOG_TRACE("(%p)", a);
    NOT_IMPLEMENTED();
}

