#include "main.h"

/**
 * puts_half - print half of a string followed by new line
 * @str: string of characters
 *
 * Return: half input
 */
void puts_half(char *str)
{
	int half_length, full_length;

	full_length = 0;
	while (str[full_length] != '\0')
		full_length++;
	
	half_length = (full_length / 2);

	if (full_length % 2 != 0)
		half_length++;

	while (half_length < full_length)
	{
		_putchar(str[half_length]);
		half_length++;
	}
	_putchar('\n');
}
