#include "main.h"

/**
* _strncpy - copy string
* @dest: string
* @src: string
* @n: var
* Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (x < n && src[x] != '\0')
{
dest[x] = src[x];
x++;
}
x = x;
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
