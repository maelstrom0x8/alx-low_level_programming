#include <unistd.h>

#include "main.h"

/**
 * _putchar - Writes a character
 * @c: Character
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - islower
 * @c: input
 *
 * Description: checks if a letter is lower
 * Return: Always 1 is input is lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - isalpha
 * @c: input
 *
 * Description: checks if a letter is alpha
 * Return: Always 1 is input is alpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - Returns the absolute value of inputr
 * @n: value
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	return (n < 0 ? (n * -1) : n);
}

/**
 * _isupper - Checks if the character is uppercase
 * @c: character
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
