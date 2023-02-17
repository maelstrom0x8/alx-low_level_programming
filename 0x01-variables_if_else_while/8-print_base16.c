#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

int i;
for (i = '0'; i <= 'z'; ++i)
{
if (i > '9' && i <= '`')
continue;
if (i > 'f')
continue;
putchar(i);
}

putchar('\n');

return (0);
}
