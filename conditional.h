#define MACRO 1

/* conditional group */
#ifdef MACRO
// controlled text (run through initial transformations
// and tokenization, even if the conditional fails!) 

"Hello
/* comment...

// can include preprocessing directives.
#include "stdio.h"

#endif
/* end of conditional group */

// DO NOT use #if <smth false> to comment out block which
// consist of invalid C code, use /* instead.
