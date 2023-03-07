#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * Description: Compute the factorial of a number with recursion.
 * @n: Number
 *
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));

}
