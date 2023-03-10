#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Change
 * @argc: No of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, coins, cents, num_denom;
	int denominations[] = {25, 10, 5, 2, 1};
	/* Coin Denominations available */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
		/* Check for correct no. of arguments */
	}

	cents = atoi(argv[1]);
	/* Converts argument to Int */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
		/* Check for -ve input */
	}
	coins = 0;
	num_denom = sizeof(denominations) / sizeof(denominations[0]);
	/* Number of denominations */

	for (i = 0; i < num_denom; i++)
	{
		coins += cents / denominations[i];
		/* Add no of coins for current denomination */
		cents %= denominations[i];
		/* What is the remaining denominations */
	}
	printf("%d\n", coins); /* Minimum no of coins */
	return (0);
}
