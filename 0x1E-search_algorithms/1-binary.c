#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	/* Check if array pointer is NULL */
	if (array == NULL)
		return (-1);

	/* Initialize variables for binary search */
	size_t left = 0, right = size - 1;

	/* Perform binary search */
	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
			printf("%d%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
