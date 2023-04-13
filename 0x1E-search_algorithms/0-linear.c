#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using ls
 *
 * @array: Pointer to the first element of the array to search
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

	for (size_t i = 0; i < size; i++)
	{
		/* Print the value of the current element being checked */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Check if the current element matches the value we're searching for */
		if (array[i] == value)
			return (i);
	}

	/* If the function reaches this point, the value was not found in the array */
	return (-1);
}
