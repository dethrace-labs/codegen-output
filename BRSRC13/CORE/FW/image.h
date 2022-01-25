#ifndef _IMAGE_H_
#define _IMAGE_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 11
// Size: 0x3a
//IDA: br_boolean __cdecl BrImageAdd(br_image *img)
br_boolean BrImageAdd(br_image *img);

// Offset: 83
// Size: 0x34
//IDA: br_boolean __cdecl BrImageRemove(br_image *img)
br_boolean BrImageRemove(br_image *img);

// Offset: 147
// Size: 0xc9
//IDA: br_image* __cdecl BrImageFind(char *pattern)
br_image* BrImageFind(char *pattern);

// Offset: 362
// Size: 0x8c
//IDA: br_image* __usercall imageLoadHost@<EAX>(char *name@<EAX>)
br_image* imageLoadHost(char *name);

// Offset: 519
// Size: 0x1c6
//IDA: br_image* __cdecl BrImageReference(char *name)
br_image* BrImageReference(char *name);

// Offset: 989
// Size: 0x14c
//IDA: void* __usercall imageLookupName@<EAX>(br_image *img@<EAX>, char *name@<EDX>, br_uint_32 hint@<EBX>)
void* imageLookupName(br_image *img, char *name, br_uint_32 hint);

// Offset: 1339
// Size: 0xe7
//IDA: void* __cdecl BrImageLookupName(br_image *img, char *name, br_uint_32 hint)
void* BrImageLookupName(br_image *img, char *name, br_uint_32 hint);

// Offset: 1591
// Size: 0x93
//IDA: void* __cdecl BrImageLookupOrdinal(br_image *img, br_uint_32 ordinal)
void* BrImageLookupOrdinal(br_image *img, br_uint_32 ordinal);

// Offset: 1757
// Size: 0x7a
//IDA: void __cdecl BrImageDereference(br_image *image)
void BrImageDereference(br_image *image);

// Offset: 1891
// Size: 0x5a
//IDA: void __cdecl BrImageFree(br_image *image)
void BrImageFree(br_image *image);

// Offset: 1994
// Size: 0x2a
//IDA: void __cdecl _BrImageFree(void *res, br_uint_8 res_class, br_size_t size)
void _BrImageFree(void *res, br_uint_8 res_class, br_size_t size);

#endif
