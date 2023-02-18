#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k, code;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
code = i * 100 + j * 10 + k;
if (code == 123 || code == 132 || code == 213 ||
code == 231 || code == 312 || code == 321)
{
continue;
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
