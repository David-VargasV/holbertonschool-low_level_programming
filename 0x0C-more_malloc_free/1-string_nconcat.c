#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - create array
* @s1: string
* @s2: string
* @n: var
* Return: pointer or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strCon;
int x;
unsigned int y;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

x = 0;
while (s1[x] != '\0')
x++;

strCon = malloc(sizeof(char) * (x + n + 1));
if (strCon == NULL)
return (NULL);

x = y = 0;
while (s1[x] != '\0')
{
strCon[x] = s1[x];
x++;
}
while (y < n && s2[y] != '\0')
{
strCon[x] = s2[y];
x++, y++;
}
strCon[x] = '\0';
return (strCon);
}
