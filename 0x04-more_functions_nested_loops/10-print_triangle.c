#include "main.h"
/**
* print_triangle - print trianle
* @size: size of the triangle
* Return: 0
*/
void print_triangle(int size)
{
int x;
int y;

if (size > 0)
{
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= size - x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
