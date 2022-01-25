#ifndef _ACTSUPT_H_
#define _ACTSUPT_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 12
// Size: 0x9e
//IDA: br_uint_32 __cdecl BrActorEnum(br_actor *parent, br_actor_enum_cbfn *callback, void *arg)
br_uint_32 BrActorEnum(br_actor *parent, br_actor_enum_cbfn *callback, void *arg);

// Offset: 188
// Size: 0x141
//IDA: br_uint_32 __cdecl BrActorSearchMany(br_actor *root, char *pattern, br_actor **actors, int max)
br_uint_32 BrActorSearchMany(br_actor *root, char *pattern, br_actor **actors, int max);

// Offset: 523
// Size: 0x67
//IDA: br_actor* __cdecl BrActorSearch(br_actor *root, char *pattern)
br_actor* BrActorSearch(br_actor *root, char *pattern);

// Offset: 640
// Size: 0x75
//IDA: void __usercall RenumberActor(br_actor *a@<EAX>, int d@<EDX>)
void RenumberActor(br_actor *a, int d);

// Offset: 768
// Size: 0xe6
//IDA: br_actor* __cdecl BrActorAdd(br_actor *parent, br_actor *a)
br_actor* BrActorAdd(br_actor *parent, br_actor *a);

// Offset: 1012
// Size: 0xb1
//IDA: br_actor* __cdecl BrActorRemove(br_actor *a)
br_actor* BrActorRemove(br_actor *a);

// Offset: 1203
// Size: 0xa7
//IDA: void __cdecl BrActorRelink(br_actor *parent, br_actor *a)
void BrActorRelink(br_actor *parent, br_actor *a);

// Offset: 1386
// Size: 0x1f7
//IDA: br_actor* __cdecl BrActorAllocate(br_uint_8 type, void *type_data)
br_actor* BrActorAllocate(br_uint_8 type, void *type_data);

// Offset: 1907
// Size: 0x98
//IDA: void __usercall InternalActorFree(br_actor *a@<EAX>)
void InternalActorFree(br_actor *a);

// Offset: 2071
// Size: 0x67
//IDA: void __cdecl BrActorFree(br_actor *a)
void BrActorFree(br_actor *a);

// Offset: 2186
// Size: 0x11b
//IDA: br_boolean __usercall ActorToRoot@<EAX>(br_actor *a@<EAX>, br_actor *world@<EDX>, br_matrix34 *m@<EBX>)
br_boolean ActorToRoot(br_actor *a, br_actor *world, br_matrix34 *m);

// Offset: 2486
// Size: 0x153
//IDA: br_boolean __usercall ActorToRootTyped@<EAX>(br_actor *a@<EAX>, br_actor *world@<EDX>, br_matrix34 *m@<EBX>, br_int_32 *type@<ECX>)
br_boolean ActorToRootTyped(br_actor *a, br_actor *world, br_matrix34 *m, br_int_32 *type);

// Offset: 2847
// Size: 0x23c
//IDA: void __usercall Matrix4PerspectiveNew(br_matrix4 *mat@<EAX>, br_angle field_of_view@<EDX>, br_scalar aspect, br_scalar hither, br_scalar yon, br_scalar origin_x, br_scalar origin_y)
void Matrix4PerspectiveNew(br_matrix4 *mat, br_angle field_of_view, br_scalar aspect, br_scalar hither, br_scalar yon, br_scalar origin_x, br_scalar origin_y);

// Offset: 3441
// Size: 0x3b0
//IDA: br_token __usercall CameraToScreenMatrix4@<EAX>(br_matrix4 *mat@<EAX>, br_actor *camera@<EDX>)
br_token CameraToScreenMatrix4(br_matrix4 *mat, br_actor *camera);

// Offset: 4408
// Size: 0x362
//IDA: br_uint_16 __cdecl BrActorToActorMatrix34(br_matrix34 *m, br_actor *a, br_actor *b)
br_uint_16 BrActorToActorMatrix34(br_matrix34 *m, br_actor *a, br_actor *b);

// Offset: 5297
// Size: 0xb2
//IDA: void __cdecl BrActorToScreenMatrix4(br_matrix4 *m, br_actor *a, br_actor *camera)
void BrActorToScreenMatrix4(br_matrix4 *m, br_actor *a, br_actor *camera);

// Offset: 5497
// Size: 0x199
//IDA: void __usercall BrMatrix34ApplyBounds(br_bounds *d@<EAX>, br_bounds *s@<EDX>, br_matrix34 *m@<EBX>)
void BrMatrix34ApplyBounds(br_bounds *d, br_bounds *s, br_matrix34 *m);

// Offset: 5920
// Size: 0x18d
//IDA: void __usercall ActorToBounds(br_bounds *dest@<EAX>, br_actor *ap@<EDX>, br_model *model@<EBX>)
void ActorToBounds(br_bounds *dest, br_actor *ap, br_model *model);

// Offset: 6333
// Size: 0x136
//IDA: br_bounds* __cdecl BrActorToBounds(br_bounds *b, br_actor *ap)
br_bounds* BrActorToBounds(br_bounds *b, br_actor *ap);

#endif
