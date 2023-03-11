
#include <stdio.h>

/**
 * main - Entrypoint
 * Description: A program that prints the number of
 * arguments passed into it followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
