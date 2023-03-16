#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Memory allocation
 * Descriptiom: A function that allocates memory
 * using malloc
 * @b: Size of block to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
