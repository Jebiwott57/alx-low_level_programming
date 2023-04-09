#include "main.h"

/**
 * _strncat - Concatenate two strings using
 * at most n bytes from src.
 * @dest: The string to concatenate to.
 * @src: The string to be concatenated.
 * @n: The number of bytes allowable to concatenate.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int cob = 0; /* cob (count of bytes) */

	while (dest[i] != '\0')
	{
		i++;
	}

	while (cob < n && src[cob] != '\0')
	{
	dest[i] = src[cob];
	i++;
	cob++;
	}
	dest[i] = '\0';
	return (dest);
}
