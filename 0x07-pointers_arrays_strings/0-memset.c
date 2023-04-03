#include "main.h"

/**
 * _memset - A function that fills memory of unsigned size integer n with a
 * constant byte of an unsigned character b to a character pointed to by s.
 *
 * @s: a pointer to an array of characters.
 * @b: the character to be filled in memory.
 * @n: the size of characters to be filled.
 *
 * Return: (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
