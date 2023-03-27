#include "main.h"

/**
 * swap_int - swapint the value of two integers.
 * @a: integer 1 to be swapped.
 * @b; integer 2 to be swapped.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
