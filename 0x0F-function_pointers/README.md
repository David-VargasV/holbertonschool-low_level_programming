Function pointers

Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works.

Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers.

Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.

Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.

Many object oriented features in C++ are implemented using function pointers in C. For example virtual functions. Class methods are another example implemented using function pointers. Refer this book for more details.

Tasks

0. Write a function that prints a name.
1. Write a function that executes a function given as a parameter on each element of an array.
2. Write a function that searches for an integer.
3. Write a program that performs simple operations.
