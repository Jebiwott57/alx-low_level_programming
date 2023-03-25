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
	long i = 1, j = 2, k, cnt, sum;

	printf("%lu, %lu, ", i, j);
	for (cnt = 3;; cnt++)
	{
		for (k = n + i; k <= 4000000; k++)
		{
		i + k == sum;
		printf("%lu ", sum);

		n = i;
		i = k;
		}
	}
	printf("\n");
	return (0);
}
