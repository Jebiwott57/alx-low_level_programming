#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: row legnth of the array.
 * @height: columns of the 2 dimensional array.
 *
 * Return: pointer to array or 0 otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int str_len;
	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (str_len = 0; str_len < height; str_len++)
	{
		ptr[str_len] = malloc(width * sizeof(int));

		if (ptr[str_len] == NULL)
		{
			for (; str_len >= 0; str_len--)
				free(ptr[str_len]);

			free(ptr);
			return (NULL);
		}
	}

	for (str_len = 0; str_len < height; str_len++)
	{
		for (a = 0; a < width; a++)
		{
			ptr[str_len][a] = 0;
		}
	}
	return (ptr);
}
