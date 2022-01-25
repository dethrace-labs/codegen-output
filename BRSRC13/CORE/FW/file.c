#include "file.h"


// Offset: 12
// Size: 0x56
//IDA: void __cdecl _BrFileFree(void *res, br_uint_8 res_class, br_size_t size)
void _BrFileFree(void *res, br_uint_8 res_class, br_size_t size) {
    br_file *file;
    LOG_TRACE("(%p, %d, %d)", res, res_class, size);
    NOT_IMPLEMENTED();
}

// Offset: 115
// Size: 0x4d
//IDA: br_uint_32 __cdecl BrFileAttributes()
br_uint_32 BrFileAttributes() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 207
// Size: 0x10b
//IDA: void* __cdecl BrFileOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *mode_test, int *mode_result)
void* BrFileOpenRead(char *name, br_size_t n_magics, br_mode_test_cbfn *mode_test, int *mode_result) {
    void *raw_file;
    br_file *file;
    int bin_mode;
    LOG_TRACE("(\"%s\", %d, %p, %p)", name, n_magics, mode_test, mode_result);
    NOT_IMPLEMENTED();
}

// Offset: 490
// Size: 0xe6
//IDA: void* __cdecl BrFileOpenWrite(char *name, int mode)
void* BrFileOpenWrite(char *name, int mode) {
    void *raw_file;
    br_file *file;
    LOG_TRACE("(\"%s\", %d)", name, mode);
    NOT_IMPLEMENTED();
}

// Offset: 732
// Size: 0x46
//IDA: void __cdecl BrFileClose(void *f)
void BrFileClose(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 812
// Size: 0x75
//IDA: int __cdecl BrFileEof(void *f)
int BrFileEof(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 943
// Size: 0x78
//IDA: int __cdecl BrFileGetChar(void *f)
int BrFileGetChar(void *f) {
    LOG_TRACE("(%p)", f);
    NOT_IMPLEMENTED();
}

// Offset: 1077
// Size: 0x76
//IDA: void __cdecl BrFilePutChar(int c, void *f)
void BrFilePutChar(int c, void *f) {
    LOG_TRACE("(%d, %p)", c, f);
    NOT_IMPLEMENTED();
}

// Offset: 1206
// Size: 0xa3
//IDA: int __cdecl BrFileRead(void *buf, int size, int n, void *f)
int BrFileRead(void *buf, int size, int n, void *f) {
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 1381
// Size: 0xa3
//IDA: int __cdecl BrFileWrite(void *buf, int size, int n, void *f)
int BrFileWrite(void *buf, int size, int n, void *f) {
    LOG_TRACE("(%p, %d, %d, %p)", buf, size, n, f);
    NOT_IMPLEMENTED();
}

// Offset: 1558
// Size: 0x7d
//IDA: int __cdecl BrFileGetLine(char *buf, br_size_t buf_len, void *f)
int BrFileGetLine(char *buf, br_size_t buf_len, void *f) {
    LOG_TRACE("(\"%s\", %d, %p)", buf, buf_len, f);
    NOT_IMPLEMENTED();
}

// Offset: 1697
// Size: 0x76
//IDA: void __cdecl BrFilePutLine(char *buf, void *f)
void BrFilePutLine(char *buf, void *f) {
    LOG_TRACE("(\"%s\", %p)", buf, f);
    NOT_IMPLEMENTED();
}

// Offset: 1829
// Size: 0x76
//IDA: void __cdecl BrFileAdvance(long count, void *f)
void BrFileAdvance(long count, void *f) {
    LOG_TRACE("(%d, %p)", count, f);
    NOT_IMPLEMENTED();
}

// Offset: 1960
// Size: 0xad
//IDA: int __cdecl BrFilePrintf(void *f, char *fmt, ...)
int BrFilePrintf(void *f, char *fmt, ...) {
    int n;
    va_list args;
    LOG_TRACE("(%p, \"%s\")", f, fmt);
    NOT_IMPLEMENTED();
}

