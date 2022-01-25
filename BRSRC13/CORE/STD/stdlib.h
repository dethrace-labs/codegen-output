#ifndef _STDLIB_H_
#define _STDLIB_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 9
// Size: 0x32
//IDA: int __cdecl BrMemCmp(void *s1, void *s2, size_t n)
int BrMemCmp(void *s1, void *s2, size_t n);

// Offset: 68
// Size: 0x32
//IDA: void* __cdecl BrMemCpy(void *s1, void *s2, size_t n)
void* BrMemCpy(void *s1, void *s2, size_t n);

// Offset: 127
// Size: 0x32
//IDA: void* __cdecl BrMemSet(void *s, int c, size_t n)
void* BrMemSet(void *s, int c, size_t n);

// Offset: 186
// Size: 0x2f
//IDA: char* __cdecl BrStrCat(char *s1, char *s2)
char* BrStrCat(char *s1, char *s2);

// Offset: 242
// Size: 0x2f
//IDA: int __cdecl BrStrCmp(char *s1, char *s2)
int BrStrCmp(char *s1, char *s2);

// Offset: 299
// Size: 0x2f
//IDA: int __cdecl BrStrICmp(char *s1, char *s2)
int BrStrICmp(char *s1, char *s2);

// Offset: 355
// Size: 0x2f
//IDA: char* __cdecl BrStrCpy(char *s1, char *s2)
char* BrStrCpy(char *s1, char *s2);

// Offset: 411
// Size: 0x2c
//IDA: br_size_t __cdecl BrStrLen(char *s)
br_size_t BrStrLen(char *s);

// Offset: 465
// Size: 0x32
//IDA: int __cdecl BrStrNCmp(char *s1, char *s2, size_t n)
int BrStrNCmp(char *s1, char *s2, size_t n);

// Offset: 526
// Size: 0x32
//IDA: int __cdecl BrStrNICmp(char *s1, char *s2, size_t n)
int BrStrNICmp(char *s1, char *s2, size_t n);

// Offset: 586
// Size: 0x32
//IDA: char* __cdecl BrStrNCpy(char *s1, char *s2, size_t n)
char* BrStrNCpy(char *s1, char *s2, size_t n);

// Offset: 646
// Size: 0x31
//IDA: char* __cdecl BrStrRChr(char *s1, char c)
char* BrStrRChr(char *s1, char c);

// Offset: 703
// Size: 0x23
//IDA: void __cdecl BrAbort()
void BrAbort();

// Offset: 747
// Size: 0x2c
//IDA: char* __cdecl BrGetEnv(char *name)
char* BrGetEnv(char *name);

// Offset: 800
// Size: 0x3a
//IDA: float __cdecl BrStrToF(char *nptr, char **endptr)
float BrStrToF(char *nptr, char **endptr);

// Offset: 867
// Size: 0x43
//IDA: double __cdecl BrStrToD(char *nptr, char **endptr)
double BrStrToD(char *nptr, char **endptr);

// Offset: 943
// Size: 0x32
//IDA: long __cdecl BrStrToL(char *nptr, char **endptr, int base)
long BrStrToL(char *nptr, char **endptr, int base);

// Offset: 1003
// Size: 0x32
//IDA: unsigned long __cdecl BrStrToUL(char *nptr, char **endptr, int base)
unsigned long BrStrToUL(char *nptr, char **endptr, int base);

// Offset: 1063
// Size: 0x3b
//IDA: br_boolean __cdecl BrIsAlpha(int c)
br_boolean BrIsAlpha(int c);

// Offset: 1132
// Size: 0x3b
//IDA: br_boolean __cdecl BrIsDigit(int c)
br_boolean BrIsDigit(int c);

// Offset: 1201
// Size: 0x3b
//IDA: br_boolean __cdecl BrIsSpace(int c)
br_boolean BrIsSpace(int c);

// Offset: 1270
// Size: 0x3b
//IDA: br_boolean __cdecl BrIsPrint(int c)
br_boolean BrIsPrint(int c);

// Offset: 1340
// Size: 0x32
//IDA: br_int_32 __cdecl BrVSprintf(char *buf, char *fmt, char **args)
br_int_32 BrVSprintf(char *buf, char *fmt, char **args);

// Offset: 1402
// Size: 0x65
//IDA: br_int_32 __cdecl BrVSprintfN(char *buf, br_size_t buf_size, char *fmt, char **args)
br_int_32 BrVSprintfN(char *buf, br_size_t buf_size, char *fmt, char **args);

// Offset: 1513
// Size: 0x32
//IDA: br_int_32 __cdecl BrVSScanf(char *buf, char *fmt, char **args)
br_int_32 BrVSScanf(char *buf, char *fmt, char **args);

#endif
