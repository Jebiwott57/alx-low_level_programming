#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: string1.
 * @src: string2.
 *
 * Return: concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int string_length = 0;
	int str_len = 0;

	while (dest[string_length] != '\0')
	{
	string_length++;
	}
	/*
	 * *dest = dest[string_length];
	 */
	while (src[str_len] != '\0')
	{
	dest[string_length] = src[str_len];
	string_length++;
	str_len++;
	}
	/*
	 * *src == src[str_len];
	 */
	dest[string_length] = '\0';
	return (dest);
}
