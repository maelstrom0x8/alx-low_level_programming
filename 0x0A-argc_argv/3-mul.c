#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entrypoint
 * Description: A program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Success 0. Error 1
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}


	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
