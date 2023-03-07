#include "main.h"

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
