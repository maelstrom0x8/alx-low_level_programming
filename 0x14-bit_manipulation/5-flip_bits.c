#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Determines the number of bits that need to be flipped to convert
 * one unsigned long integer to another
 * @n: The first unsigned long integer
 * @m: The second unsigned long integer
 *
 * Return: The number of bits that need to be flipped in @n to convert it to @m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}

