#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * Description: This function takes a name and print
 * function as parameters and calls the function
 * against the name
 * @name: Name to print
 * @f: Function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
