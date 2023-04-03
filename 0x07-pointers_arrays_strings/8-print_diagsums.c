#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print te sums of two diagonals of
 * a square matrix of integers.
 * @a: pointer to the matrix.
 * @size: size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int l1 = 0, l2 = 0, i;

	for (i = 0; i < size; i++)
	{
		l1 = l1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		l2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", l1, l2);
}
