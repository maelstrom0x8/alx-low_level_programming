#include "main.h"
/**
* print_sign - Prints the sign of a number
* @number - the number
* Return: 0, 1, -1 when number is zero, positive or negative respectively
*/
int print_sign(int number)
{

if (number > 0)
{
_putchar('+');
return (1);
}
if (number < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);

}
