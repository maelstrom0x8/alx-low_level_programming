#include <stdio.h>

/**
 * main - Entrypoint
 * Description: A program that prints it's name followed
 * by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
