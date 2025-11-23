// Preprocessor sends a token stream to the compiler with
// additional information on each token which includes
// line number and source file information. We can alter
// this information with #line directive which supports
// three forms of usage. 


int
main (void)
{
#line 1000 "somefile-name.c"
	syntax error
}
