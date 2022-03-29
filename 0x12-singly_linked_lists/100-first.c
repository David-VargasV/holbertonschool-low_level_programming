#include "lists.h"

void print_tortoise(void)__attribute__ ((constructor));

/**
* print_tortoise - that prints before the main function is executed.
*
* Return: value
*/


void print_tortoise(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
