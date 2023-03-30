#include "main.h"

/**
 * reverse_array - Function that reverses the content of integers.
 * @a: Integers to reverse.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int ct = 0, t; /* ct is counter and t is temporary */

	for (ct = 0; ct < n--; ct++)
	{
	t = a[ct];
	a[ct] = a[n];
	a[n] = t;
	}
}
