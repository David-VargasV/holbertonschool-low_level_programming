#include "main.h"

/**
* _islower - lowercase check
* @c: check
* Return: 0
*/

int _islower(int c)
{
char check;
for (check = 'a'; check <= 'z'; check++)
{
if (c == check)
return (1);
}
return (0);
}
