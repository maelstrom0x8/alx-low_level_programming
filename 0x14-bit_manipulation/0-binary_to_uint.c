#include <stdio.h>
#include <stdlib.h>
#include "main.h"



/**
 * _strlen - Returns the length of a string
 * @str: The string
 *
 * Return: Length of the string.
 */

size_t _strlen(const char *str)
{
	size_t len;

	len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


/**
 * ipow - Computes the power of an integer to a non-negative
 * integer exponent
 * @a: The base integer
 * @n: The non-negative integer exponent
 *
 * Return: The result of raising @a to the power of @n
 */


int ipow(int a, int n)
{
	int ans, last_bit;

	ans = 1;
	while (n > 0)
	{
		last_bit = (n & 1);
		if (last_bit)
		{
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;
	}

	return (ans);
}


/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: The binary string to convert
 *
 * Return: The unsigned integer represented by @b, or 0 if @b contains
 * any characters other than '0' or '1'
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, sum;
	unsigned int i, k;

	n = _strlen(b);
	k = n - 1;
	i = 0;
	sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (i < n)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				sum += ipow(2, k);
			}
		}
		else
		{
		return (0);
		}

		k--;
		i++;
	}

	return (sum);
}
