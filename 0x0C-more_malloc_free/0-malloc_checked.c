#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function allocating memory using malloc.
 * @b: size of bytes to be allocated in memory.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
