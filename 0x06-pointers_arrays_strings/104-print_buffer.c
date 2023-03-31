#include "main.h"
#include <stdio.h>

/**
 * print_buffer - funtion that prints buffer of size bytes
 * 10 bytes per line. each line starting with a hexadecimal
 * 8 characters starting with 0.
 * if the size is 0 ir less, the output is a new line only.
 * @b: character pointer
 * @size: size in bytes
 *
 * Return: pointer to buffer
 */
void print_buffer(char *b, int size)
{
	int o, p, i;

	    o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		p = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < p)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
			{
				printf(" ");
			}
		}
		for (i = 0; i < p; i++)
		{
		int a = *(b + o + i);

			if (a < 32 || a > 132)
			{
				a = '.';
			}
			printf("%c", a);
		}
		printf("\n");
		o += 10;
	}
}
