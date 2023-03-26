#include <stdio.h>
#include "main.h"

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int j = 1, k = 2, j1, j2, k1, k2;

	int cnt;

	printf("%lu", j);

	for (cnt = 1; cnt <= 91; cnt++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (cnt = 92; cnt < 99; ++cnt)
	{
	printf(", %lu", k1 + (k2 / 1000000000));
	printf("%lu", k2 % 1000000000);
	k1 = k1 + j1;
	j1 = k1 - j1;
	k2 = k2 + j2;
	j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
