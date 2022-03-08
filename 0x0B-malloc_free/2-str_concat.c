#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string
* @s2: string
* Return: string or NULL
*/

char *str_concat(char *s1, char *s2)
{
char *strCon;
int x;
int y;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

x = 0;
y = 0;

while (s1[x] != '\0')
x++;
while (s2[y] != '\0')
y++;

strCon = malloc(sizeof(char) * (x + y + 1));
if (strCon == NULL)
return (NULL);

x = 0;
y = 0;
while (s1[x] != '\0')
{
strCon[x] = s1[x];
x++;
}
while (s2[y] != '\0')
{
strCon[x] = s2[y];
x++, y++;
}
strCon[x] = '\0';
return (strCon);
}
