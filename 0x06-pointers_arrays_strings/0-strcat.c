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
	int dest_end;
	int ds;

	for (dest_end = 0; dest[dest_end] != '\0'; ++dest_end)
		;

	for (ds = 0, dest_end; src[ds] != '\0'; ++ds, ++dest_end)
	{
		dest[dest_end] = src[ds];
	}

	dest[++dest_end] = '\0';

	return (dest);
}
