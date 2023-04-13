#include "main.h"
#include <stdlib.h>
/**
 * _memset - Memory filled with a constant byte.
 *  @a: memory adress
 *  @b: character
 *  @i: number of bytes.
 *
 *  Return: pointer to memory address a.
 */
char *_memset(char *a, char b, unsigned int i)
{
	unsigned int j;

	for (j = 0; j < i; j++)
	{
		a[j] = b;
	}
	return (a);
}
/**
 * _calloc - Space allocated for array.
 * @nmemb: number of elements in the array.
 * @size: size of each element in the array.
 *
 * Return: pointer to allocated space in memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
