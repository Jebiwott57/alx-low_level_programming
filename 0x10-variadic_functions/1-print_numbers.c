#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers.
 * @sepatator: String to be print between functions.
 * @n: Number of integers to passed to the function.
 * @...: A variable of numbers to print.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
