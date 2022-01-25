#ifndef _DEVSETUP_H_
#define _DEVSETUP_H_

#include "dr_types.h"
#include "br_types.h"

extern br_pixelmap *last_begin_screen; // addr: 00045C84

// Offset: 20
// Size: 0x2d
//IDA: br_pixelmap* __cdecl BrDevLastBeginQuery()
br_pixelmap* BrDevLastBeginQuery();

// Offset: 83
// Size: 0x2d
//IDA: void __usercall BrDevLastBeginSet(br_pixelmap *pm@<EAX>)
void BrDevLastBeginSet(br_pixelmap *pm);

// Offset: 142
// Size: 0xd6
//IDA: br_error __cdecl BrDevBeginVar(br_pixelmap **ppm, char *setup_string, ...)
br_error BrDevBeginVar(br_pixelmap **ppm, char *setup_string, ...);

// Offset: 367
// Size: 0x36
//IDA: br_error __cdecl BrDevBegin(br_pixelmap **ppm, char *setup_string)
br_error BrDevBegin(br_pixelmap **ppm, char *setup_string);

// Offset: 434
// Size: 0x549
//IDA: br_error __cdecl BrDevBeginTV(br_pixelmap **ppm, char *setup_string, br_token_value *setup_tv)
br_error BrDevBeginTV(br_pixelmap **ppm, char *setup_string, br_token_value *setup_tv);

// Offset: 1801
// Size: 0x60
//IDA: br_pixelmap* __cdecl BrDevBeginOld(char *setup_string)
br_pixelmap* BrDevBeginOld(char *setup_string);

// Offset: 1909
// Size: 0x3c
//IDA: void __cdecl BrDevEndOld()
void BrDevEndOld();

// Offset: 1988
// Size: 0x39
//IDA: void __cdecl BrDevPaletteSetOld(br_pixelmap *pm)
void BrDevPaletteSetOld(br_pixelmap *pm);

// Offset: 2069
// Size: 0x3d
//IDA: void __cdecl BrDevPaletteSetEntryOld(int i, br_colour colour)
void BrDevPaletteSetEntryOld(int i, br_colour colour);

// Offset: 2153
// Size: 0x1c7
//IDA: br_error __cdecl BrRendererFacilityFind(br_renderer_facility **prf, br_device_pixelmap *destination, br_token scalar_type)
br_error BrRendererFacilityFind(br_renderer_facility **prf, br_device_pixelmap *destination, br_token scalar_type);

// Offset: 2631
// Size: 0x1c7
//IDA: br_error __cdecl BrPrimitiveLibraryFind(br_primitive_library **ppl, br_device_pixelmap *destination, br_token scalar_type)
br_error BrPrimitiveLibraryFind(br_primitive_library **ppl, br_device_pixelmap *destination, br_token scalar_type);

// Offset: 3107
// Size: 0x223
//IDA: br_error __cdecl BrGeometryFormatFind(br_geometry **pgf, br_renderer *renderer, br_renderer_facility *renderer_facility, br_token scalar_type, br_token format_type)
br_error BrGeometryFormatFind(br_geometry **pgf, br_renderer *renderer, br_renderer_facility *renderer_facility, br_token scalar_type, br_token format_type);

#endif
