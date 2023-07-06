#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The binary to scan to the index position.
 * @index: The position of the bit you want to get statring from 0.
 *
 * Return: value of bit at index or -1 otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_digit;

	if (index > 63)
		return (-1);

	bit_digit = (n >> index) & 1;

	return (bit_digit);
}
