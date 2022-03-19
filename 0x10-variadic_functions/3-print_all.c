#include "variadic_functions.h"

/**
* print_all - print all
* types of arguments passed to the function
* @format: is a list of types of arguments
* Return: 0
*/

void print_all(const char * const format, ...)
{
va_list vl;
int n = 0;
int m = 0;
char *s = ", ";
char *str;

va_start(vl, format);

while (format && format[m])
m++;

while (format && format[n])
{
if (n == (m - 1))
{
s = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(vl, int), s);
break;
case 'i':
printf("%d%s", va_arg(vl, int), s);
break;
case 'f':
printf("%f%s", va_arg(vl, double), s);
break;
case 's':
str = va_arg(vl, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, s);
break;
}
n++;
}
printf("\n");
va_end(vl);
}
