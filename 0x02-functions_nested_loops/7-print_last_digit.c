#include "main.h"

/**
 * print_last_digit - print_last_digit of a number
 * @n: The last number to be treated
 * Return: 0 last number of a digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
