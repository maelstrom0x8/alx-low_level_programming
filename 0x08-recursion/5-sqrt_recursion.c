#include "main.h"

/**
 * worker - Helper function to compute the square root
 * Description: Recursive helper function to find the
 * square root of a number.
 * @n: Original input
 * @i: divisor
 * Return: int
 */

int worker(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
		return (worker(n, i + 1));
}




/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * Description: Computes the square root with recursion
 * @n: Number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (worker(n, 0));
}
