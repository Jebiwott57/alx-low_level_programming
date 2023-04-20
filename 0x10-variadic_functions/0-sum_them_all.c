#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - A function that returns the
 * sum of all its parameters.
 * @n: Array of numbers to sum up.
 *
 * Return: Sum. 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
