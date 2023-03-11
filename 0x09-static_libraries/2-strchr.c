#include "main.h"


/**
 * _strchr - A function that locates a character in a string.
 * @s: A null-terminated string
 * @c: The character to find
 *
 * Return:  The return value is a pointer to the located
 * character, or a null pointer if no match was found.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *res = s;

	for (i = 0; *s != '\0'; ++i)
	{
		res = s;
		if (*res == c)
			return (res);
		++s;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');

}

