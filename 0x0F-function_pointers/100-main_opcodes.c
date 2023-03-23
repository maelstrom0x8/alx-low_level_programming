#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: A program that prints the opcodes of
 * its own main function
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: On success returns 0
 */

int main(int argc, char *argv[])
{
	int nbytes, i;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	addr = (char *)main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx%c", addr[i], i < nbytes - 1 ? ' ' : '\n');
	}
	return (0);
}
