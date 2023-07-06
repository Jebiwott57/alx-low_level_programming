#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: The binary to flip.
 * @m: The binary fliped.
 *
 * Return: nth_bit.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nth_bit;

	for (nth_bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nth_bit++;
	}
	return (nth_bit);
}
