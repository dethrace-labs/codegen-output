#ifndef _BRQSORT_H_
#define _BRQSORT_H_

#include "dr_types.h"
#include "br_types.h"


// Offset: 8
// Size: 0x230
//IDA: void __cdecl BrQsort(void *basep, unsigned int nelems, unsigned int size, br_qsort_cbfn *comp)
void BrQsort(void *basep, unsigned int nelems, unsigned int size, br_qsort_cbfn *comp);

// Offset: 579
// Size: 0x51
//IDA: void __usercall swap_chars(char *a@<EAX>, char *b@<EDX>, unsigned int nbytes@<EBX>)
void swap_chars(char *a, char *b, unsigned int nbytes);

// Offset: 670
// Size: 0x5f
//IDA: void __usercall swap_ints(char *ap@<EAX>, char *bp@<EDX>, unsigned int nints@<EBX>)
void swap_ints(char *ap, char *bp, unsigned int nints);

// Offset: 776
// Size: 0x55
//IDA: void __usercall swap_int_1(char *ap@<EAX>, char *bp@<EDX>, unsigned int nints@<EBX>)
void swap_int_1(char *ap, char *bp, unsigned int nints);

#endif
