#include "v1dbfile.h"

br_file_struct_member br_vertex_FM[3];
br_file_struct br_vertex_F;
br_file_struct_member br_vertex_uv_FM[2];
br_file_struct br_vertex_uv_F;
br_file_struct_member br_old_vertex_uv_FM[5];
br_file_struct br_old_vertex_uv_F;
br_file_struct_member br_face_FM[5];
br_file_struct br_face_F;
br_file_struct_member br_old_face_1_FM[5];
br_file_struct br_old_face_1_F;
br_file_struct_member br_old_face_FM[5];
br_file_struct br_old_face_F;
br_file_struct_member br_model_FM[2];
br_file_struct br_model_F;
br_file_struct_member br_old_model_1_FM[1];
br_file_struct br_old_model_1_F;
br_file_struct_member br_pivot_FM[3];
br_file_struct br_pivot_F;
br_file_struct_member br_material_old_FM[13];
br_file_struct br_material_old_F;
br_file_struct_member br_material_FM[17];
br_file_struct br_material_F;
struct {		// size: 0xc
        br_uint_32 id;		// @0x0
        size_t offset;		// @0x4
        int table;		// @0x8
    } MaterialMaps[5];
br_file_enum_member actor_type_FM[8];
br_file_enum actor_type_F;
br_file_enum_member render_style_FM[8];
br_file_enum render_style_F;
br_file_struct_member br_actor_FM[3];
br_file_struct br_actor_F;
br_file_struct_member br_transform_matrix34_FM[4];
br_file_struct br_transform_matrix34_F;
br_file_struct_member br_transform_quat_FM[5];
br_file_struct br_transform_quat_F;
br_file_enum_member angle_order_FM[24];
br_file_enum angle_order_F;
br_file_struct_member br_transform_euler_FM[5];
br_file_struct br_transform_euler_F;
br_file_struct_member br_transform_look_up_FM[3];
br_file_struct br_transform_look_up_F;
br_file_struct_member br_transform_translation_FM[1];
br_file_struct br_transform_translation_F;
transform_type TransformTypes[7];
br_file_struct_member br_bounds3_FM[2];
br_file_struct br_bounds3_F;
br_file_struct_member br_plane_FM[1];
br_file_struct br_plane_F;
br_file_enum_member light_type_FM[6];
br_file_enum light_type_F;
br_file_struct_member br_light_FM[8];
br_file_struct br_light_F;
br_file_enum_member camera_type_FM[2];
br_file_enum camera_type_F;
br_file_struct_member br_camera_FM[6];
br_file_struct br_camera_F;
br_chunks_table_entry ModelLoadEntries[15];
br_chunks_table ModelLoadTable;
br_chunks_table_entry ActorLoadEntries[21];
br_chunks_table ActorLoadTable;
br_chunks_table_entry MaterialLoadEntries[8];
br_chunks_table MaterialLoadTable;

// Offset: 18
// Size: 0x8b
//IDA: int __usercall FopWrite_VERTICES@<EAX>(br_datafile *df@<EAX>, br_vertex *vertices@<EDX>, int nvertices@<EBX>)
int FopWrite_VERTICES(br_datafile *df, br_vertex *vertices, int nvertices) {
    LOG_TRACE("(%p, %p, %d)", df, vertices, nvertices);
    NOT_IMPLEMENTED();
}

// Offset: 174
// Size: 0x7e
//IDA: int __usercall FopRead_VERTICES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_VERTICES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 321
// Size: 0x90
//IDA: int __usercall FopRead_OLD_VERTICES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_VERTICES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    void *ptr;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 484
// Size: 0x8b
//IDA: int __usercall FopWrite_VERTEX_UV@<EAX>(br_datafile *df@<EAX>, br_vertex *vertices@<EDX>, int nvertices@<EBX>)
int FopWrite_VERTEX_UV(br_datafile *df, br_vertex *vertices, int nvertices) {
    LOG_TRACE("(%p, %p, %d)", df, vertices, nvertices);
    NOT_IMPLEMENTED();
}

// Offset: 641
// Size: 0x76
//IDA: int __usercall FopRead_VERTEX_UV@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_VERTEX_UV(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 783
// Size: 0x90
//IDA: int __usercall FopRead_OLD_VERTICES_UV@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_VERTICES_UV(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    void *ptr;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 950
// Size: 0xb1
//IDA: int __usercall FopRead_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL_INDEX(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    char name[256];
    br_material **mip;
    br_uint_32 i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 1151
// Size: 0xd0
//IDA: int __usercall FopWrite_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_material **materials@<EDX>, int nmaterials@<EBX>)
int FopWrite_MATERIAL_INDEX(br_datafile *df, br_material **materials, int nmaterials) {
    int i;
    int s;
    LOG_TRACE("(%p, %p, %d)", df, materials, nmaterials);
    NOT_IMPLEMENTED();
}

// Offset: 1386
// Size: 0x121
//IDA: int __usercall FopRead_OLD_MATERIAL_INDEX@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MATERIAL_INDEX(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    char *mblock;
    char *cp;
    int i;
    int num_materials;
    br_material **mip;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 1689
// Size: 0xcf
//IDA: int __usercall FopRead_FACES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_FACES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    int i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 1911
// Size: 0x8b
//IDA: int __usercall FopWrite_FACES@<EAX>(br_datafile *df@<EAX>, br_face *faces@<EDX>, int nfaces@<EBX>)
int FopWrite_FACES(br_datafile *df, br_face *faces, int nfaces) {
    LOG_TRACE("(%p, %p, %d)", df, faces, nfaces);
    NOT_IMPLEMENTED();
}

// Offset: 2070
// Size: 0x10f
//IDA: int __usercall FopRead_OLD_FACES_1@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_FACES_1(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    int i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 2359
// Size: 0x124
//IDA: int __usercall FopRead_OLD_FACES@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_FACES(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_face *fp;
    br_material **mip;
    int mi_count;
    unsigned int i;
    void *ptr;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 2674
// Size: 0x125
//IDA: int __usercall FopWrite_FACE_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_face *faces@<EDX>, int nfaces@<EBX>, br_material **mindex@<ECX>, int nmaterials)
int FopWrite_FACE_MATERIAL(br_datafile *df, br_face *faces, int nfaces, br_material **mindex, int nmaterials) {
    br_uint_16 *block;
    br_uint_16 *ip;
    br_face *fp;
    int i;
    int j;
    LOG_TRACE("(%p, %p, %d, %p, %d)", df, faces, nfaces, mindex, nmaterials);
    NOT_IMPLEMENTED();
}

// Offset: 2989
// Size: 0x12f
//IDA: int __usercall FopRead_FACE_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_FACE_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_material **mindex;
    int nmaterials;
    br_model *mp;
    br_face *fp;
    br_uint_16 *block;
    br_uint_16 *ip;
    int block_count;
    int i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 3306
// Size: 0x84
//IDA: int __usercall FopRead_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 3453
// Size: 0x7d
//IDA: int __usercall FopWrite_MODEL@<EAX>(br_datafile *df@<EAX>, br_model *mp@<EDX>)
int FopWrite_MODEL(br_datafile *df, br_model *mp) {
    br_model temp_model;
    LOG_TRACE("(%p, %p)", df, mp);
    NOT_IMPLEMENTED();
}

// Offset: 3598
// Size: 0x7c
//IDA: int __usercall FopRead_OLD_MODEL_1@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MODEL_1(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 3740
// Size: 0xe6
//IDA: int __usercall FopRead_OLD_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    int i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 3984
// Size: 0x7a
//IDA: int __usercall FopRead_PIVOT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIVOT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_model *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 4127
// Size: 0x78
//IDA: int __usercall FopRead_MATERIAL_OLD@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL_OLD(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_material *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 4264
// Size: 0x78
//IDA: int __usercall FopRead_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_material *mp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 4402
// Size: 0x6d
//IDA: int __usercall FopWrite_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_material *mp@<EDX>)
int FopWrite_MATERIAL(br_datafile *df, br_material *mp) {
    LOG_TRACE("(%p, %p)", df, mp);
    NOT_IMPLEMENTED();
}

// Offset: 4532
// Size: 0xe3
//IDA: int __usercall FopRead_PIXELMAP_REF@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELMAP_REF(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_pixelmap *pm;
    char name[256];
    char *mp;
    int i;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 4781
// Size: 0x90
//IDA: int __usercall FopWrite_PIXELMAP_REF@<EAX>(br_datafile *df@<EAX>, int id@<EDX>, br_pixelmap *pixelmap@<EBX>)
int FopWrite_PIXELMAP_REF(br_datafile *df, int id, br_pixelmap *pixelmap) {
    LOG_TRACE("(%p, %d, %p)", df, id, pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 4940
// Size: 0x6d
//IDA: int __usercall FopWrite_ACTOR@<EAX>(br_datafile *df@<EAX>, br_actor *ap@<EDX>)
int FopWrite_ACTOR(br_datafile *df, br_actor *ap) {
    LOG_TRACE("(%p, %p)", df, ap);
    NOT_IMPLEMENTED();
}

// Offset: 5063
// Size: 0x84
//IDA: int __usercall FopRead_ACTOR@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *ap;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 5216
// Size: 0x91
//IDA: int __usercall FopWrite_ACTOR_MODEL@<EAX>(br_datafile *df@<EAX>, br_model *model@<EDX>)
int FopWrite_ACTOR_MODEL(br_datafile *df, br_model *model) {
    LOG_TRACE("(%p, %p)", df, model);
    NOT_IMPLEMENTED();
}

// Offset: 5381
// Size: 0x64
//IDA: int __usercall FopRead_ACTOR_MODEL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_MODEL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    char name[256];
    br_actor *a;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 5505
// Size: 0x91
//IDA: int __usercall FopWrite_ACTOR_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_material *material@<EDX>)
int FopWrite_ACTOR_MATERIAL(br_datafile *df, br_material *material) {
    LOG_TRACE("(%p, %p)", df, material);
    NOT_IMPLEMENTED();
}

// Offset: 5673
// Size: 0x64
//IDA: int __usercall FopRead_ACTOR_MATERIAL@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_MATERIAL(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    char name[256];
    br_actor *a;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 5798
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_TRANSFORM@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_TRANSFORM(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 5888
// Size: 0x6c
//IDA: int __usercall FopRead_ACTOR_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_TRANSFORM(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_transform *tp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 6017
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_LIGHT@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_LIGHT(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 6103
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_LIGHT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_LIGHT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_light *lp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 6214
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_CAMERA@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_CAMERA(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 6301
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_CAMERA@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_CAMERA(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_light *cp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 6412
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_BOUNDS@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_BOUNDS(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 6499
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_BOUNDS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_bounds *bp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 6614
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_CLIP_PLANE@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_CLIP_PLANE(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 6705
// Size: 0x59
//IDA: int __usercall FopRead_ACTOR_CLIP_PLANE@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_CLIP_PLANE(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_vector4 *vp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 6819
// Size: 0x42
//IDA: int __usercall FopWrite_ACTOR_ADD_CHILD@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ACTOR_ADD_CHILD(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 6909
// Size: 0x60
//IDA: int __usercall FopRead_ACTOR_ADD_CHILD@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ACTOR_ADD_CHILD(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_actor *a;
    br_actor *p;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 7024
// Size: 0xc5
//IDA: int __usercall FopWrite_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_transform *t@<EDX>)
int FopWrite_TRANSFORM(br_datafile *df, br_transform *t) {
    transform_type *tt;
    LOG_TRACE("(%p, %p)", df, t);
    NOT_IMPLEMENTED();
}

// Offset: 7239
// Size: 0xea
//IDA: int __usercall FopRead_TRANSFORM@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_TRANSFORM(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    int t;
    br_transform *tp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 7489
// Size: 0x6d
//IDA: int __usercall FopWrite_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_bounds *bp@<EDX>)
int FopWrite_BOUNDS(br_datafile *df, br_bounds *bp) {
    LOG_TRACE("(%p, %p)", df, bp);
    NOT_IMPLEMENTED();
}

// Offset: 7613
// Size: 0x84
//IDA: int __usercall FopRead_BOUNDS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_BOUNDS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_bounds3 *bp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 7760
// Size: 0x6d
//IDA: int __usercall FopWrite_PLANE@<EAX>(br_datafile *df@<EAX>, br_vector4 *pp@<EDX>)
int FopWrite_PLANE(br_datafile *df, br_vector4 *pp) {
    LOG_TRACE("(%p, %p)", df, pp);
    NOT_IMPLEMENTED();
}

// Offset: 7883
// Size: 0x84
//IDA: int __usercall FopRead_PLANE@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PLANE(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_vector4 *pp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 8030
// Size: 0x6d
//IDA: int __usercall FopWrite_LIGHT@<EAX>(br_datafile *df@<EAX>, br_light *lp@<EDX>)
int FopWrite_LIGHT(br_datafile *df, br_light *lp) {
    LOG_TRACE("(%p, %p)", df, lp);
    NOT_IMPLEMENTED();
}

// Offset: 8153
// Size: 0x84
//IDA: int __usercall FopRead_LIGHT@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_LIGHT(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_light *lp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 8301
// Size: 0x6d
//IDA: int __usercall FopWrite_CAMERA@<EAX>(br_datafile *df@<EAX>, br_camera *cp@<EDX>)
int FopWrite_CAMERA(br_datafile *df, br_camera *cp) {
    LOG_TRACE("(%p, %p)", df, cp);
    NOT_IMPLEMENTED();
}

// Offset: 8425
// Size: 0x84
//IDA: int __usercall FopRead_CAMERA@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_CAMERA(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_camera *cp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 8573
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrModelLoadMany(char *filename, br_model **models, br_uint_16 num)
br_uint_32 BrModelLoadMany(char *filename, br_model **models, br_uint_16 num) {
    int count;
    int r;
    br_datafile *df;
    LOG_TRACE("(\"%s\", %p, %d)", filename, models, num);
    NOT_IMPLEMENTED();
}

// Offset: 8746
// Size: 0x52
//IDA: int __cdecl PtrCompare(void *a, void *b)
int PtrCompare(void *a, void *b) {
    LOG_TRACE("(%p, %p)", a, b);
    NOT_IMPLEMENTED();
}

// Offset: 8839
// Size: 0x2d0
//IDA: br_uint_32 __cdecl WriteModel(br_model *mp, br_datafile *df)
br_uint_32 WriteModel(br_model *mp, br_datafile *df) {
    br_material **mindex;
    br_vertex *vp;
    int nmaterials;
    int i;
    int has_uv;
    LOG_TRACE("(%p, %p)", mp, df);
    NOT_IMPLEMENTED();
}

// Offset: 9575
// Size: 0xd1
//IDA: br_uint_32 __cdecl BrModelSaveMany(char *filename, br_model **models, br_uint_16 num)
br_uint_32 BrModelSaveMany(char *filename, br_model **models, br_uint_16 num) {
    br_datafile *df;
    int i;
    int m;
    LOG_TRACE("(\"%s\", %p, %d)", filename, models, num);
    NOT_IMPLEMENTED();
}

// Offset: 9800
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrActorLoadMany(char *filename, br_actor **actors, br_uint_16 num)
br_uint_32 BrActorLoadMany(char *filename, br_actor **actors, br_uint_16 num) {
    br_datafile *df;
    int count;
    int r;
    LOG_TRACE("(\"%s\", %p, %d)", filename, actors, num);
    NOT_IMPLEMENTED();
}

// Offset: 9973
// Size: 0x190
//IDA: int __usercall WriteActor@<EAX>(br_actor *a@<EAX>, br_datafile *df@<EDX>)
int WriteActor(br_actor *a, br_datafile *df) {
    br_actor *ap;
    br_actor *last_ap;
    LOG_TRACE("(%p, %p)", a, df);
    NOT_IMPLEMENTED();
}

// Offset: 10389
// Size: 0x9c
//IDA: br_uint_32 __cdecl BrActorSaveMany(char *filename, br_actor **actors, br_uint_16 num)
br_uint_32 BrActorSaveMany(char *filename, br_actor **actors, br_uint_16 num) {
    br_datafile *df;
    int i;
    LOG_TRACE("(\"%s\", %p, %d)", filename, actors, num);
    NOT_IMPLEMENTED();
}

// Offset: 10564
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrMaterialLoadMany(char *filename, br_material **materials, br_uint_16 num)
br_uint_32 BrMaterialLoadMany(char *filename, br_material **materials, br_uint_16 num) {
    br_datafile *df;
    int count;
    int r;
    LOG_TRACE("(\"%s\", %p, %d)", filename, materials, num);
    NOT_IMPLEMENTED();
}

// Offset: 10740
// Size: 0xc7
//IDA: br_uint_32 __cdecl WriteMaterial(br_material *mp, br_datafile *df)
br_uint_32 WriteMaterial(br_material *mp, br_datafile *df) {
    LOG_TRACE("(%p, %p)", mp, df);
    NOT_IMPLEMENTED();
}

// Offset: 10958
// Size: 0xca
//IDA: br_uint_32 __cdecl BrMaterialSaveMany(char *filename, br_material **materials, br_uint_16 num)
br_uint_32 BrMaterialSaveMany(char *filename, br_material **materials, br_uint_16 num) {
    br_datafile *df;
    int i;
    int count;
    LOG_TRACE("(\"%s\", %p, %d)", filename, materials, num);
    NOT_IMPLEMENTED();
}

// Offset: 11172
// Size: 0x51
//IDA: br_model* __cdecl BrModelLoad(char *filename)
br_model* BrModelLoad(char *filename) {
    br_model *ptr;
    LOG_TRACE("(\"%s\")", filename);
    NOT_IMPLEMENTED();
}

// Offset: 11265
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrModelSave(char *filename, br_model *ptr)
br_uint_32 BrModelSave(char *filename, br_model *ptr) {
    LOG_TRACE("(\"%s\", %p)", filename, ptr);
    NOT_IMPLEMENTED();
}

// Offset: 11338
// Size: 0x51
//IDA: br_material* __cdecl BrMaterialLoad(char *filename)
br_material* BrMaterialLoad(char *filename) {
    br_material *ptr;
    LOG_TRACE("(\"%s\")", filename);
    NOT_IMPLEMENTED();
}

// Offset: 11434
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrMaterialSave(char *filename, br_material *ptr)
br_uint_32 BrMaterialSave(char *filename, br_material *ptr) {
    LOG_TRACE("(\"%s\", %p)", filename, ptr);
    NOT_IMPLEMENTED();
}

// Offset: 11504
// Size: 0x51
//IDA: br_actor* __cdecl BrActorLoad(char *filename)
br_actor* BrActorLoad(char *filename) {
    br_actor *ptr;
    LOG_TRACE("(\"%s\")", filename);
    NOT_IMPLEMENTED();
}

// Offset: 11597
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrActorSave(char *filename, br_actor *ptr)
br_uint_32 BrActorSave(char *filename, br_actor *ptr) {
    LOG_TRACE("(\"%s\", %p)", filename, ptr);
    NOT_IMPLEMENTED();
}

// Offset: 11672
// Size: 0xae
//IDA: br_error __cdecl BrModelFileCount(char *filename, br_uint_16 *num)
br_error BrModelFileCount(char *filename, br_uint_16 *num) {
    br_datafile *df;
    LOG_TRACE("(\"%s\", %p)", filename, num);
    NOT_IMPLEMENTED();
}

// Offset: 11863
// Size: 0xae
//IDA: br_error __cdecl BrActorFileCount(char *filename, br_uint_16 *num)
br_error BrActorFileCount(char *filename, br_uint_16 *num) {
    br_datafile *df;
    LOG_TRACE("(\"%s\", %p)", filename, num);
    NOT_IMPLEMENTED();
}

// Offset: 12057
// Size: 0xae
//IDA: br_error __cdecl BrMaterialFileCount(char *filename, br_uint_16 *num)
br_error BrMaterialFileCount(char *filename, br_uint_16 *num) {
    br_datafile *df;
    LOG_TRACE("(\"%s\", %p)", filename, num);
    NOT_IMPLEMENTED();
}

