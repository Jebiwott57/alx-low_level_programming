#include "main.h"

/**
 * puts_half - print half of a string followed by new line
 * @str: string of characters
 *
 * Return: half input
 */
void puts_half(char *str)
{
	int a, b, l;

	l = 0;

	for (a = 0; str[a] != '\0'; a++)
		l++;

		b = (l / 2);

	if ((l % 2) == 1)
		b = ((l + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}
