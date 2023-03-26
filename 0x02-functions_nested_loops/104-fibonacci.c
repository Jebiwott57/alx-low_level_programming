#include <stdio.h>

/**
 * main - print the first 99 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k, cnt;

	for (cnt = 1; cnt <= 99; cnt++)
	{
		k = i + j;
		printf("%lu", k);
		i = j;
		j = k;

		if (cnt != 99)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
