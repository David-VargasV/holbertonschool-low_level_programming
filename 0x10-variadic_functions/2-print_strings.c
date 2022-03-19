#include "variadic_functions.h"

/**
* print_strings - prints strings
* @separator: is the string to be printed
* @n: is the number of strings
* Return: value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int x;
char *str;

va_start(nums, n);
for (x = 0; x < n; x++)
{
str = va_arg(nums, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (x < (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
