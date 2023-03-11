#include "main.h"
#include <ctype.h>
/**
 * _isalpha - isalpha
 * @c: input
 *
 * Description: checks if a letter is alpha
 * Return: Always 1 is input is alpha
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}
