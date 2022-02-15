#include "main.h"

/**
* _isalpha - check the alphabetic character
* @c: check
* Return: 0
*/

int _isalpha(int c)
{
char check;
for (check = 'a'; check <= 'z'; check++)
for (check = 'A'; check <= 'Z'; check++)
{
if (c == check)
return (1);
}
return (0);
}
