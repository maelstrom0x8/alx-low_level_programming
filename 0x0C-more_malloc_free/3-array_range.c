#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create array
 * Description: A function that creates an array of integers
 * bounded by a minimum and maximum value
 * @min: Minimum
 * @max: Maximum
 * Return: Array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j, size;

	if (min >  max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0, i = min; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
