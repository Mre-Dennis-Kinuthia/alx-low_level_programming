#include "search_algos.h"

/**
 * linear_search - looks for value in sorted array of integers by Linear Search
 * @array: array containing arguments passed to the program
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
