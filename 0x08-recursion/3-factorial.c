#include "main.h"

/**
 * factorial- A function that returns the factorial of a given number.
 * @n: integer of a string.
 *
 * Return: factorial of a number or -1 to indicate error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
