#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: NULL
*/

int *array_range(int min, int max)
{
int *pt;
int x;
int t;

if (min > max)
return (NULL);

t = (max - min) + 1;
pt = malloc(sizeof(int) * t);
if (pt == NULL)
return (NULL);

for (x = 0; x < t && min <= max; x++, min++)
*(pt + x) = min;

return (pt);
}
