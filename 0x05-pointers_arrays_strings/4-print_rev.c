#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

