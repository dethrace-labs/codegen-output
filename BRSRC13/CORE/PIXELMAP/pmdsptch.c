#include "pmdsptch.h"


// Offset: 22
// Size: 0x6b
//IDA: br_pixelmap* __cdecl BrPixelmapAllocateSub(br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h)
br_pixelmap* BrPixelmapAllocateSub(br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h) {
    br_pixelmap *new;
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %d, %d)", src, x, y, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 144
// Size: 0x62
//IDA: void __cdecl BrPixelmapFree(br_pixelmap *src)
void BrPixelmapFree(br_pixelmap *src) {
    LOG_TRACE("(%p)", src);
    NOT_IMPLEMENTED();
}

// Offset: 259
// Size: 0x6f
//IDA: br_pixelmap* __cdecl BrPixelmapResize(br_pixelmap *src, br_int_32 width, br_int_32 height)
br_pixelmap* BrPixelmapResize(br_pixelmap *src, br_int_32 width, br_int_32 height) {
    LOG_TRACE("(%p, %d, %d)", src, width, height);
    NOT_IMPLEMENTED();
}

// Offset: 386
// Size: 0x1b0
//IDA: br_pixelmap* __cdecl BrPixelmapMatch(br_pixelmap *src, br_uint_8 match_type)
br_pixelmap* BrPixelmapMatch(br_pixelmap *src, br_uint_8 match_type) {
    br_pixelmap *new;
    br_token_value tv[3];
    LOG_TRACE("(%p, %d)", src, match_type);
    NOT_IMPLEMENTED();
}

// Offset: 839
// Size: 0x134
//IDA: br_pixelmap* __cdecl BrPixelmapMatchSized(br_pixelmap *src, br_uint_8 match_type, br_int_32 width, br_int_32 height)
br_pixelmap* BrPixelmapMatchSized(br_pixelmap *src, br_uint_8 match_type, br_int_32 width, br_int_32 height) {
    br_pixelmap *new;
    br_token_value tv[5];
    LOG_TRACE("(%p, %d, %d, %d)", src, match_type, width, height);
    NOT_IMPLEMENTED();
}

// Offset: 1168
// Size: 0x185
//IDA: br_pixelmap* __cdecl BrPixelmapMatchTyped(br_pixelmap *src, br_uint_8 match_type, br_uint_8 pixelmap_type)
br_pixelmap* BrPixelmapMatchTyped(br_pixelmap *src, br_uint_8 match_type, br_uint_8 pixelmap_type) {
    br_pixelmap *new;
    br_token_value tv[4];
    LOG_TRACE("(%p, %d, %d)", src, match_type, pixelmap_type);
    NOT_IMPLEMENTED();
}

// Offset: 1583
// Size: 0x1b6
//IDA: br_pixelmap* __cdecl BrPixelmapMatchTypedSized(br_pixelmap *src, br_uint_8 match_type, br_uint_8 pixelmap_type, br_int_32 width, br_int_32 height)
br_pixelmap* BrPixelmapMatchTypedSized(br_pixelmap *src, br_uint_8 match_type, br_uint_8 pixelmap_type, br_int_32 width, br_int_32 height) {
    br_pixelmap *new;
    br_token_value tv[6];
    LOG_TRACE("(%p, %d, %d, %d, %d)", src, match_type, pixelmap_type, width, height);
    NOT_IMPLEMENTED();
}

// Offset: 2037
// Size: 0x5f
//IDA: br_pixelmap* __cdecl BrPixelmapClone(br_pixelmap *src)
br_pixelmap* BrPixelmapClone(br_pixelmap *src) {
    br_pixelmap *new;
    br_token_value tv[2];
    LOG_TRACE("(%p)", src);
    NOT_IMPLEMENTED();
}

// Offset: 2147
// Size: 0x39
//IDA: void __cdecl BrPixelmapFill(br_pixelmap *dst, br_uint_32 colour)
void BrPixelmapFill(br_pixelmap *dst, br_uint_32 colour) {
    LOG_TRACE("(%p, %d)", dst, colour);
    NOT_IMPLEMENTED();
}

// Offset: 2224
// Size: 0x55
//IDA: void __cdecl BrPixelmapRectangle(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour)
void BrPixelmapRectangle(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour) {
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x, y, w, h, colour);
    NOT_IMPLEMENTED();
}

// Offset: 2330
// Size: 0x5c
//IDA: void __cdecl BrPixelmapRectangle2(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour_tl, br_uint_32 colour_br)
void BrPixelmapRectangle2(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour_tl, br_uint_32 colour_br) {
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d, %d)", dst, x, y, w, h, colour_tl, colour_br);
    NOT_IMPLEMENTED();
}

// Offset: 2435
// Size: 0xc5
//IDA: br_error __usercall DispatchCopy@<EAX>(br_device_pixelmap *self@<EAX>, br_device_pixelmap *src@<EDX>)
br_error DispatchCopy(br_device_pixelmap *self, br_device_pixelmap *src) {
    LOG_TRACE("(%p, %p)", self, src);
    NOT_IMPLEMENTED();
}

// Offset: 2654
// Size: 0xee
//IDA: br_error __usercall DispatchRectangleCopy@<EAX>(br_device_pixelmap *self@<EAX>, br_point *p@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *r@<ECX>)
br_error DispatchRectangleCopy(br_device_pixelmap *self, br_point *p, br_device_pixelmap *src, br_rectangle *r) {
    LOG_TRACE("(%p, %p, %p, %p)", self, p, src, r);
    NOT_IMPLEMENTED();
}

// Offset: 2921
// Size: 0xee
//IDA: br_error __usercall DispatchRectangleStretchCopy@<EAX>(br_device_pixelmap *self@<EAX>, br_rectangle *r@<EDX>, br_device_pixelmap *src@<EBX>, br_rectangle *s@<ECX>)
br_error DispatchRectangleStretchCopy(br_device_pixelmap *self, br_rectangle *r, br_device_pixelmap *src, br_rectangle *s) {
    LOG_TRACE("(%p, %p, %p, %p)", self, r, src, s);
    NOT_IMPLEMENTED();
}

// Offset: 3183
// Size: 0x53
//IDA: void __cdecl BrPixelmapRectangleCopy(br_pixelmap *dst, br_int_32 dx, br_int_32 dy, br_pixelmap *src, br_int_32 sx, br_int_32 sy, br_int_32 w, br_int_32 h)
void BrPixelmapRectangleCopy(br_pixelmap *dst, br_int_32 dx, br_int_32 dy, br_pixelmap *src, br_int_32 sx, br_int_32 sy, br_int_32 w, br_int_32 h) {
    br_rectangle r;
    br_point p;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d)", dst, dx, dy, src, sx, sy, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 3297
// Size: 0x5f
//IDA: void __cdecl BrPixelmapRectangleStretchCopy(br_pixelmap *dst, br_int_32 dx, br_int_32 dy, br_int_32 dw, br_int_32 dh, br_pixelmap *src, br_int_32 sx, br_int_32 sy, br_int_32 sw, br_int_32 sh)
void BrPixelmapRectangleStretchCopy(br_pixelmap *dst, br_int_32 dx, br_int_32 dy, br_int_32 dw, br_int_32 dh, br_pixelmap *src, br_int_32 sx, br_int_32 sy, br_int_32 sw, br_int_32 sh) {
    br_rectangle s;
    br_rectangle d;
    LOG_TRACE("(%p, %d, %d, %d, %d, %p, %d, %d, %d, %d)", dst, dx, dy, dw, dh, src, sx, sy, sw, sh);
    NOT_IMPLEMENTED();
}

// Offset: 3416
// Size: 0x58
//IDA: void __cdecl BrPixelmapRectangleFill(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour)
void BrPixelmapRectangleFill(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour) {
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x, y, w, h, colour);
    NOT_IMPLEMENTED();
}

// Offset: 3533
// Size: 0x123
//IDA: void __cdecl BrPixelmapDirtyRectangleCopy(br_pixelmap *dst, br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h)
void BrPixelmapDirtyRectangleCopy(br_pixelmap *dst, br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h) {
    br_rectangle r;
    br_point p;
    LOG_TRACE("(%p, %p, %d, %d, %d, %d)", dst, src, x, y, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 3854
// Size: 0x57
//IDA: void __cdecl BrPixelmapDirtyRectangleClear(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour)
void BrPixelmapDirtyRectangleClear(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h, br_uint_32 colour) {
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x, y, w, h, colour);
    NOT_IMPLEMENTED();
}

// Offset: 3978
// Size: 0x57
//IDA: void __cdecl BrPixelmapDirtyRectangleDoubleBuffer(br_pixelmap *dst, br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h)
void BrPixelmapDirtyRectangleDoubleBuffer(br_pixelmap *dst, br_pixelmap *src, br_int_32 x, br_int_32 y, br_int_32 w, br_int_32 h) {
    br_rectangle r;
    LOG_TRACE("(%p, %p, %d, %d, %d, %d)", dst, src, x, y, w, h);
    NOT_IMPLEMENTED();
}

// Offset: 4084
// Size: 0x4c
//IDA: void __cdecl BrPixelmapPixelSet(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour)
void BrPixelmapPixelSet(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour) {
    br_point p;
    LOG_TRACE("(%p, %d, %d, %d)", dst, x, y, colour);
    NOT_IMPLEMENTED();
}

// Offset: 4179
// Size: 0x55
//IDA: br_uint_32 __cdecl BrPixelmapPixelGet(br_pixelmap *dst, br_int_32 x, br_int_32 y)
br_uint_32 BrPixelmapPixelGet(br_pixelmap *dst, br_int_32 x, br_int_32 y) {
    br_point p;
    br_uint_32 colour;
    LOG_TRACE("(%p, %d, %d)", dst, x, y);
    NOT_IMPLEMENTED();
}

// Offset: 4279
// Size: 0xdc
//IDA: void __cdecl BrPixelmapCopy(br_pixelmap *dst, br_pixelmap *src)
void BrPixelmapCopy(br_pixelmap *dst, br_pixelmap *src) {
    br_rectangle s;
    br_rectangle d;
    LOG_TRACE("(%p, %p)", dst, src);
    NOT_IMPLEMENTED();
}

// Offset: 4514
// Size: 0x5c
//IDA: void __cdecl BrPixelmapLine(br_pixelmap *dst, br_int_32 x1, br_int_32 y1, br_int_32 x2, br_int_32 y2, br_uint_32 colour)
void BrPixelmapLine(br_pixelmap *dst, br_int_32 x1, br_int_32 y1, br_int_32 x2, br_int_32 y2, br_uint_32 colour) {
    br_point s;
    br_point e;
    LOG_TRACE("(%p, %d, %d, %d, %d, %d)", dst, x1, y1, x2, y2, colour);
    NOT_IMPLEMENTED();
}

// Offset: 4629
// Size: 0x41
//IDA: void __cdecl BrPixelmapDoubleBuffer(br_pixelmap *dst, br_pixelmap *src)
void BrPixelmapDoubleBuffer(br_pixelmap *dst, br_pixelmap *src) {
    LOG_TRACE("(%p, %p)", dst, src);
    NOT_IMPLEMENTED();
}

// Offset: 4709
// Size: 0x62
//IDA: void __cdecl BrPixelmapText(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour, br_font *font, char *text)
void BrPixelmapText(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour, br_font *font, char *text) {
    br_point p;
    LOG_TRACE("(%p, %d, %d, %d, %p, \"%s\")", dst, x, y, colour, font, text);
    NOT_IMPLEMENTED();
}

// Offset: 4823
// Size: 0x91
//IDA: void __cdecl BrPixelmapTextF(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour, br_font *font, char *fmt, ...)
void BrPixelmapTextF(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_32 colour, br_font *font, char *fmt, ...) {
    char *ss;
    br_point p;
    va_list args;
    LOG_TRACE("(%p, %d, %d, %d, %p, \"%s\")", dst, x, y, colour, font, fmt);
    NOT_IMPLEMENTED();
}

// Offset: 4988
// Size: 0xd6
//IDA: br_uint_16 __cdecl BrPixelmapTextWidth(br_pixelmap *dst, br_font *font, char *text)
br_uint_16 BrPixelmapTextWidth(br_pixelmap *dst, br_font *font, char *text) {
    int i;
    int j;
    int w;
    LOG_TRACE("(%p, %p, \"%s\")", dst, font, text);
    NOT_IMPLEMENTED();
}

// Offset: 5223
// Size: 0x33
//IDA: br_uint_16 __cdecl BrPixelmapTextHeight(br_pixelmap *dst, br_font *font)
br_uint_16 BrPixelmapTextHeight(br_pixelmap *dst, br_font *font) {
    LOG_TRACE("(%p, %p)", dst, font);
    NOT_IMPLEMENTED();
}

// Offset: 5293
// Size: 0x77
//IDA: void __cdecl BrPixelmapCopyBits(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_8 *src, br_int_32 s_stride, br_int_32 start_bit, br_int_32 end_bit, br_int_32 nrows, br_uint_32 colour)
void BrPixelmapCopyBits(br_pixelmap *dst, br_int_32 x, br_int_32 y, br_uint_8 *src, br_int_32 s_stride, br_int_32 start_bit, br_int_32 end_bit, br_int_32 nrows, br_uint_32 colour) {
    br_point p;
    br_rectangle r;
    LOG_TRACE("(%p, %d, %d, %p, %d, %d, %d, %d, %d)", dst, x, y, src, s_stride, start_bit, end_bit, nrows, colour);
    NOT_IMPLEMENTED();
}

// Offset: 5431
// Size: 0x39
//IDA: br_uint_16 __cdecl BrPixelmapFileSize(br_pixelmap *pm)
br_uint_16 BrPixelmapFileSize(br_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
    NOT_IMPLEMENTED();
}

// Offset: 5508
// Size: 0x39
//IDA: br_uint_16 __cdecl BrPixelmapPixelSize(br_pixelmap *pm)
br_uint_16 BrPixelmapPixelSize(br_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
    NOT_IMPLEMENTED();
}

// Offset: 5584
// Size: 0x39
//IDA: br_uint_16 __cdecl BrPixelmapChannels(br_pixelmap *pm)
br_uint_16 BrPixelmapChannels(br_pixelmap *pm) {
    LOG_TRACE("(%p)", pm);
    NOT_IMPLEMENTED();
}

// Offset: 5662
// Size: 0x85
//IDA: void __cdecl BrPixelmapPaletteSet(br_pixelmap *pm, br_pixelmap *pal)
void BrPixelmapPaletteSet(br_pixelmap *pm, br_pixelmap *pal) {
    LOG_TRACE("(%p, %p)", pm, pal);
    NOT_IMPLEMENTED();
}

// Offset: 5821
// Size: 0x5c
//IDA: void __cdecl BrPixelmapPaletteEntrySet(br_pixelmap *pm, br_int_32 index, br_colour colour)
void BrPixelmapPaletteEntrySet(br_pixelmap *pm, br_int_32 index, br_colour colour) {
    br_device_clut *clut;
    LOG_TRACE("(%p, %d, %d)", pm, index, colour);
    NOT_IMPLEMENTED();
}

// Offset: 5943
// Size: 0x60
//IDA: void __cdecl BrPixelmapPaletteEntrySetMany(br_pixelmap *pm, br_int_32 index, br_int_32 ncolours, br_colour *colours)
void BrPixelmapPaletteEntrySetMany(br_pixelmap *pm, br_int_32 index, br_int_32 ncolours, br_colour *colours) {
    br_device_clut *clut;
    LOG_TRACE("(%p, %d, %d, %p)", pm, index, ncolours, colours);
    NOT_IMPLEMENTED();
}

// Offset: 6060
// Size: 0x71
//IDA: br_pixelmap* __cdecl BrPixelmapDirectLock(br_pixelmap *src, br_boolean block)
br_pixelmap* BrPixelmapDirectLock(br_pixelmap *src, br_boolean block) {
    LOG_TRACE("(%p, %d)", src, block);
    NOT_IMPLEMENTED();
}

// Offset: 6196
// Size: 0x6d
//IDA: br_pixelmap* __cdecl BrPixelmapDirectUnlock(br_pixelmap *src)
br_pixelmap* BrPixelmapDirectUnlock(br_pixelmap *src) {
    LOG_TRACE("(%p)", src);
    NOT_IMPLEMENTED();
}

