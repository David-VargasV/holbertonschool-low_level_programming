#include "main.h"

/**
* print_to_98 - print up to 98
* @n: var
* Return: 0
*/

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
if (n > 98)
{
printf("%d, ", n);
n--;
}
else if (n == 98)
printf("%d\n", n);
}
