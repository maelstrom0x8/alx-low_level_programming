#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _realloc - 
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	nptr = NULL;

	if (old_size == new_size)
		return ptr;
	if (ptr == NULL)
	{
		printf("alloc-new\n");
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			return (NULL);
		}
		return (nptr);
	}
	if (new_size == 0)
	{
		printf("freeing\n");
		free(ptr);
		return (NULL);
	}
	printf("allocation...\n");
	nptr = malloc(new_size);
	optr = (char *)ptr;
	for(i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = optr[i];
	}
	free(ptr);
	return (nptr);
}
