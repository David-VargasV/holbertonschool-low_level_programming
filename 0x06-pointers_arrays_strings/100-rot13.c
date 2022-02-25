#include "main.h"

/**
* rot13 - encode a string using rot13
* @str: string
* Return: 0
*/

char *rot13(char *str)
{
int x = 0;
int y;
char i[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char o[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[x] != '\0')
{
y = 0;
while (i[y] != '\0')
{
if (str[x] == i[y])
{
str[x] = o[y];
break;
}
y++;
}
x++;
}
return (str);
}
