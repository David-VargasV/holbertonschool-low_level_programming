#include "main.h"

/**
* print_rev - print value in reverse
* @s: char
* Return: 0
*/

void print_rev(char *s)
{
int x = 0;

while (s[x] != 0)
{
x++;
}
while (x > 0)
{
x--;
_putchar(s[x]);
}
_putchar('\n');
}
