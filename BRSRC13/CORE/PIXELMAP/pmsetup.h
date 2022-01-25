#ifndef _PMSETUP_H_
#define _PMSETUP_H_

#include "dr_types.h"
#include "br_types.h"

extern char *namePointers_BRPMAP1[77]; // addr: 00024BFC
extern br_uint_16 nameOrdinals_BRPMAP1[77]; // addr: 00024D30
extern void *functionPointers_BRPMAP1[77]; // addr: 00024DCA
extern br_image Image_BRPMAP1; // addr: 00024EFE
extern br_pixelmap_state _pixelmap; // addr: 00049170
extern br_resource_class resourceClasses__pmsetup[2]; // addr: 0011546C // suffix added to avoid duplicate symbol

// Offset: 16
// Size: 0x82
//IDA: void __cdecl BrPixelmapBegin()
void BrPixelmapBegin();

// Offset: 160
// Size: 0x4c
//IDA: void __cdecl BrPixelmapEnd()
void BrPixelmapEnd();

#endif
