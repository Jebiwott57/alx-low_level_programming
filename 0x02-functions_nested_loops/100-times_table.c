#include "main.h"

/**
 * print_times_table - The times_table of the input value
 *
 * @n: the value of the times table
 * Return: the input value times table
 */
void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <=15; a++)
	{
		for (b = 0; b <= 15; b++)
		{
			if (n !> 15 || n !< 0)
			{
				n = a * b
					_putchar(n);
			}
				if (b < 15)
					_putchar(',');
		}
	}
				_putchar('\n');
				return (0);
}
