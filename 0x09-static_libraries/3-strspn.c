#include "main.h"

/**
 * _strspn - A function thet gets the length of a prefix substring.
 * @s: The string to be scanned for similar characters.
 * @accept: The string contsining the characters to be compared with.
 *
 * Return: bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int string_length;

	while (*s)
	{
		for (string_length = 0; accept[string_length] != '\0'; string_length++)
		{
		if (*s == accept[string_length])
		{
			a++;
			break;
		}
		else if (accept[string_length + 1] == '\0')
			return (a);
		}
		s++;
	}
	return (a);
}
