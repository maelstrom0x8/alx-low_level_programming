#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer
 * @n: The unsigned long integer to print
 *
 * This function prints the binary representation of the input unsigned long
 * integer @n to standard output, with no leading zeros. The most significant
 * bit is printed first, followed by the next most significant bit, and so on.
 * If @n is 0, the function simply prints the character '0'.
 */

void print_binary(unsigned long int n)
{
	int i, flg;

	flg = 0;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			flg = 1;
		}
		else if (flg)
		{
			putchar('0');
		}
	}
	if (!flg)
	{
		putchar('0');
	}
}
