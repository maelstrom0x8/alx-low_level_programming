#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: array
 * @n: size of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i == n - 1)
		{
			printf("%d\n", *(a + i));
			break;
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
