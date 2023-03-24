#include "main.h"

/**
 * print_line - Print a straight line in the terminal
 *
 * @n: number of times to put a straight line in the terminal
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int e;

		for (e = 1; e <= n; e++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
