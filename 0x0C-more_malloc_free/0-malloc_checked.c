#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - that allocates memory using malloc
* @b: var of type int
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *memory;

memory = malloc(b);
if (memory == NULL)
exit(98);
return (memory);
}
