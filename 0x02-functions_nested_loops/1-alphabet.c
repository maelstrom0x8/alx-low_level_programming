#include "main.h"
/**
 * print_alphabet - Prints the alphabets, in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;
char m[28] = "abcdefghijklmnopqrstuvwxyz\n";
for (i = 0; i < 28; ++i)
{
_putchar(m[i]);
}
}
