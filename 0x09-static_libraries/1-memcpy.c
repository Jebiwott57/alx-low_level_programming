#include "main.h"

/**
 * _memcpy - A function that copys memory area.
 * @dest: the string that is copied into.
 * @src: The string to copy.
 * @n: The memory to be copied.
 *
i * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = n, b; /*cob is count of bytes */

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
		n--;
	}

	return (dest);
}
