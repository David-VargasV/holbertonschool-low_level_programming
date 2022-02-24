#include "main.h"

/**
* leet - encode a string
* @str: string
* Return: 0
*/

char *leet(char *str)
{
int x = 0;
int y;

char l[11] = "aAeEoOtTlL";
char n[11] = "4433007711";

while (str[x] != '\0')
{
y = 0;
while (l[y] != '\0')
{
if (str[x] == l[y])
{
str[x] = n[y];
}
y++;
}
x++;
}
return (str);
}
