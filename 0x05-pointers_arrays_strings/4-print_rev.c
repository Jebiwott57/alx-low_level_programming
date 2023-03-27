#include "main.h"

/**
 * print_rev - print a string int reverse followed by a new line.
 * @s: string to print in reverse.
 *
 */
void print_rev(char *s)
{
	int l = 0;
	int o;

	while (*str != '\0')
	{
	l++;
	s++;
	}
	s--;
	for (o = l; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
