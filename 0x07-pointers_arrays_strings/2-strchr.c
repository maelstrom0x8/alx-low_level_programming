#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: A null-terminated string
 * @c: The character to find
 *
 * Return:  The return value is a pointer to the located
 * character, or a null pointer if no match was found.
 */
char *_strchr(char *s, char c)
{
char *res = s;
int i;

for (i = 0; *s != '\0'; ++i)
{
res = s;
if (*res == c)
return (res);
++s;
}

return (NULL);
}
