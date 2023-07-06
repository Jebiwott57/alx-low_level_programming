#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 if big endian or 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *a;

	a = (char *) &m;

	return (*a);
}
