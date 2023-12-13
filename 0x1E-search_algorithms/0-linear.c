#include <stdio.h>

#include "search_algos.h"

/**
 * linear_search - Linear Search implementation
 * @array: Array of integers
 * @size: Length of the array
 * @value: Value to search for in the array
 * Return: The position in the array that is equal to the searched value.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if (array == NULL)
        return (-1);

    for (idx = 0; idx < size; ++idx)
    {
        printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
            return ((int)idx);
    }

    return (-1);
}
