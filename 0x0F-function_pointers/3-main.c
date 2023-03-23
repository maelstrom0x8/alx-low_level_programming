#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * main - entrypoint
 * Description: Entrypoint for the program
 * @argc: Number of command-line arguments
 * @argv: Array of all arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	char *opcodes = "+-*/%";
	int (*f_ptr)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2];

	if (memchr(opcodes, op[0], 5) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f_ptr = get_op_func(op);

	result = (*f_ptr)(a, b);
	printf("%d\n", result);

	return (0);
}
