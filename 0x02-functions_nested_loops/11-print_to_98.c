#include "main.h"

/**
* print_to_98 - print up to 98
* @n: var
* Return: 0
*/

void print_to_98(int n)
{
int num = 98;
while (n != 98)
{
_putchar(n);
_putchar(',');
_putchar(' ');
if (n > 98)
n--;
else
n++;
}
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
_putchar('\n');
}
