#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 * @dest: copy destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *res;
	unsigned int i;

	res = dest;

	for (i = 0; i < n; ++i)
	{
		*dest = *src;
		++dest;
		++src;
	}

	return (res);
}

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

/**
 * _strspn - A function that gets the length of a prefix substring.
 * Description: Gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: stop set
 * Return: returns a pointer to the first character
 * in string that is a member of the set stopset
 */
char *_strpbrk(char *s, char *accept)
{
	char *res;
	char *ax;

	for (res = s; *res != '\0'; ++res)
	{
		char beg = *res;

		for (ax = accept; *ax != '\0'; ++ax)
		{
			if (*ax == beg)
			{
				return (res);
			}
		}
	}

	return (NULL);
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

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *start = haystack;
		char *point = needle;

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
