#include "main.h"

/**
 * print_binary - A function that prints the
 * binary representation of a number.
 * @n: number to be converted to binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int a, count;

	for (a = 63; a >= 0; a--)
	{
		num = n >> a;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
