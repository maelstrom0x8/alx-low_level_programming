#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entrypoint
 * Description: A program that adds positive numbers.
 * @argc: NUmber of arguments
 * @argv: Array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}

