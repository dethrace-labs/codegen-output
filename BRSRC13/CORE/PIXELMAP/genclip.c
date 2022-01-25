#include "genclip.h"


// Offset: 18
// Size: 0x8f
//IDA: br_clip_result __cdecl PixelmapPointClip(br_point *out, br_point *in, br_pixelmap *pm)
br_clip_result PixelmapPointClip(br_point *out, br_point *in, br_pixelmap *pm) {
    LOG_TRACE("(%p, %p, %p)", out, in, pm);
    NOT_IMPLEMENTED();
}

// Offset: 178
// Size: 0x2ef
//IDA: br_clip_result __cdecl PixelmapLineClip(br_point *s_out, br_point *e_out, br_point *s_in, br_point *e_in, br_pixelmap *pm)
br_clip_result PixelmapLineClip(br_point *s_out, br_point *e_out, br_point *s_in, br_point *e_in, br_pixelmap *pm) {
    int temp;
    br_int_32 w;
    br_int_32 h;
    br_int_32 x1;
    br_int_32 x2;
    br_int_32 y1;
    br_int_32 y2;
    int __block0____temp__;
    int __block1____temp__;
    LOG_TRACE("(%p, %p, %p, %p, %p)", s_out, e_out, s_in, e_in, pm);
    NOT_IMPLEMENTED();
}

// Offset: 951
// Size: 0x176
//IDA: br_clip_result __cdecl PixelmapRectangleClip(br_rectangle *out, br_rectangle *in, br_pixelmap *pm)
br_clip_result PixelmapRectangleClip(br_rectangle *out, br_rectangle *in, br_pixelmap *pm) {
    LOG_TRACE("(%p, %p, %p)", out, in, pm);
    NOT_IMPLEMENTED();
}

// Offset: 1350
// Size: 0x2c3
//IDA: br_clip_result __cdecl PixelmapRectangleClipTwo(br_rectangle *r_out, br_point *p_out, br_rectangle *r_in, br_point *p_in, br_pixelmap *pm_dst, br_pixelmap *pm_src)
br_clip_result PixelmapRectangleClipTwo(br_rectangle *r_out, br_point *p_out, br_rectangle *r_in, br_point *p_in, br_pixelmap *pm_dst, br_pixelmap *pm_src) {
    LOG_TRACE("(%p, %p, %p, %p, %p, %p)", r_out, p_out, r_in, p_in, pm_dst, pm_src);
    NOT_IMPLEMENTED();
}

// Offset: 2078
// Size: 0x1a2
//IDA: br_clip_result __cdecl PixelmapCopyBitsClip(br_rectangle *r_out, br_point *p_out, br_rectangle *r_in, br_point *p_in, br_pixelmap *pm)
br_clip_result PixelmapCopyBitsClip(br_rectangle *r_out, br_point *p_out, br_rectangle *r_in, br_point *p_in, br_pixelmap *pm) {
    LOG_TRACE("(%p, %p, %p, %p, %p)", r_out, p_out, r_in, p_in, pm);
    NOT_IMPLEMENTED();
}

