#ifndef _DATAFILE_H_
#define _DATAFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern int DatafileStackTop; // addr: 0001D264
extern char *member_type_names[32]; // addr: 0001D268
extern char *ChunkNames[61]; // addr: 0001D2E8
extern br_file_primitives _BrFilePrimsNull; // addr: 0001D3DC
extern br_file_primitives _BrFilePrimsReadBinary; // addr: 0001D41C
extern br_file_primitives _BrFilePrimsWriteBinary; // addr: 0001D45C
extern br_file_primitives _BrFilePrimsReadText; // addr: 0001D49C
extern br_file_primitives _BrFilePrimsWriteText; // addr: 0001D4DC
extern struct {		// size: 0xc
        int type;		// @0x0
        void *value;		// @0x4
        int count;		// @0x8
    } DatafileStack[1024]; // addr: 00045CFC

// Offset: 7
// Size: 0xd1
//IDA: void __usercall DfPush(int type@<EAX>, void *value@<EDX>, int count@<EBX>)
void DfPush(int type, void *value, int count);

// Offset: 222
// Size: 0xc1
//IDA: void* __usercall DfPop@<EAX>(int type@<EAX>, int *countp@<EDX>)
void* DfPop(int type, int *countp);

// Offset: 421
// Size: 0xc1
//IDA: void* __usercall DfTop@<EAX>(int type@<EAX>, int *countp@<EDX>)
void* DfTop(int type, int *countp);

// Offset: 624
// Size: 0x49
//IDA: int __cdecl DfTopType()
int DfTopType();

// Offset: 710
// Size: 0x163
//IDA: int __usercall TextReadLine@<EAX>(br_datafile *df@<EAX>, char **ident@<EDX>, char **data@<EBX>)
int TextReadLine(br_datafile *df, char **ident, char **data);

// Offset: 1083
// Size: 0x1b4
//IDA: br_uint_16 __usercall scalarTypeConvert@<AX>(br_datafile *df@<EAX>, br_uint_16 t@<EDX>)
br_uint_16 scalarTypeConvert(br_datafile *df, br_uint_16 t);

// Offset: 1539
// Size: 0x4bb
//IDA: br_uint_32 __usercall DfStructWriteBinary@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
br_uint_32 DfStructWriteBinary(br_datafile *df, br_file_struct *str, void *base);

// Offset: 2769
// Size: 0x572
//IDA: br_uint_32 __usercall DfStructReadBinary@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
br_uint_32 DfStructReadBinary(br_datafile *df, br_file_struct *str, void *base);

// Offset: 4182
// Size: 0x1ab
//IDA: int __usercall DfStructSizeBinary@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
int DfStructSizeBinary(br_datafile *df, br_file_struct *str, void *base);

// Offset: 4624
// Size: 0xb1
//IDA: int __usercall EnumFromString@<EAX>(br_file_enum *e@<EAX>, char *str@<EDX>)
int EnumFromString(br_file_enum *e, char *str);

// Offset: 4814
// Size: 0x8a
//IDA: char* __usercall EnumToString@<EAX>(br_file_enum *e@<EAX>, int num@<EDX>)
char* EnumToString(br_file_enum *e, int num);

// Offset: 4970
// Size: 0x5c
//IDA: br_uint_32 __usercall DfStructWriteText@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
br_uint_32 DfStructWriteText(br_datafile *df, br_file_struct *str, void *base);

// Offset: 5081
// Size: 0x723
//IDA: br_uint_32 __usercall StructWriteTextSub@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>, int indent@<ECX>)
br_uint_32 StructWriteTextSub(br_datafile *df, br_file_struct *str, void *base, int indent);

// Offset: 6925
// Size: 0x9c
//IDA: br_uint_32 __usercall DfStructReadText@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
br_uint_32 DfStructReadText(br_datafile *df, br_file_struct *str, void *base);

// Offset: 7099
// Size: 0x649
//IDA: br_uint_32 __usercall StructReadTextSub@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
br_uint_32 StructReadTextSub(br_datafile *df, br_file_struct *str, void *base);

// Offset: 8725
// Size: 0x90
//IDA: int __usercall DfStructSizeText@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>)
int DfStructSizeText(br_datafile *df, br_file_struct *str, void *base);

// Offset: 8888
// Size: 0x6d
//IDA: br_uint_32 __usercall DfStructWriteArray@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>, int n@<ECX>)
br_uint_32 DfStructWriteArray(br_datafile *df, br_file_struct *str, void *base, int n);

// Offset: 9015
// Size: 0x7e
//IDA: br_uint_32 __usercall DfStructReadArray@<EAX>(br_datafile *df@<EAX>, br_file_struct *str@<EDX>, void *base@<EBX>, int n@<ECX>)
br_uint_32 DfStructReadArray(br_datafile *df, br_file_struct *str, void *base, int n);

// Offset: 9158
// Size: 0x96
//IDA: int __usercall DfChunkWriteText@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>)
int DfChunkWriteText(br_datafile *df, br_uint_32 id, br_uint_32 length);

// Offset: 9324
// Size: 0xee
//IDA: int __usercall DfChunkReadText@<EAX>(br_datafile *df@<EAX>, br_uint_32 *plength@<EDX>)
int DfChunkReadText(br_datafile *df, br_uint_32 *plength);

// Offset: 9581
// Size: 0x79
//IDA: int __usercall DfChunkWriteBinary@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>)
int DfChunkWriteBinary(br_datafile *df, br_uint_32 id, br_uint_32 length);

// Offset: 9720
// Size: 0xd2
//IDA: int __usercall DfChunkReadBinary@<EAX>(br_datafile *df@<EAX>, br_uint_32 *plength@<EDX>)
int DfChunkReadBinary(br_datafile *df, br_uint_32 *plength);

// Offset: 9947
// Size: 0x3d
//IDA: void __usercall DfCountWriteText(br_datafile *df@<EAX>, br_uint_32 count@<EDX>)
void DfCountWriteText(br_datafile *df, br_uint_32 count);

// Offset: 10024
// Size: 0x6d
//IDA: br_uint_32 __usercall DfCountReadText@<EAX>(br_datafile *df@<EAX>)
br_uint_32 DfCountReadText(br_datafile *df);

// Offset: 10152
// Size: 0x4a
//IDA: void __usercall DfCountWriteBinary(br_datafile *df@<EAX>, br_uint_32 count@<EDX>)
void DfCountWriteBinary(br_datafile *df, br_uint_32 count);

// Offset: 10244
// Size: 0x4c
//IDA: br_uint_32 __usercall DfCountReadBinary@<EAX>(br_datafile *df@<EAX>)
br_uint_32 DfCountReadBinary(br_datafile *df);

// Offset: 10336
// Size: 0x2f
//IDA: int __usercall DfCountSizeText@<EAX>(br_datafile *df@<EAX>)
int DfCountSizeText(br_datafile *df);

// Offset: 10401
// Size: 0x2f
//IDA: int __usercall DfCountSizeBinary@<EAX>(br_datafile *df@<EAX>)
int DfCountSizeBinary(br_datafile *df);

// Offset: 10464
// Size: 0xe3
//IDA: br_uint_8* __usercall BlockWriteSetup@<EAX>(void *base@<EAX>, int block_size@<EDX>, int block_stride@<EBX>, int block_count@<ECX>, int size)
br_uint_8* BlockWriteSetup(void *base, int block_size, int block_stride, int block_count, int size);

// Offset: 10708
// Size: 0x166
//IDA: int __usercall DfBlockWriteText@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int block_size@<EBX>, int block_stride@<ECX>, int block_count, int size)
int DfBlockWriteText(br_datafile *df, void *base, int block_size, int block_stride, int block_count, int size);

// Offset: 11082
// Size: 0x1f2
//IDA: void* __usercall DfBlockReadText@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int *count@<EBX>, int size@<ECX>, int mtype)
void* DfBlockReadText(br_datafile *df, void *base, int *count, int size, int mtype);

// Offset: 11599
// Size: 0xcb
//IDA: int __usercall DfBlockWriteBinary@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int block_size@<EBX>, int block_stride@<ECX>, int block_count, int size)
int DfBlockWriteBinary(br_datafile *df, void *base, int block_size, int block_stride, int block_count, int size);

// Offset: 11820
// Size: 0x12c
//IDA: void* __usercall DfBlockReadBinary@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int *count@<EBX>, int size@<ECX>, int mtype)
void* DfBlockReadBinary(br_datafile *df, void *base, int *count, int size, int mtype);

// Offset: 12136
// Size: 0x4e
//IDA: int __usercall DfBlockSizeText@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int block_size@<EBX>, int block_stride@<ECX>, int block_count, int size)
int DfBlockSizeText(br_datafile *df, void *base, int block_size, int block_stride, int block_count, int size);

// Offset: 12232
// Size: 0x3e
//IDA: int __usercall DfBlockSizeBinary@<EAX>(br_datafile *df@<EAX>, void *base@<EDX>, int block_size@<EBX>, int block_stride@<ECX>, int block_count, int size)
int DfBlockSizeBinary(br_datafile *df, void *base, int block_size, int block_stride, int block_count, int size);

// Offset: 12309
// Size: 0x9d
//IDA: char* __usercall DfNameReadText@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
char* DfNameReadText(br_datafile *df, char *name);

// Offset: 12482
// Size: 0x5b
//IDA: int __usercall DfNameWriteText@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
int DfNameWriteText(br_datafile *df, char *name);

// Offset: 12588
// Size: 0x30
//IDA: int __usercall DfNameSizeText@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
int DfNameSizeText(br_datafile *df, char *name);

// Offset: 12653
// Size: 0x7d
//IDA: char* __usercall DfNameReadBinary@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
char* DfNameReadBinary(br_datafile *df, char *name);

// Offset: 12796
// Size: 0x65
//IDA: int __usercall DfNameWriteBinary@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
int DfNameWriteBinary(br_datafile *df, char *name);

// Offset: 12914
// Size: 0x48
//IDA: int __usercall DfNameSizeBinary@<EAX>(br_datafile *df@<EAX>, char *name@<EDX>)
int DfNameSizeBinary(br_datafile *df, char *name);

// Offset: 12997
// Size: 0x5c
//IDA: int __usercall DfSkipText@<EAX>(br_datafile *df@<EAX>, br_uint_32 length@<EDX>)
int DfSkipText(br_datafile *df, br_uint_32 length);

// Offset: 13102
// Size: 0x41
//IDA: int __usercall DfSkipBinary@<EAX>(br_datafile *df@<EAX>, br_uint_32 length@<EDX>)
int DfSkipBinary(br_datafile *df, br_uint_32 length);

// Offset: 13185
// Size: 0xf1
//IDA: int __usercall DfChunksInterpret@<EAX>(br_datafile *df@<EAX>, br_chunks_table *table@<EDX>)
int DfChunksInterpret(br_datafile *df, br_chunks_table *table);

// Offset: 13438
// Size: 0x3b
//IDA: void __cdecl BrNullOther()
void BrNullOther();

// Offset: 13512
// Size: 0xa8
//IDA: int __cdecl DfFileIdentify(br_uint_8 *magics, br_size_t n_magics)
int DfFileIdentify(br_uint_8 *magics, br_size_t n_magics);

// Offset: 13687
// Size: 0x116
//IDA: br_datafile* __usercall DfOpen@<EAX>(char *name@<EAX>, int write@<EDX>, br_token scalar_type@<EBX>)
br_datafile* DfOpen(char *name, int write, br_token scalar_type);

// Offset: 13973
// Size: 0xc6
//IDA: void __usercall DfClose(br_datafile *df@<EAX>)
void DfClose(br_datafile *df);

// Offset: 14186
// Size: 0x5e
//IDA: int __cdecl BrWriteModeSet(int mode)
int BrWriteModeSet(int mode);

#endif
