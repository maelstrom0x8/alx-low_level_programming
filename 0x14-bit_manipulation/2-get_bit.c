#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index in an unsigned long integer
 * @n: The unsigned long integer to examine
 * @index: The index of the bit to retrieve, where 0 is the least significant bit
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}

