#ifndef _STDFILE_H_
#define _STDFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern br_filesystem BrStdioFilesystem; // addr: 000221F4
extern br_filesystem *_BrDefaultFilesystem; // addr: 00022228

// Offset: 18
// Size: 0x28
//IDA: br_uint_32 __cdecl BrStdioAttributes()
br_uint_32 BrStdioAttributes();

// Offset: 74
// Size: 0x253
//IDA: void* __cdecl BrStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result)
void* BrStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result);

// Offset: 686
// Size: 0x52
//IDA: void* __cdecl BrStdioOpenWrite(char *name, int mode)
void* BrStdioOpenWrite(char *name, int mode);

// Offset: 781
// Size: 0x26
//IDA: void __cdecl BrStdioClose(void *f)
void BrStdioClose(void *f);

// Offset: 830
// Size: 0x2d
//IDA: int __cdecl BrStdioEof(void *f)
int BrStdioEof(void *f);

// Offset: 890
// Size: 0x75
//IDA: int __cdecl BrStdioGetChar(void *f)
int BrStdioGetChar(void *f);

// Offset: 1022
// Size: 0x29
//IDA: void __cdecl BrStdioPutChar(int c, void *f)
void BrStdioPutChar(int c, void *f);

// Offset: 1075
// Size: 0x35
//IDA: br_size_t __cdecl BrStdioRead(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t BrStdioRead(void *buf, br_size_t size, unsigned int n, void *f);

// Offset: 1141
// Size: 0x35
//IDA: br_size_t __cdecl BrStdioWrite(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t BrStdioWrite(void *buf, br_size_t size, unsigned int n, void *f);

// Offset: 1209
// Size: 0x8d
//IDA: br_size_t __cdecl BrStdioGetLine(char *buf, br_size_t buf_len, void *f)
br_size_t BrStdioGetLine(char *buf, br_size_t buf_len, void *f);

// Offset: 1365
// Size: 0x36
//IDA: void __cdecl BrStdioPutLine(char *buf, void *f)
void BrStdioPutLine(char *buf, void *f);

// Offset: 1434
// Size: 0x2e
//IDA: void __cdecl BrStdioAdvance(br_size_t count, void *f)
void BrStdioAdvance(br_size_t count, void *f);

#endif
