#include "token.h"

br_token_entry predefinedTokens[457];
token_type tokenTypes[37];

// Offset: 13
// Size: 0x70
//IDA: void __cdecl BrTokenBegin()
void BrTokenBegin() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 139
// Size: 0x1fd
//IDA: br_token __cdecl BrTokenCreate(char *identifier, br_token type)
br_token BrTokenCreate(char *identifier, br_token type) {
    br_token_entry *te;
    int i;
    int l;
    LOG_TRACE("(\"%s\", %d)", identifier, type);
    NOT_IMPLEMENTED();
}

// Offset: 666
// Size: 0x5c
//IDA: char* __cdecl BrTokenIdentifier(br_token t)
char* BrTokenIdentifier(br_token t) {
    br_token_entry *te;
    LOG_TRACE("(%d)", t);
    NOT_IMPLEMENTED();
}

// Offset: 770
// Size: 0x5c
//IDA: br_token __cdecl BrTokenType(br_token t)
br_token BrTokenType(br_token t) {
    br_token_entry *te;
    LOG_TRACE("(%d)", t);
    NOT_IMPLEMENTED();
}

// Offset: 875
// Size: 0x94
//IDA: br_int_32 __cdecl BrTokenCount(char *pattern)
br_int_32 BrTokenCount(char *pattern) {
    br_token_entry *te;
    int n;
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1035
// Size: 0x67
//IDA: br_token __cdecl BrTokenFind(char *pattern)
br_token BrTokenFind(char *pattern) {
    br_token_entry *te;
    LOG_TRACE("(\"%s\")", pattern);
    NOT_IMPLEMENTED();
}

// Offset: 1154
// Size: 0x7f
//IDA: br_int_32 __cdecl BrTokenFindMany(char *pattern, br_token *tokens, br_int_32 max_tokens)
br_int_32 BrTokenFindMany(char *pattern, br_token *tokens, br_int_32 max_tokens) {
    br_token_entry *te;
    int n;
    LOG_TRACE("(\"%s\", %p, %d)", pattern, tokens, max_tokens);
    NOT_IMPLEMENTED();
}

// Offset: 1297
// Size: 0xf2
//IDA: br_token __usercall BrTokenFindType@<EAX>(br_token *ptype@<EAX>, char *base@<EDX>, br_token *types@<EBX>, br_int_32 ntypes@<ECX>)
br_token BrTokenFindType(br_token *ptype, char *base, br_token *types, br_int_32 ntypes) {
    br_token_entry *te;
    int l;
    int t;
    LOG_TRACE("(%p, \"%s\", %p, %d)", ptype, base, types, ntypes);
    NOT_IMPLEMENTED();
}

