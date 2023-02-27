#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - A function that reverses a string.
 * @str: The string
 *
 * Return: void.
 */
void rev_string(char *str)
{
	int len, i, j;

	char temp;

	len = strlen(str);

	for (i = 0, j = len - 1; i < j; ++i, --j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

