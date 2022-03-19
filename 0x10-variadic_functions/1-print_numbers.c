#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @separator: is the string to be printed between numbers
* @n: is the number of integers
* Return: value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list number;
unsigned int x;

va_start(number, n);

for (x = 0; x < n; x++)
{
printf("%d", va_arg(number, int));

if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(number);
}
