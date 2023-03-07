#include "main.h"


int _strlen_recursion(char *s)
{
	if(!(*s))
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));

}
