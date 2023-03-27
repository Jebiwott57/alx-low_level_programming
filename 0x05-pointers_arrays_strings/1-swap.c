#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * @a: integer 1 to sawp
 * @b: integer 2 to swap into
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
