#ifndef _FILE_H_
#define _FILE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 12
// Size: 0x56
//IDA: void __cdecl _BrFileFree(void *res, br_uint_8 res_class, br_size_t size)
void _BrFileFree(void *res, br_uint_8 res_class, br_size_t size);

// Offset: 115
// Size: 0x4d
//IDA: br_uint_32 __cdecl BrFileAttributes()
br_uint_32 BrFileAttributes();

// Offset: 207
// Size: 0x10b
//IDA: void* __cdecl BrFileOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *mode_test, int *mode_result)
void* BrFileOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *mode_test, int *mode_result);

// Offset: 490
// Size: 0xe6
//IDA: void* __cdecl BrFileOpenWrite(char *name, int mode)
void* BrFileOpenWrite(char *name, int mode);

// Offset: 732
// Size: 0x46
//IDA: void __cdecl BrFileClose(void *f)
void BrFileClose(void *f);

// Offset: 812
// Size: 0x75
//IDA: int __cdecl BrFileEof(void *f)
int BrFileEof(void *f);

// Offset: 943
// Size: 0x78
//IDA: int __cdecl BrFileGetChar(void *f)
int BrFileGetChar(void *f);

// Offset: 1077
// Size: 0x76
//IDA: void __cdecl BrFilePutChar(int c, void *f)
void BrFilePutChar(int c, void *f);

// Offset: 1206
// Size: 0xa3
//IDA: int __cdecl BrFileRead(void *buf, int size, int n, void *f)
int BrFileRead(void *buf, int size, int n, void *f);

// Offset: 1381
// Size: 0xa3
//IDA: int __cdecl BrFileWrite(void *buf, int size, int n, void *f)
int BrFileWrite(void *buf, int size, int n, void *f);

// Offset: 1558
// Size: 0x7d
//IDA: int __cdecl BrFileGetLine(char *buf, br_size_t buf_len, void *f)
int BrFileGetLine(char *buf, br_size_t buf_len, void *f);

// Offset: 1697
// Size: 0x76
//IDA: void __cdecl BrFilePutLine(char *buf, void *f)
void BrFilePutLine(char *buf, void *f);

// Offset: 1829
// Size: 0x76
//IDA: void __cdecl BrFileAdvance(long count, void *f)
void BrFileAdvance(long count, void *f);

// Offset: 1960
// Size: 0xad
//IDA: int __cdecl BrFilePrintf(void *f, char *fmt, ...)
int BrFilePrintf(void *f, char *fmt, ...);

#endif
