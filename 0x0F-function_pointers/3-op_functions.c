#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - sum of two numbers
* @a: number one
* @b: number two
* Return: sum of a and b
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - difference of two numbers
* @a: number one
* @b: number two
* Return: difference of a and b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplication of two numbers
* @a: number one
* @b: number two
* Return: multiplication of a and b
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - division of two numbers
* @a: number one
* @b: number two
* Return: divsion of a and b
*/

int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - modulo of two numbers
* @a: number one
* @b: number two
* Return: modulo of a and b
*/

int op_mod(int a, int b)
{
return (a % b);
}
