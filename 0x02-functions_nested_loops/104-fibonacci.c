#include <stdio.h>

/**
 * main - print the first 103 fibonacci numbers
 +
 i*
 * Return: 0 (Success)
 */
int main(void)
{
	long int i = 0, j = 1, k, cnt;

	for (cnt = 3; cnt <= 103; cnt++)
	{
		k = i + j;
		printf("%lu", k);
		i = j;
		j = k;

		if (cnt != 103)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
