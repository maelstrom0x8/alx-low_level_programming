#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description - Positive anything is better than negative nothing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

n == 0 ? printf("%d is zero\n", n)
: (n > 1 ? printf("%d is positive\n", n)
: printf("%d is negative\n", n));

return (0);
}
