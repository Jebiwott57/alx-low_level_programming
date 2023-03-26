#include <stdio.h>

/**
 * main - print the first 106 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k, cnt;

	for (cnt = 1; cnt <= 106; cnt++)
	{
		k = i + j;
		printf("%lu", k);
		i = j;
		j = k;

		if (cnt != 106)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
