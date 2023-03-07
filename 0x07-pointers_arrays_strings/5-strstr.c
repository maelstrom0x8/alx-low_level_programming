#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: String to be searched
 * @needle: Substring
 *
 * Return: A pointer into the string haystack that is the
 * first character of the substring, or a null pointer if no
 * match was found.
 */

char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *start  = haystack;
		char *point  = needle;

		while (*point != '\0' && *start == *point)
		{
			start++;
			point++;
		}

		if (*point == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}

