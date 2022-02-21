#include "main.h"

/**
* swap_int - value
* @a: var
* @b: var
* Return: 0
*/

void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
