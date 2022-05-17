#include <stdio.h>
#include "main.h"

/**
 * _atoi - Function that converts string to integer.
 *
 * @s: Pointer to string for transformation.
 *
 * Description: Takes each letter of a string and change it to its
 * ascii number value.
 *
 * Return: The integer equivalent.
 */

int _atoi(char *s)
{
	int i, res = 0;

	for (i = 0 ; s[i] != '\0' ; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}
