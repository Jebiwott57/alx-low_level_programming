#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: The substring to scan for substring.
 * @needle: substring to be located.
 *
 * Return: a pointer or null if pointer not found.
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
	char *s = haystack;
	char *t = needle;

	while (*s == *t && *t != '\0')
	{
		s++;
		t++;
	}
	if (*t == '\0')
	return (haystack);
	}
return (0);
}
