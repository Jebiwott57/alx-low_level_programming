#include <stdio.h>
#include "main.h"

/**
 * main - print the first 98 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long j = 0, k = 1, sum;
	unsigned long j1, j2, k1, k2;
	unsigned long h1, h2;
	int cnt;

	for (cnt = 0; cnt < 92; cnt++)
	{
		sum = j + k;
		printf("%lu, ", sum);

		j = k;
		k = sum;
	}
	j1 = j / 10000000000;
	j2 = j % 10000000000;
	k1 = k / 10000000000;
	k2 = k % 10000000000;

	for (cnt = 93; cnt < 99; ++cnt)
	{
		h1 = j1 + k1;
		h2 = j2 + k2;
		if (j2 + k2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (cnt != 98)
		printf(", ");

		j1 = k1;
		j2 = k2;
		k1 = h1;
		k2 = h2;
	}
	printf("\n");
	return (0);
}
