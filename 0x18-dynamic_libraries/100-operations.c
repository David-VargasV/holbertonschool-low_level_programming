#include <stdio.h>
#include <stdlib.h>

/**
 * add - sum
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - substract
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - multiplicate
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * _div - divide
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */

int _div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
}
return (a / b);
}

/**
 * mod - module
 * @a: argument for the function
 * @b: argument for the function
 *
 * Return: 0.
 */
int mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
