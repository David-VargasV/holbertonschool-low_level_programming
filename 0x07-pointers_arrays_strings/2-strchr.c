#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer
* @c: contant
* Return: NULL
*/

char *_strchr(char *s, char c)
{
int x = 0;

while (s[x] != '\0')
{
if (s[x] == c)
return (s + x);
x++;
}
return ('\0');
}
