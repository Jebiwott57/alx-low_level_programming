#include "main.h"

/**
 * *_strcpy - copy string pointer to by src.
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
