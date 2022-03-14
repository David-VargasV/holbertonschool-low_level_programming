Preprocessor and Macros

The C Preprocessor is not a part of the compiler, but is a separate step in the compilation process. In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation.
All preprocessor commands begin with a hash symbol (#). It must be the first nonblank character, and for readability, a preprocessor directive should begin in the first column.

Object-like Macros

An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list.

Macro Arguments

Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.


Tasks

0. Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. Write a program that prints the name of the file it was compiled from, followed by a new line.
3. Write a function-like macro ABS(x) that computes the absolute value of a number x.
4. Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.


