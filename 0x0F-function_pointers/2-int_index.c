#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: array to scan for integer.
 * @size: Size of the array to scan.
 * @cmp: Pointer to a function to use.
 *
 * Return: an integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (cmp == NULL || size <= 0 || array == NULL)
		return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
			return (l);
	}
	return (-1);
}
