#include "brqsort.h"


// Offset: 8
// Size: 0x230
//IDA: void __cdecl BrQsort(void *basep, unsigned int nelems, unsigned int size, br_qsort_cbfn *comp)
void BrQsort(void *basep, unsigned int nelems, unsigned int size, br_qsort_cbfn *comp) {
    char *stack[40];
    char **sp;
    char *i;
    char *j;
    char *limit;
    unsigned int thresh;
    char *base;
    unsigned int width;
    void (*swap_func)(char*, char*, unsigned int);
    LOG_TRACE("(%p, %d, %d, %p)", basep, nelems, size, comp);
    NOT_IMPLEMENTED();
}

// Offset: 579
// Size: 0x51
//IDA: void __usercall swap_chars(char *a@<EAX>, char *b@<EDX>, unsigned int nbytes@<EBX>)
void swap_chars(char *a, char *b, unsigned int nbytes) {
    char tmp;
    LOG_TRACE("(\"%s\", \"%s\", %d)", a, b, nbytes);
    NOT_IMPLEMENTED();
}

// Offset: 670
// Size: 0x5f
//IDA: void __usercall swap_ints(char *ap@<EAX>, char *bp@<EDX>, unsigned int nints@<EBX>)
void swap_ints(char *ap, char *bp, unsigned int nints) {
    int *a;
    int *b;
    int tmp;
    LOG_TRACE("(\"%s\", \"%s\", %d)", ap, bp, nints);
    NOT_IMPLEMENTED();
}

// Offset: 776
// Size: 0x55
//IDA: void __usercall swap_int_1(char *ap@<EAX>, char *bp@<EDX>, unsigned int nints@<EBX>)
void swap_int_1(char *ap, char *bp, unsigned int nints) {
    int *a;
    int *b;
    int tmp;
    LOG_TRACE("(\"%s\", \"%s\", %d)", ap, bp, nints);
    NOT_IMPLEMENTED();
}

