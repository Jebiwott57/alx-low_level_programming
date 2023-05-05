#include "main.h"

/**
 * clear_bit - A funtion that sets the value of a bit to 0 at a given index.
 * @n: Pointer to binary to sca and set bit to 0 at index position.
 * @index: The position starting from 0 to set bit to 0.
 *
 * Return: 1 (Success) or -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = (1 << index);

	if (*n & a)
		*n ^= a;

	return (1);
}
