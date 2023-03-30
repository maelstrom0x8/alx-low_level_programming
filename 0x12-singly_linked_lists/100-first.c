#include <stdio.h>

/**
 * init - Init function
 * Description: A function that runs before main
 */

void __attribute__((constructor)) init()
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n ");
}
