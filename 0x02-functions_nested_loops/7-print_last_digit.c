#include "main.h"
/**
 * print_last_digit - Prints last digit of number
 * @n: value
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
if (n < 0)
{
_putchar((n * -1) % 10 + '0');
return ((n * -1) % 10);
}
_putchar(n % 10 + '0');
return (n % 10);
}
