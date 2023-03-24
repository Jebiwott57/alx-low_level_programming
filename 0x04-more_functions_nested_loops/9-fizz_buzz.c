#include "main.h"
#include <stdio>

/**
 * main - Print 1 to 100 but for multiples of
 * three print Fizz and five print Buzz.
 * For multiples for both three and five print FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	if (a % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz");
	}
	else if (a % 5 == 0 && a % 3 != 0)
	{
		printf("Buzz");
	}
	else if (a % 3 == 0 && a % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (a == 1)
	{
		printf("%d", a);
	}
	else
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
