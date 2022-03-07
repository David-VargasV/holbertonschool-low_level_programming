#include "main.h"
#include <stdlib.h>

/**
* create_array - create array
* @size: size of memory
* @c: char
* Return: pointer or NULL
*/

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int s;

if (size == 0)
return (NULL);
if (size != 0)
{
arr = (char *)malloc(size * sizeof(char));
if (arr != NULL)
{
for (s = 0; s < size; s++)
arr[s] = c;
s++;
}
}
return (arr);
}
