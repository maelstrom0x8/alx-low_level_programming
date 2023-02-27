#include "main.h"

/**
 * swap_int - Swap the values of integers
 * @a: first
 * @b: second
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

