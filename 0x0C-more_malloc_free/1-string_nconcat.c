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
	unsigned int i, j, l1, l2;
	char *str;
	
	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}
	l2 = 0;
	while (s2[l2] != '\0' && l2 < n)
	{
		l2++;
	}
	str = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		str[l1 + j] = s2[j];
	}
	str[l1 + l2] = '\0';
	return (str);
}
