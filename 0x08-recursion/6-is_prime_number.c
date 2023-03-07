#include "main.h"

/**
 * do_prime - Helper function run primality test.
 * @n: The number being checked for primality
 * @i: The current divisor
 * Return: int
 */

int do_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (do_prime(n, i + 1));
	}
}


/**
 * is_prime_number - A function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * Description: Computes primality of a number.
 * @n: Number
 * Return: int
 */

int is_prime_number(int n)
{

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else
	{
		return (do_prime(n, 2));
	}
}
