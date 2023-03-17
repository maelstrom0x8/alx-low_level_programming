#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - String length
 * Description: Returns the length of a string
 * @str: String
 * Return: int
 */

int _strlen(char *str)
{	int len;

	if (str == NULL)
	{
		return (0);
	}
	len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return (len);
}

/**
 * string_nconcat - String concatenation
 * Description: A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of characters to copy
 * Return: Concatenated string or NULL at failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2, total, lim;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	lim = (n >= l2) ? l2 : n;
	total = l1 + lim;
	str = malloc(total + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; ++i)
	{
		str[i] = s1[i];
	}
	for (j = l1, i = 0; i < lim; ++j, ++i)
	{
		str[j] = s2[i];
	}
	str[total + 1] = '\0';
	return (str);

}
