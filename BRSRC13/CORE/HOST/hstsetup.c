#include "hstsetup.h"

char *namePointers_BRHOST1[50];
br_uint_16 nameOrdinals_BRHOST1[50];
void *functionPointers_BRHOST1[50];
br_image Image_BRHOST1;
host_info hostInfo;

// Offset: 10
// Size: 0x31
//IDA: void __cdecl HostBegin()
void HostBegin() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 67
// Size: 0x31
//IDA: void __cdecl HostEnd()
void HostEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 125
// Size: 0x7d
//IDA: br_error __cdecl HostInfo(host_info *buffer, br_size_t buffersize)
br_error HostInfo(host_info *buffer, br_size_t buffersize) {
    br_int_32 features;
    LOG_TRACE("(%p, %d)", buffer, buffersize);
    NOT_IMPLEMENTED();
}

