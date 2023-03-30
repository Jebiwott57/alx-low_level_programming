#include "main.h"

/**
 * *_strncpy - Finction that copies a string.
 * @dest: The string to be copied into.
 * @src: The string to be copied.
 * @n: The number of bytes allowable to copy.
 *
 * Return: pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cob = 0; /* cob (count of bytes) */

	while (cob < n && src[cob] != '\0')
	{
	dest[cob] = src[cob];
	cob++;
	}

	while (cob < n)
	{
	dest[cob] = '\0';
	cob++;
	}

	return (dest);
}
