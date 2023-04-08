#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine
 * on which the function is being executed
 *
 * Return: 0 if the machine is big-endian, or 1 if the machine is little-endian
 */

int get_endianness()
{
	int x;
	char *p;

	x = 1;
	p = (char *)&x;

	return (*p == 1);
}
