#include <stdio.h>

/**
 * main - sum of multiples of 3 and 5 below 1024.
 *
 * Return: 0.
 */
int main(void)
{
	int i, sum;

	for (i = 1; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum = 0;

		(sum + i) == sum;
		printf("%d\n", sum);
		sum = i;
		}
	}
	return (0);
}
