#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to make
 * change for a given amount of money.
 * @argc: Argument count.
 * @argv: Argument vector (string of array).
 *
 * Return: 0 for Success or 1 for Error.
 */
int main(int argc, char *argv[])
{
	int num;
	int i;
	int change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			change++;
			num -= coins[i];
		}
	}

	printf("%d\n", change);
	return (0);
}
