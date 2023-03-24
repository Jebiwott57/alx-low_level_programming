#include "main.h"
#include <stdio.h>

/**
 * main - list the prime factors of a number
 *
 * Return: prime
 */
int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a < (b / 2); a = (a + 2))
	{
		while ((b % a == 0) && (b != a))
		{
			a = a / b;
			printf("%lu\n", b);
			return (0);
		}
	}
}
