#include "memmgmt.h"

 // Suffix added to avoid duplicate symbol
host_regs regs__memmgmt;

// Offset: 9
// Size: 0xdf
//IDA: br_error __cdecl HostLock(br_uint_32 offset, br_uint_16 sel, br_size_t size)
br_error HostLock(br_uint_32 offset, br_uint_16 sel, br_size_t size) {
    LOG_TRACE("(%d, %d, %d)", offset, sel, size);
    NOT_IMPLEMENTED();
}

// Offset: 243
// Size: 0xdf
//IDA: br_error __cdecl HostUnlock(br_uint_32 offset, br_uint_16 sel, br_size_t size)
br_error HostUnlock(br_uint_32 offset, br_uint_16 sel, br_size_t size) {
    LOG_TRACE("(%d, %d, %d)", offset, sel, size);
    NOT_IMPLEMENTED();
}

// Offset: 487
// Size: 0x6d
//IDA: br_error __cdecl HostSelectorAllocate(br_uint_16 *selp)
br_error HostSelectorAllocate(br_uint_16 *selp) {
    LOG_TRACE("(%p)", selp);
    NOT_IMPLEMENTED();
}

// Offset: 623
// Size: 0x97
//IDA: br_error __cdecl HostSelectorAllocateLinear(br_uint_16 *selp, br_uint_32 base, br_size_t size)
br_error HostSelectorAllocateLinear(br_uint_16 *selp, br_uint_32 base, br_size_t size) {
    br_uint_16 sel;
    br_error r;
    LOG_TRACE("(%p, %d, %d)", selp, base, size);
    NOT_IMPLEMENTED();
}

// Offset: 800
// Size: 0x9f
//IDA: br_error __cdecl HostSelectorAllocateAlias(br_uint_16 *aliasp, br_uint_16 sel)
br_error HostSelectorAllocateAlias(br_uint_16 *aliasp, br_uint_16 sel) {
    br_uint_16 alias;
    br_uint_32 base;
    br_uint_32 limit;
    br_error r;
    LOG_TRACE("(%p, %d)", aliasp, sel);
    NOT_IMPLEMENTED();
}

// Offset: 988
// Size: 0xae
//IDA: br_error __cdecl HostSelectorAllocatePhysical(br_uint_16 *selp, br_uint_32 phys_addr, br_size_t size)
br_error HostSelectorAllocatePhysical(br_uint_16 *selp, br_uint_32 phys_addr, br_size_t size) {
    LOG_TRACE("(%p, %d, %d)", selp, phys_addr, size);
    NOT_IMPLEMENTED();
}

// Offset: 1179
// Size: 0x87
//IDA: br_error __cdecl HostSelectorFree(br_uint_16 sel)
br_error HostSelectorFree(br_uint_16 sel) {
    br_uint_16 rsel;
    LOG_TRACE("(%d)", sel);
    NOT_IMPLEMENTED();
}

// Offset: 1334
// Size: 0x7a
//IDA: br_error __cdecl HostSelectorBaseSet(br_uint_16 sel, br_uint_32 base)
br_error HostSelectorBaseSet(br_uint_16 sel, br_uint_32 base) {
    LOG_TRACE("(%d, %d)", sel, base);
    NOT_IMPLEMENTED();
}

// Offset: 1477
// Size: 0x8a
//IDA: br_error __cdecl HostSelectorLimitSet(br_uint_16 sel, br_size_t limit)
br_error HostSelectorLimitSet(br_uint_16 sel, br_size_t limit) {
    LOG_TRACE("(%d, %d)", sel, limit);
    NOT_IMPLEMENTED();
}

// Offset: 1637
// Size: 0x82
//IDA: br_error __cdecl HostSelectorBaseQuery(br_uint_32 *basep, br_uint_16 sel)
br_error HostSelectorBaseQuery(br_uint_32 *basep, br_uint_16 sel) {
    br_uint_32 base;
    LOG_TRACE("(%p, %d)", basep, sel);
    NOT_IMPLEMENTED();
}

// Offset: 1790
// Size: 0xaf
//IDA: br_error __cdecl HostSelectorLimitQuery(br_uint_32 *limitp, br_uint_16 sel)
br_error HostSelectorLimitQuery(br_uint_32 *limitp, br_uint_16 sel) {
    br_uint_32 limit;
    ldt ldt;
    LOG_TRACE("(%p, %d)", limitp, sel);
    NOT_IMPLEMENTED();
}

