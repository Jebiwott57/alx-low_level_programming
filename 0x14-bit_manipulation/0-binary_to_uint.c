#include "main.h"

/**
 * binary_to_uint - A function that converts
 * a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number or 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int a;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		decimal = 2 * decimal + (b[a] - '0');
		if (b[a] < '0' || b[a] > '1')
			return (0);
	}
	return (decimal);
}
