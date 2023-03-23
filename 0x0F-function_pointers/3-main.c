#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/**
 * main - Entrypoint
 * Description: Program that runs basic arithemetic
 * operations
 * @argc: Number of command-line arguments
 * @argv: Array of all arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(a, b);
	printf("%d\n", result);

	return (0);
}
