#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: A pointer to the string
 * @c: character to locate in the string
 *
 * Return: return c if character is found or otherwise 0.
 */
char *_strchr(char *s, char c)
{
	int string_length = 0;

	while (s[string_length] != '\0')
	{
		string_length++;
	if (s[string_length] == c)
		return (&s[string_length]);
	}
	return (0);
}
