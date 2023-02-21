#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets, in lowercase
 * 10 times, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, j;
char m[27] = "abcdefghijklmnopqrstuvwxyz\n";
for (j = 0; j < 10; ++j)
{
for (i = 0; i < 27; ++i)
{
_putchar(m[i]);
}
}
}
