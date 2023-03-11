#include "main.h"

/**
 * _strncpy -  A function that copies a string
 * @dest: pointer to resulting string
 * @src: string source
 * @n: size of string to copy
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
