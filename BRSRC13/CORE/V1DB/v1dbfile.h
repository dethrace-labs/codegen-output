#ifndef _V1DBFILE_H_
#define _V1DBFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern br_file_struct_member br_vertex_FM[3]; // addr: 0001B00C
extern br_file_struct br_vertex_F; // addr: 0001B03C
extern br_file_struct_member br_vertex_uv_FM[2]; // addr: 0001B04C
extern br_file_struct br_vertex_uv_F; // addr: 0001B06C
extern br_file_struct_member br_old_vertex_uv_FM[5]; // addr: 0001B07C
extern br_file_struct br_old_vertex_uv_F; // addr: 0001B0CC
extern br_file_struct_member br_face_FM[5]; // addr: 0001B0DC
extern br_file_struct br_face_F; // addr: 0001B12C
extern br_file_struct_member br_old_face_1_FM[5]; // addr: 0001B13C
extern br_file_struct br_old_face_1_F; // addr: 0001B18C
extern br_file_struct_member br_old_face_FM[5]; // addr: 0001B19C
extern br_file_struct br_old_face_F; // addr: 0001B1EC
extern br_file_struct_member br_model_FM[2]; // addr: 0001B1FC
extern br_file_struct br_model_F; // addr: 0001B21C
extern br_file_struct_member br_old_model_1_FM[1]; // addr: 0001B22C
extern br_file_struct br_old_model_1_F; // addr: 0001B23C
extern br_file_struct_member br_pivot_FM[3]; // addr: 0001B24C
extern br_file_struct br_pivot_F; // addr: 0001B27C
extern br_file_struct_member br_material_old_FM[13]; // addr: 0001B28C
extern br_file_struct br_material_old_F; // addr: 0001B35C
extern br_file_struct_member br_material_FM[17]; // addr: 0001B36C
extern br_file_struct br_material_F; // addr: 0001B47C
extern struct {		// size: 0xc
        br_uint_32 id;		// @0x0
        size_t offset;		// @0x4
        int table;		// @0x8
    } MaterialMaps[5]; // addr: 0001B48C
extern br_file_enum_member actor_type_FM[8]; // addr: 0001B4C8
extern br_file_enum actor_type_F; // addr: 0001B508
extern br_file_enum_member render_style_FM[8]; // addr: 0001B510
extern br_file_enum render_style_F; // addr: 0001B550
extern br_file_struct_member br_actor_FM[3]; // addr: 0001B558
extern br_file_struct br_actor_F; // addr: 0001B588
extern br_file_struct_member br_transform_matrix34_FM[4]; // addr: 0001B598
extern br_file_struct br_transform_matrix34_F; // addr: 0001B5D8
extern br_file_struct_member br_transform_quat_FM[5]; // addr: 0001B5E8
extern br_file_struct br_transform_quat_F; // addr: 0001B638
extern br_file_enum_member angle_order_FM[24]; // addr: 0001B648
extern br_file_enum angle_order_F; // addr: 0001B708
extern br_file_struct_member br_transform_euler_FM[5]; // addr: 0001B710
extern br_file_struct br_transform_euler_F; // addr: 0001B760
extern br_file_struct_member br_transform_look_up_FM[3]; // addr: 0001B770
extern br_file_struct br_transform_look_up_F; // addr: 0001B7A0
extern br_file_struct_member br_transform_translation_FM[1]; // addr: 0001B7B0
extern br_file_struct br_transform_translation_F; // addr: 0001B7C0
extern transform_type TransformTypes[7]; // addr: 0001B7D0
extern br_file_struct_member br_bounds3_FM[2]; // addr: 0001B808
extern br_file_struct br_bounds3_F; // addr: 0001B828
extern br_file_struct_member br_plane_FM[1]; // addr: 0001B838
extern br_file_struct br_plane_F; // addr: 0001B848
extern br_file_enum_member light_type_FM[6]; // addr: 0001B858
extern br_file_enum light_type_F; // addr: 0001B888
extern br_file_struct_member br_light_FM[8]; // addr: 0001B890
extern br_file_struct br_light_F; // addr: 0001B910
extern br_file_enum_member camera_type_FM[2]; // addr: 0001B920
extern br_file_enum camera_type_F; // addr: 0001B930
extern br_file_struct_member br_camera_FM[6]; // addr: 0001B938
extern br_file_struct br_camera_F; // addr: 0001B998
extern br_chunks_table_entry ModelLoadEntries[15]; // addr: 0001B9A8
extern br_chunks_table ModelLoadTable; // addr: 0001BA5C
extern br_chunks_table_entry ActorLoadEntries[21]; // addr: 0001BA64
extern br_chunks_table ActorLoadTable; // addr: 0001BB60
extern br_chunks_table_entry MaterialLoadEntries[8]; // addr: 0001BB68
extern br_chunks_table MaterialLoadTable; // addr: 0001BBC8

// Offset: 18
// Size: 0x8b
//IDA: int __usercall FopWrite_VERTICES@<EAX>(br_datafile *df@<EAX>, br_vertex *vertices@<EDX>, int nvertices@<EBX>)
int FopWrite_VERTICES(br_datafile *df, br_vertex *vertices, int nvertices);

// Offset: 174
// Size: 0x7e
//IDA: int __usercall FopRead_VERTICES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_VERTICES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 321
// Size: 0x90
//IDA: int __usercall FopRead_OLD_VERTICES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_VERTICES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 484
// Size: 0x8b
//IDA: int __usercall FopWrite_VERTEX_UV@<EAX>(br_datafile *df@<EAX>, br_vertex *vertices@<EDX>, int nvertices@<EBX>)
int FopWrite_VERTEX_UV(br_datafile *df, br_vertex *vertices, int nvertices);

// Offset: 641
// Size: 0x76
//IDA: int __usercall FopRead_VERTEX_UV@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_VERTEX_UV(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 783
// Size: 0x90
//IDA: int __usercall FopRead_OLD_VERTICES_UV@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_VERTICES_UV(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 950
// Size: 0xb1
//IDA: int __usercall FopRead_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL_INDEX(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 1151
// Size: 0xd0
//IDA: int __usercall FopWrite_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_material **materials@<EDX>, int nmaterials@<EBX>)
int FopWrite_MATERIAL_INDEX(br_datafile *df, br_material **materials, int nmaterials);

// Offset: 1386
// Size: 0x121
//IDA: int __usercall FopRead_OLD_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MATERIAL_INDEX(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 1689
// Size: 0xcf
//IDA: int __usercall FopRead_FACES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_FACES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 1911
// Size: 0x8b
//IDA: int __usercall FopWrite_FACES@<EAX>(br_datafile *df@<EAX>, br_face *faces@<EDX>, int nfaces@<EBX>)
int FopWrite_FACES(br_datafile *df, br_face *faces, int nfaces);

// Offset: 2070
// Size: 0x10f
//IDA: int __usercall FopRead_OLD_FACES_1@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_FACES_1(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 2359
// Size: 0x124
//IDA: int __usercall FopRead_OLD_FACES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_FACES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 2674
// Size: 0x125
//IDA: int __usercall FopWrite_FACE_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_face *faces@<EDX>, int nfaces@<EBX>, br_material **mindex@<ECX>, int nmaterials)
int FopWrite_FACE_MATERIAL(br_datafile *df, br_face *faces, int nfaces, br_material **mindex, int nmaterials);

// Offset: 2989
// Size: 0x12f
//IDA: int __usercall FopRead_FACE_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_FACE_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 3306
// Size: 0x84
//IDA: int __usercall FopRead_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 3453
// Size: 0x7d
//IDA: int __usercall FopWrite_MODEL@<EAX>(br_datafile *df@<EAX>, br_model *mp@<EDX>)
int FopWrite_MODEL(br_datafile *df, br_model *mp);

// Offset: 3598
// Size: 0x7c
//IDA: int __usercall FopRead_OLD_MODEL_1@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MODEL_1(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 3740
// Size: 0xe6
//IDA: int __usercall FopRead_OLD_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 3984
// Size: 0x7a
//IDA: int __usercall FopRead_PIVOT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIVOT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 4127
// Size: 0x78
//IDA: int __usercall FopRead_MATERIAL_OLD@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL_OLD(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 4264
// Size: 0x78
//IDA: int __usercall FopRead_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 4402
// Size: 0x6d
//IDA: int __usercall FopWrite_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_material *mp@<EDX>)
int FopWrite_MATERIAL(br_datafile *df, br_material *mp);

// Offset: 4532
// Size: 0xe3
//IDA: int __usercall FopRead_PIXELMAP_REF@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELMAP_REF(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 4781
// Size: 0x90
//IDA: int __usercall FopWrite_PIXELMAP_REF@<EAX>(br_datafile *df@<EAX>, int id@<EDX>, br_pixelmap *pixelmap@<EBX>)
int FopWrite_PIXELMAP_REF(br_datafile *df, int id, br_pixelmap *pixelmap);

// Offset: 4940
// Size: 0x6d
//IDA: int __usercall FopWrite_ACTOR@<EAX>(br_datafile *df@<EAX>, br_actor *ap@<EDX>)
int FopWrite_ACTOR(br_datafile *df, br_actor *ap);

// Offset: 5063
// Size: 0x84
//IDA: int __usercall FopRead_ACTOR@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 5216
// Size: 0x91
//IDA: int __usercall FopWrite_ACTOR_MODEL@<EAX>(br_datafile *df@<EAX>, br_model *model@<EDX>)
int FopWrite_ACTOR_MODEL(br_datafile *df, br_model *model);

// Offset: 5381
// Size: 0x64
//IDA: int __usercall FopRead_ACTOR_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 5505
// Size: 0x91
//IDA: int __usercall FopWrite_ACTOR_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_material *material@<EDX>)
int FopWrite_ACTOR_MATERIAL(br_datafile *df, br_material *material);

// Offset: 5673
// Size: 0x64
//IDA: int __usercall FopRead_ACTOR_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 5798
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_TRANSFORM@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_TRANSFORM(br_datafile *df);

// Offset: 5888
// Size: 0x6c
//IDA: int __usercall FopRead_ACTOR_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_TRANSFORM(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 6017
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_LIGHT@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_LIGHT(br_datafile *df);

// Offset: 6103
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_LIGHT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_LIGHT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 6214
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_CAMERA@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_CAMERA(br_datafile *df);

// Offset: 6301
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_CAMERA@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_CAMERA(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 6412
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_BOUNDS@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_BOUNDS(br_datafile *df);

// Offset: 6499
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_BOUNDS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 6614
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_CLIP_PLANE@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_CLIP_PLANE(br_datafile *df);

// Offset: 6705
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_CLIP_PLANE@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_CLIP_PLANE(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 6819
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_ADD_CHILD@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_ADD_CHILD(br_datafile *df);

// Offset: 6909
// Size: 0x60
//IDA: int __usercall FopRead_ACTOR_ADD_CHILD@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_ADD_CHILD(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 7024
// Size: 0xc5
//IDA: int __usercall FopWrite_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_transform *t@<EDX>)
int FopWrite_TRANSFORM(br_datafile *df, br_transform *t);

// Offset: 7239
// Size: 0xea
//IDA: int __usercall FopRead_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_TRANSFORM(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 7489
// Size: 0x6d
//IDA: int __usercall FopWrite_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_bounds *bp@<EDX>)
int FopWrite_BOUNDS(br_datafile *df, br_bounds *bp);

// Offset: 7613
// Size: 0x84
//IDA: int __usercall FopRead_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_BOUNDS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 7760
// Size: 0x6d
//IDA: int __usercall FopWrite_PLANE@<EAX>(br_datafile *df@<EAX>, br_vector4 *pp@<EDX>)
int FopWrite_PLANE(br_datafile *df, br_vector4 *pp);

// Offset: 7883
// Size: 0x84
//IDA: int __usercall FopRead_PLANE@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PLANE(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 8030
// Size: 0x6d
//IDA: int __usercall FopWrite_LIGHT@<EAX>(br_datafile *df@<EAX>, br_light *lp@<EDX>)
int FopWrite_LIGHT(br_datafile *df, br_light *lp);

// Offset: 8153
// Size: 0x84
//IDA: int __usercall FopRead_LIGHT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_LIGHT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 8301
// Size: 0x6d
//IDA: int __usercall FopWrite_CAMERA@<EAX>(br_datafile *df@<EAX>, br_camera *cp@<EDX>)
int FopWrite_CAMERA(br_datafile *df, br_camera *cp);

// Offset: 8425
// Size: 0x84
//IDA: int __usercall FopRead_CAMERA@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_CAMERA(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 8573
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrModelLoadMany(char *filename, br_model **models, br_uint_16 num)
br_uint_32 BrModelLoadMany(char *filename, br_model **models, br_uint_16 num);

// Offset: 8746
// Size: 0x52
//IDA: int __cdecl PtrCompare(void *a, void *b)
int PtrCompare(void *a, void *b);

// Offset: 8839
// Size: 0x2d0
//IDA: br_uint_32 __cdecl WriteModel(br_model *mp, br_datafile *df)
br_uint_32 WriteModel(br_model *mp, br_datafile *df);

// Offset: 9575
// Size: 0xd1
//IDA: br_uint_32 __cdecl BrModelSaveMany(char *filename, br_model **models, br_uint_16 num)
br_uint_32 BrModelSaveMany(char *filename, br_model **models, br_uint_16 num);

// Offset: 9800
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrActorLoadMany(char *filename, br_actor **actors, br_uint_16 num)
br_uint_32 BrActorLoadMany(char *filename, br_actor **actors, br_uint_16 num);

// Offset: 9973
// Size: 0x190
//IDA: int __usercall WriteActor@<EAX>(br_actor *a@<EAX>, br_datafile *df@<EDX>)
int WriteActor(br_actor *a, br_datafile *df);

// Offset: 10389
// Size: 0x9c
//IDA: br_uint_32 __cdecl BrActorSaveMany(char *filename, br_actor **actors, br_uint_16 num)
br_uint_32 BrActorSaveMany(char *filename, br_actor **actors, br_uint_16 num);

// Offset: 10564
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrMaterialLoadMany(char *filename, br_material **materials, br_uint_16 num)
br_uint_32 BrMaterialLoadMany(char *filename, br_material **materials, br_uint_16 num);

// Offset: 10740
// Size: 0xc7
//IDA: br_uint_32 __cdecl WriteMaterial(br_material *mp, br_datafile *df)
br_uint_32 WriteMaterial(br_material *mp, br_datafile *df);

// Offset: 10958
// Size: 0xca
//IDA: br_uint_32 __cdecl BrMaterialSaveMany(char *filename, br_material **materials, br_uint_16 num)
br_uint_32 BrMaterialSaveMany(char *filename, br_material **materials, br_uint_16 num);

// Offset: 11172
// Size: 0x51
//IDA: br_model* __cdecl BrModelLoad(char *filename)
br_model* BrModelLoad(char *filename);

// Offset: 11265
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrModelSave(char *filename, br_model *ptr)
br_uint_32 BrModelSave(char *filename, br_model *ptr);

// Offset: 11338
// Size: 0x51
//IDA: br_material* __cdecl BrMaterialLoad(char *filename)
br_material* BrMaterialLoad(char *filename);

// Offset: 11434
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrMaterialSave(char *filename, br_material *ptr)
br_uint_32 BrMaterialSave(char *filename, br_material *ptr);

// Offset: 11504
// Size: 0x51
//IDA: br_actor* __cdecl BrActorLoad(char *filename)
br_actor* BrActorLoad(char *filename);

// Offset: 11597
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrActorSave(char *filename, br_actor *ptr)
br_uint_32 BrActorSave(char *filename, br_actor *ptr);

// Offset: 11672
// Size: 0xae
//IDA: br_error __cdecl BrModelFileCount(char *filename, br_uint_16 *num)
br_error BrModelFileCount(char *filename, br_uint_16 *num);

// Offset: 11863
// Size: 0xae
//IDA: br_error __cdecl BrActorFileCount(char *filename, br_uint_16 *num)
br_error BrActorFileCount(char *filename, br_uint_16 *num);

// Offset: 12057
// Size: 0xae
//IDA: br_error __cdecl BrMaterialFileCount(char *filename, br_uint_16 *num)
br_error BrMaterialFileCount(char *filename, br_uint_16 *num);

#endif
