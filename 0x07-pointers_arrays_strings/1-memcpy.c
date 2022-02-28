#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer
* @src: pointer
* @n: constant
* Return: s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
