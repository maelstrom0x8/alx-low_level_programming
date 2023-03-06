#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: stop set
 * Return: returns a pointer to the first character
 * in string that is a member of the set stopset
 */
char *_strpbrk(char *s, char *accept)
{
char *res;
char *ax;

for (res = s; *res != '\0'; ++res)
{
char beg = *res;

for (ax = accept; *ax != '\0'; ++ax)
{
if (*ax == beg)
{
return (res);
}
}
}

return (NULL);
}
