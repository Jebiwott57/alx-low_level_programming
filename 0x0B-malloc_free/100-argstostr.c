#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates
 * all the arguments of your program.
 * @ac: Size of arguments to concatenate.
 * @av: pointer to a pointer of the arguments.
 *
 * Return: pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int a, b;
	int l = 0, m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	ptr = (char *)malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[m] = av[a][b];
			m++;
		}
	if (ptr[m] == '\0')
	{
		ptr[m++] = '\n';
	}
	}
	return (ptr);
}
