#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: var
* @n: var
* Return: 0
*/

void reverse_array(int *a, int n)
{

int tmp;
int r;

for (r = 0; r < n / 2; r++)
{
tmp = a[r];
a[r] = a[n - 1 - r];
a[n - 1 - r] = tmp;
}
}
