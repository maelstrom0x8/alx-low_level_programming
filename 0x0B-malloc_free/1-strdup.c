#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer
 * Description: A function that returns a pointer
 * to newly allocated space in memory, which contains
 * a copy of the given string as a parameter
 * @str: Copied string
 * Return: String
 */

char *_strdup(char *str)
{
	size_t len;
	char *s_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) +  1;
	s_str = malloc(len);
	if (s_str == NULL)
	{
		return (NULL);
	}

	memcpy(s_str, str, len);

	return (s_str);

}
