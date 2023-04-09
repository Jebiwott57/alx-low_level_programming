#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string1 to be compared.
 * @s2: string2 to be compared with.
 *
 * Return: s1.
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, cv; /* cv is compare value */

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	cv = s1[count] - s2[count];
	return (cv);
}
