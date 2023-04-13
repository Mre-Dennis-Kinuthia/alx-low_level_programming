#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using l s
 *
 * @array: Pointer to the first element of array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	/* Check if array pointer is NULL */
	if (array == NULL)
		return (-1);

	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
