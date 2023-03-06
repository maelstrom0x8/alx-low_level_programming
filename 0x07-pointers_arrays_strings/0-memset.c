#include "main.h"

/**
 * _memset - This function copies the value of b (converted to
 * an unsigned char) into each of the first size bytes of the
 * object beginning at s. It returns the value of s.
 * Description:  Fills memory with a constant byte
 * @s: the block of memory
 * @b: value to copy
 * @n: size of bytes to copy
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *res;
	unsigned int i;

	res = s;
	i = 0;

	while (i < n)
	{
		*res = b;
		++res;
		++i;
	}

	return (res);
}

