#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entrypoint
 * Description: A function that sums a variable
 * number of integers.
 * @n: Number of integers
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum  += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
