#ifndef _SYS_CONF_H_
#define _SYS_CONF_H_

#include "dr_types.h"
#include "br_types.h"

extern br_token valid_system_config_tokens[5]; // addr: 00022244

// Offset: 26
// Size: 0x6a
//IDA: br_boolean __usercall Is_Valid_Sys_Config_Token@<EAX>(br_token t@<EAX>)
br_boolean Is_Valid_Sys_Config_Token(br_token t);

// Offset: 145
// Size: 0x82
//IDA: br_boolean __usercall LoadIniEntry@<EAX>(char *ini_file@<EAX>, char *section_name@<EDX>, br_token t@<EBX>, char *Entry@<ECX>)
br_boolean LoadIniEntry(char *ini_file, char *section_name, br_token t, char *Entry);

// Offset: 289
// Size: 0xd5
//IDA: br_error __usercall LoadIniConfig@<EAX>(char *ini_file@<EAX>, char *section_name@<EDX>)
br_error LoadIniConfig(char *ini_file, char *section_name);

// Offset: 520
// Size: 0x82
//IDA: br_boolean __usercall LoadRegistryEntry@<EAX>(char *Reg_Path@<EAX>, void *hKey@<EDX>, br_token t@<EBX>, char *Entry@<ECX>)
br_boolean LoadRegistryEntry(char *Reg_Path, void *hKey, br_token t, char *Entry);

// Offset: 669
// Size: 0xe0
//IDA: br_error __usercall LoadRegistryConfig@<EAX>(char *Reg_Path@<EAX>, void *hKey@<EDX>)
br_error LoadRegistryConfig(char *Reg_Path, void *hKey);

// Offset: 912
// Size: 0xc1
//IDA: br_error __usercall BrSetDefaultConfig@<EAX>(br_token t@<EAX>, char *Entry@<EDX>)
br_error BrSetDefaultConfig(br_token t, char *Entry);

// Offset: 1125
// Size: 0x148
//IDA: br_error __cdecl BrSystemConfigBegin()
br_error BrSystemConfigBegin();

// Offset: 1472
// Size: 0xbc
//IDA: br_error __cdecl BrSystemConfigLoad(br_token t, char *Param1, void *Param2)
br_error BrSystemConfigLoad(br_token t, char *Param1, void *Param2);

// Offset: 1684
// Size: 0x9e
//IDA: br_error __cdecl BrSystemConfigSetString(br_token t, char *string)
br_error BrSystemConfigSetString(br_token t, char *string);

// Offset: 1868
// Size: 0xaf
//IDA: br_error __cdecl BrSystemConfigQueryString(br_token t, char *string, int max_size)
br_error BrSystemConfigQueryString(br_token t, char *string, int max_size);

#endif
