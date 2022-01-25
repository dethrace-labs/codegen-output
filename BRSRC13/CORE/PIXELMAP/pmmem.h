#ifndef _PMMEM_H_
#define _PMMEM_H_

#include "dr_types.h"
#include "br_types.h"

extern br_tv_template_entry matchTemplateEntries[6]; // addr: 0001E250
extern pm_type_info pmTypeInfo[30]; // addr: 000FD5B1
extern br_tv_template_entry devicePixelmapTemplateEntries[4]; // addr: 000FD6A1
extern br_device_pixelmap_dispatch devicePixelmapDispatch; // addr: 000FD719

// Offset: 26
// Size: 0x1f2
//IDA: br_device_pixelmap* __usercall DevicePixelmapMemAllocate@<EAX>(br_uint_8 type@<EAX>, br_uint_16 w@<EDX>, br_uint_16 h@<EBX>, void *pixels@<ECX>, int flags)
br_device_pixelmap* DevicePixelmapMemAllocate(br_uint_8 type, br_uint_16 w, br_uint_16 h, void *pixels, int flags);

// Offset: 539
// Size: 0x36
//IDA: void __usercall _CheckDispatch(br_device_pixelmap *pm@<EAX>)
void _CheckDispatch(br_device_pixelmap *pm);

// Offset: 631
// Size: 0xde
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_allocateSub(br_device_pixelmap *self, br_device_pixelmap **newpm, br_rectangle *rect)
br_error _M_br_device_pixelmap_mem_allocateSub(br_device_pixelmap *self, br_device_pixelmap **newpm, br_rectangle *rect);

// Offset: 884
// Size: 0x2a
//IDA: void __cdecl _M_br_device_pixelmap_mem_free(br_device_pixelmap *self)
void _M_br_device_pixelmap_mem_free(br_device_pixelmap *self);

// Offset: 963
// Size: 0x2a
//IDA: char* __cdecl _M_br_device_pixelmap_mem_identifier(br_device_pixelmap *self)
char* _M_br_device_pixelmap_mem_identifier(br_device_pixelmap *self);

// Offset: 1036
// Size: 0x28
//IDA: br_token __cdecl _M_br_device_pixelmap_mem_type(br_device_pixelmap *self)
br_token _M_br_device_pixelmap_mem_type(br_device_pixelmap *self);

// Offset: 1109
// Size: 0x43
//IDA: br_boolean __cdecl _M_br_device_pixelmap_mem_isType(br_device_pixelmap *self, br_token t)
br_boolean _M_br_device_pixelmap_mem_isType(br_device_pixelmap *self, br_token t);

// Offset: 1209
// Size: 0x28
//IDA: br_device* __cdecl _M_br_device_pixelmap_mem_device(br_device_pixelmap *self)
br_device* _M_br_device_pixelmap_mem_device(br_device_pixelmap *self);

// Offset: 1281
// Size: 0x30
//IDA: br_int_32 __cdecl _M_br_device_pixelmap_mem_space(br_device_pixelmap *self)
br_int_32 _M_br_device_pixelmap_mem_space(br_device_pixelmap *self);

// Offset: 1369
// Size: 0x4d
//IDA: br_tv_template* __cdecl _M_br_device_pixelmap_mem_queryTemplate(br_device_pixelmap *self)
br_tv_template* _M_br_device_pixelmap_mem_queryTemplate(br_device_pixelmap *self);

// Offset: 1484
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_validSource(br_device_pixelmap *self, br_object *h)
br_error _M_br_device_pixelmap_mem_validSource(br_device_pixelmap *self, br_object *h);

// Offset: 1557
// Size: 0x19b
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_resize(br_device_pixelmap *self, br_int_32 width, br_int_32 height)
br_error _M_br_device_pixelmap_mem_resize(br_device_pixelmap *self, br_int_32 width, br_int_32 height);

// Offset: 2000
// Size: 0x303
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_match(br_device_pixelmap *self, br_device_pixelmap **newpm, br_token_value *tv)
br_error _M_br_device_pixelmap_mem_match(br_device_pixelmap *self, br_device_pixelmap **newpm, br_token_value *tv);

// Offset: 2804
// Size: 0x2f7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyTo(br_device_pixelmap *self, br_device_pixelmap *src)
br_error _M_br_device_pixelmap_mem_copyTo(br_device_pixelmap *self, br_device_pixelmap *src);

// Offset: 3598
// Size: 0x2f7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyFrom(br_device_pixelmap *self, br_device_pixelmap *dest)
br_error _M_br_device_pixelmap_mem_copyFrom(br_device_pixelmap *self, br_device_pixelmap *dest);

// Offset: 4388
// Size: 0x212
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_fill(br_device_pixelmap *self, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_fill(br_device_pixelmap *self, br_uint_32 colour);

// Offset: 4957
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_doubleBuffer(br_device_pixelmap *self, br_device_pixelmap *src)
br_error _M_br_device_pixelmap_mem_doubleBuffer(br_device_pixelmap *self, br_device_pixelmap *src);

// Offset: 5033
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects);

// Offset: 5111
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyToDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyToDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects);

// Offset: 5191
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyFromDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyFromDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects);

// Offset: 5267
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_fillDirty(br_device_pixelmap *self, br_uint_32 colour, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_fillDirty(br_device_pixelmap *self, br_uint_32 colour, br_rectangle *dirty, br_int_32 num_rects);

// Offset: 5351
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_doubleBufferDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_doubleBufferDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects);

// Offset: 5433
// Size: 0x3a7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleCopyTo(br_device_pixelmap *self, br_point *p, br_device_pixelmap *src, br_rectangle *r)
br_error _M_br_device_pixelmap_mem_rectangleCopyTo(br_device_pixelmap *self, br_point *p, br_device_pixelmap *src, br_rectangle *r);

// Offset: 6412
// Size: 0x3a7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleCopyFrom(br_device_pixelmap *self, br_point *p, br_device_pixelmap *dest, br_rectangle *r)
br_error _M_br_device_pixelmap_mem_rectangleCopyFrom(br_device_pixelmap *self, br_point *p, br_device_pixelmap *dest, br_rectangle *r);

// Offset: 7396
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleStretchCopyTo(br_device_pixelmap *self, br_rectangle *destinationRectangle, br_device_pixelmap *src, br_rectangle *sourceRectangle)
br_error _M_br_device_pixelmap_mem_rectangleStretchCopyTo(br_device_pixelmap *self, br_rectangle *destinationRectangle, br_device_pixelmap *src, br_rectangle *sourceRectangle);

// Offset: 7487
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleStretchCopyFrom(br_device_pixelmap *self, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s)
br_error _M_br_device_pixelmap_mem_rectangleStretchCopyFrom(br_device_pixelmap *self, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s);

// Offset: 7567
// Size: 0x254
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleFill(br_device_pixelmap *self, br_rectangle *rect, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_rectangleFill(br_device_pixelmap *self, br_rectangle *rect, br_uint_32 colour);

// Offset: 8198
// Size: 0xc4
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelSet(br_device_pixelmap *self, br_point *p, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_pixelSet(br_device_pixelmap *self, br_point *p, br_uint_32 colour);

// Offset: 8425
// Size: 0x208c
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_line(br_device_pixelmap *self, br_point *s, br_point *e, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_line(br_device_pixelmap *self, br_point *s, br_point *e, br_uint_32 colour);

// Offset: 16792
// Size: 0x104
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyBits(br_device_pixelmap *self, br_point *point, br_uint_8 *src, br_uint_16 s_stride, br_rectangle *bit_rect, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_copyBits(br_device_pixelmap *self, br_point *point, br_uint_8 *src, br_uint_16 s_stride, br_rectangle *bit_rect, br_uint_32 colour);

// Offset: 17089
// Size: 0xc7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelQuery(br_device_pixelmap *self, br_uint_32 *pcolour, br_point *p)
br_error _M_br_device_pixelmap_mem_pixelQuery(br_device_pixelmap *self, br_uint_32 *pcolour, br_point *p);

// Offset: 17332
// Size: 0xc8
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelAddressQuery(br_device_pixelmap *self, void **pptr, br_uint_32 *pqual, br_point *p)
br_error _M_br_device_pixelmap_mem_pixelAddressQuery(br_device_pixelmap *self, void **pptr, br_uint_32 *pqual, br_point *p);

// Offset: 17574
// Size: 0x48
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelAddressSet(br_device_pixelmap *self, void *ptr, br_uint_32 *qual)
br_error _M_br_device_pixelmap_mem_pixelAddressSet(br_device_pixelmap *self, void *ptr, br_uint_32 *qual);

// Offset: 17682
// Size: 0x43
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_originSet(br_device_pixelmap *self, br_point *p)
br_error _M_br_device_pixelmap_mem_originSet(br_device_pixelmap *self, br_point *p);

// Offset: 17783
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowSize(br_device_pixelmap *self, br_size_t *sizep)
br_error _M_br_device_pixelmap_mem_rowSize(br_device_pixelmap *self, br_size_t *sizep);

// Offset: 17858
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowQuery(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row)
br_error _M_br_device_pixelmap_mem_rowQuery(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row);

// Offset: 17931
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowSet(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row)
br_error _M_br_device_pixelmap_mem_rowSet(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row);

// Offset: 18003
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_flush(br_device_pixelmap *self)
br_error _M_br_device_pixelmap_mem_flush(br_device_pixelmap *self);

// Offset: 18081
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_synchronise(br_device_pixelmap *self, br_token sync_type, br_boolean block)
br_error _M_br_device_pixelmap_mem_synchronise(br_device_pixelmap *self, br_token sync_type, br_boolean block);

// Offset: 18158
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_directLock(br_device_pixelmap *self, br_boolean block)
br_error _M_br_device_pixelmap_mem_directLock(br_device_pixelmap *self, br_boolean block);

// Offset: 18237
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_directUnlock(br_device_pixelmap *self)
br_error _M_br_device_pixelmap_mem_directUnlock(br_device_pixelmap *self);

#endif
