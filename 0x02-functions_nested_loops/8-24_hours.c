#include "main.h"

void print_time(int hours, int min);

/**
 * jack_bauer -  function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 *
 * Description: This is a function that prints time.
 * Return: void
 */
void jack_bauer(void)
{
int i, j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
print_time(i, j);
}
}

}



/**
 * print_time - function prints time format
 * @hours: time hours
 * @min: time minutes
 *
 * Description: util function.
 * Returns: void
*/
void print_time(int hours, int min)
{
if (hours < 10)
{
_putchar('0');
_putchar('0' + hours);
}
else
{
_putchar('0' + hours / 10);
_putchar('0' + hours % 10);
}

_putchar(':');

if (min < 10)
{
_putchar('0');
_putchar('0' + min);
}
else
{
_putchar('0' + min / 10);
_putchar('0' + min % 10);
}
_putchar('\n');
}
