#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: string1.
 * @s2: string2.
 *
 * Return: concatenated strings s1.
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int str_len;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_len = a = 0;
	while (s1[str_len] != '\0')
	{
	str_len++;
	}

	while (s2[a] != '\0')
		a++;
	conc = malloc((str_len + a + 1) * sizeof(char));

	if (conc == NULL)
		return (NULL);
	a = str_len = 0;
	while (s1[str_len] != '\0')
	{
		conc[str_len] = s1[str_len];
		str_len++;
	}
	while (s2[a] != '\0')
	{
		conc[str_len] = s2[a];
	a++, str_len++;
	}
	conc[str_len] = '\0';
	return (conc);
}
