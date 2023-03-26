#include <stdio.h>

/**
 * main - print the first 100 fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k, cnt;

	for (cnt = 3; cnt <= 100; cnt++)
	{
		k = i + j;
		printf("%lu", k);
		i = j;
		j = k;

		if (k != (cnt != 100))
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
