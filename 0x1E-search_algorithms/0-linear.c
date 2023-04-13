#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
  /* Check if array pointer is NULL */
    if (array == NULL)
        return -1;

    /* Iterate over the array using a for loop */
    for(size_t i = 0; i < size; i++)
    {
      /* Print the value of the current element being checked */
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        
        /* Check if the current element matches the value we're searching for */
        if (array[i] == value)
            return i;
    }

    /* If the function reaches this point, the value was not found in the array */
    return -1;
}
