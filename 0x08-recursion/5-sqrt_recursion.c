#include "main.h"

int new_sqrt_recursion(int n, int x);

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: int
* Return: value
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (new_sqrt_recursion(n, 0));
}

/**
* new_sqrt_recursion - bonus prototype
* @n: int
* @x: var
* Return: value
*/

int new_sqrt_recursion(int n, int x)
{
if (x * x > n)
return (-1);
if (x * x == n)
return (x);
return (new_sqrt_recursion(n, x + 1));
}
