#include <stdio.h>

/**
 * main - Entry point to program
 * Description: A program that finds and prints the
 * largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0
 */

int  main(void)
{

	long number, factor, i;

	number = 612852475143;
	factor = 1;

	for (i = 2; i <= number / i; i++)
	{
		while (number % i == 0)
		{
			factor = i;
			number /= i;
		}
	}
	if (number > 1)
	{
		factor = number;
	}
	printf("%ld\n", factor);


	return (0);
}
