#include <stdio.h>

typedef unsigned long long int  ull;

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/
int main(void)
{
int i;
ull L1 = 1;
ull L2 = 1;
ull fib = L2;

for (i = 0; i < 99; ++i)
{
printf("%llu\n", fib);
fib = L1 + L2;
L1 = L2;
L2 = fib;
}

return (0);
}
