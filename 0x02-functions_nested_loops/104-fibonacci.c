#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k = 2, l = 1000000000, j1, j2, k1, k2;

	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	j1 = (j / l);
	j2 = (j / l);
	k1 = (k / l);
	k2 = (k / l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", j1 + (k2 / l));
		printf("%lu", k2 % l);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");
	return (0);
}
