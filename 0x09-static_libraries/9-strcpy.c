#include "main.h"

/**
 * _strcpy - copy string src onto sting dest.
 * @dest: destination string.
 * @src: string source to copy.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	while (*(src + i) != '\0')
		{
		i++;
		}
	for (j = 0; j < i; j++)
		{
		dest[j] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
