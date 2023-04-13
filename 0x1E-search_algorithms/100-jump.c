#include <math.h>
#include <stddef.h>


int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int jump = sqrt(size);
    int left = 0, right = 0;

    while (right < (int)size && array[right] < value) {
        left = right;
        right += jump;
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
    }

    right = (right > (int)size - 1) ? (int)size - 1 : right;
    printf("Value found between indexes [%d] and [%d]\n", left, right);
    int i;

    for (i = left; i <= right; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
