#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: size
* @height: size
* Return: Pointer
*/

int **alloc_grid(int width, int height)
{
int x;
int y;
int **A;

if (width <= 0 || height <= 0)
return (NULL);

A = (int **)malloc(sizeof(int *) * height);
if (A == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
A[x] = (int *)malloc(sizeof(int) * width);
if (A[x] == NULL)
return (NULL);

for (y = 0; y < width; y++)
{
A[x][y] = 0;
}
}
return (A);
}
