#include "main.h"

/**
* flip_bits - function that returns the number of bits you would
* need to flip to get from one number to another.
*
* @n: unsigned long int 1
* @m: unsigned long int 2
* Return: value
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned long int y = 0;

while (x > 0)
{
y += (x & 1);
x >>= 1;
}
return (y);
}
