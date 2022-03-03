#include "main.h"

int other_prime_number(int n, int p);

/**
* is_prime_number - prime number
* @n: value
* Return: 0
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (other_prime_number(n, n - 1));
}

/**
* other_prime_number - prime number
* @n: value
* @p: int
* Return: 0
*/

int other_prime_number(int n, int p)
{
if (p == 1)
return (1);
if (n % p == 0 && p > 0)
return (0);
return (other_prime_number(n, p - 1));
}
