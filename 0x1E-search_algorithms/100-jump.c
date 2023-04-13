#include <stdio.h>
#include <math.h>

/**
* jump_search - Searches for a value in a sorted array of integers
*               using the Jump search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index where value is located or -1 if value is not present or
*         if array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
size_t jump, left, right, i;

if (array == NULL || size == 0)
return (-1);

jump = sqrt(size);
left = 0;
right = 0;

while (right < size && array[right] < value)
{
printf("Value checked array[%lu] = [%d]\n", right, array[right]);
left = right;
right += jump;
}

printf("Value found between indexes [%lu] and [%lu]\n", left, right);

right = right < size ? right : size - 1;

for (i = left; i <= right && array[i] <= value; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
