#include "main.h"

/**
 * str_cmp - A function that compares two strings.
 * @s1: first
 * @s2: second
 *
 * Return: int
 */

int str_cmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-(*s2));
	}
	else
	{
		return (*s1);
	}
}



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
	char *start;
	char *point;

	start = haystack;
	point = needle;

	if(*needle == '\0')
	{
		return (haystack);
	}

	while (*start != '\0')
	{
		if (str_cmp(start, point) == 0)
			return (start);
		++start;
	}

	return ('\0');
}

