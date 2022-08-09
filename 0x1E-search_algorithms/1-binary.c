#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: Is a pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 *
 * Return: Value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, x;

	if (array == NULL || size == 0)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (x = start; x < end; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		mid = ((start + end) / 2);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = (mid - 1);
		else
			start = mid + 1;
	}
	return (-1);
}
