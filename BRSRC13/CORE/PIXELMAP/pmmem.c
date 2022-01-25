#include "pmmem.h"

br_tv_template_entry matchTemplateEntries[6];
pm_type_info pmTypeInfo[30];
br_tv_template_entry devicePixelmapTemplateEntries[4];
br_device_pixelmap_dispatch devicePixelmapDispatch;

// Offset: 26
// Size: 0x1f2
//IDA: br_device_pixelmap* __usercall DevicePixelmapMemAllocate@<EAX>(br_uint_8 type@<EAX>, br_uint_16 w@<EDX>, br_uint_16 h@<EBX>, void *pixels@<ECX>, int flags)
br_device_pixelmap* DevicePixelmapMemAllocate(br_uint_8 type, br_uint_16 w, br_uint_16 h, void *pixels, int flags) {
    br_device_pixelmap *pm;
    pm_type_info *tip;
    LOG_TRACE("(%d, %d, %d, %p, %d)", type, w, h, pixels, flags);
    NOT_IMPLEMENTED();
}

// Offset: 539
// Size: 0x36
//IDA: void __usercall _CheckDispatch(br_device_pixelmap *pm@<EAX>)
void _CheckDispatch(br_device_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
    NOT_IMPLEMENTED();
}

// Offset: 631
// Size: 0xde
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_allocateSub(br_device_pixelmap *self, br_device_pixelmap **newpm, br_rectangle *rect)
br_error _M_br_device_pixelmap_mem_allocateSub(br_device_pixelmap *self, br_device_pixelmap **newpm, br_rectangle *rect) {
    br_device_pixelmap *pm;
    br_rectangle out;
    LOG_TRACE("(%p, %p, %p)", self, newpm, rect);
    NOT_IMPLEMENTED();
}

// Offset: 884
// Size: 0x2a
//IDA: void __cdecl _M_br_device_pixelmap_mem_free(br_device_pixelmap *self)
void _M_br_device_pixelmap_mem_free(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 963
// Size: 0x2a
//IDA: char* __cdecl _M_br_device_pixelmap_mem_identifier(br_device_pixelmap *self)
char* _M_br_device_pixelmap_mem_identifier(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 1036
// Size: 0x28
//IDA: br_token __cdecl _M_br_device_pixelmap_mem_type(br_device_pixelmap *self)
br_token _M_br_device_pixelmap_mem_type(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 1109
// Size: 0x43
//IDA: br_boolean __cdecl _M_br_device_pixelmap_mem_isType(br_device_pixelmap *self, br_token t)
br_boolean _M_br_device_pixelmap_mem_isType(br_device_pixelmap *self, br_token t) {
    LOG_TRACE("(%p, %d)", self, t);
    NOT_IMPLEMENTED();
}

// Offset: 1209
// Size: 0x28
//IDA: br_device* __cdecl _M_br_device_pixelmap_mem_device(br_device_pixelmap *self)
br_device* _M_br_device_pixelmap_mem_device(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 1281
// Size: 0x30
//IDA: br_int_32 __cdecl _M_br_device_pixelmap_mem_space(br_device_pixelmap *self)
br_int_32 _M_br_device_pixelmap_mem_space(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 1369
// Size: 0x4d
//IDA: br_tv_template* __cdecl _M_br_device_pixelmap_mem_queryTemplate(br_device_pixelmap *self)
br_tv_template* _M_br_device_pixelmap_mem_queryTemplate(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 1484
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_validSource(br_device_pixelmap *self, br_object *h)
br_error _M_br_device_pixelmap_mem_validSource(br_device_pixelmap *self, br_object *h) {
    LOG_TRACE("(%p, %p)", self, h);
    NOT_IMPLEMENTED();
}

// Offset: 1557
// Size: 0x19b
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_resize(br_device_pixelmap *self, br_int_32 width, br_int_32 height)
br_error _M_br_device_pixelmap_mem_resize(br_device_pixelmap *self, br_int_32 width, br_int_32 height) {
    char *pixels;
    pm_type_info *tip;
    br_int_16 old_row_bytes;
    LOG_TRACE("(%p, %d, %d)", self, width, height);
    NOT_IMPLEMENTED();
}

// Offset: 2000
// Size: 0x303
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_match(br_device_pixelmap *self, br_device_pixelmap **newpm, br_token_value *tv)
br_error _M_br_device_pixelmap_mem_match(br_device_pixelmap *self, br_device_pixelmap **newpm, br_token_value *tv) {
    match_tokens mt;
    br_int_32 count;
    br_device_pixelmap *pm;
    br_int_32 bytes;
    br_int_32 r;
    LOG_TRACE("(%p, %p, %p)", self, newpm, tv);
    NOT_IMPLEMENTED();
}

// Offset: 2804
// Size: 0x2f7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyTo(br_device_pixelmap *self, br_device_pixelmap *src)
br_error _M_br_device_pixelmap_mem_copyTo(br_device_pixelmap *self, br_device_pixelmap *src) {
    br_int_8 bytes;
    char *__block0__s;
    char *__block0__d;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %p)", self, src);
    NOT_IMPLEMENTED();
}

// Offset: 3598
// Size: 0x2f7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyFrom(br_device_pixelmap *self, br_device_pixelmap *dest)
br_error _M_br_device_pixelmap_mem_copyFrom(br_device_pixelmap *self, br_device_pixelmap *dest) {
    br_int_8 bytes;
    char *__block0__s;
    char *__block0__d;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %p)", self, dest);
    NOT_IMPLEMENTED();
}

// Offset: 4388
// Size: 0x212
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_fill(br_device_pixelmap *self, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_fill(br_device_pixelmap *self, br_uint_32 colour) {
    br_int_8 bytes;
    char *__block0__d;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %d)", self, colour);
    NOT_IMPLEMENTED();
}

// Offset: 4957
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_doubleBuffer(br_device_pixelmap *self, br_device_pixelmap *src)
br_error _M_br_device_pixelmap_mem_doubleBuffer(br_device_pixelmap *self, br_device_pixelmap *src) {
    LOG_TRACE("(%p, %p)", self, src);
    NOT_IMPLEMENTED();
}

// Offset: 5033
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects) {
    LOG_TRACE("(%p, %p, %p, %d)", self, src, dirty, num_rects);
    NOT_IMPLEMENTED();
}

// Offset: 5111
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyToDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyToDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects) {
    LOG_TRACE("(%p, %p, %p, %d)", self, src, dirty, num_rects);
    NOT_IMPLEMENTED();
}

// Offset: 5191
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyFromDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_copyFromDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects) {
    LOG_TRACE("(%p, %p, %p, %d)", self, src, dirty, num_rects);
    NOT_IMPLEMENTED();
}

// Offset: 5267
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_fillDirty(br_device_pixelmap *self, br_uint_32 colour, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_fillDirty(br_device_pixelmap *self, br_uint_32 colour, br_rectangle *dirty, br_int_32 num_rects) {
    LOG_TRACE("(%p, %d, %p, %d)", self, colour, dirty, num_rects);
    NOT_IMPLEMENTED();
}

// Offset: 5351
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_doubleBufferDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects)
br_error _M_br_device_pixelmap_mem_doubleBufferDirty(br_device_pixelmap *self, br_device_pixelmap *src, br_rectangle *dirty, br_int_32 num_rects) {
    LOG_TRACE("(%p, %p, %p, %d)", self, src, dirty, num_rects);
    NOT_IMPLEMENTED();
}

// Offset: 5433
// Size: 0x3a7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleCopyTo(br_device_pixelmap *self, br_point *p, br_device_pixelmap *src, br_rectangle *r)
br_error _M_br_device_pixelmap_mem_rectangleCopyTo(br_device_pixelmap *self, br_point *p, br_device_pixelmap *src, br_rectangle *r) {
    int bytes;
    br_rectangle ar;
    br_point ap;
    char *__block0__s;
    char *__block0__d;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %p, %p, %p)", self, p, src, r);
    NOT_IMPLEMENTED();
}

// Offset: 6412
// Size: 0x3a7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleCopyFrom(br_device_pixelmap *self, br_point *p, br_device_pixelmap *dest, br_rectangle *r)
br_error _M_br_device_pixelmap_mem_rectangleCopyFrom(br_device_pixelmap *self, br_point *p, br_device_pixelmap *dest, br_rectangle *r) {
    int bytes;
    br_rectangle ar;
    br_point ap;
    char *__block0__s;
    char *__block0__d;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %p, %p, %p)", self, p, dest, r);
    NOT_IMPLEMENTED();
}

// Offset: 7396
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleStretchCopyTo(br_device_pixelmap *self, br_rectangle *destinationRectangle, br_device_pixelmap *src, br_rectangle *sourceRectangle)
br_error _M_br_device_pixelmap_mem_rectangleStretchCopyTo(br_device_pixelmap *self, br_rectangle *destinationRectangle, br_device_pixelmap *src, br_rectangle *sourceRectangle) {
    LOG_TRACE("(%p, %p, %p, %p)", self, destinationRectangle, src, sourceRectangle);
    NOT_IMPLEMENTED();
}

// Offset: 7487
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleStretchCopyFrom(br_device_pixelmap *self, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s)
br_error _M_br_device_pixelmap_mem_rectangleStretchCopyFrom(br_device_pixelmap *self, br_rectangle *d, br_device_pixelmap *src, br_rectangle *s) {
    LOG_TRACE("(%p, %p, %p, %p)", self, d, src, s);
    NOT_IMPLEMENTED();
}

// Offset: 7567
// Size: 0x254
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rectangleFill(br_device_pixelmap *self, br_rectangle *rect, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_rectangleFill(br_device_pixelmap *self, br_rectangle *rect, br_uint_32 colour) {
    br_rectangle arect;
    br_int_8 bytes;
    br_uint_32 __block0__y;
    LOG_TRACE("(%p, %p, %d)", self, rect, colour);
    NOT_IMPLEMENTED();
}

// Offset: 8198
// Size: 0xc4
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelSet(br_device_pixelmap *self, br_point *p, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_pixelSet(br_device_pixelmap *self, br_point *p, br_uint_32 colour) {
    br_point ap;
    br_int_8 bytes;
    LOG_TRACE("(%p, %p, %d)", self, p, colour);
    NOT_IMPLEMENTED();
}

// Offset: 8425
// Size: 0x208c
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_line(br_device_pixelmap *self, br_point *s, br_point *e, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_line(br_device_pixelmap *self, br_point *s, br_point *e, br_uint_32 colour) {
    int dx;
    int dy;
    int incr1;
    int incr2;
    int D;
    int x;
    int y;
    int xend;
    int c;
    int pixels_left;
    int x1;
    int y1;
    int sign_x;
    int sign_y;
    int step;
    int reverse;
    int i;
    char *dest;
    int bytes;
    br_point as;
    br_point ae;
    LOG_TRACE("(%p, %p, %p, %d)", self, s, e, colour);
    NOT_IMPLEMENTED();
}

// Offset: 16792
// Size: 0x104
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_copyBits(br_device_pixelmap *self, br_point *point, br_uint_8 *src, br_uint_16 s_stride, br_rectangle *bit_rect, br_uint_32 colour)
br_error _M_br_device_pixelmap_mem_copyBits(br_device_pixelmap *self, br_point *point, br_uint_8 *src, br_uint_16 s_stride, br_rectangle *bit_rect, br_uint_32 colour) {
    int bytes;
    int bit;
    br_rectangle ar;
    br_point ap;
    LOG_TRACE("(%p, %p, %p, %d, %p, %d)", self, point, src, s_stride, bit_rect, colour);
    NOT_IMPLEMENTED();
}

// Offset: 17089
// Size: 0xc7
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelQuery(br_device_pixelmap *self, br_uint_32 *pcolour, br_point *p)
br_error _M_br_device_pixelmap_mem_pixelQuery(br_device_pixelmap *self, br_uint_32 *pcolour, br_point *p) {
    br_point ap;
    br_int_8 bytes;
    LOG_TRACE("(%p, %p, %p)", self, pcolour, p);
    NOT_IMPLEMENTED();
}

// Offset: 17332
// Size: 0xc8
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelAddressQuery(br_device_pixelmap *self, void **pptr, br_uint_32 *pqual, br_point *p)
br_error _M_br_device_pixelmap_mem_pixelAddressQuery(br_device_pixelmap *self, void **pptr, br_uint_32 *pqual, br_point *p) {
    br_int_8 bytes;
    br_point ap;
    LOG_TRACE("(%p, %p, %p, %p)", self, pptr, pqual, p);
    NOT_IMPLEMENTED();
}

// Offset: 17574
// Size: 0x48
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_pixelAddressSet(br_device_pixelmap *self, void *ptr, br_uint_32 *qual)
br_error _M_br_device_pixelmap_mem_pixelAddressSet(br_device_pixelmap *self, void *ptr, br_uint_32 *qual) {
    LOG_TRACE("(%p, %p, %p)", self, ptr, qual);
    NOT_IMPLEMENTED();
}

// Offset: 17682
// Size: 0x43
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_originSet(br_device_pixelmap *self, br_point *p)
br_error _M_br_device_pixelmap_mem_originSet(br_device_pixelmap *self, br_point *p) {
    LOG_TRACE("(%p, %p)", self, p);
    NOT_IMPLEMENTED();
}

// Offset: 17783
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowSize(br_device_pixelmap *self, br_size_t *sizep)
br_error _M_br_device_pixelmap_mem_rowSize(br_device_pixelmap *self, br_size_t *sizep) {
    LOG_TRACE("(%p, %p)", self, sizep);
    NOT_IMPLEMENTED();
}

// Offset: 17858
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowQuery(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row)
br_error _M_br_device_pixelmap_mem_rowQuery(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row) {
    LOG_TRACE("(%p, %p, %d, %d)", self, buffer, buffer_size, row);
    NOT_IMPLEMENTED();
}

// Offset: 17931
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_rowSet(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row)
br_error _M_br_device_pixelmap_mem_rowSet(br_device_pixelmap *self, void *buffer, br_size_t buffer_size, br_int_32 row) {
    LOG_TRACE("(%p, %p, %d, %d)", self, buffer, buffer_size, row);
    NOT_IMPLEMENTED();
}

// Offset: 18003
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_flush(br_device_pixelmap *self)
br_error _M_br_device_pixelmap_mem_flush(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

// Offset: 18081
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_synchronise(br_device_pixelmap *self, br_token sync_type, br_boolean block)
br_error _M_br_device_pixelmap_mem_synchronise(br_device_pixelmap *self, br_token sync_type, br_boolean block) {
    LOG_TRACE("(%p, %d, %d)", self, sync_type, block);
    NOT_IMPLEMENTED();
}

// Offset: 18158
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_directLock(br_device_pixelmap *self, br_boolean block)
br_error _M_br_device_pixelmap_mem_directLock(br_device_pixelmap *self, br_boolean block) {
    LOG_TRACE("(%p, %d)", self, block);
    NOT_IMPLEMENTED();
}

// Offset: 18237
// Size: 0x28
//IDA: br_error __cdecl _M_br_device_pixelmap_mem_directUnlock(br_device_pixelmap *self)
br_error _M_br_device_pixelmap_mem_directUnlock(br_device_pixelmap *self) {
    LOG_TRACE("(%p)", self);
    NOT_IMPLEMENTED();
}

