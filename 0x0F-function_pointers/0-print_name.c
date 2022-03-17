#include "function_pointers.h"

/**
* print_name - print the name
* @name: name
* @f: pointer
* Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
if (f)
{
(*f)(name);
}
}
