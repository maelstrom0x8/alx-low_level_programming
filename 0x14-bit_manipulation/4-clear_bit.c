#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in an unsigned long integer
 * @n: A pointer to the unsigned long integer to modify
 * @index: The index of the bit to clear, where 0 is the least significant bit
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
