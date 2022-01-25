#include "loader.h"


// Offset: 10
// Size: 0x961
//IDA: br_image* __usercall ImageLoad@<EAX>(char *name@<EAX>)
br_image* ImageLoad(char *name) {
    void *fh;
    int mode;
    msdos_header dos_header;
    coff_header coff_header;
    nt_optional_header nt_header;
    section_header section_header;
    br_uint_32 pe;
    br_image *img;
    br_uint_8 *arena_base;
    int arena_size;
    int arena_align;
    int i;
    br_uint_32 offset;
    unsigned int n;
    export_directory *__block0__ed;
    import_directory *__block1__id;
    void **__block1__at;
    br_uint_32 *__block1__lt;
    br_image *__block1__import_img;
    basereloc_header *__block2__header;
    br_uint_16 *__block2__entry;
    br_uint_8 *__block2__fixup;
    br_int_32 __block2__delta;
    br_int_16 __block2__delta_h;
    br_int_16 __block2__delta_l;
    LOG_TRACE("(\"%s\")", name);
    NOT_IMPLEMENTED();
}

