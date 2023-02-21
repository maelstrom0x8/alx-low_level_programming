#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Prints last digit of number
 * @n: value
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
if (n == INT_MIN)
{
putchar('8');
return 8;
}
if (n < 0)
{
_putchar((n * -1) % 10 + '0');
return ((n * -1) % 10);
}
_putchar(n % 10 + '0');
return (n % 10);
}
