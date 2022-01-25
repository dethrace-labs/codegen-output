#include "genfile.h"

br_file_enum_member file_type_FM[10];
br_file_enum file_type_F;
br_file_struct_member file_info_FM[2];
br_file_struct file_info_F;

// Offset: 12
// Size: 0x32
//IDA: int __usercall FopRead_END@<EAX>(br_datafile *df@<EAX>, br_uint_32 id@<EDX>, br_uint_32 length@<EBX>, br_uint_32 count@<ECX>)
int FopRead_END(br_datafile *df, br_uint_32 id, br_uint_32 length, br_uint_32 count) {
    LOG_TRACE("(%p, %d, %d, %d)", df, id, length, count);
    NOT_IMPLEMENTED();
}

// Offset: 75
// Size: 0x3f
//IDA: int __usercall FopWrite_END@<EAX>(br_datafile *df@<EAX>)
int FopWrite_END(br_datafile *df) {
    LOG_TRACE("(%p)", df);
    NOT_IMPLEMENTED();
}

// Offset: 157
// Size: 0x78
//IDA: int __usercall FopWrite_FILE_INFO@<EAX>(br_datafile *df@<EAX>, br_uint_32 type@<EDX>)
int FopWrite_FILE_INFO(br_datafile *df, br_uint_32 type) {
    file_info fi;
    LOG_TRACE("(%p, %d)", df, type);
    NOT_IMPLEMENTED();
}

