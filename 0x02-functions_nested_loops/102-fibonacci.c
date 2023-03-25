#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;
	long i = 1, j = 2, k, cnt;

	printf("%lu, %lu, ", i, j);
	for (cnt = 3; cnt <= 50; cnt++)
	{
		k = n + i;
		printf("%lu", k);

		n = i;
		i = k;
		if (k != 3483774753)
			printf(", ");
	}
	printf("\n");
	return (0);
}
