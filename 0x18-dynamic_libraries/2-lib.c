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
	char *result;

	result = dest;

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
	return (result);
}

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

/**
 * _strcmp - A function that compares two strings.
 * @s1: first
 * @s2: second
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (-1);
	}

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
		if (*s2 == '\n')
			return (0);
		return (-(*s2));
	}
	else
	{
		return (*s1);
	}
}

/**
 * *_memset - This function copies the value of b (converted to
 * an unsigned char) into each of the first size bytes of the
 * object beginning at s. It returns the value of s.
 * Description:  Fills memory with a constant byte
 * @s: the block of memory
 * @b: value to copy
 * @n: size of bytes to copy
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
