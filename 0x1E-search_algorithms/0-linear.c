#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: point to first element
 * @size: number of arguments
 * @value: value to search for
 * Return: index where value is located, -1 if array is NULL/ value not present
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
