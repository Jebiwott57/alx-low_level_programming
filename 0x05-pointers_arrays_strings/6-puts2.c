#include "main.h"

/**
 * puts2 - print every other character of a string
 * starting with the first character followed by new line.
 * @str: string of characters
 *
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *u = str;
	int m;

	while (*u != '\0')
	{
		u++;
		l++;
	}
	t = l - 1;
	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
