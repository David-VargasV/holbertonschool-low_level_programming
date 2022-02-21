#include "main.h"

/**
* puts2 - print character
* @str: char
* Return: 0
*/

void puts2(char *str)
{
int x;

for (x = 0; x < str[x]; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
