#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string
* @s2: string
* Return: 0
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
