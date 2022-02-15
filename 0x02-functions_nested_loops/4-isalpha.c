#include "main.h"

/**
* _isalpha - check the alphabetic character
* @c: check
* Return: 0
*/

int _isalpha(int c)
{
char check;
char checkM;
for (check = 'a'; check <= 'z'; check++)
{
if (c == check)
return (1);
}
for (checkM = 'A'; checkM <= 'Z'; checkM++)
{
if (c == checkM)
return (1);
}
return (0);
}
