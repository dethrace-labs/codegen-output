#include "pmfile.h"

br_file_enum_member pixelmap_type_FM[15];
br_file_enum pixelmap_type_F;
br_file_struct_member br_old_pixelmap_FM[7];
br_file_struct_member br_pixelmap_FM[8];
br_file_struct br_pixelmap_F;
br_file_struct br_old_pixelmap_F;
br_chunks_table_entry PixelmapLoadEntries[5];
br_chunks_table PixelmapLoadTable;

// Offset: 18
// Size: 0x99
//IDA: int __usercall FopWrite_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_pixelmap *pixelmap@<EDX>)
int FopWrite_PIXELMAP(br_datafile *df, br_pixelmap *pixelmap) {
    br_pixelmap pmap;
    LOG_TRACE("(%p, %p)", df, pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 192
// Size: 0xb5
//IDA: int __usercall FopRead_OLD_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_PIXELMAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_pixelmap *pp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 390
// Size: 0xb5
//IDA: int __usercall FopRead_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELMAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_pixelmap *pp;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 587
// Size: 0x21e
//IDA: int __usercall FopWrite_PIXELS@<EAX>(br_datafile *df@<EAX>, br_pixelmap *pixelmap@<EDX>)
int FopWrite_PIXELS(br_datafile *df, br_pixelmap *pixelmap) {
    int size;
    int bytes;
    int block_count;
    char *pixels;
    int __block0__mipSize;
    int __block0__currentMipSize;
    LOG_TRACE("(%p, %p)", df, pixelmap);
    NOT_IMPLEMENTED();
}

// Offset: 1144
// Size: 0x90
//IDA: int __usercall FopRead_PIXELS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    int icount;
    br_pixelmap *pp;
    int size;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 1305
// Size: 0x42
//IDA: int __usercall FopWrite_ADD_MAP@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ADD_MAP(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 1387
// Size: 0x69
//IDA: int __usercall FopRead_ADD_MAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ADD_MAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    br_pixelmap *pp;
    br_pixelmap *map;
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 1511
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrPixelmapLoadMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num)
br_uint_32 BrPixelmapLoadMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num) {
    br_datafile *df;
    int count;
    int r;
    LOG_TRACE("(\"%s\", %p, %d)", filename, pixelmaps, num);
    NOT_IMPLEMENTED();
}

// Offset: 1687
// Size: 0xa1
//IDA: int __usercall WritePixelmap@<EAX>(br_pixelmap *pp@<EAX>, br_datafile *df@<EDX>)
int WritePixelmap(br_pixelmap *pp, br_datafile *df) {
    LOG_TRACE("(%p, %p)", pp, df);
    NOT_IMPLEMENTED();
}

// Offset: 1867
// Size: 0xda
//IDA: br_uint_32 __cdecl BrPixelmapSaveMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num)
br_uint_32 BrPixelmapSaveMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num) {
    br_datafile *df;
    int i;
    LOG_TRACE("(\"%s\", %p, %d)", filename, pixelmaps, num);
    NOT_IMPLEMENTED();
}

// Offset: 2100
// Size: 0x51
//IDA: br_pixelmap* __cdecl BrPixelmapLoad(char *filename)
br_pixelmap* BrPixelmapLoad(char *filename) {
    br_pixelmap *ptr;
    LOG_TRACE("(\"%s\")", filename);
    NOT_IMPLEMENTED();
}

// Offset: 2196
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrPixelmapSave(char *filename, br_pixelmap *ptr)
br_uint_32 BrPixelmapSave(char *filename, br_pixelmap *ptr) {
    LOG_TRACE("(\"%s\", %p)", filename, ptr);
    NOT_IMPLEMENTED();
}

