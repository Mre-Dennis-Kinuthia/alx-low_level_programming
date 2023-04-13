#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
    int jump, left, right, i;

    if (array == NULL || size == 0)
        return (-1);

    jump = (int)sqrt(size);
    for (left = 0, right = jump; right < (int)size && array[right] < value;
         left = right, right += jump)
    {
        printf("Value checked array[%d] = [%d]; ", left, array[left]);
    }
    printf("Value found between indexes [%d] and [%d]\n", left, right);
    for (i = left; i < (int)size && i <= right; i++)
    {
        printf("Value checked array[%d] = [%d]%s", i, array[i],
               i == right ? "\n" : "; ");
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
