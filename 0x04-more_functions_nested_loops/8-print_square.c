#include "main.h"

/**
 * print_square - print the square of a character
 *
 * @size: size of the square
 * Return: 0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, j;

		for (l = 0; l < size; l++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
