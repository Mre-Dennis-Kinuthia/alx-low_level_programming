#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/**
 * linear_search - searches for a value in an array of integers using
 * the linear search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of @value in @array, or -1 if
 * @value is not present in @array.
 */
int linear_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
