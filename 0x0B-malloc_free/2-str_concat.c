#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * Description: A function that concatenates two strings
 * returning the concatenation
 * @s1: First string
 * @s2: Second string
 * Return: String
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1;
	unsigned int l2;
	unsigned int s;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = strlen(s1);
	l2 = strlen(s2);
	s = l1 + l2 + 1;

	res = malloc(s);
	if (res == NULL)
	{
		return (NULL);
	}

	memcpy(res, s1, l1);
	memcpy(res + l1, s2, l2);

	res[s - 1] = '\0';

	return (res);

}
