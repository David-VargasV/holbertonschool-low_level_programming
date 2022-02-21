#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - value
* @s: char
* Return: 0
*/

int _strlen(char *s)
{
int str = 0;

while (*s++)
str++;

return (str);
}
