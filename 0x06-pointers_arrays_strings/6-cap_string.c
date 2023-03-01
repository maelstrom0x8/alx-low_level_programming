#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: string input
 *
 * Return: string
 */

char *cap_string(char *str)
{
	char *result;
	int pred, i;

	result = str;
	pred = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (pred && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		pred = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			pred = 1;
		}
	}
	return (result);
}
