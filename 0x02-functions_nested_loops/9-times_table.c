#include "main.h"
/**
 * times_table - Print times table
 *
 * Description: printing times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; ++i)
{
for (j = 0; j < 10; ++j)
{
int result = i * j;
int div = result / 10;
int mod = result % 10;
if (j ==  9)
{
if (div > 0)
{
_putchar('0' + div);
}
_putchar('0' + mod);
}
else
{
if (result >= 10)
{
_putchar('0' + div);
}
_putchar('0' + mod);
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
