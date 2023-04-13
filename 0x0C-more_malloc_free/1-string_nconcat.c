#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: String to copy into.
 * @s2: String to be copied to.
 * @n: size of bytes to be allocated in memory.
 *
 * Return: pointer to concartenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, i, j;

	a = 0;
	b = 0;
	i = 0;
	j = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)

		ptr = malloc((a + n + 1) * sizeof(char));
	else
		ptr = malloc((a + b + 1) * sizeof(char));

	if (!ptr)
		return (NULL);


	while (i < a)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < b && i < (a + n))
	{
		ptr[i++] = s2[j++];
	}
	while (n >= b && i < (a + b))
	{
		ptr[i++] = s2[j++];
	}

ptr[i] = '\0';

return (ptr);
}
