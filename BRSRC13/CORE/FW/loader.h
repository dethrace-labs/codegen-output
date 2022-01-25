#ifndef _LOADER_H_
#define _LOADER_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 10
// Size: 0x961
//IDA: br_image* __usercall ImageLoad@<EAX>(char *name@<EAX>)
br_image* ImageLoad(char *name);

#endif
