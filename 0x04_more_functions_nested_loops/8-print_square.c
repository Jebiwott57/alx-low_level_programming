#include "main.h"

/**
 * print_square - print the square of a character
 *
 * Return: 0 (Success)
 */
void print_square(int size)
{
	int q;

	q = size**2;
		_putchar(q);
		_putchar('\n');
	if (size == 0)
	{
		_putchar('\n');
	}
}
