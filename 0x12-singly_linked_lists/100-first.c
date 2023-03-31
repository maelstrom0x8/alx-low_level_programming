#include <stdio.h>

void __attribute__((constructor)) init();

/**
 * init - Init function
 * Description: A function that runs before main
 */

void init(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
