#define selfref(x) (1 + selfref(x))

// results in (1 + selfref(x)) to prevent
// infinite expansion.
selfref(1)

#define foomacr(x)    (x)

// you might expect this call produces the following:
// foomarc(selfref(1))  ->  foomacr((1 + selfref(1)))  ->  ...
// ... 1 + 1 + selfref(1), but it isn't ):
foomacr(selfref(1))

// Quote from GNU CPP manual :
// "The self-references that do not expand in the first scan
// are marked so that they will not expand in the second scan either"

// Prescan makes a difference in three special cases: nested calls
// of a macro; macros that call other macros that stringize or
// concatenate; macros used in arguments, whose expansions contain
// unshielded commas.

