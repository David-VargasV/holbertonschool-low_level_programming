#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array
* @size: size of the array
* @action: is a pointer to the function
* Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (action != NULL)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
