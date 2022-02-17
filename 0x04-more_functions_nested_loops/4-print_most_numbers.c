#include "main.h"
/**
* print_most_numbers - print numbers not 2 and 4
* Return: 0
*/
void print_most_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
if (num != '2' && num != '4')
_putchar (num);
}
_putchar ('\n');
}
