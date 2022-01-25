#include "drfile.h"

br_filesystem gFilesystem;
br_filesystem *gOld_file_system;

// Offset: 0
// Size: 0x40
//IDA: void* __cdecl DRStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result)
void* DRStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result) {
    LOG_TRACE("(\"%s\", %d, %p, %p)", name, n_magics, identify, mode_result);
    NOT_IMPLEMENTED();
}

// Offset: 64
// Size: 0x38
//IDA: void* __cdecl DRStdioOpenWrite(char *name, int mode)
void* DRStdioOpenWrite(char *name, int mode) {
    LOG_TRACE("(\"%s\", %d)", name, mode);
    NOT_IMPLEMENTED();
}

// Offset: 120
// Size: 0x2e
//IDA: void __cdecl DRStdioClose(void *f)
void DRStdioClose(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 168
// Size: 0x46
//IDA: br_size_t __cdecl DRStdioRead(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t DRStdioRead(void *buf, br_size_t size, unsigned int n, void *f) {
    br_size_t result;
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 240
// Size: 0x46
//IDA: br_size_t __cdecl DRStdioWrite(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t DRStdioWrite(void *buf, br_size_t size, unsigned int n, void *f) {
    br_size_t result;
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 312
// Size: 0xbb
//IDA: void __cdecl InstallDRFileCalls()
void InstallDRFileCalls() {
    br_filesystem *temp_system;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

