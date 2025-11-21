GNU CPP Examples (GCC 16.0.0 pre-release)

A collection of C source files demonstrating the features, quirks, and pitfalls of the GNU C Preprocessor.
This repository is light on commentary and heavy on practical code.

The best way to use these examples is to explore the output of the preprocessor directly by running `cpp <filename>`
or `gcc -E <filename>` to see the transformations in action.

The following features are demonstrated:
- Initial processing && Tokenization
- Preprocessing Language:
  * The #include directive
  * Computed includes
  * Object-like and function-like macros
  * Stringizing (#) and Token concatenation (##)
  * Variadic macros (__VA_AGRS__)
  * Interaction of #include with #undef and related quirks
  * Directives within function-like macro arguments
  * Misnesting behaviour
(... in progress)
