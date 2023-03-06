#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: copy destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res;
	unsigned int i;

	res = dest;

	for (i = 0; i < n; ++i)
	{
		*dest = *src;
		++dest;
		++src;
	}

	return (res);
}

