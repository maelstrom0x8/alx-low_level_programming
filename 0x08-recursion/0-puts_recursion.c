#include "main.h"

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * Description: Prints a string with a recursive algorithm.
 * @s: String
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	++s;
	_puts_recursion(s);
}
