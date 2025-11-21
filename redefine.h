// proper redefines.
#define FIVE  (2 + 3)
FIVE
#define FIVE       (2  +  3)
FIVE
#define FIVE   (2 /*comment*/ +  3)
FIVE
// end of proper redefines.

#define FIVE ( 2+3 )
FIVE
#define FIVE (2 * 3)
FIVE
#define FIVE (fst,snd) (2 + 3)
