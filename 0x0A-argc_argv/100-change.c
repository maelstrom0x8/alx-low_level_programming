#include <stdio.h>
#include <stdlib.h>


/**
 * helper_fn - Helper function
 * Description: Runs calculation
 * @cents: Cents
 * @coins: Coins
 */

void helper_fn(int *cents, int *coins)
{
	while (*cents >= 25)
	{
		*coins += 1;
		*cents -= 25;
	}

	while (*cents >= 10)
	{
		*coins += 1;
		*cents -= 10;
	}

	while (*cents >= 5)
	{
		*coins += 1;
		*cents -= 5;
	}

	while (*cents >= 2)
	{
		*coins += 1;
		*cents -= 2;
	}
	while (*cents >= 1)
	{
		*coins += 1;
		*cents -= 1;
	}

}

/**
 * main - Entrypoint
 * Description: A  program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	helper_fn(&cents, &coins);
	printf("%d\n", coins);
	return (0);
}

