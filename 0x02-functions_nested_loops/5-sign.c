#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: number with a sign
 * Return: 1 for a positive number or 0 for zero or -1 for a negative number
 */
int print_sign(int n)
{

	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	if (n < 0)
		{
		_putchar('-');
		return (-1);
		}
		_putchar('0');
		return (0);
}
