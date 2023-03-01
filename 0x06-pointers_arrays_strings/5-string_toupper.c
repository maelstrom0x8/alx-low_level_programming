#include "main.h"

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string to uppercase.
 * @str: string input
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}