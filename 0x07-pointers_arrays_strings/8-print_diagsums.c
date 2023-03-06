#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: A square matrix
 * @size: Size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int l_sum, r_sum;
	int r_step, l_step;
	int SZ;

	r_step = size + 1;
	l_step = size - 1;

	SZ = size * size;
	r_sum = 0;
	l_sum = 0;

	for (i = 0, j = l_step; i < SZ; i += r_step, j += l_step)
	{
		r_sum += *(a + i);
		l_sum += *(a + j);
	}

	printf("%d, %d\n", r_sum, l_sum);
}

