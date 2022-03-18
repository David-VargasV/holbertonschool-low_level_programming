#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
* @n: integer
* Return: 0 or value
*/

int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
unsigned int x;
unsigned int add = 0;

if (n == 0)
return (0);

va_start(numbers, n);

for (x = 0; x < n; x++)
add += va_arg(numbers, int);

va_end(numbers);

return (add);
}
