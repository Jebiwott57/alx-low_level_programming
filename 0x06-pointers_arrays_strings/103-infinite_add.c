#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameter
 *
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
 * infinite_add - A function that adds two numbers
 * @n1: integer to add
 * @n2: integer to add
 * @r: buffer storing the results
 * @size_r: buffer size
 *
 * Return: r buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, i = 0, j = 0, in = 0;
	int v1 = 0, v2 = 0, tmp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || o == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		tmp = v1 + v2 + o;
		if (tmp >= 10)
			o = 1;
		else
			o = 0;
		if (in >= (size_r - 1))
			return (0);
		*(r + in) = (tmp % 10) + '0';
		in++;
		j--;
		i--;
	}
	if (in == size_r)
		return (0);
	*(r + in) = '\0';
	rev_string(r);
	return (r);
}
