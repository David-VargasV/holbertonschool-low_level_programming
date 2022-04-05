#include "main.h"

/**
* get_bit - function that returns the value of a bit
* at a given index.
*
* @index: is the index, starting from 0 of the bit you want to get
* @n: bit
* Return: the value of the bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
else
{
return (n >> index & 1);
}
}
