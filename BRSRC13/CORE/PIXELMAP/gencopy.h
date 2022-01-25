#ifndef _GENCOPY_H_
#define _GENCOPY_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 21
// Size: 0x32
//IDA: br_error __usercall GeneralRectangleCopy@<EAX>(br_device_pixelmap *dest@<EAX>, br_point *p@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *r@<ECX>)
br_error GeneralRectangleCopy(br_device_pixelmap *dest, br_point *p, br_device_pixelmap *src, br_rectangle *r);

// Offset: 83
// Size: 0x30
//IDA: br_error __usercall GeneralCopy@<EAX>(br_device_pixelmap *dst@<EAX>, br_device_pixelmap *src@<EDX>)
br_error GeneralCopy(br_device_pixelmap *dst, br_device_pixelmap *src);

// Offset: 159
// Size: 0x32
//IDA: br_error __usercall GeneralRectangleStretchCopy@<EAX>(br_device_pixelmap *dst@<EAX>, br_rectangle *d@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *s@<ECX>)
br_error GeneralRectangleStretchCopy(br_device_pixelmap *dst, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s);

#endif
