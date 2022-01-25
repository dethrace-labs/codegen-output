#ifndef _GENFILE_H_
#define _GENFILE_H_

#include "dr_types.h"
#include "br_types.h"

extern br_file_enum_member file_type_FM[10]; // addr: 0001D1DC
extern br_file_enum file_type_F; // addr: 0001D22C
extern br_file_struct_member file_info_FM[2]; // addr: 0001D234
extern br_file_struct file_info_F; // addr: 0001D254

// Offset: 12
// Size: 0x32
//IDA: int __usercall FopRead_END@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_END(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count);

// Offset: 75
// Size: 0x3f
//IDA: int __usercall FopWrite_END@<EAX>(br_datafile *df@<EAX>)
int FopWrite_END(br_datafile *df);

// Offset: 157
// Size: 0x78
//IDA: int __usercall FopWrite_FILE_INFO@<EAX>(br_datafile *df@<EAX>, br_uint_32 type@<EDX>)
int FopWrite_FILE_INFO(br_datafile *df, br_uint_32 type);

#endif
