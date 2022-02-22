#include "main.h"

/**
* print_array - print string
* @a: var
* @n: var
* Return: 0
*/

void print_array(int *a, int n)
{
int arr;

for (arr = 0; arr < n; arr++)
{
printf("%d", a[arr]);
if (arr < n - 1)
{
printf(", ");
}
}
printf("\n");
}
