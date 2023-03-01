#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return result;
}
