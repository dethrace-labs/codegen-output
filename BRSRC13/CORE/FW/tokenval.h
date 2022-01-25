#ifndef _TOKENVAL_H_
#define _TOKENVAL_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 21
// Size: 0x58
//IDA: br_tv_template* __cdecl BrTVTemplateAllocate(void *res, br_tv_template_entry *entries, int n_entries)
br_tv_template* BrTVTemplateAllocate(void *res, br_tv_template_entry *entries, int n_entries);

// Offset: 126
// Size: 0x2a
//IDA: void __cdecl BrTVTemplateFree(br_tv_template *t)
void BrTVTemplateFree(br_tv_template *t);

// Offset: 189
// Size: 0x72
//IDA: void __usercall templateResolveNames(br_tv_template *template@<EAX>)
void templateResolveNames(br_tv_template *template);

// Offset: 319
// Size: 0x280
//IDA: void __usercall templateMakeMap(br_tv_template *template@<EAX>)
void templateMakeMap(br_tv_template *template);

// Offset: 979
// Size: 0xab
//IDA: br_fixed_ls* __usercall ConvertFloatToFixed@<EAX>(br_fixed_ls **pextra@<EAX>, br_float *src@<EDX>, br_int_32 count@<EBX>, br_size_t *pextra_space@<ECX>)
br_fixed_ls* ConvertFloatToFixed(br_fixed_ls **pextra, br_float *src, br_int_32 count, br_size_t *pextra_space);

// Offset: 1170
// Size: 0xa0
//IDA: br_float* __usercall ConvertFixedToFloat@<EAX>(br_float **pextra@<EAX>, br_fixed_ls *src@<EDX>, br_int_32 count@<EBX>, br_size_t *pextra_space@<ECX>)
br_float* ConvertFixedToFloat(br_float **pextra, br_fixed_ls *src, br_int_32 count, br_size_t *pextra_space);

// Offset: 1346
// Size: 0x9a
//IDA: br_uint_32* __usercall ConvertLongCopy@<EAX>(br_uint_32 **pextra@<EAX>, br_uint_32 *src@<EDX>, br_int_32 count@<EBX>, br_size_t *pextra_space@<ECX>)
br_uint_32* ConvertLongCopy(br_uint_32 **pextra, br_uint_32 *src, br_int_32 count, br_size_t *pextra_space);

// Offset: 1511
// Size: 0x70f
//IDA: br_error __usercall ValueQuery@<EAX>(br_token_value *tv@<EAX>, void **pextra@<EDX>, br_size_t *pextra_size@<EBX>, void *block@<ECX>, br_tv_template_entry *tep)
br_error ValueQuery(br_token_value *tv, void **pextra, br_size_t *pextra_size, void *block, br_tv_template_entry *tep);

// Offset: 3327
// Size: 0x3b4
//IDA: br_error __usercall ValueSet@<EAX>(void *block@<EAX>, br_token_value *tv@<EDX>, br_tv_template_entry *tep@<EBX>)
br_error ValueSet(void *block, br_token_value *tv, br_tv_template_entry *tep);

// Offset: 4290
// Size: 0x1e8
//IDA: br_size_t __usercall ValueExtraSize@<EAX>(void *block@<EAX>, br_tv_template_entry *tep@<EDX>)
br_size_t ValueExtraSize(void *block, br_tv_template_entry *tep);

// Offset: 4796
// Size: 0xa0
//IDA: br_error __cdecl BrTokenValueQuery(br_uint_32 *pvalue, br_uint_32 *extra, br_size_t extra_size, br_token t, void *block, br_tv_template *template)
br_error BrTokenValueQuery(br_uint_32 *pvalue, br_uint_32 *extra, br_size_t extra_size, br_token t, void *block, br_tv_template *template);

// Offset: 4978
// Size: 0xb7
//IDA: br_error __cdecl BrTokenValueQueryMany(br_token_value *tv, void *extra, br_size_t extra_size, br_int_32 *pcount, void *block, br_tv_template *template)
br_error BrTokenValueQueryMany(br_token_value *tv, void *extra, br_size_t extra_size, br_int_32 *pcount, void *block, br_tv_template *template);

// Offset: 5187
// Size: 0xac
//IDA: br_error __cdecl BrTokenValueQueryManySize(br_size_t *psize, br_token_value *tv, void *block, br_tv_template *template)
br_error BrTokenValueQueryManySize(br_size_t *psize, br_token_value *tv, void *block, br_tv_template *template);

// Offset: 5380
// Size: 0x13d
//IDA: br_error __cdecl BrTokenValueQueryAll(br_token_value *buffer, br_size_t buffer_size, void *block, br_tv_template *template)
br_error BrTokenValueQueryAll(br_token_value *buffer, br_size_t buffer_size, void *block, br_tv_template *template);

// Offset: 5722
// Size: 0xa9
//IDA: br_error __cdecl BrTokenValueQueryAllSize(br_size_t *psize, void *block, br_tv_template *template)
br_error BrTokenValueQueryAllSize(br_size_t *psize, void *block, br_tv_template *template);

// Offset: 5907
// Size: 0xcb
//IDA: br_error __cdecl BrTokenValueSet(void *mem, br_uint_32 *pcombined_mask, br_token t, br_uint_32 value, br_tv_template *template)
br_error BrTokenValueSet(void *mem, br_uint_32 *pcombined_mask, br_token t, br_uint_32 value, br_tv_template *template);

// Offset: 6130
// Size: 0x105
//IDA: br_error __cdecl BrTokenValueSetMany(void *mem, br_int_32 *pcount, br_uint_32 *pcombined_mask, br_token_value *tv, br_tv_template *template)
br_error BrTokenValueSetMany(void *mem, br_int_32 *pcount, br_uint_32 *pcombined_mask, br_token_value *tv, br_tv_template *template);

// Offset: 6409
// Size: 0x10d
//IDA: void __usercall DumpMatrixInteger(br_int_32 *ip@<EAX>, int rows@<EDX>, int cols@<EBX>, char *prefix@<ECX>, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg)
void DumpMatrixInteger(br_int_32 *ip, int rows, int cols, char *prefix, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg);

// Offset: 6694
// Size: 0x125
//IDA: void __usercall DumpMatrixFixed(br_fixed_ls *xp@<EAX>, int rows@<EDX>, int cols@<EBX>, char *prefix@<ECX>, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg)
void DumpMatrixFixed(br_fixed_ls *xp, int rows, int cols, char *prefix, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg);

// Offset: 7003
// Size: 0x11f
//IDA: void __usercall DumpMatrixFloat(br_float *fp@<EAX>, int rows@<EDX>, int cols@<EBX>, char *prefix@<ECX>, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg)
void DumpMatrixFloat(br_float *fp, int rows, int cols, char *prefix, char *info_0, char *info_n, br_putline_cbfn *putline, void *arg);

// Offset: 7301
// Size: 0x104
//IDA: void __usercall DumpObject(br_object *h@<EAX>, char *prefix@<EDX>, char *info@<EBX>, br_putline_cbfn *putline@<ECX>, void *arg)
void DumpObject(br_object *h, char *prefix, char *info, br_putline_cbfn *putline, void *arg);

// Offset: 7578
// Size: 0xb55
//IDA: void __cdecl BrTokenValueDump(br_token_value *tv, char *prefix, br_putline_cbfn *putline, void *arg)
void BrTokenValueDump(br_token_value *tv, char *prefix, br_putline_cbfn *putline, void *arg);

// Offset: 10500
// Size: 0x9c
//IDA: br_error __cdecl BrStringToTokenValue(br_token_value *buffer, br_size_t buffer_size, char *str)
br_error BrStringToTokenValue(br_token_value *buffer, br_size_t buffer_size, char *str);

// Offset: 10672
// Size: 0x515
//IDA: br_error __usercall parseTokenValue@<EAX>(br_lexer *l@<EAX>, br_token_value *tv@<EDX>, br_size_t size@<EBX>)
br_error parseTokenValue(br_lexer *l, br_token_value *tv, br_size_t size);

// Offset: 11993
// Size: 0x3b8
//IDA: br_boolean __cdecl BrTokenValueCompare(br_token_value *tv1, br_token_value *tv2)
br_boolean BrTokenValueCompare(br_token_value *tv1, br_token_value *tv2);

// Offset: 12961
// Size: 0x58
//IDA: br_error __usercall BrTokenValueDup@<EAX>(br_token_value **dstp@<EAX>, br_token_value *src@<EDX>)
br_error BrTokenValueDup(br_token_value **dstp, br_token_value *src);

#endif
