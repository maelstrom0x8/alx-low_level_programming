#include "main.h"
/**
 * print_to_98 - Prints the numbers from n to 98
 * followed by a new line
 * @n: beginning
 *
 * Description: Prints the numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
int i, j;
if (n == 98)
printf("%d\n", n);
if (n > 98)
{
for (i = n; i >= 98; --i)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
if (n < 98)
{
for (j = n; j <= 98; ++j)
{
if (j != 98)
{
printf("%d, ", j);
}
else
{
printf("%d\n", j);
}
}
}
}
