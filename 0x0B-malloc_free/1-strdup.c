#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: A pointer to a string of characters.
 *
 * Return: NULL if str is NULL and if size is NULL
 * or pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
	char *ptr;
	int a;
	int b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)

	ptr = malloc((a + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (b = 0; str[b]; b++)
		ptr[b] = str[b];

	return (ptr);
}
