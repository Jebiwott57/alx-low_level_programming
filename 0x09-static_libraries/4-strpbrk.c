#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of the set of bytes.
 * @s: String to be scanned for similar character.
 * @accept: The string with character to be compared with.
 *
 * Return: pointer if any matching character byte is found or
 * 0 for no such byte.
 */
char *_strpbrk(char *s, char *accept)
{
	int string_length;

	while (*s)
	{
	for (string_length = 0; accept[string_length]; string_length++)
		{
		if (*s == accept[string_length])
		return (s);
		}
	s++;
	}

return ('\0');
}
