#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function that prints half of a string, followed by a new line.
 * @str: The string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, half, i;

	len = strlen(str);
	if (len % 2 == 0)
	{
		half = (len / 2) - 1;
	}
	else
	{
		half = ((len - 1) / 2) + 1;
	}

	for (i = half; str[i] != '\0';  ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
