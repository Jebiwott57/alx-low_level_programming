#include <stdio.h>
#include "main.h"

/**
 * main - print the first 52 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 1, j = 2, k, sum = 0;

	int cnt;

	for (cnt = 1; cnt <= 33; ++cnt)
	{
		if (j <= 4000000 && (j % 2) == 0)
		{
		sum = sum + j;
		}
		k = i + j;
		i = j;
		j = k;
	}
	printf("%lu\n", sum);

	return (0);
}
