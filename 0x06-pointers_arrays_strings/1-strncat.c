#include "main.h"

/**
 * *_strncat - function that concatenated two strings.
 * @dest: destination string.
 * @src: source string.
 * @n:number of bytes to be concatenated from src.
 *
 * Return: pointer destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int string_length = 0, str_len = 0;

	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	while (str_len < n && src[str_len] != '\0')
	{
		dest[string_length] = src[str_len];
		string_length++;
		str_len++;
	}
	dest[string_length] = '\0';
	return (dest);
}
