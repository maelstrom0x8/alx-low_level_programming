#include "main.h"
/**
 * jack_basuer -  function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 *
 * Description: This is a function that prints time.
 * Return: void
 */
void jack_bauer(void)
{
int hours, min;
for (hours = 0; hours < 24; ++hours)
{
for (min = 0; min < 60; ++min)
{
printf("%02d:%02d\n", hours, min);
}
}
}
