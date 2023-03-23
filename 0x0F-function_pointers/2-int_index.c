#include <stddef.h>
#include "function_pointers.h"


/**
 * int_index - A function that searches for an integer
 * Description: A function that searches for the index
 * in the array that matches the cmp criteria
 * @array: Input array
 * @size: Size of array
 * @cmp: Comparing function
 * Return: Index in array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || !array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
