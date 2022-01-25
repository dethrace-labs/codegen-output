#ifndef _DRFILE_H_
#define _DRFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern br_filesystem gFilesystem; // addr: 0000E8F4
extern br_filesystem *gOld_file_system; // addr: 00029C60

// Offset: 0
// Size: 0x40
//IDA: void* __cdecl DRStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result)
void* DRStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result);

// Offset: 64
// Size: 0x38
//IDA: void* __cdecl DRStdioOpenWrite(char *name, int mode)
void* DRStdioOpenWrite(char *name, int mode);

// Offset: 120
// Size: 0x2e
//IDA: void __cdecl DRStdioClose(void *f)
void DRStdioClose(void *f);

// Offset: 168
// Size: 0x46
//IDA: br_size_t __cdecl DRStdioRead(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t DRStdioRead(void *buf, br_size_t size, unsigned int n, void *f);

// Offset: 240
// Size: 0x46
//IDA: br_size_t __cdecl DRStdioWrite(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t DRStdioWrite(void *buf, br_size_t size, unsigned int n, void *f);

// Offset: 312
// Size: 0xbb
//IDA: void __cdecl InstallDRFileCalls()
void InstallDRFileCalls();

#endif
