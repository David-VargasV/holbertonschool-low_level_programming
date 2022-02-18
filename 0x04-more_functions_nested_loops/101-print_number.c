#include "main.h"

/**
* print_number - print integer
* @n: integer
* Return: Always 0.
*/

void print_number(int n)
{
int number = n;

if (n < 0)
{
_putchar('-');
number = -number;
}

if (number > 0)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
