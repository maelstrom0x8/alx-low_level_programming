#include <stdlib.h>
#include "main.h"
/**
 * create_array - A function that creates an array
 * Description: A function that creates an array
 * and initializes all elements with a specific
 * character
 * @size: Size of the array
 * @c: Character
 * Return: Initialized array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size *  sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
