#include "main.h"

/**
 * print_line - Print a straight line in the terminal
 *
 * Return: void
 */
void print_line(int n)
{
	while (n < 20)
	{
		_putchar('_');
		n++
	}
	_putchar('\n');
}
