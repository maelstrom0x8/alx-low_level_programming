#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Memory allocation
 * Description: A function that allocates memory for
 * an array using malloc
 * @nmeb: Number of elements
 * @size: Size in bytes of each elements
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *ptr;
	unsigned int i, total;

	if (size == 0 || nmeb == 0)
	{
		return (NULL);
	}
	total = size * nmeb;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	unsigned char *xps = (unsigned char *)ptr;

	for (i = 0; i < total; i++)
	{
		xps[i] = 0;
	}
	return (ptr);
}
