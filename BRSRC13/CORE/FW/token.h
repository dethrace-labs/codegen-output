#ifndef _TOKEN_H_
#define _TOKEN_H_

#include "dr_types.h"
#include "br_types.h"

extern br_token_entry predefinedTokens[457]; // addr: 0001F54C
extern token_type tokenTypes[37]; // addr: 00022024

// Offset: 13
// Size: 0x70
//IDA: void __cdecl BrTokenBegin()
void BrTokenBegin();

// Offset: 139
// Size: 0x1fd
//IDA: br_token __cdecl BrTokenCreate(char *identifier, br_token type)
br_token BrTokenCreate(char *identifier, br_token type);

// Offset: 666
// Size: 0x5c
//IDA: char* __cdecl BrTokenIdentifier(br_token t)
char* BrTokenIdentifier(br_token t);

// Offset: 770
// Size: 0x5c
//IDA: br_token __cdecl BrTokenType(br_token t)
br_token BrTokenType(br_token t);

// Offset: 875
// Size: 0x94
//IDA: br_int_32 __cdecl BrTokenCount(char *pattern)
br_int_32 BrTokenCount(char *pattern);

// Offset: 1035
// Size: 0x67
//IDA: br_token __cdecl BrTokenFind(char *pattern)
br_token BrTokenFind(char *pattern);

// Offset: 1154
// Size: 0x7f
//IDA: br_int_32 __cdecl BrTokenFindMany(char *pattern, br_token *tokens, br_int_32 max_tokens)
br_int_32 BrTokenFindMany(char *pattern, br_token *tokens, br_int_32 max_tokens);

// Offset: 1297
// Size: 0xf2
//IDA: br_token __usercall BrTokenFindType@<EAX>(br_token *ptype@<EAX>, char *base@<EDX>, br_token *types@<EBX>, br_int_32 ntypes@<ECX>)
br_token BrTokenFindType(br_token *ptype, char *base, br_token *types, br_int_32 ntypes);

#endif
