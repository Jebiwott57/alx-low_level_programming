#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n) > 0)
	{
	printf("%u is positive\n", (unsigned char) (n));
	}
	else if ((n) == 0)
	{
	printf("%u is zero\n", (unsigned char) (n));
	}
	else if ((n) < 0)
	{
	printf("%d is negative\n", (signed char) (n));
	}
	return (0);
}
