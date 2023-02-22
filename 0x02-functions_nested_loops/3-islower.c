#include "main.h"
#include <ctype.h>
/**
 * _islower - islower
 * @c: input
 *
 * Description: checks if a letter is lower
 * Return: Always 1 is input is lower
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
