#include "main.h"
#include <stdlib.h>

/**
 * num_words - A function to list count of words.
 * @s: pointer to list of words.
 *
 * Return: pointer to words array.
 */
int num_words(char *s)
{
	int num_of_words, a, b;

	num_of_words = 0;
	a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
		num_of_words = 0;
		else if (num_of_words == 0)
		{
			num_of_words = 1;
			b++;
		}
	}
	return (b);
}
/**
 * strtow - A function that splits a string into words.
 * @str: string to be split.
 *
 * Return: pointer to split words array.
 */
char **strtow(char *str)
{
	char **ptr, *a;
	int i, words, start, end, j = 0, length = 0, m = 0;

	while (*(str + length))
		length++;
	words = num_words(str);
	if (words == 0)
		return (NULL);

	ptr = (char **)malloc((words + 1) * sizeof(char *));
		if (ptr == NULL)
			return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				end = i;
				a = (char *)malloc((m + 1) * sizeof(char));
				if (a == NULL)
					return (NULL);
				while (start < end)
					*a++ = str[start++];
				*a = '\0';
				ptr[j] = a - m;
				j++;
				m = 0;
			}	
		}
		else if (m++ == 0)
			start = i;
	}
	ptr[j] = NULL;

	return (ptr);
}
