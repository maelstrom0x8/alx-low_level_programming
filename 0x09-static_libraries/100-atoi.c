#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 * Return: char
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			break;
		}

		num = num * 10 + (*s - '0');
		s++;
	}

	return (sign * num);
}
