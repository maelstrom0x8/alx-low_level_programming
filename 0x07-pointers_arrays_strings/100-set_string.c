#include "main.h"

/**
 * set_string - A function that sets the value of a
 * pointer to a char.
 * Description: Sets the value of a pointer to a char
 * @s: pointer to char
 * @to: value to set to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

