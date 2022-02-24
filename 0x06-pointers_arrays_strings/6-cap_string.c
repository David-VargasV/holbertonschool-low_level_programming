#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: string
* Return: 0
*/

char *cap_string(char *str)
{
int c = 0;
int s;

char x[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

while (str[c] != '\0')
{
if (c == 0 && str[c] >= 'a' && str[c] <= 'z')
{
str[c] = str[c] - 32;
}
s = 0;
while (x[s] != '\0')
{
if (x[s] == str[c] && (str[c + 1] >= 'a' && str[c + 1] <= 'z'))
{
str[c + 1] = str[c + 1] - 32;
}
s++;
}
c++;
}
return (str);
}
