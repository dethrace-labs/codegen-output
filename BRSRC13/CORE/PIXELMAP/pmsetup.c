#include "pmsetup.h"

char *namePointers_BRPMAP1[77];
br_uint_16 nameOrdinals_BRPMAP1[77];
void *functionPointers_BRPMAP1[77];
br_image Image_BRPMAP1;
br_pixelmap_state _pixelmap;
 // Suffix added to avoid duplicate symbol
br_resource_class resourceClasses__pmsetup[2];

// Offset: 16
// Size: 0x82
//IDA: void __cdecl BrPixelmapBegin()
void BrPixelmapBegin() {
    int i;
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

// Offset: 160
// Size: 0x4c
//IDA: void __cdecl BrPixelmapEnd()
void BrPixelmapEnd() {
    LOG_TRACE("()");
    NOT_IMPLEMENTED();
}

