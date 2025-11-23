#define STRINGIZE(X)  #X
#define X_BEFOREARG(X)  X_ ## X


STRINGIZE(Hello)
X_BEFOREARG(Hello)


// Prescan does not occur if argument is concatenated
// of stringized.
#define foo 5

STRINGIZE(foo) 
X_BEFOREARG(foo)


// To solve this, you can #define another macro,
// that performs prescan
#define XSTRINGIZE(X)   STRINGIZE(X)
XSTRINGIZE(foo)


// Prescan always does a complete expansion!
#define   meow  MEOW
#define   MEOW  ouch

XSTRINGIZE(meow)
