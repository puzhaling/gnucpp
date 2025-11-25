#define SAFE_MAXINT(a,b) \
	({int _a = (a), _b = (b); _a > _b ? _a : _b; })
/*          GNU C extension, which allows to build an expression
		using compound statement in parentheses

	This macro is safe, because it's arguments are evaluated only
	once in the macro's body
*/
