#include "main.h"

/**
 * _strlen_recursion - A function that returns the length
 * of a string.
 * Description: Calculate the length of the string
 * recursively.
 * @s: String
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));

}
