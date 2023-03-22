#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array.
 * Descripition: Executes callback on the array
 * @array: Input array
 * @size: Size of input array
 * @action: Callback to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		(*action)(array[i]);
	}
}
