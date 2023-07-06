#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: The binary to scan through to the index position.
 * @index: position to set value of the bit to 1.
 *
 * Return: 1 (success) or -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = (1 << index);
	*n = (*n | a);

	return (1);
}
