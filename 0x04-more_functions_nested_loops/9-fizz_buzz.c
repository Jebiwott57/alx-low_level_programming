#include "main.h"
#include <stdio.h>

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

	for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0 && a % 5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (a % 3 == 0 && a % 5 != 0)
	{
		printf("Fizz");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", a);
	}
	if (a != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
