#include <stdio.h>
#include "main.h"

/**
 * main - print the first 52 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k, cnt;

	for (cnt = 3; cnt <= 52; cnt++)
	{
		k = i + j;
		printf("%lu", k);
		i = j;
		j = k;

		if (k != 20365011074)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
