#include "main.h"

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
