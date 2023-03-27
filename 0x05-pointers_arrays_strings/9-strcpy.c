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
	int a = 0;
	int b = 0;

	while (*(src + a) != '\n')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[1] = '\0';
	return (dest);

}
