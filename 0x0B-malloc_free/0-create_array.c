#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size allocated for the string of characters.
 * @c: the string of characters to print.
 *
 * Return: 0 if size is 0 or pointer to array otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
