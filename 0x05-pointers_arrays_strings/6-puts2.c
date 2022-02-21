#include "main.h"

/**
* puts2 - print character
* @str: char
* Return: 0
*/

void puts2(char *str)
{
int x = 0;
int y = 0;

while (str[x])
y++;
for (x = 0; x < y; x += 2)

_putchar(str[x]);

_putchar('\n');
}
