#include "main.h"
/**
* print_square - print line diagonal
* @size: size of the square
* Return: 0
*/
void print_square(int size)
{
int x;
int y;

if (size <= 0)
_putchar('\n');

for (x = 0; x < size; x++)

{
for (y = 0; y < size; y++)
_putchar('#');
_putchar('\n');
}
}
