#include "main.h"
#include <string.h>

/**
 * _strcpy -  function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination
 * @src: The source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
