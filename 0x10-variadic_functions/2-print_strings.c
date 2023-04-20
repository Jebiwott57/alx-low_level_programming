#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - A function that prints strings.
 * @separator: The string to print between strings.
 * @n: number of strings passed.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list sptr;

	va_start(sptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(sptr, char*);

		if (str == NULL)
			printf("(nil)");

		else
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(sptr);
}
