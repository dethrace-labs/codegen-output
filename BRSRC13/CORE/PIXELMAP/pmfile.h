#ifndef _PMFILE_H_
#define _PMFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern br_file_enum_member pixelmap_type_FM[15]; // addr: 0001C760
extern br_file_enum pixelmap_type_F; // addr: 0001C7D8
extern br_file_struct_member br_old_pixelmap_FM[7]; // addr: 0001C7E0
extern br_file_struct_member br_pixelmap_FM[8]; // addr: 0001C850
extern br_file_struct br_pixelmap_F; // addr: 0001C8D0
extern br_file_struct br_old_pixelmap_F; // addr: 0001C8E0
extern br_chunks_table_entry PixelmapLoadEntries[5]; // addr: 0001C8F0
extern br_chunks_table PixelmapLoadTable; // addr: 0001C92C

// Offset: 18
// Size: 0x99
//IDA: int __usercall FopWrite_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_pixelmap *pixelmap@<EDX>)
int FopWrite_PIXELMAP(br_datafile *df, br_pixelmap *pixelmap);

// Offset: 192
// Size: 0xb5
//IDA: int __usercall FopRead_OLD_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_OLD_PIXELMAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 390
// Size: 0xb5
//IDA: int __usercall FopRead_PIXELMAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELMAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 587
// Size: 0x21e
//IDA: int __usercall FopWrite_PIXELS@<EAX>(br_datafile *df@<EAX>, br_pixelmap *pixelmap@<EDX>)
int FopWrite_PIXELS(br_datafile *df, br_pixelmap *pixelmap);

// Offset: 1144
// Size: 0x90
//IDA: int __usercall FopRead_PIXELS@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_PIXELS(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 1305
// Size: 0x42
//IDA: int __usercall FopWrite_ADD_MAP@<EAX>(br_datafile *df@<EAX>)
int FopWrite_ADD_MAP(br_datafile *df);

// Offset: 1387
// Size: 0x69
//IDA: int __usercall FopRead_ADD_MAP@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_ADD_MAP(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 1511
// Size: 0xa2
//IDA: br_uint_32 __cdecl BrPixelmapLoadMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num)
br_uint_32 BrPixelmapLoadMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num);

// Offset: 1687
// Size: 0xa1
//IDA: int __usercall WritePixelmap@<EAX>(br_pixelmap *pp@<EAX>, br_datafile *df@<EDX>)
int WritePixelmap(br_pixelmap *pp, br_datafile *df);

// Offset: 1867
// Size: 0xda
//IDA: br_uint_32 __cdecl BrPixelmapSaveMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num)
br_uint_32 BrPixelmapSaveMany(char *filename, br_pixelmap **pixelmaps, br_uint_16 num);

// Offset: 2100
// Size: 0x51
//IDA: br_pixelmap* __cdecl BrPixelmapLoad(char *filename)
br_pixelmap* BrPixelmapLoad(char *filename);

// Offset: 2196
// Size: 0x3a
//IDA: br_uint_32 __cdecl BrPixelmapSave(char *filename, br_pixelmap *ptr)
br_uint_32 BrPixelmapSave(char *filename, br_pixelmap *ptr);

#endif
