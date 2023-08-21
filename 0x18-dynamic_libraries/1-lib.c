#include "main.h"

/**
 * _isdigit - Checks if input is digit
 * @c: input
 * Return: 1 if true or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strlen - Returns the length of a string
 * @str: The string
 *
 * Return: Length of the string.
 */

int _strlen(char *str)
{
	int len;

	len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _puts - Prints the length of a strin g followed by a newline
 * @s: The string
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	++s;
	_puts(s);
}

/**
 * _strcpy -  function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination
 * @src: The source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

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
