#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string input
 *
 * Return: char*
 */

char *leet(char *str)
{
	int i, j;

	char *result = str;

	char *s1 = "AaEeOoTtLl";
	char *s2 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}
	return (result);
}
