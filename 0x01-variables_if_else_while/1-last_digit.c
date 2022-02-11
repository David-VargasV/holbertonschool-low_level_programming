#include <stdlib.h>
#include <time.h>
/**
* main - print number
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
printf("%d Last digit of n and is greater than 5\n")
if ((n % 10) == 0)
printf("%d Last digit of n and is 0\n")
if ((n % 10) < 6 && ((n % 10) != 0)
printf("%d Last digit of and is less than 6 and not 0\n")
return (0);
}
