#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print number
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%zu is positive\n", n);
if (n == 0)
printf("%zu is zero\n", n);
if (n < 0)
printf("%zu is negative\n", n);
return (0);
}
