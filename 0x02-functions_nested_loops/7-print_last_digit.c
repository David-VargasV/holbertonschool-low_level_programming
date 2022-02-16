#include "main.h"

/**
* print_last_digit - check the alphabetic character
* @n: check
* Return: 0
*/

int print_last_digit(int n)
{
int digit;
digit = n % 10;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(digit + '0');
return (digit);
}
