#include "main.h"

/**
* _strcat - concatenate
* @dest: string
* @src: string
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
int d = 0;
int s = 0;

while (dest[d] != 0)
{
d++;
}
while (src[s] != 0)
{
dest[d] = src[s];
d++;
s++;
}
return (dest);
}
