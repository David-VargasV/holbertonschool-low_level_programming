#include "main.h"

/**
* string_toupper - changes lowercase to uppercase
* @str: string
* Return: 0
*/

char *string_toupper(char *str)
{
int x = 0;

while (str[x])
{
if (str[x] >= 'a' && str[x] <= 'z')
str[x] -= 32;

x++;
}
return (str);
}
