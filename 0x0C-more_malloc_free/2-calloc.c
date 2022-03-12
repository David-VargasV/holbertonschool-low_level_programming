#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: the address of memory to print
* @size: size
* Return: NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pt;
char *x;
unsigned int y;

if (nmemb == 0 || size == 0)
return (NULL);

pt = malloc(size * nmemb);

if (pt == NULL)
return (NULL);

x = pt;

for (y = 0; y < (size * nmemb); y++)
x[y] = '\0';

return (pt);
}
