#include "main.h"


/**
 * wildcmp - A function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * Description: Compare strings
 * @s1: First string
 * @s2:  Second string
 * Return:  int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
