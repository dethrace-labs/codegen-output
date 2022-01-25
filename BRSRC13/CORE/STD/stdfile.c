#include "stdfile.h"

br_filesystem BrStdioFilesystem;
br_filesystem *_BrDefaultFilesystem;

// Offset: 18
// Size: 0x28
//IDA: br_uint_32 __cdecl BrStdioAttributes()
br_uint_32 BrStdioAttributes() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 74
// Size: 0x253
//IDA: void* __cdecl BrStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result)
void* BrStdioOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *identify, int *mode_result) {
    FILE *fh;
    char *br_path;
    char config_path[512];
    char try_name[512];
    char *cp;
    br_uint_8 magics[16];
    int open_mode;
    LOG_TRACE("(\"%s\", %d, %p, %p)", name, n_magics, identify, mode_result);
    NOT_IMPLEMENTED();
}

// Offset: 686
// Size: 0x52
//IDA: void* __cdecl BrStdioOpenWrite(char *name, int mode)
void* BrStdioOpenWrite(char *name, int mode) {
    FILE *fh;
    LOG_TRACE("(\"%s\", %d)", name, mode);
    NOT_IMPLEMENTED();
}

// Offset: 781
// Size: 0x26
//IDA: void __cdecl BrStdioClose(void *f)
void BrStdioClose(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 830
// Size: 0x2d
//IDA: int __cdecl BrStdioEof(void *f)
int BrStdioEof(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 890
// Size: 0x75
//IDA: int __cdecl BrStdioGetChar(void *f)
int BrStdioGetChar(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 1022
// Size: 0x29
//IDA: void __cdecl BrStdioPutChar(int c, void *f)
void BrStdioPutChar(int c, void *f) {
    LOG_TRACE("(%d, %p)", c, f);
    NOT_IMPLEMENTED();
}

// Offset: 1075
// Size: 0x35
//IDA: br_size_t __cdecl BrStdioRead(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t BrStdioRead(void *buf, br_size_t size, unsigned int n, void *f) {
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 1141
// Size: 0x35
//IDA: br_size_t __cdecl BrStdioWrite(void *buf, br_size_t size, unsigned int n, void *f)
br_size_t BrStdioWrite(void *buf, br_size_t size, unsigned int n, void *f) {
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 1209
// Size: 0x8d
//IDA: br_size_t __cdecl BrStdioGetLine(char *buf, br_size_t buf_len, void *f)
br_size_t BrStdioGetLine(char *buf, br_size_t buf_len, void *f) {
    br_size_t l;
    LOG_TRACE("(\"%s\", %d, %p)", buf, buf_len, f);
    NOT_IMPLEMENTED();
}

// Offset: 1365
// Size: 0x36
//IDA: void __cdecl BrStdioPutLine(char *buf, void *f)
void BrStdioPutLine(char *buf, void *f) {
    LOG_TRACE("(\"%s\", %p)", buf, f);
    NOT_IMPLEMENTED();
}

// Offset: 1434
// Size: 0x2e
//IDA: void __cdecl BrStdioAdvance(br_size_t count, void *f)
void BrStdioAdvance(br_size_t count, void *f) {
    LOG_TRACE("(%d, %p)", count, f);
    NOT_IMPLEMENTED();
}

