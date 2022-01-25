#ifndef _CUSTSUPT_H_
#define _CUSTSUPT_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 21
// Size: 0xde
//IDA: void __cdecl BrModelToScreenQuery(br_matrix4 *dest)
void BrModelToScreenQuery(br_matrix4 *dest);

// Offset: 262
// Size: 0xa1
//IDA: void __cdecl BrModelToViewQuery(br_matrix34 *dest)
void BrModelToViewQuery(br_matrix34 *dest);

// Offset: 442
// Size: 0xfb
//IDA: br_uint_8 __cdecl BrOriginToScreenXY(br_vector2 *screen)
br_uint_8 BrOriginToScreenXY(br_vector2 *screen);

// Offset: 714
// Size: 0x1a7
//IDA: br_uint_32 __cdecl BrOriginToScreenXYZO(br_vector3 *screen)
br_uint_32 BrOriginToScreenXYZO(br_vector3 *screen);

// Offset: 1155
// Size: 0x127
//IDA: br_uint_8 __cdecl BrPointToScreenXY(br_vector2 *screen, br_vector3 *point)
br_uint_8 BrPointToScreenXY(br_vector2 *screen, br_vector3 *point);

// Offset: 1470
// Size: 0x1a9
//IDA: br_uint_32 __cdecl BrPointToScreenXYZO(br_vector3 *screen, br_vector3 *point)
br_uint_32 BrPointToScreenXYZO(br_vector3 *screen, br_vector3 *point);

// Offset: 1917
// Size: 0x139
//IDA: void __cdecl BrPointToScreenXYMany(br_vector2 *screens, br_vector3 *points, br_uint_32 npoints)
void BrPointToScreenXYMany(br_vector2 *screens, br_vector3 *points, br_uint_32 npoints);

// Offset: 2254
// Size: 0x201
//IDA: void __cdecl BrPointToScreenXYZOMany(br_vector3 *screens, br_uint_32 *outcodes, br_vector3 *points, br_uint_32 npoints)
void BrPointToScreenXYZOMany(br_vector3 *screens, br_uint_32 *outcodes, br_vector3 *points, br_uint_32 npoints);

// Offset: 2786
// Size: 0x62
//IDA: br_scalar __cdecl BrZbDepthToScreenZ(br_uint_32 depth_z, br_camera *camera)
br_scalar BrZbDepthToScreenZ(br_uint_32 depth_z, br_camera *camera);

// Offset: 2903
// Size: 0x8b
//IDA: br_uint_32 __cdecl BrZbScreenZToDepth(br_scalar sz, br_camera *camera)
br_uint_32 BrZbScreenZToDepth(br_scalar sz, br_camera *camera);

// Offset: 3061
// Size: 0xcf
//IDA: br_scalar __cdecl BrZsDepthToScreenZ(br_scalar depth_z, br_camera *camera)
br_scalar BrZsDepthToScreenZ(br_scalar depth_z, br_camera *camera);

// Offset: 3287
// Size: 0xb2
//IDA: br_scalar __cdecl BrZsScreenZToDepth(br_scalar sz, br_camera *camera)
br_scalar BrZsScreenZToDepth(br_scalar sz, br_camera *camera);

// Offset: 3483
// Size: 0x1cb
//IDA: br_scalar __cdecl BrScreenZToCamera(br_actor *camera, br_scalar sz)
br_scalar BrScreenZToCamera(br_actor *camera, br_scalar sz);

// Offset: 3962
// Size: 0x2fe
//IDA: void __cdecl BrScreenXYZToCamera(br_vector3 *point, br_actor *camera, br_pixelmap *screen_buffer, br_int_16 x, br_int_16 y, br_scalar sz)
void BrScreenXYZToCamera(br_vector3 *point, br_actor *camera, br_pixelmap *screen_buffer, br_int_16 x, br_int_16 y, br_scalar sz);

#endif
