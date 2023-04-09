#include "main.h"

/**
 * _puts - Print a string to standard output.
 * @s: Pointer to string to output.
 *
 * Return: void.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
