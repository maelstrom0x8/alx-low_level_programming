#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: pointer to resulting string
 * @src: string source
 * @n: number of characters to concatenate
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *result;

	result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	i = 0;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		++i;
		src++;
		dest++;
	}

	return (result);
}
